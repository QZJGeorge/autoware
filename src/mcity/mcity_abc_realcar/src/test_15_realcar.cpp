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

#include "test_15_realcar.hpp"

namespace test_15_realcar{

  Test15Realcar::Test15Realcar(const rclcpp::NodeOptions & options)
  : Node("test_15_realcar", options)
  {
    pub_vel_report = this->create_publisher<VelocityReport>("/vehicle/status/velocity_status", 10);
    pub_steer_report = this->create_publisher<SteeringReport>("/vehicle/status/steering_status", 10);

    sub_autoware_state = this->create_subscription<AutowareState>(
      "/autoware/state", 10, std::bind(&Test15Realcar::autowareStateCB, this, std::placeholders::_1));
    sub_veh_state = this->create_subscription<VehicleState>(
      "/mcity/vehicle_state", 10, std::bind(&Test15Realcar::vehStateCB, this, std::placeholders::_1));
    sub_operation_mode = this->create_subscription<OperationModeState>(
      "/system/operation_mode/state", 10, std::bind(&Test15Realcar::operationModeStateCB, this, std::placeholders::_1));

    cli_set_route_points = this->create_client<SetRoutePoints>("/planning/mission_planning/set_route_points");
    cli_set_operation_mode = this->create_client<ChangeOperationMode>("/system/operation_mode/change_operation_mode");
    cli_set_autoware_control = this->create_client<ChangeAutowareControl>("/system/operation_mode/change_autoware_control");

    timer_ = rclcpp::create_timer(
      this, get_clock(), 100ms, std::bind(&Test15Realcar::on_timer, this));
  }

  void Test15Realcar::on_timer(){
    if (autoware_state == AutowareState::INITIALIZING){
      RCLCPP_INFO_THROTTLE(rclcpp::get_logger("rclcpp"), *get_clock(), 1000, "Waiting for vehicle initialization...");
      return;
    } 
    else if (autoware_state == AutowareState::WAITING_FOR_ROUTE){
      set_route_points();
      operation_mode_state_msg.mode = ChangeOperationMode::Request::LOCAL;
      RCLCPP_INFO_THROTTLE(rclcpp::get_logger("rclcpp"), *get_clock(), 1000, "Setting route points...");
    } 
    else{
      if (!veh_state_msg.by_wire_enabled && veh_state_msg.speed_x < 0.25 && (uint8_t)operation_mode_state_msg.mode != ChangeOperationMode::Request::STOP){
        set_operation_mode(ChangeOperationMode::Request::STOP);
      } else if (!veh_state_msg.by_wire_enabled && veh_state_msg.speed_x >= 0.25 && (uint8_t)operation_mode_state_msg.mode != ChangeOperationMode::Request::LOCAL){
        set_operation_mode(ChangeOperationMode::Request::LOCAL);
      } else if (veh_state_msg.by_wire_enabled && (uint8_t)operation_mode_state_msg.mode != ChangeOperationMode::Request::AUTONOMOUS){
        set_operation_mode(ChangeOperationMode::Request::AUTONOMOUS);
      }
    }

    pub_vehicle_report();
  }

  void Test15Realcar::pub_vehicle_report(){
    VelocityReport vel_report_msg;
    SteeringReport steer_report_msg;

    vel_report_msg.header.stamp = this->get_clock()->now();
    vel_report_msg.longitudinal_velocity = veh_state_msg.speed_x;

    steer_report_msg.stamp = this->get_clock()->now();
    steer_report_msg.steering_tire_angle = veh_state_msg.steer_state / STEER_TO_TIRE_RATIO;

    pub_vel_report->publish(vel_report_msg);
    pub_steer_report->publish(steer_report_msg);
  }

  void Test15Realcar::set_route_points(){
    Pose wp0;
    
    wp0.position.x = 77604.484375;
    wp0.position.y = 86627.578125;
    wp0.position.z = 0.0;

    wp0.orientation.x = 0.0;
    wp0.orientation.y = 0.0;
    wp0.orientation.z = -0.7273591732648912;
    wp0.orientation.w = 0.6862569730555851;

    while (!cli_set_route_points->wait_for_service(1s)) {
      if (!rclcpp::ok()) {
        RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Interrupted while waiting for the service. Exiting.");
      }
      RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "routing service not available, waiting again...");
    }

    auto set_route_points_req = std::make_shared<SetRoutePoints::Request>();

    set_route_points_req->header.frame_id = "map";
    set_route_points_req->goal = wp0;

    auto result_s = cli_set_route_points->async_send_request(set_route_points_req);
  }

  void Test15Realcar::set_operation_mode(uint8_t mode){
    auto request = std::make_shared<ChangeOperationMode::Request>();
    request->mode = mode;

    while (!cli_set_operation_mode->wait_for_service(1s)) {
      if (!rclcpp::ok()) {
        RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Interrupted while waiting for the service. Exiting.");
      }
      RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "routing service not available, waiting again...");
    }

    auto result = cli_set_operation_mode->async_send_request(request);
  }

  void Test15Realcar::autowareStateCB(const AutowareState::SharedPtr msg){
    autoware_state = msg->state;
  }

  void Test15Realcar::vehStateCB(const VehicleState::SharedPtr msg){
    veh_state_msg = *msg;
  }

  void Test15Realcar::operationModeStateCB(const OperationModeState::SharedPtr msg){
    operation_mode_state_msg = *msg;
  }
}

RCLCPP_COMPONENTS_REGISTER_NODE(test_15_realcar::Test15Realcar)
