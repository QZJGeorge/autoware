#! /usr/bin/env python3

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
import math
from dataspeed_ulc_can import Speed
from dataspeed_ulc_msgs.msg import UlcReport

class SpeedSineWave(Speed):
  APPROACHING = 0
  TRACKING = 1

  def __init__(self):
    super().__init__('speed_sine_wave')

    self.speed_meas = 0
    self.reached_target_stamp = -1
    self.state = self.APPROACHING
    self.create_subscription(UlcReport, '/vehicle/ulc_report', self.recv_report, 10)

  def timer_callback(self):
    current_time = self.get_clock().now().nanoseconds / 1e9

    if not self.enabled:
      self.t = 0
      self.state = self.APPROACHING
      return

    if self.state == self.APPROACHING:
      self.ulc_cmd.linear_velocity = self.v1
      self.t = 0
      if abs(self.ulc_cmd.linear_velocity - self.speed_meas) < 0.4 and self.reached_target_stamp < 0:
        self.reached_target_stamp = current_time

      # Wait 3 seconds before starting the sine wave input
      if self.reached_target_stamp >= 0 and (current_time - self.reached_target_stamp) > 3:
        self.state = self.TRACKING
        self.reached_target_stamp = -1

    elif self.state == self.TRACKING:
      amplitude = 0.5 * (self.v2 - self.v1)
      offset = 0.5 * (self.v2 + self.v1)
      self.ulc_cmd.linear_velocity = offset - amplitude * math.cos(2 * math.pi / self.period * self.t)
      self.t += 0.02

    self.pub_ulc_cmd.publish(self.ulc_cmd)
    if self.v1 == 0 and self.v2 == 0:
      self.get_logger().warn('both speed targets are zero', throttle_duration_sec=1, throttle_time_source_type=rclpy.system_clock)

  def recv_report(self, msg):
    self.speed_meas = msg.speed_meas

def main(args=None):
    rclpy.init(args=args)
    node = SpeedSineWave()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
