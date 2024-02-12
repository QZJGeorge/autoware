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

#ifndef MCITY_TERASIM__autoware_to_sumo_HPP_
#define MCITY_TERASIM__autoware_to_sumo_HPP_

#include <cmath>
#include <string>
#include <iomanip>
#include <csignal>
#include <iostream>
#include <nlohmann/json.hpp>
#include <hiredis/hiredis.h>

#include <GeographicLib/Geodesic.hpp>
#include <GeographicLib/GeodesicLine.hpp>
#include <GeographicLib/Constants.hpp>
#include <GeographicLib/MGRS.hpp>

#include <rclcpp/rclcpp.hpp>
#include <nav_msgs/msg/odometry.hpp>
#include <rclcpp_components/register_node_macro.hpp>

namespace autoware_to_sumo
{
    
using namespace std;
using nlohmann::json;
using nav_msgs::msg::Odometry;

class AutowareToSumo : public rclcpp::Node
{
public:
  explicit AutowareToSumo(const rclcpp::NodeOptions & options);
  ~AutowareToSumo() = default;

  static void handleShutdown(int signal)
  {
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "interruption signal received %d", signal);
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "clearing redis cashe before shutting down...");

    // Execute FLUSHDB command to clear current database
    redisContext *c = redisConnect("127.0.0.1", 6379);
    redisReply *reply = (redisReply *)redisCommand(c,"FLUSHDB");
    freeReplyObject(reply);
    rclcpp::shutdown();
  }

private:
  rclcpp::TimerBase::SharedPtr timer_;
  rclcpp::Subscription<Odometry>::SharedPtr sub_ego_odom;

  redisContext *context;

  int odom_check = 0;
  Odometry saved_odom_msg;

  void on_timer();
  void init_redis_client();
  void set_key(string key, string value);
  void odom_callback(Odometry::SharedPtr msg);

  double get_ori_from_odom(Odometry msg);

  string get_key(string key);
  string get_mgrs_from_odom(Odometry msg);
};

}
#endif