#!/usr/bin/env python3

# Software License Agreement (Proprietary and Confidential)
#
# Copyright (c) 2019-2021, Dataspeed Inc.
# All rights reserved.
#
# NOTICE:  All information contained herein is, and remains the property of
# Dataspeed Inc. The intellectual and technical concepts contained herein are
# proprietary to Dataspeed Inc. and may be covered by U.S. and Foreign Patents,
# patents in process, and are protected by trade secret or copyright law.
# Dissemination of this information or reproduction of this material is strictly
# forbidden unless prior written permission is obtained from Dataspeed Inc.

import time
import rclpy
import rclpy.qos
import rclpy.duration
from rclpy.node import Node
from dbw_fca_msgs.msg import Misc2Report, MiscCmd
from std_msgs.msg import Bool, Empty
from enum import Enum

class InitState(Enum):
  STARTUP = 0
  WAIT_FOR_ENABLE = 1
  SETUP_TIMER = 2
  COMPLETE = 3
  FAILURE = 99

class MiscHvacCmdTest(Node):
  def __init__(self):
    super().__init__('vent')

    self.init_state = InitState.STARTUP
    self.init_timeout = 0

    # resolution is 20ms
    self.duration = 0.01 #seconds
    self.timeout = 100000

    self.dbw_enabled = False
    self.msg_misc2_report = Misc2Report()

    self.get_logger().info('Sending vent command every ' + str(self.duration) + ' seconds for ' + str(self.timeout) + ' seconds.' )

    # Publishers
    global enable_pub, vent_pub, misc_pub
    self.enable_pub = self.create_publisher(Empty, '/vehicle/enable', 1)
    self.misc_pub = self.create_publisher(MiscCmd, '/vehicle/misc_cmd', 1)

    # Subscribers
    # DBW should be enabled
    latch_like_qos = rclpy.qos.QoSProfile(depth=1,durability=rclpy.qos.DurabilityPolicy.RMW_QOS_POLICY_DURABILITY_TRANSIENT_LOCAL)
    self.create_subscription(Bool, '/vehicle/dbw_enabled', self.recv_dbw_enabled, latch_like_qos)
    self.create_subscription(Misc2Report, '/vehicle/misc_2_report', self.recv_misc2_report, 10)

    # To publish /vehicle/enable message to enable dbw system
    self.timer = self.create_timer(0.1, self.initialize)

  def initialize(self):
    if self.init_state == InitState.STARTUP:
      self.init_state = InitState.WAIT_FOR_ENABLE
      self.get_logger().info('Initialize: Start to enable DBW.')
      # For test
      # self.dbw_enabled = True
    
    if self.init_state == InitState.WAIT_FOR_ENABLE:
      if self.dbw_enabled:
        self.init_state = InitState.SETUP_TIMER
      elif self.init_timeout > 10e9: # 10 seconds
        self.init_state = InitState.FAILURE
      else:
        self.init_timeout += self.timer.timer_period_ns
        self.enable_pub.publish(Empty())
        return
    
    if self.init_state == InitState.SETUP_TIMER:
      self.timer.cancel()
      self.get_logger().info('Initialize: DBW is enabled. Starting timer_process')
      self.init_state = InitState.COMPLETE
      self.end = self.get_clock().now() + rclpy.duration.Duration(seconds=self.timeout)
      self.timer = self.create_timer(self.duration, self.timer_process)

    if self.init_state == InitState.FAILURE:
      self.timer.cancel()
      self.get_logger().error("Failed to start test. Enable DBW first.")
      rclpy.try_shutdown()
      return

  def timer_process(self):
    if self.get_clock().now() > self.end:
      rclpy.try_shutdown()
      return
    if not self.dbw_enabled:
      self.get_logger().error("No new messages on topic '/vehicle/enable'. Enable DBW first.")
    else:
      msg = MiscCmd()
      msg.ft_drv_temp.value = 70
      msg.ft_psg_temp.value = 67
      msg.ft_fan_speed.value = 5
      msg.vent_mode.value = msg.vent_mode.FLOOR
      msg.sync.cmd = msg.sync.OFF
      msg.heated_steering_wheel.cmd = msg.heated_steering_wheel.ON
      msg.fl_heated_seat.value = msg.fl_heated_seat.HI
      self.misc_pub.publish(msg)

  def recv_misc2_report(self, msg):
    self.msg_misc2_report = msg
    self.msg_misc2_report_ready = True

  def recv_dbw_enabled(self, msg):
    self.get_logger().info('DBW is enabled')
    self.dbw_enabled = msg.data      

  def shutdown_handler(self):
    self.get_logger().info('shutdown_handler')

def main(args=None):
  rclpy.init(args=args)
  node = MiscHvacCmdTest()
  rclpy.spin(node)
  node.destroy_node()
  rclpy.try_shutdown()

if __name__ == '__main__':
  main()