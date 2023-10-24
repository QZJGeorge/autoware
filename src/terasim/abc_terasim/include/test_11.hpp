//  Copyright 2022 Tier IV, Inc. All rights reserved.
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.

#ifndef MCITY_TERASIM__TEST_11_HPP_
#define MCITY_TERASIM__TEST_11_HPP_

#include <iostream>
#include <rclcpp/rclcpp.hpp>
#include <hiredis/hiredis.h>
#include <geometry_msgs/msg/pose_stamped.hpp>
#include <geometry_msgs/msg/pose_with_covariance_stamped.hpp>
#include <tier4_system_msgs/srv/change_operation_mode.hpp>
#include <tier4_system_msgs/srv/change_autoware_control.hpp>
#include <autoware_auto_system_msgs/msg/autoware_state.hpp>
#include <rclcpp_components/register_node_macro.hpp>

namespace test_11
{

using namespace std;

using geometry_msgs::msg::PoseStamped;
using geometry_msgs::msg::PoseWithCovarianceStamped;
using tier4_system_msgs::srv::ChangeOperationMode;
using tier4_system_msgs::srv::ChangeAutowareControl;
using autoware_auto_system_msgs::msg::AutowareState;

class Test11 : public rclcpp::Node
{
public:
  explicit Test11(const rclcpp::NodeOptions & options);
  ~Test11() = default;

private:
  // constants for operation mode
  uint8_t STOP = 1;
  uint8_t AUTONOMOUS = 2;
  uint8_t LOCAL = 3;
  uint8_t REMOTE = 4;

  int autoware_state = 0;

  redisContext *context;

  PoseStamped goal_msg;
  PoseWithCovarianceStamped localization_msg;

  rclcpp::TimerBase::SharedPtr timer_;

  rclcpp::Publisher<PoseStamped>::SharedPtr pub_goal;
  rclcpp::Publisher<PoseWithCovarianceStamped>::SharedPtr pub_local;

  rclcpp::Subscription<AutowareState>::SharedPtr sub_autoware_state;

  rclcpp::Client<ChangeOperationMode>::SharedPtr cli_set_operation_mode;
  rclcpp::Client<ChangeAutowareControl>::SharedPtr cli_set_autoware_control;

  void on_timer();
  void init_redis_client();

  void publish_localization();
  void publish_goal();

  void set_operation_mode(uint8_t mode);
  void set_autoware_control(bool autoware_control);

  void autoware_state_callback(AutowareState::SharedPtr msg);

  string get_key(string key);
};

}

#endif