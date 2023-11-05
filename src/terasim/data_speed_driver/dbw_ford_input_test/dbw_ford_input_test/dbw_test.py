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
from math import fabs
from rclpy.node import Node
from dataspeed_dbw_msgs.msg import BrakeCmd, ThrottleCmd, SteeringCmd, Gear, GearCmd



class DBW_TEST(Node):
  def __init__(self):
    super().__init__('DBW_TEST')

    self.declare_parameters(
      namespace='',
      parameters=[
          # brake parameters
          ('brake_pedal_cmd', 0.15),
          ('brake_pedal_cmd_type', 1),
          ('brake_enable', False),
          ('brake_clear', False),
          ('brake_ignore', False),
          
          # throttle parameters
          ('throttle_pedal_cmd', 0.15),
          ('throttle_pedal_cmd_type', 1),
          ('throttle_enable', False),
          ('throttle_clear', False),
          ('throttle_ignore', False),

          # steering parameters
          ('steering_wheel_angle_cmd', 0.0),
          ('steering_wheel_angle_velocity', 0.0),
          ('steering_wheel_torque_cmd', 0.0),
          ('steering_cmd_type', 0),
          ('steering_enable', False),
          ('steering_clear', False),
          ('steering_ignore', False),
          ('steering_quiet', True),
          ('steering_alert', False),

          # gear parameters
          ('gear_cmd', 0),
          ('gear_clear', False),
      ])
    
    # Publishers and subscribers
    self.pub_brake = self.create_publisher(BrakeCmd, '/vehicle/ds/brake_cmd', 1)
    self.pub_throttle = self.create_publisher(ThrottleCmd, '/vehicle/ds/throttle_cmd', 1)
    self.pub_steering = self.create_publisher(SteeringCmd, '/vehicle/ds/steering_cmd', 1)
    self.pub_gear = self.create_publisher(GearCmd, '/vehicle/ds/gear_cmd', 1)
    
    self.create_timer(0.02, self.send_cmd)
    self.create_timer(1.00, self.print_info)

  def print_info(self):
    self.get_logger().info("sending drive commands...")

  def send_cmd(self):
    self.send_brake()
    self.send_throttle()
    self.send_steering()
    self.send_gear()

  def send_brake(self):
    brake_cmd = BrakeCmd()
    
    brake_cmd.pedal_cmd = self.get_parameter('brake_pedal_cmd').value
    brake_cmd.pedal_cmd_type = self.get_parameter('brake_pedal_cmd_type').value
    brake_cmd.enable = self.get_parameter('brake_enable').value
    brake_cmd.clear = self.get_parameter('brake_clear').value
    brake_cmd.ignore = self.get_parameter('brake_ignore').value

    self.pub_brake.publish(brake_cmd)

  def send_throttle(self):
    throt_cmd = ThrottleCmd()
    
    throt_cmd.pedal_cmd = self.get_parameter('throttle_pedal_cmd').value
    throt_cmd.pedal_cmd_type = self.get_parameter('throttle_pedal_cmd_type').value
    throt_cmd.enable = self.get_parameter('throttle_enable').value
    throt_cmd.clear = self.get_parameter('throttle_clear').value
    throt_cmd.ignore = self.get_parameter('throttle_ignore').value

    self.pub_throttle.publish(throt_cmd)

  def send_steering(self):
    steer_cmd = SteeringCmd()
    
    steer_cmd.steering_wheel_angle_cmd = self.get_parameter('steering_wheel_angle_cmd').value
    steer_cmd.steering_wheel_angle_velocity = self.get_parameter('steering_wheel_angle_velocity').value
    steer_cmd.steering_wheel_torque_cmd = self.get_parameter('steering_wheel_torque_cmd').value
    steer_cmd.cmd_type = self.get_parameter('steering_cmd_type').value
    steer_cmd.enable = self.get_parameter('steering_enable').value
    steer_cmd.clear = self.get_parameter('steering_clear').value
    steer_cmd.ignore = self.get_parameter('steering_ignore').value
    steer_cmd.quiet = self.get_parameter('steering_quiet').value
    steer_cmd.alert = self.get_parameter('steering_alert').value

    self.pub_steering.publish(steer_cmd)

  def send_gear(self):
    gear_cmd = GearCmd()

    gear_cmd.cmd.gear = self.get_parameter('gear_cmd').value
    gear_cmd.clear = self.get_parameter('gear_clear').value

    self.pub_gear.publish(gear_cmd)

def main(args=None):
  rclpy.init(args=args)
  node = DBW_TEST()
  rclpy.spin(node)
  node.destroy_node()
  rclpy.try_shutdown()

if __name__ == '__main__':
  main()
