//  Copyright 2052 Tier IV, Inc. All rights reserved.
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

#ifndef MCITY_TERASIM__TEST05_HPP_
#define MCITY_TERASIM__TEST05_HPP_

#include <iostream>
#include <rclcpp/rclcpp.hpp>
#include <hiredis/hiredis.h>
#include <nav_msgs/msg/odometry.hpp>
#include <geometry_msgs/msg/pose.hpp>
#include <geometry_msgs/msg/pose_with_covariance_stamped.hpp>
#include <tier4_system_msgs/srv/change_operation_mode.hpp>
#include <tier4_system_msgs/srv/change_autoware_control.hpp>
#include <autoware_adapi_v1_msgs/srv/clear_route.hpp>
#include <autoware_adapi_v1_msgs/msg/route_state.hpp>
#include <autoware_adapi_v1_msgs/srv/set_route_points.hpp>
#include <autoware_auto_system_msgs/msg/autoware_state.hpp>
#include <rclcpp_components/register_node_macro.hpp>

namespace test_05
{

using namespace std;

using geometry_msgs::msg::Pose;
using geometry_msgs::msg::PoseWithCovarianceStamped;
using tier4_system_msgs::srv::ChangeOperationMode;
using tier4_system_msgs::srv::ChangeAutowareControl;
using autoware_adapi_v1_msgs::msg::RouteState;
using autoware_adapi_v1_msgs::srv::ClearRoute;
using autoware_adapi_v1_msgs::srv::SetRoutePoints;
using autoware_auto_system_msgs::msg::AutowareState;

class Test05 : public rclcpp::Node
{
public:
  explicit Test05(const rclcpp::NodeOptions & options);
  ~Test05() = default;

private:
  // constants for route state
  uint16_t UNKNOWN = 0;
  uint16_t UNSET = 1;
  uint16_t SET = 2;
  uint16_t ARRIVED = 3;
  uint16_t CHANGING = 4;

  // constants for operation mode
  uint8_t STOP = 1;
  uint8_t AUTONOMOUS = 2;
  uint8_t LOCAL = 3;
  uint8_t REMOTE = 4;

  int autoware_state = 1;

  Pose wp0, wp1, wp2, wp3, wp4;

  redisContext *context;

  RouteState route_state_msg;
  PoseWithCovarianceStamped localization_msg;

  rclcpp::TimerBase::SharedPtr timer_;

  rclcpp::Publisher<PoseWithCovarianceStamped>::SharedPtr pub_local;

  rclcpp::Subscription<RouteState>::SharedPtr sub_route_state;
  rclcpp::Subscription<AutowareState>::SharedPtr sub_autoware_state;

  rclcpp::Client<ClearRoute>::SharedPtr cli_clear_route;
  rclcpp::Client<SetRoutePoints>::SharedPtr cli_set_route_points;
  rclcpp::Client<ChangeOperationMode>::SharedPtr cli_set_operation_mode;
  rclcpp::Client<ChangeAutowareControl>::SharedPtr cli_set_autoware_control;

  void on_timer();
  void init_redis_client();

  void init_localization();
  void pub_localization();

  void init_route_points();
  void set_route_points();

  void clear_route();

  void set_operation_mode(uint8_t mode);
  void set_autoware_control(bool autoware_control);

  void autoware_state_callback(AutowareState::SharedPtr msg);
  void route_state_callback(RouteState::SharedPtr msg);

  string get_key(string key);
};

}

#endif