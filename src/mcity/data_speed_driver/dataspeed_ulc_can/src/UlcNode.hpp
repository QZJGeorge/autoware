/*********************************************************************
 * Software License Agreement (BSD License)
 *
 *  Copyright (c) 2018-2021, Dataspeed Inc.
 *  All rights reserved.
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions
 *  are met:
 *
 *   * Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer.
 *   * Redistributions in binary form must reproduce the above
 *     copyright notice, this list of conditions and the following
 *     disclaimer in the documentation and/or other materials provided
 *     with the distribution.
 *   * Neither the name of Dataspeed Inc. nor the names of its
 *     contributors may be used to endorse or promote products derived
 *     from this software without specific prior written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 *  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 *  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 *  FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 *  COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 *  INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 *  BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 *  LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 *  CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 *  LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 *  ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 *  POSSIBILITY OF SUCH DAMAGE.
 *********************************************************************/
#pragma once

#include <can_msgs/msg/frame.hpp>
#include <dataspeed_ulc_msgs/msg/ulc_cmd.hpp>
#include <dataspeed_ulc_msgs/msg/ulc_report.hpp>
#include <geometry_msgs/msg/twist_stamped.hpp>
#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/bool.hpp>
#include <dataspeed_dbw_common/PlatformMap.hpp>

namespace dataspeed_ulc_can {

class UlcNode : public rclcpp::Node {
public:
  UlcNode(const rclcpp::NodeOptions &options = rclcpp::NodeOptions());

private:
  // Callbacks
  void recvCan(const can_msgs::msg::Frame::ConstSharedPtr msg);
  void recvUlcCmd(const dataspeed_ulc_msgs::msg::UlcCmd::ConstSharedPtr msg);
  void recvTwistCmd(const geometry_msgs::msg::Twist &msg);
  void recvTwist(const geometry_msgs::msg::Twist::ConstSharedPtr msg);
  void recvTwistStamped(const geometry_msgs::msg::TwistStamped::ConstSharedPtr msg);
  void recvEnable(const std_msgs::msg::Bool::ConstSharedPtr msg);
  void configTimerCb();

  // Transmit CAN messages
  void sendCmdMsg(bool cfg);
  void sendCfgMsg();

  // Helper functions
  bool validInputs(const dataspeed_ulc_msgs::msg::UlcCmd &cmd) const;

  template <class T>
  T overflowSaturation(double input, T limit_min, T limit_max,
                       double scale_factor, const std::string &input_name,
                       const std::string &units) const;

  // Subscribers
  rclcpp::Subscription<dataspeed_ulc_msgs::msg::UlcCmd>::SharedPtr sub_cmd_;
  rclcpp::Subscription<geometry_msgs::msg::Twist>::SharedPtr sub_twist_;
  rclcpp::Subscription<geometry_msgs::msg::TwistStamped>::SharedPtr sub_twist_stamped_;
  rclcpp::Subscription<can_msgs::msg::Frame>::SharedPtr sub_can_;
  rclcpp::Subscription<std_msgs::msg::Bool>::SharedPtr sub_enable_;

  // Publishers
  rclcpp::Publisher<dataspeed_ulc_msgs::msg::UlcReport>::SharedPtr pub_report_;
  rclcpp::Publisher<can_msgs::msg::Frame>::SharedPtr pub_can_;
  rclcpp::TimerBase::SharedPtr config_timer_;

  dataspeed_ulc_msgs::msg::UlcCmd ulc_cmd_;

  rclcpp::Clock cmd_clock_;
  rclcpp::Time cmd_stamp_;
  bool enable_ = false;
  bool accel_mode_supported_ = true;
  dataspeed_dbw_common::PlatformMap firmware_;
};

}  // namespace dataspeed_ulc_can
