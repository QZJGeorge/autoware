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

#ifndef MCITY_TERASIM__CavRoutePlanner_HPP_
#define MCITY_TERASIM__CavRoutePlanner_HPP_

#include <iostream>
#include <rclcpp/rclcpp.hpp>
#include <geometry_msgs/msg/pose.hpp>
#include <autoware_adapi_v1_msgs/srv/clear_route.hpp>
#include <autoware_adapi_v1_msgs/msg/route_state.hpp>
#include <autoware_adapi_v1_msgs/srv/set_route_points.hpp>
#include <autoware_adapi_v1_msgs/msg/operation_mode_state.hpp>
#include <rclcpp_components/register_node_macro.hpp>

namespace cav_route_planner
{

using std::cout;
using std::endl;
using namespace std::chrono_literals;

using geometry_msgs::msg::Pose;

using autoware_adapi_v1_msgs::msg::RouteState;
using autoware_adapi_v1_msgs::msg::OperationModeState;
using autoware_adapi_v1_msgs::srv::ClearRoute;
using autoware_adapi_v1_msgs::srv::SetRoutePoints;

class CavRoutePlanner : public rclcpp::Node
{
public:
  explicit CavRoutePlanner(const rclcpp::NodeOptions & options);
  ~CavRoutePlanner() = default;

private:
  const uint16_t UNKNOWN = 0;
  const uint16_t UNSET = 1;
  const uint16_t SET = 2;
  const uint16_t ARRIVED = 3;
  const uint16_t CHANGING = 4;

  Pose wp0, wp1, wp2, wp3, wp4;

  RouteState::SharedPtr route_state;

  rclcpp::Subscription<RouteState>::SharedPtr sub_route_state;
  rclcpp::Subscription<OperationModeState>::SharedPtr sub_mode_state;

  rclcpp::Client<SetRoutePoints>::SharedPtr cli_set_route_points;
  rclcpp::Client<ClearRoute>::SharedPtr cli_clear_route;

  void init_route(SetRoutePoints::Request::SharedPtr req);
  void send_route(SetRoutePoints::Request::SharedPtr req);
  void route_state_callback(RouteState::SharedPtr msg);
  void mode_state_callback(OperationModeState::SharedPtr msg);
};

}

#endif