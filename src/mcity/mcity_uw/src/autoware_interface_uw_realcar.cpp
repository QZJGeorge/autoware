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

#include "autoware_interface_uw_realcar.hpp"

namespace autoware_interface_uw_realcar{

  AutowareInterfaceUWRealcar::AutowareInterfaceUWRealcar(const rclcpp::NodeOptions & options)
  : Node("autoware_interface_uw_realcar", options)
  {
    pub_vel_report = this->create_publisher<VelocityReport>("/vehicle/status/velocity_status", 10);
    pub_steer_report = this->create_publisher<SteeringReport>("/vehicle/status/steering_status", 10);

    sub_autoware_state = this->create_subscription<AutowareState>(
      "/autoware/state", 10, std::bind(&AutowareInterfaceUWRealcar::autowareStateCB, this, std::placeholders::_1));
    sub_veh_state = this->create_subscription<VehicleState>(
      "/mcity/vehicle_state", 10, std::bind(&AutowareInterfaceUWRealcar::vehStateCB, this, std::placeholders::_1));
    sub_operation_mode = this->create_subscription<OperationModeState>(
      "/system/operation_mode/state", 10, std::bind(&AutowareInterfaceUWRealcar::operationModeStateCB, this, std::placeholders::_1));

    cli_set_route_points = this->create_client<SetRoutePoints>("/planning/mission_planning/set_route_points");
    cli_set_operation_mode = this->create_client<ChangeOperationMode>("/system/operation_mode/change_operation_mode");
    cli_set_autoware_control = this->create_client<ChangeAutowareControl>("/system/operation_mode/change_autoware_control");

    timer_ = rclcpp::create_timer(
      this, get_clock(), 100ms, std::bind(&AutowareInterfaceUWRealcar::on_timer, this));
  }

  void AutowareInterfaceUWRealcar::on_timer(){
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

  void AutowareInterfaceUWRealcar::pub_vehicle_report(){
    VelocityReport vel_report_msg;
    SteeringReport steer_report_msg;

    vel_report_msg.header.stamp = this->get_clock()->now();
    vel_report_msg.longitudinal_velocity = veh_state_msg.speed_x;

    steer_report_msg.stamp = this->get_clock()->now();
    steer_report_msg.steering_tire_angle = veh_state_msg.steer_state / STEER_TO_TIRE_RATIO;

    pub_vel_report->publish(vel_report_msg);
    pub_steer_report->publish(steer_report_msg);
  }

  void AutowareInterfaceUWRealcar::set_route_points(){
    Pose wp0, wp1, wp2, wp3;

    wp0.position.x = 21.43737030029297;
    wp0.position.y = 225.17938232421875;
    wp0.position.z = 0.0;

    wp0.orientation.x = 0.0;
    wp0.orientation.y = 0.0;
    wp0.orientation.z = 0.6825695870318333;
    wp0.orientation.w = 0.7308206064823244;

    wp1.position.x = 50.05738830566406;
    wp1.position.y = 164.1993865966797;
    wp1.position.z = 0.0;

    wp1.orientation.x = 0.0;
    wp1.orientation.y = 0.0;
    wp1.orientation.z = -0.720555046253776;
    wp1.orientation.w = 0.6933977396258361;

    wp2.position.x = 79.44480895996094;
    wp2.position.y = 191.5081787109375;
    wp2.position.z = 0.0;

    wp2.orientation.x = 0.0;
    wp2.orientation.y = 0.0;
    wp2.orientation.z = -0.02317044188200103;
    wp2.orientation.w = 0.9997315292732308;

    wp3.position.x = 123.70790100097656;
    wp3.position.y = 191.4085235595703;
    wp3.position.z = 0.0;

    wp3.orientation.x = 0.0;
    wp3.orientation.y = 0.0;
    wp3.orientation.z = -0.019202897019106813;
    wp3.orientation.w = 0.9998156073727162;

    while (!cli_set_route_points->wait_for_service(1s)) {
      if (!rclcpp::ok()) {
        RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Interrupted while waiting for the service. Exiting.");
      }
      RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "routing service not available, waiting again...");
    }

    auto set_route_points_req = std::make_shared<SetRoutePoints::Request>();

    set_route_points_req->header.frame_id = "map";
    set_route_points_req->goal = wp3;
    set_route_points_req->waypoints = {wp0, wp1, wp2};

    auto result_s = cli_set_route_points->async_send_request(set_route_points_req);
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Setting new route...");
  }

  void AutowareInterfaceUWRealcar::set_operation_mode(uint8_t mode){
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

  void AutowareInterfaceUWRealcar::autowareStateCB(const AutowareState::SharedPtr msg){
    autoware_state = msg->state;
  }

  void AutowareInterfaceUWRealcar::vehStateCB(const VehicleState::SharedPtr msg){
    veh_state_msg = *msg;
  }

  void AutowareInterfaceUWRealcar::operationModeStateCB(const OperationModeState::SharedPtr msg){
    operation_mode_state_msg = *msg;
  }
}

RCLCPP_COMPONENTS_REGISTER_NODE(autoware_interface_uw_realcar::AutowareInterfaceUWRealcar)
