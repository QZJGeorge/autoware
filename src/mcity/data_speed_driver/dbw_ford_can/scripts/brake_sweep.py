#!/usr/bin/env python3

# Software License Agreement (BSD License)
#
# Copyright (c) 2014-2021, Dataspeed Inc.
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
from dbw_ford_msgs.msg import BrakeCmd, BrakeReport, BrakeInfoReport
from dbw_ford_msgs.msg import GearReport, SteeringReport
from math import fabs

class BrakeSweep(Node):
  def __init__(self):
    super().__init__('brake_sweep')
    
    # Variables for logging
    self.brake_cmd = 0.0
    self.msg_brake_report = BrakeReport()
    self.msg_brake_report_ready = False
    self.msg_brake_info_report = BrakeInfoReport()
    self.msg_brake_info_report_ready = False

    # Other drive-by-wire variables
    self.msg_gear_report = GearReport()
    self.msg_gear_report_ready = False
    self.msg_steering_report = SteeringReport()
    self.msg_steering_report_ready = False

    # Parameters
    self.i = -1
    self.start = 0.15
    self.end = 0.35
    self.resolution = 0.001
    self.duration = 3.0
    self.get_logger().info('Recording brake pedal data every ' + str(self.duration) + ' seconds from ' + str(self.start) + ' to ' + str(self.end) + ' with ' + str(self.resolution) + ' increments.')
    self.get_logger().info('This will take '  + str((self.end - self.start) / self.resolution * self.duration / 60.0) + ' minutes.')

    # Open CSV file
    self.csv_file = open('brake_sweep_data.csv', 'w')
    self.csv_writer = csv.writer(self.csv_file, delimiter=',')
    self.csv_writer.writerow(['Brake (%)', 'Torque Request (Nm)', 'Torque Actual (Nm)'])
    
    # Publishers and subscribers
    self.pub = self.create_publisher(BrakeCmd, '/vehicle/brake_cmd', 1)
    self.create_subscription(BrakeReport, '/vehicle/brake_report', self.recv_brake, 10)
    self.create_subscription(BrakeInfoReport, '/vehicle/brake_info_report', self.recv_brake_info, 10)
    self.create_subscription(GearReport, '/vehicle/gear_report', self.recv_gear, 10)
    self.create_subscription(SteeringReport, '/vehicle/steering_report', self.recv_steering, 10)
    self.create_timer(0.02, self.timer_cmd)
    self.create_timer(self.duration, self.timer_process)

  def timer_process(self):
    if self.i < 0:
      # Check for safe conditions
      if not self.msg_steering_report_ready:
        self.get_logger().error('Speed check failed. No messages on topic \'/vehicle/steering_report\'')
        self.destroy_node()
      if self.msg_steering_report.speed > 1.0:
        self.get_logger().error('Speed check failed. Vehicle speed is greater than 1 m/s.')
        self.destroy_node()
      if not self.msg_gear_report_ready:
        self.get_logger().error('Gear check failed. No messages on topic \'/vehicle/gear_report\'')
        self.destroy_node()
      if not self.msg_gear_report.state.gear == self.msg_gear_report.state.PARK:
        self.get_logger().error('Gear check failed. Vehicle not in park.')
        self.destroy_node()
    elif self.i < int((self.end - self.start) / self.resolution + 1):
      # Check for new messages
      if not self.msg_brake_report_ready:
        self.get_logger().error('No new messages on topic \'/vehicle/brake_report\'')
        self.destroy_node()
      if not self.msg_brake_info_report_ready:
        self.get_logger().error('No new messages on topic \'/vehicle/brake_info_report\'')
        self.destroy_node()
      if not self.msg_brake_report.enabled:
        self.get_logger().error('Brake module not enabled!')
        self.destroy_node()
      if self.msg_brake_report.pedal_input > 0.19:
        self.get_logger().warn('Take your foot off the brake pedal! This will corrupt the measurement.')

      # Make sure values are close to expected
      diff = self.brake_cmd - self.msg_brake_report.pedal_output
      if (fabs(diff) > 0.01):
        self.get_logger().warn('Not saving data point. Large disparity between pedal request and actual: ' + str(diff))
      else:
        # Write data to file
        self.get_logger().info('Data point: ' + "{:.03f}".format(self.msg_brake_report.pedal_output) + ', ' +
                         str(self.msg_brake_info_report.brake_torque_request) + ', ' +
                         str(self.msg_brake_info_report.brake_torque_actual))
        self.csv_writer.writerow(["{:.03f}".format(self.msg_brake_report.pedal_output),
                      "{:.01f}".format(self.msg_brake_info_report.brake_torque_request),
                      "{:.01f}".format(self.msg_brake_info_report.brake_torque_actual)])
    else:
      self.destroy_node()
    
    # Prepare for next iteration
    self.i += 1
    self.msg_brake_report_ready = False
    self.msg_brake_info_report_ready = False
    self.brake_cmd = self.start + self.i * self.resolution

  def timer_cmd(self):
    if self.brake_cmd > 0:
      msg = BrakeCmd()
      msg.enable = True
      msg.pedal_cmd_type = BrakeCmd.CMD_PEDAL
      msg.pedal_cmd = self.brake_cmd
      if msg.pedal_cmd > 0.2:
        msg.boo_cmd = True
      self.pub.publish(msg)

  def recv_brake(self, msg):
    self.msg_brake_report = msg
    self.msg_brake_report_ready = True

  def recv_brake_info(self, msg):
    self.msg_brake_info_report = msg
    self.msg_brake_info_report_ready = True

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
  node = BrakeSweep()
  rclpy.spin(node)
  node.destroy_node()
  rclpy.try_shutdown()

if __name__ == '__main__':
  main()
