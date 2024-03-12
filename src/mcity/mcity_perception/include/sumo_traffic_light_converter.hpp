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

#ifndef MCITY_PERCEPTION_SUMO_TRAFFIC_LIGHT_CONVERTER_HPP_
#define MCITY_PERCEPTION_SUMO_TRAFFIC_LIGHT_CONVERTER_HPP_

#include <vector>
#include <iostream>

#include <rclcpp/rclcpp.hpp>
#include <rclcpp_components/register_node_macro.hpp>

#include <std_msgs/msg/header.hpp>

#include <RedisClient.h>
#include <nlohmann/json.hpp>

#include <autoware_perception_msgs/msg/traffic_signal.hpp>
#include <autoware_perception_msgs/msg/traffic_signal_array.hpp>
#include <autoware_perception_msgs/msg/traffic_signal_element.hpp>

namespace sumo_traffic_light_converter
{

using namespace std;
using namespace std::literals::chrono_literals;

using std_msgs::msg::Header;

using nlohmann::json;

using autoware_perception_msgs::msg::TrafficSignal;
using autoware_perception_msgs::msg::TrafficSignalArray;
using autoware_perception_msgs::msg::TrafficSignalElement;

class SumoTrafficLightConverter : public rclcpp::Node
{
public:
  explicit SumoTrafficLightConverter(const rclcpp::NodeOptions & options);
  ~SumoTrafficLightConverter() = default;

private:
  // nlohmann::json light_mappings;
  TrafficSignal traffic_signal;
  TrafficSignalArray traffic_signal_array;
  TrafficSignalElement traffic_signal_element;

  vector<TrafficSignal> signals;

  rclcpp::TimerBase::SharedPtr timer_;
  
  rclcpp::Publisher<TrafficSignalArray>::SharedPtr pub_signal_array;

  RedisClient redis_client;

  void on_timer();

  void update_signals(json traffic_signals_tls_info);
};

}
#endif