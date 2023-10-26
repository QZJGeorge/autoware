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

#ifndef MCITY_TERASIM__CAX_CONTEXT_REPLAY_HPP_
#define MCITY_TERASIM__CAX_CONTEXT_REPLAY_HPP_

#include <string>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <iostream>
#include <algorithm>
#include <nlohmann/json.hpp>
#include <hiredis/hiredis.h>

#include <rclcpp/rclcpp.hpp>
#include <unique_identifier_msgs/msg/uuid.hpp>
#include <rclcpp_components/register_node_macro.hpp>


namespace cav_context_replay
{
    
using namespace std;

using nlohmann::json;

class CavContextReplay : public rclcpp::Node
{
public:
  explicit CavContextReplay(const rclcpp::NodeOptions & options);
  ~CavContextReplay() = default;

private:
  rclcpp::TimerBase::SharedPtr timer_;
 
  redisContext *context;

  void on_timer();
  void read_file();
  void init_redis_client();
  void set_key(string key, string value);
  string get_key(string key);
};

}

#endif