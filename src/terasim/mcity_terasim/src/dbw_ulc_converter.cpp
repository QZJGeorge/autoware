// Copyright 2019 Autoware Foundation
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "dbw_ulc_converter.hpp"

namespace dbw_ulc_converter{

  DbwUlcConverter::DbwUlcConverter(const rclcpp::NodeOptions & options)
  : Node("dbw_ulc_converter", options)
  {
    pub_steer = this->create_publisher<autoware_auto_vehicle_msgs::msg::SteeringReport>("/vehicle/status/steering_status", 10);
    pub_ulc_cmd = this->create_publisher<UlcCmd>("/vehicle/ulc_cmd", 10);

    sub_steer = this->create_subscription<dbw_ford_msgs::msg::SteeringReport>(
      "/vehicle/steering_report", 10, std::bind(&DbwUlcConverter::steer_callback, this, std::placeholders::_1));
    sub_control_cmd = this->create_subscription<AckermannControlCommand>(
      "/vehicle/status/ackermann_cmd", 10, std::bind(&DbwUlcConverter::control_cmd_callback, this, std::placeholders::_1));
    
    timer_ = rclcpp::create_timer(
        this, get_clock(), 20ms, std::bind(&DbwUlcConverter::on_timer, this));
  }

  autoware_auto_vehicle_msgs::msg::SteeringReport DbwUlcConverter::get_steer_msg(float steering_tire_angle){
    autoware_auto_vehicle_msgs::msg::SteeringReport steer_msg;
    steer_msg.stamp = this->get_clock()->now();
    steer_msg.steering_tire_angle = steering_tire_angle;
    return steer_msg;
  }

  UlcCmd DbwUlcConverter::get_ulc_cmd(float speed, float steering_tire_angle){
    UlcCmd ulc_cmd_msg;
    ulc_cmd_msg.header.stamp = this->get_clock()->now();
    ulc_cmd_msg.clear = false;
    ulc_cmd_msg.enable_pedals = true;
    ulc_cmd_msg.enable_steering = true;
    ulc_cmd_msg.enable_shifting = true;
    ulc_cmd_msg.shift_from_park = false;
    ulc_cmd_msg.linear_velocity = speed;
    ulc_cmd_msg.linear_accel = 2.0;
    ulc_cmd_msg.linear_decel = 2.0;
    ulc_cmd_msg.jerk_limit_throttle = 5.0;
    ulc_cmd_msg.jerk_limit_brake = 5.0;
    ulc_cmd_msg.yaw_command = speed / wheel_base * tan(steering_tire_angle);
    ulc_cmd_msg.angular_accel = 2.0;
    ulc_cmd_msg.lateral_accel = 2.0;
    ulc_cmd_msg.steering_mode = 0; // YAW_RATE_MODE
    ulc_cmd_msg.pedals_mode = 0; // SPEED_MODE
    return ulc_cmd_msg;
  }

  void DbwUlcConverter::steer_callback(dbw_ford_msgs::msg::SteeringReport::SharedPtr msg){
    saved_steer_msg = *msg;
    steer_status = true;
  }

  void DbwUlcConverter::control_cmd_callback(AckermannControlCommand::SharedPtr msg){
    saved_control_cmd_msg = *msg;
    control_status = true;
  }
  
  void DbwUlcConverter::on_timer(){
    if (!steer_status || !control_status){
      return;
    }

    steer_status = false;
    control_status = false;

    double speed = saved_control_cmd_msg.longitudinal.speed;
    
    // spec sheet https://media.lincoln.com/content/dam/lincolnmedia/lna/us/product/2016/17MKZ-TechSpecs.pdf
    double steering_tire_angle = saved_steer_msg.steering_wheel_angle / 14.8;

    auto steer_msg = get_steer_msg(steering_tire_angle);
    auto ulc_cmd_msg = get_ulc_cmd(speed, steering_tire_angle);

    pub_steer->publish(steer_msg);
    pub_ulc_cmd->publish(ulc_cmd_msg);
  }
}

RCLCPP_COMPONENTS_REGISTER_NODE(dbw_ulc_converter::DbwUlcConverter)