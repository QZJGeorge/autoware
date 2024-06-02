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

#include <autoware_interface_usdot_cosim.hpp>

namespace autoware_interface_usdot_cosim{

  AutowareInterfaceUSDOTCosim::AutowareInterfaceUSDOTCosim(const rclcpp::NodeOptions & options)
  : Node("autoware_interface_usdot_cosim", options)
  {
    pub_local = this->create_publisher<PoseWithCovarianceStamped>("/initialpose", 10);
    sub_autoware_state = this->create_subscription<AutowareState>(
      "/autoware/state", 10, std::bind(&AutowareInterfaceUSDOTCosim::autoware_state_callback, this, std::placeholders::_1));
    sub_ego_odom = this->create_subscription<Odometry>(
      "/localization/kinematic_state", 10, std::bind(&AutowareInterfaceUSDOTCosim::odom_callback, this, std::placeholders::_1));

    cli_set_route_points = this->create_client<SetRoutePoints>("/planning/mission_planning/set_route_points");
    cli_set_operation_mode = this->create_client<ChangeOperationMode>("/system/operation_mode/change_operation_mode");
    cli_set_autoware_control = this->create_client<ChangeAutowareControl>("/system/operation_mode/change_autoware_control");

    timer_ = rclcpp::create_timer(
      this, get_clock(), 1000ms, std::bind(&AutowareInterfaceUSDOTCosim::on_timer, this));
  }

  void AutowareInterfaceUSDOTCosim::on_timer(){
    if (autoware_state == AutowareState::INITIALIZING){
      init_localization();
      RCLCPP_INFO_THROTTLE(rclcpp::get_logger("rclcpp"), *get_clock(), 1000, "Waiting for vehicle initialization...");
    } 
    else if (autoware_state == AutowareState::WAITING_FOR_ROUTE){
      set_route_points();
      RCLCPP_INFO_THROTTLE(rclcpp::get_logger("rclcpp"), *get_clock(), 1000, "Setting route points...");
    }
  }

  void AutowareInterfaceUSDOTCosim::init_localization(){
    PoseWithCovarianceStamped localization_msg;

    localization_msg.pose.pose.position.x = 26148.71484375;
    localization_msg.pose.pose.position.y = 4959.935546875;

    localization_msg.pose.pose.orientation.x = 0.0;
    localization_msg.pose.pose.orientation.y = 0.0;
    localization_msg.pose.pose.orientation.z = -0.6179608125451177;
    localization_msg.pose.pose.orientation.w = 0.7862088998215283;

    localization_msg.header.stamp = this->get_clock()->now();
    localization_msg.header.frame_id = "map";

    pub_local->publish(localization_msg);
  }

  void AutowareInterfaceUSDOTCosim::set_route_points(){
    while (!cli_set_route_points->wait_for_service(1s)) {
      if (!rclcpp::ok()) {
        RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Interrupted while waiting for the service. Exiting.");
      }
      RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "routing service not available, waiting again...");
    }

    auto set_route_points_req = std::make_shared<SetRoutePoints::Request>();

    Pose wp0, wp1, wp2;

    wp0.position.x = 26089.797406386635;
    wp0.position.y = 4820.818679184576;
    wp0.position.z = 0.0;

    wp0.orientation.x = 0.0;
    wp0.orientation.y = 0.0;
    wp0.orientation.z = -0.71650258553512;
    wp0.orientation.w = 0.6975844356932629;

    wp1.position.x = 26157.145289458822;
    wp1.position.y = 4954.80001487748;
    wp1.position.z = 0.0;

    wp1.orientation.x = 0.0;
    wp1.orientation.y = 0.0;
    wp1.orientation.z = 0.8038294933925517;
    wp1.orientation.w = 0.5948597696535493;

    set_route_points_req->header.frame_id = "map";
    set_route_points_req->goal = wp1;
    set_route_points_req->waypoints = {wp0};

    auto result_s = cli_set_route_points->async_send_request(set_route_points_req);
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Setting new route...");
  }

  void AutowareInterfaceUSDOTCosim::set_operation_mode(uint8_t mode){
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

  void AutowareInterfaceUSDOTCosim::set_autoware_control(bool autoware_control){
    auto request = std::make_shared<ChangeAutowareControl::Request>();
    request->autoware_control = autoware_control;

    while (!cli_set_autoware_control->wait_for_service(1s)) {
      if (!rclcpp::ok()) {
        RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Interrupted while waiting for the service. Exiting.");
      }
      RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "routing service not available, waiting again...");
    }

    auto result = cli_set_autoware_control->async_send_request(request);
  }

  void AutowareInterfaceUSDOTCosim::autoware_state_callback(AutowareState::SharedPtr msg){
    autoware_state = msg->state;
  }

  void AutowareInterfaceUSDOTCosim::odom_callback(Odometry::SharedPtr msg){
    odom_msg = *msg;
  }
}

RCLCPP_COMPONENTS_REGISTER_NODE(autoware_interface_usdot_cosim::AutowareInterfaceUSDOTCosim)
