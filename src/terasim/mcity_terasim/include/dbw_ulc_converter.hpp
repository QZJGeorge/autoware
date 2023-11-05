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

#ifndef MCITY_PLANNER__DBW_ULC_CONVERTER_HPP_
#define MCITY_PLANNER__DBW_ULC_CONVERTER_HPP_

#include <iostream>
#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/header.hpp>
#include <rclcpp_components/register_node_macro.hpp>
#include <dataspeed_ulc_msgs/msg/ulc_cmd.hpp>
#include <dbw_ford_msgs/msg/steering_report.hpp>
#include <autoware_auto_vehicle_msgs/msg/steering_report.hpp>
#include <autoware_auto_control_msgs/msg/ackermann_control_command.hpp>


namespace dbw_ulc_converter
{
    
using namespace std;

using std_msgs::msg::Header;
using dataspeed_ulc_msgs::msg::UlcCmd;
using autoware_auto_control_msgs::msg::AckermannControlCommand;

class DbwUlcConverter : public rclcpp::Node
{
public:
  explicit DbwUlcConverter(const rclcpp::NodeOptions & options);
  ~DbwUlcConverter() = default;

private:
  rclcpp::Publisher<autoware_auto_vehicle_msgs::msg::SteeringReport>::SharedPtr pub_steer;
  rclcpp::Publisher<UlcCmd>::SharedPtr pub_ulc_cmd;

  rclcpp::Subscription<AckermannControlCommand>::SharedPtr sub_control_cmd;
  rclcpp::Subscription<dbw_ford_msgs::msg::SteeringReport>::SharedPtr sub_steer;

  rclcpp::TimerBase::SharedPtr timer_;

  dbw_ford_msgs::msg::SteeringReport saved_steer_msg;
  AckermannControlCommand saved_control_cmd_msg;

  float wheel_base = 2.85;  //wheel base of lincoln mkz

  bool steer_status = false;
  bool control_status = false;

  void on_timer();

  autoware_auto_vehicle_msgs::msg::SteeringReport get_steer_msg(float steering_tire_angle);
  UlcCmd get_ulc_cmd(float speed, float steering_tire_angle);

  void steer_callback(dbw_ford_msgs::msg::SteeringReport::SharedPtr msg);
  void control_cmd_callback(AckermannControlCommand::SharedPtr msg);
};

}
#endif