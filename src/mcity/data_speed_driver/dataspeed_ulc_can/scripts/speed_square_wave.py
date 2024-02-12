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
#   this list of conditions and the following disclaimer.
#   * Redistributions in binary form must reproduce the above copyright notice,
#   this list of conditions and the following disclaimer in the documentation
#   and/or other materials provided with the distribution.
#   * Neither the name of Dataspeed Inc. nor the names of its
#   contributors may be used to endorse or promote products derived from this
#   software without specific prior written permission.
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
from dataspeed_ulc_can import Speed

class SpeedSquareWave(Speed):
  def __init__(self):
    super().__init__('speed_square_wave')

  def timer_callback(self):
    if self.enabled:
      if self.v1 == 0 and self.v2 == 0:
        self.get_logger().warn('both speed targets are zero', throttle_duration_sec=1, throttle_time_source_type=rclpy.system_clock)

      if self.t >= self.period:
        # Reset time when period is reached and switch back to initial speed
        self.t = 0
        self.ulc_cmd.linear_velocity = self.v1
      elif self.t >= 0.5 * self.period:
        # During second half of period, switch to other speed
        self.t += 0.02
        self.ulc_cmd.linear_velocity = self.v2
      else:
        # During first half of period, use initial speed
        self.t += 0.02
        self.ulc_cmd.linear_velocity = self.v1

      self.pub_ulc_cmd.publish(self.ulc_cmd)

def main(args=None):
    rclpy.init(args=args)
    node = SpeedSquareWave()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
