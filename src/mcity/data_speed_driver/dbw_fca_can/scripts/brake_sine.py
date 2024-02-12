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
import rclpy.qos
from rclpy.node import Node
from rclpy.qos import DurabilityPolicy, QoSProfile
import math

from std_msgs.msg import Bool
from dbw_fca_msgs.msg import BrakeCmd


class SineTest(Node):
  def __init__(self):
    super().__init__('sine_test')

    latch_like_qos = QoSProfile(depth=1,durability=DurabilityPolicy.RMW_QOS_POLICY_DURABILITY_TRANSIENT_LOCAL)
    self.pub = self.create_publisher(BrakeCmd, '/vehicle/brake_cmd', 1)
    self.sub = self.create_subscription(Bool, '/vehicle/dbw_enabled', self.recv_enable, latch_like_qos)

    self.high_peak = self.declare_parameter('~/high_peak', 0.4).value
    self.low_peak = self.declare_parameter('~/low_peak', 0.15).value
    self.period = self.declare_parameter('~/period', 10).value

    self.enabled = False
    self.t = 0
    self.sample_time = 0.02
    self.create_timer(self.sample_time, self.timer_cb)

  def timer_cb(self):
    if not self.enabled:
        self.t = 0
        return

    amplitude = 0.5 * (self.high_peak - self.low_peak)
    offset = 0.5 * (self.high_peak + self.low_peak)
    cmd = offset - amplitude * math.cos(2 * math.pi / self.period * self.t)
    self.t += self.sample_time

    msg = BrakeCmd()
    msg.enable = True
    msg.pedal_cmd_type = BrakeCmd.CMD_PEDAL
    msg.pedal_cmd = cmd
    self.pub.publish(msg)

  def recv_enable(self, msg):
    self.enabled = msg.data

def main(args=None):
  rclpy.init(args=args)
  node = SineTest()
  rclpy.spin(node)
  node.destroy_node()
  rclpy.shutdown()

if __name__ == '__main__':
  main()
