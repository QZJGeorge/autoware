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

#ifndef MCITY_LOCALIZATION_cav_state_converter_HPP_
#define MCITY_LOCALIZATION_cav_state_converter_HPP_

#include <cmath>
#include <string>
#include <iomanip>
#include <csignal>
#include <iostream>

#include <RedisClient.h>
#include <nlohmann/json.hpp>

#include <GeographicLib/Geodesic.hpp>
#include <GeographicLib/GeodesicLine.hpp>
#include <GeographicLib/Constants.hpp>
#include <GeographicLib/MGRS.hpp>

#include <rclcpp/rclcpp.hpp>
#include <nav_msgs/msg/odometry.hpp>
#include <rclcpp_components/register_node_macro.hpp>

namespace cav_state_converter
{
    
using namespace std;
using nlohmann::json;
using nav_msgs::msg::Odometry;

class CavStateConverter : public rclcpp::Node
{
public:
  explicit CavStateConverter(const rclcpp::NodeOptions & options);
  ~CavStateConverter() = default;

private:
  rclcpp::TimerBase::SharedPtr timer_;

  rclcpp::Subscription<Odometry>::SharedPtr sub_ego_odom;

  RedisClient redis_client;

  Odometry saved_odom_msg;

  bool odom_status = false;

  void on_timer();
  void odom_callback(Odometry::SharedPtr msg);

  double get_ori_from_odom(Odometry msg);

  string get_mgrs_from_odom(Odometry msg);
};

}
#endif