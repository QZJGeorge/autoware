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

#include <autoware_interface_cosim.hpp>

namespace autoware_interface_cosim{

  AutowareInterfaceCosim::AutowareInterfaceCosim(const rclcpp::NodeOptions & options)
  : Node("autoware_interface_cosim", options)
  {
    pub_local = this->create_publisher<PoseWithCovarianceStamped>("/initialpose", 10);
    sub_autoware_state = this->create_subscription<AutowareState>(
      "/autoware/state", 10, std::bind(&AutowareInterfaceCosim::autoware_state_callback, this, std::placeholders::_1));

    cli_set_route_points = this->create_client<SetRoutePoints>("/planning/mission_planning/set_route_points");
    cli_set_operation_mode = this->create_client<ChangeOperationMode>("/system/operation_mode/change_operation_mode");
    cli_set_autoware_control = this->create_client<ChangeAutowareControl>("/system/operation_mode/change_autoware_control");

    timer_ = rclcpp::create_timer(
      this, get_clock(), 1000ms, std::bind(&AutowareInterfaceCosim::on_timer, this));

    if (!redis_client.connect(true)) {
        RCLCPP_ERROR(this->get_logger(), "Failed to connect to Redis server.");
    } else {
        RCLCPP_INFO(this->get_logger(), "Connected to Redis server.");
    }
  }

  void AutowareInterfaceCosim::on_timer(){
    if (autoware_state == AutowareState::INITIALIZING){
      init_localization();
      RCLCPP_INFO_THROTTLE(rclcpp::get_logger("rclcpp"), *get_clock(), 1000, "Waiting for vehicle initialization...");
    }
    else if (autoware_state == AutowareState::WAITING_FOR_ROUTE){
      set_route_points();
      RCLCPP_INFO_THROTTLE(rclcpp::get_logger("rclcpp"), *get_clock(), 1000, "Setting route points...");
    } 
    else if (autoware_state == AutowareState::WAITING_FOR_ENGAGE){
      string terasim_status_wrapper = redis_client.get("terasim_status");
      if (terasim_status_wrapper == ""){
        RCLCPP_WARN_THROTTLE(rclcpp::get_logger("rclcpp"), *get_clock(), 1000, "Terasim status not available, waiting...");
        return;
      }

      json terasim_status_json = json::parse(terasim_status_wrapper);
      int terasim_status = terasim_status_json["data"];

      if (terasim_status == 0){
        RCLCPP_WARN_THROTTLE(rclcpp::get_logger("rclcpp"), *get_clock(), 1000, "Terasim not ready, waiting...");
      } else{
        set_autoware_control(true);
        set_operation_mode(ChangeOperationMode::Request::AUTONOMOUS);
        RCLCPP_INFO_THROTTLE(rclcpp::get_logger("rclcpp"), *get_clock(), 1000, "Enabling autoware control...");
      }
    }
  }

  void AutowareInterfaceCosim::init_localization(){
    PoseWithCovarianceStamped localization_msg;

    localization_msg.pose.pose.position.x = 77639.3359375;
    localization_msg.pose.pose.position.y = 86558.40625;

    localization_msg.pose.pose.orientation.x = 0.0;
    localization_msg.pose.pose.orientation.y = 0.0;
    localization_msg.pose.pose.orientation.z = 0.578428211916176;
    localization_msg.pose.pose.orientation.w = 0.8157332919891497;

    localization_msg.header.stamp = this->get_clock()->now();
    localization_msg.header.frame_id = "map";
    
    pub_local->publish(localization_msg);
  }

  void AutowareInterfaceCosim::set_route_points(){
    Pose wp0, wp1, wp2, wp3, wp4;

    wp0.position.x = 77649.625;
    wp0.position.y = 86695.296;
    wp0.position.z = 0.0;

    wp0.orientation.x = 0.0;
    wp0.orientation.y = 0.0;
    wp0.orientation.z = 0.68874525198885;
    wp0.orientation.w = 0.7250034330007105;

    wp1.position.x = 77654.6328125;
    wp1.position.y = 86815.8203125;
    wp1.position.z = 0.0;

    wp1.orientation.x = 0.0;
    wp1.orientation.y = 0.0;
    wp1.orientation.z = 0.6971827007404735;
    wp1.orientation.w = 0.71689349403396;

    wp2.position.x = 77549.984375;
    wp2.position.y = 86745.5546875;
    wp2.position.z = 0.0;

    wp2.orientation.x = 0.0;
    wp2.orientation.y = 0.0;
    wp2.orientation.z = -0.7337657020938361;
    wp2.orientation.w = 0.6794026011362775;

    wp3.position.x = 77581.4375;
    wp3.position.y = 86651.9765625;
    wp3.position.z = 0.0;

    wp3.orientation.x = 0.0;
    wp3.orientation.y = 0.0;
    wp3.orientation.z = -0.015441629002764135;
    wp3.orientation.w = 0.999880770939086;

    wp4.position.x = 77587.5625;
    wp4.position.y = 86523.4140625;
    wp4.position.z = 0.0;

    wp4.orientation.x = 0.0;
    wp4.orientation.y = 0.0;
    wp4.orientation.z = 0.08106215155563748;
    wp4.orientation.w = 0.9967090486120666;

    while (!cli_set_route_points->wait_for_service(1s)) {
      if (!rclcpp::ok()) {
        RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Interrupted while waiting for the service. Exiting.");
      }
      RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "routing service not available, waiting again...");
    }

    auto set_route_points_req = std::make_shared<SetRoutePoints::Request>();

    set_route_points_req->header.frame_id = "map";
    set_route_points_req->goal = wp4;
    set_route_points_req->waypoints = {wp0, wp1, wp2, wp3};

    auto result_s = cli_set_route_points->async_send_request(set_route_points_req);
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Setting new route...");
  }

  void AutowareInterfaceCosim::set_operation_mode(uint8_t mode){
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

  void AutowareInterfaceCosim::set_autoware_control(bool autoware_control){
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

  void AutowareInterfaceCosim::autoware_state_callback(AutowareState::SharedPtr msg){
    autoware_state = msg->state;
  }
}

RCLCPP_COMPONENTS_REGISTER_NODE(autoware_interface_cosim::AutowareInterfaceCosim)
