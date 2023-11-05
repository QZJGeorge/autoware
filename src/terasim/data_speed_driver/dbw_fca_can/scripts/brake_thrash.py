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
from std_msgs.msg import Bool
from dbw_fca_msgs.msg import BrakeCmd
from dbw_fca_msgs.msg import GearReport, SteeringReport

class BrakeThrash(Node):
  def __init__(self):
    super().__init__('brake_thrash')

    # Shutdown
    self.shutdown = False

    # Received messages
    self.dbw_enabled = False
    self.msg_steering_report_ready = False
    self.msg_gear_report = GearReport()
    self.msg_gear_report_ready = False
    self.msg_steering_report = SteeringReport()
    self.msg_steering_report_ready = False

    # Parameters
    self.started = False
    self.get_logger().info('Preparing to thrash the brake pedal command to try and induce a fault...')
    self.get_logger().info('Validating that vehicle is parked...')
    
    # Publishers and subscribers
    latch_like_qos = rclpy.qos.QoSProfile(depth=1,durability=rclpy.qos.DurabilityPolicy.RMW_QOS_POLICY_DURABILITY_TRANSIENT_LOCAL)

    self.pub = self.create_publisher(BrakeCmd, '/vehicle/brake_cmd', 10)
    self.create_subscription(Bool, '/vehicle/dbw_enabled', self.recv_enabled, latch_like_qos)
    self.create_subscription(GearReport, '/vehicle/gear_report', self.recv_gear, 10)
    self.create_subscription(SteeringReport, '/vehicle/steering_report', self.recv_steering, 10)
    self.create_timer(0.2, self.timer_process)

  def timer_process(self):
    # Check for safe conditions
    if not self.msg_steering_report_ready:
      self.shutdown = True
      self.get_logger().error('Speed check failed. No messages on topic \'/vehicle/steering_report\'')
    elif not self.msg_steering_report.speed == 0.0:
      self.shutdown = True
      self.get_logger().error('Speed check failed. Vehicle speed is not zero.')
    if not self.msg_gear_report_ready:
      self.shutdown = True
      self.get_logger().error('Gear check failed. No messages on topic \'/vehicle/gear_report\'')
    elif not self.msg_gear_report.state.gear == self.msg_gear_report.state.PARK:
      self.shutdown = True
      self.get_logger().error('Gear check failed. Vehicle not in park.')

    # Check if enabled
    if self.shutdown:
      rclpy.try_shutdown()
      return

    # Check if enabled
    if not self.dbw_enabled:
      self.get_logger().warn('Drive-by-wire not enabled!')

    # Start command timers
    if not self.started:
      self.started = True
      self.create_timer(0.01000, self.timer_cmd_0)
      self.create_timer(0.01001, self.timer_cmd_1)
      self.get_logger().info('Started thrashing the brake pedal command to try and induce a fault.')
    
    # Prepare for next iteration
    self.msg_gear_report_ready = False
    self.msg_steering_report_ready = False

  def timer_cmd_0(self, event):
    if not self.shutdown:
      msg = BrakeCmd()
      msg.enable = True
      msg.pedal_cmd_type = BrakeCmd.CMD_PEDAL
      msg.pedal_cmd = 0.0
      self.pub.publish(msg)

  def timer_cmd_1(self, event):
    if not self.shutdown:
      msg = BrakeCmd()
      msg.enable = True
      msg.pedal_cmd_type = BrakeCmd.CMD_PEDAL
      msg.pedal_cmd = 1.0
      self.pub.publish(msg)

  def recv_enabled(self, msg):
    self.dbw_enabled = msg.data

  def recv_gear(self, msg):
    self.msg_gear_report = msg
    self.msg_gear_report_ready = True

  def recv_steering(self, msg):
    self.msg_steering_report = msg
    self.msg_steering_report_ready = True

  def shutdown_handler(self):
    pass

def main(args=None):
  rclpy.init(args=args)
  node = BrakeThrash()
  rclpy.spin(node)
  node.destroy_node()
  rclpy.try_shutdown()

if __name__ == '__main__':
  main()