#! /usr/bin/env python

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
from rclpy.parameter import Parameter
from rclpy.node import Node
from rclpy.qos import DurabilityPolicy, QoSProfile
from std_msgs.msg import Bool
from dataspeed_ulc_msgs.msg import UlcCmd

# This is a base class that is inherited by SpeedSquareWave and SpeedSineWave
class Speed(Node):
  def __init__(self, name: str):
    super().__init__(name)

    self.create_timer(0.02, self.timer_callback)

    self.t = 0
    self.enabled = False

    self.ulc_cmd = UlcCmd()
    self.ulc_cmd.enable_pedals = True
    self.ulc_cmd.enable_steering = False
    self.ulc_cmd.shift_from_park = False

    # Topics
    latch_like_qos = QoSProfile(depth=1,durability=DurabilityPolicy.RMW_QOS_POLICY_DURABILITY_TRANSIENT_LOCAL)
    self.create_subscription(Bool, '/vehicle/dbw_enabled', self.recv_enable, latch_like_qos)
    self.pub_ulc_cmd = self.create_publisher(UlcCmd, '/vehicle/ulc_cmd', 1)

    # Parameters
    self.v1 = self.declare_parameter('~/v1', 0.0).value  # Speed 1
    self.v2 = self.declare_parameter('~/v2', 5.0).value  # Speed 2
    self.period = self.declare_parameter('~/period', 10.0).value # Period of wave pattern
    self.ulc_cmd.enable_shifting = self.declare_parameter('~/enable_shifting', False).value  # Enable shifting between non-Park gears
    self.ulc_cmd.linear_accel = self.declare_parameter('~/accel_limit', 0.0).value  # Override default acceleration limit
    self.ulc_cmd.linear_decel = self.declare_parameter('~/decel_limit', 0.0).value  # Override default acceleration limit

  def timer_callback(self):
    # Implemented in derived classes
    
    pass

  def recv_enable(self, msg):
    if msg.data and not self.enabled:
      self.t = 0

    self.enabled = msg.data
