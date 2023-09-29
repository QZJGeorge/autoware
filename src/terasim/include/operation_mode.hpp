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

#ifndef MCITY_PLANNER__OPERATION_MODE_HPP_
#define MCITY_PLANNER__OPERATION_MODE_HPP_

#include <iostream>
#include <rclcpp/rclcpp.hpp>
#include <tier4_system_msgs/srv/change_operation_mode.hpp>
#include <rclcpp_components/register_node_macro.hpp>

namespace operation_mode
{
    
using namespace std;
using tier4_system_msgs::srv::ChangeOperationMode;

class OperationMode : public rclcpp::Node
{
public:
  explicit OperationMode(const rclcpp::NodeOptions & options);
  ~OperationMode() = default;

private:
  rclcpp::Client<ChangeOperationMode>::SharedPtr cli_operation_mode;
  void send_request();
};

}
#endif