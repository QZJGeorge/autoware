#!/usr/bin/env python3

# Software License Agreement (BSD License)
#
# Copyright (c) 2018-2021, Dataspeed Inc.
# All rights reserved.
#
# Redistribution and use in source and binary forms, with or without modification,
# are permitted provided that the following conditions are met:
# 
#   * Redistributions of source code must retain the above copyright notice,
#     this list of conditions and the following disclaimer.
#   * Redistributions in binary form must reproduce the above copyright notice,
#     this list of conditions and the following disclaimer in the documentation
#     and/or other materials provided with the distribution.
#   * Neither the name of Dataspeed Inc. nor the names of its
#     contributors may be used to endorse or promote products derived from this
#     software without specific prior written permission.
#
# THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
# ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
# WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
# DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
# FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
# DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
# SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
# CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
# OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
# OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

import rclpy
from rclpy.node import Node
import csv
from dbw_fca_msgs.msg import ThrottleCmd, ThrottleReport, ThrottleInfoReport
from dbw_fca_msgs.msg import GearReport, SteeringReport
from math import fabs

class ThrottleSweep(Node):
  def __init__(self):
    super().__init__('throttle_sweep')
    
    # Variables for logging
    self.throttle_cmd = 0.0
    self.msg_throttle_report = ThrottleReport()
    self.msg_throttle_report_ready = False
    self.msg_throttle_info_report = ThrottleInfoReport()
    self.msg_throttle_info_report_ready = False

    # Other drive-by-wire variables
    self.msg_gear_report = GearReport()
    self.msg_gear_report_ready = False
    self.msg_steering_report = SteeringReport()
    self.msg_steering_report_ready = False

    # Parameters
    self.i = -1
    self.start = 0.07
    self.end = 0.93
    self.resolution = 0.002
    self.duration = 1.0
    self.get_logger().info('Recording throttle pedal data every ' + str(self.duration) + ' seconds from ' + str(self.start) + ' to ' + str(self.end) + ' with ' + str(self.resolution) + ' increments.')
    self.get_logger().info('This will take '  + str((self.end - self.start) / self.resolution * self.duration / 60.0) + ' minutes.')

    # Open CSV file
    self.csv_file = open('throttle_sweep_data.csv', 'w')
    self.csv_writer = csv.writer(self.csv_file, delimiter=',')
    self.csv_writer.writerow(['Throttle (%)', 'Measured (%)'])
    
    # Publishers and subscribers
    self.pub = self.create_publisher(ThrottleCmd, '/vehicle/throttle_cmd', 1)
    self.create_subscription(ThrottleReport, '/vehicle/throttle_report', self.recv_throttle, 10)
    self.create_subscription(ThrottleInfoReport, '/vehicle/throttle_info_report', self.recv_throttle_info, 10)
    self.create_subscription(GearReport, '/vehicle/gear_report', self.recv_gear, 10)
    self.create_subscription(SteeringReport, '/vehicle/steering_report', self.recv_steering, 10)
    self.create_timer(0.02, self.timer_cmd)
    self.create_timer(self.duration, self.timer_process)

  def timer_process(self):
    if self.i < 0:
      # Check for safe conditions
      if not self.msg_steering_report_ready:
        self.get_logger().error('Speed check failed. No messages on topic \'/vehicle/steering_report\'')
        rclpy.try_shutdown()
        return
      if self.msg_steering_report.speed > 1.0:
        self.get_logger().error('Speed check failed. Vehicle speed is greater than 1 m/s.')
        rclpy.try_shutdown()
        return
      if not self.msg_gear_report_ready:
        self.get_logger().error('Gear check failed. No messages on topic \'/vehicle/gear_report\'')
        rclpy.try_shutdown()
        return
      if not self.msg_gear_report.state.gear == self.msg_gear_report.state.PARK:
        self.get_logger().error('Gear check failed. Vehicle not in park.')
        rclpy.try_shutdown()
        return
    elif self.i < int((self.end - self.start) / self.resolution + 1):
      # Check for new messages
      if not self.msg_throttle_report_ready:
        self.get_logger().error('No new messages on topic \'/vehicle/throttle_report\'')
        rclpy.try_shutdown()
        return
      if not self.msg_throttle_info_report_ready:
        self.get_logger().error('No new messages on topic \'/vehicle/throttle_info_report\'')
        rclpy.try_shutdown()
        return
      if not self.msg_throttle_report.enabled:
        self.get_logger().error('Throttle module not enabled!')
        rclpy.try_shutdown()
        return

      # Make sure values are close to expected
      diff = self.throttle_cmd - self.msg_throttle_report.pedal_output
      if (fabs(diff) > 0.01):
        self.get_logger().warn('Not saving data point. Large disparity between pedal request and actual: ' + str(diff))
      else:
        # Write data to file
        self.get_logger().info('Data point: ' + "{:.03f}".format(self.msg_throttle_report.pedal_output) + ', ' +
                         "{:.03f}".format(self.msg_throttle_info_report.throttle_pc))
        self.csv_writer.writerow(["{:.03f}".format(self.msg_throttle_report.pedal_output),
                      "{:.03f}".format(self.msg_throttle_info_report.throttle_pc)])
    else:
      rclpy.try_shutdown()
      return
    
    # Prepare for next iteration
    self.i += 1
    self.msg_throttle_report_ready = False
    self.msg_throttle_info_report_ready = False
    self.throttle_cmd = self.start + self.i * self.resolution

  def timer_cmd(self):
    if self.throttle_cmd > 0:
      msg = ThrottleCmd()
      msg.enable = True
      msg.pedal_cmd_type = ThrottleCmd.CMD_PEDAL
      msg.pedal_cmd = self.throttle_cmd
      self.pub.publish(msg)

  def recv_throttle(self, msg):
    self.msg_throttle_report = msg
    self.msg_throttle_report_ready = True

  def recv_throttle_info(self, msg):
    self.msg_throttle_info_report = msg
    self.msg_throttle_info_report_ready = True

  def recv_gear(self, msg):
    self.msg_gear_report = msg
    self.msg_gear_report_ready = True

  def recv_steering(self, msg):
    self.msg_steering_report = msg
    self.msg_steering_report_ready = True

  def shutdown_handler(self):
    self.get_logger().info('Saving csv file')
    self.csv_file.close()

def main(args=None):
  rclpy.init(args=args)
  node = ThrottleSweep()
  rclpy.spin(node)
  node.destroy_node()
  rclpy.try_shutdown()

if __name__ == '__main__':
  main()
