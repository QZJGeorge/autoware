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

#ifndef MCITY_TERASIM__SUMO_AUTOWARE_REAL_HPP_
#define MCITY_TERASIM__SUMO_AUTOWARE_REAL_HPP_

#include <iostream>
#include <rclcpp/rclcpp.hpp>
#include <hiredis/hiredis.h>
#include <nav_msgs/msg/odometry.hpp>
#include <geometry_msgs/msg/pose.hpp>
#include <geometry_msgs/msg/pose_with_covariance_stamped.hpp>
#include <autoware_adapi_v1_msgs/srv/set_route_points.hpp>
#include <rclcpp_components/register_node_macro.hpp>

namespace sumo_autoware_real
{

using namespace std;

using geometry_msgs::msg::Pose;
using geometry_msgs::msg::PoseWithCovarianceStamped;
using autoware_adapi_v1_msgs::srv::SetRoutePoints;

class SumoAutowareReal : public rclcpp::Node
{
public:
  explicit SumoAutowareReal(const rclcpp::NodeOptions & options);
  ~SumoAutowareReal() = default;

private:
  int autoware_state = 0;

  Pose wp0, wp1, wp2, wp3, wp4, wp5;

  redisContext *context;

  rclcpp::TimerBase::SharedPtr timer_;

  rclcpp::Client<SetRoutePoints>::SharedPtr cli_set_route_points;

  void on_timer();
  void init_redis_client();

  void init_route_points();
  void set_route_points();

  string get_key(string key);
};

}

#endif