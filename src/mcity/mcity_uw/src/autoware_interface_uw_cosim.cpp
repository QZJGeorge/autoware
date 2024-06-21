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

#include <autoware_interface_uw_cosim.hpp>

namespace autoware_interface_uw_cosim{

  AutowareInterfaceUWCosim::AutowareInterfaceUWCosim(const rclcpp::NodeOptions & options)
  : Node("autoware_interface_uw_cosim", options)
  {
    pub_local = this->create_publisher<PoseWithCovarianceStamped>("/initialpose", 10);
    sub_autoware_state = this->create_subscription<AutowareState>(
      "/autoware/state", 10, std::bind(&AutowareInterfaceUWCosim::autoware_state_callback, this, std::placeholders::_1));

    cli_set_route_points = this->create_client<SetRoutePoints>("/planning/mission_planning/set_route_points");
    cli_set_operation_mode = this->create_client<ChangeOperationMode>("/system/operation_mode/change_operation_mode");
    cli_set_autoware_control = this->create_client<ChangeAutowareControl>("/system/operation_mode/change_autoware_control");

    timer_ = rclcpp::create_timer(
      this, get_clock(), 1000ms, std::bind(&AutowareInterfaceUWCosim::on_timer, this));
  }

  void AutowareInterfaceUWCosim::on_timer(){
    if (autoware_state == AutowareState::INITIALIZING){
      init_localization();
      RCLCPP_INFO_THROTTLE(rclcpp::get_logger("rclcpp"), *get_clock(), 1000, "Waiting for vehicle initialization...");
    }
    else if (autoware_state == AutowareState::WAITING_FOR_ROUTE){
      set_route_points();
      RCLCPP_INFO_THROTTLE(rclcpp::get_logger("rclcpp"), *get_clock(), 1000, "Setting route points...");
    } 
  }

  void AutowareInterfaceUWCosim::init_localization(){
    PoseWithCovarianceStamped localization_msg;

    localization_msg.pose.pose.position.x = 134.0060577392578;
    localization_msg.pose.pose.position.y = 202.6378173828125;

    localization_msg.pose.pose.orientation.x = 0.0;
    localization_msg.pose.pose.orientation.y = 0.0;
    localization_msg.pose.pose.orientation.z = 0.9999186724270432;
    localization_msg.pose.pose.orientation.w = 0.012753373347445843;

    localization_msg.header.stamp = this->get_clock()->now();
    localization_msg.header.frame_id = "map";
    
    pub_local->publish(localization_msg);
  }

  void AutowareInterfaceUWCosim::set_route_points(){
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

  void AutowareInterfaceUWCosim::set_operation_mode(uint8_t mode){
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

  void AutowareInterfaceUWCosim::set_autoware_control(bool autoware_control){
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

  void AutowareInterfaceUWCosim::autoware_state_callback(AutowareState::SharedPtr msg){
    autoware_state = msg->state;
  }
}

RCLCPP_COMPONENTS_REGISTER_NODE(autoware_interface_uw_cosim::AutowareInterfaceUWCosim)
