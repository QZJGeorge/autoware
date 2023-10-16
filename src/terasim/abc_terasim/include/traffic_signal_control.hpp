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

#ifndef MCITY_PLANNER__TRAFFIC_SIGNAL_HPP_
#define MCITY_PLANNER__TRAFFIC_SIGNAL_HPP_

#include <vector>
#include <iostream>
#include <rclcpp/rclcpp.hpp>
#include <nlohmann/json.hpp>
#include <hiredis/hiredis.h>
#include <std_msgs/msg/header.hpp>
#include <autoware_perception_msgs/msg/traffic_signal.hpp>
#include <autoware_perception_msgs/msg/traffic_signal_array.hpp>
#include <autoware_perception_msgs/msg/traffic_signal_element.hpp>
#include <rclcpp_components/register_node_macro.hpp>

namespace traffic_signal_control
{

using namespace std;
using namespace std::literals::chrono_literals;

using std_msgs::msg::Header;

using nlohmann::json;

using autoware_perception_msgs::msg::TrafficSignal;
using autoware_perception_msgs::msg::TrafficSignalArray;
using autoware_perception_msgs::msg::TrafficSignalElement;

class TrafficSignalControl : public rclcpp::Node
{
public:
  explicit TrafficSignalControl(const rclcpp::NodeOptions & options);
  ~TrafficSignalControl() = default;

private:
  // constants for shared use
  uint8_t UNKNOWN = 0;

  // constants for color
  uint8_t RED = 1;
  uint8_t AMBER = 2;
  uint8_t GREEN = 3;
  uint8_t WHITE = 4;

  // constants for shape
  uint8_t CIRCLE = 1;
  uint8_t LEFT_ARROW = 2;
  uint8_t RIGHT_ARROW = 3;
  uint8_t UP_ARROW = 4;
  uint8_t UP_LEFT_ARROW=5;
  uint8_t UP_RIGHT_ARROW=6;
  uint8_t DOWN_ARROW = 7;
  uint8_t DOWN_LEFT_ARROW = 8;
  uint8_t DOWN_RIGHT_ARROW = 9;
  uint8_t CROSS = 10;

  // constants for status
  uint8_t SOLID_OFF = 1;
  uint8_t SOLID_ON = 2;
  uint8_t FLASHING = 3;

  // nlohmann::json light_mappings;
  TrafficSignal traffic_signal;
  TrafficSignalArray traffic_signal_array;
  TrafficSignalElement traffic_signal_element;

  vector<TrafficSignal> signals;

  rclcpp::TimerBase::SharedPtr timer_;
  rclcpp::Publisher<TrafficSignalArray>::SharedPtr pub_signal_array;

  redisContext *context;

  void on_timer();
  void init_redis_client();
  void update_signals(json traffic_signals_tls_info);
  
  string get_key(string key);
};

}
#endif