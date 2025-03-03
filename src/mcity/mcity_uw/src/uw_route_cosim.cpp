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

#include <uw_route_cosim.hpp>

namespace uw_route_cosim{

  UwRouteCosim::UwRouteCosim(const rclcpp::NodeOptions & options)
  : Node("uw_route_cosim", options)
  {
    pub_local = this->create_publisher<PoseWithCovarianceStamped>("/initialpose", 10);
    sub_autoware_state = this->create_subscription<AutowareState>(
      "/autoware/state", 10, std::bind(&UwRouteCosim::autoware_state_callback, this, std::placeholders::_1));

    cli_set_route_points = this->create_client<SetRoutePoints>("/planning/mission_planning/set_route_points");
    cli_set_operation_mode = this->create_client<ChangeOperationMode>("/system/operation_mode/change_operation_mode");
    cli_set_autoware_control = this->create_client<ChangeAutowareControl>("/system/operation_mode/change_autoware_control");

    timer_ = rclcpp::create_timer(
      this, get_clock(), 1000ms, std::bind(&UwRouteCosim::on_timer, this));
  }

  void UwRouteCosim::on_timer(){
    if (autoware_state == AutowareState::INITIALIZING){
      init_localization();
      RCLCPP_INFO_THROTTLE(rclcpp::get_logger("rclcpp"), *get_clock(), 1000, "Waiting for vehicle initialization...");
    }
    else if (autoware_state == AutowareState::WAITING_FOR_ROUTE){
      set_route_points();
      RCLCPP_INFO_THROTTLE(rclcpp::get_logger("rclcpp"), *get_clock(), 1000, "Setting route points...");
    } 
  }

  void UwRouteCosim::init_localization(){
    PoseWithCovarianceStamped localization_msg;

    localization_msg.pose.pose.position.x = 77634.805;
    localization_msg.pose.pose.position.y = 86722.445;

    localization_msg.pose.pose.orientation.x = 0.0;
    localization_msg.pose.pose.orientation.y = 0.0;
    localization_msg.pose.pose.orientation.z = 0.9998690840231589;
    localization_msg.pose.pose.orientation.w = 0.016180692651716146;

    localization_msg.header.stamp = this->get_clock()->now();
    localization_msg.header.frame_id = "map";
    
    pub_local->publish(localization_msg);
  }

  void UwRouteCosim::set_route_points(){
    Pose wp0, wp1, wp2, wp3, wp4, wp5, wp6, wp7, wp8;

    wp0.position.x = 77536.445;
    wp0.position.y = 86725.102;
    wp0.position.z = 0.0;

    wp0.orientation.x = 0.0;
    wp0.orientation.y = 0.0;
    wp0.orientation.z = 0.9998505540781284;
    wp0.orientation.w = 0.017287842828406678;

    wp1.position.x = 77518.289;
    wp1.position.y = 86746.875;
    wp1.position.z = 0.0;

    wp1.orientation.x = 0.0;
    wp1.orientation.y = 0.0;
    wp1.orientation.z = 0.6775132739130707;
    wp1.orientation.w = 0.7355105462680956;

    wp2.position.x = 77549.625;
    wp2.position.y = 86747.75;
    wp2.position.z = 0.0;

    wp2.orientation.x = 0.0;
    wp2.orientation.y = 0.0;
    wp2.orientation.z = -0.7188706443600598;
    wp2.orientation.w = 0.6951438676111243;

    wp3.position.x = 77547.359375;
    wp3.position.y = 86684.640625;
    wp3.position.z = 0.0;

    wp3.orientation.x = 0.0;
    wp3.orientation.y = 0.0;
    wp3.orientation.z = -0.7194119649437242;
    wp3.orientation.w = 0.6945836340541071;

    wp4.position.x = 77529.7578125;
    wp4.position.y = 86658.46875;
    wp4.position.z = 0.0;

    wp4.orientation.x = 0.0;
    wp4.orientation.y = 0.0;
    wp4.orientation.z = 0.9998540145853148;
    wp4.orientation.w = 0.01708653029813838;

    wp5.position.x = 77513.5078125;
    wp5.position.y = 86681.8203125;
    wp5.position.z = 0.0;

    wp5.orientation.x = 0.0;
    wp5.orientation.y = 0.0;
    wp5.orientation.z = 0.6491678806330007;
    wp5.orientation.w = 0.7606451621843514;

    wp6.position.x = 77533.09375;
    wp6.position.y = 86712.796875;
    wp6.position.z = 0.0;

    wp6.orientation.x = 0.0;
    wp6.orientation.y = 0.0;
    wp6.orientation.z = -0.016659727201332814;
    wp6.orientation.w = 0.999861217114444;

    wp7.position.x = 77576.03125;
    wp7.position.y = 86710.140625;
    wp7.position.z = 0.0;

    wp7.orientation.x = 0.0;
    wp7.orientation.y = 0.0;
    wp7.orientation.z = -0.043238739496838104;
    wp7.orientation.w = 0.9990647683742654;

    wp8.position.x = 77633.21875;
    wp8.position.y = 86709.6640625;
    wp8.position.z = 0.0;

    wp8.orientation.x = 0.0;
    wp8.orientation.y = 0.0;
    wp8.orientation.z = 0.002066102472767498;
    wp8.orientation.w = 0.9999978656080082;

    while (!cli_set_route_points->wait_for_service(1s)) {
      if (!rclcpp::ok()) {
        RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Interrupted while waiting for the service. Exiting.");
      }
      RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "routing service not available, waiting again...");
    }

    auto set_route_points_req = std::make_shared<SetRoutePoints::Request>();

    set_route_points_req->header.frame_id = "map";
    set_route_points_req->goal = wp8;
    set_route_points_req->waypoints = {wp0, wp1, wp2, wp3, wp4, wp5, wp6, wp7};

    auto result_s = cli_set_route_points->async_send_request(set_route_points_req);
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Setting new route...");
  }

  void UwRouteCosim::set_operation_mode(uint8_t mode){
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

  void UwRouteCosim::set_autoware_control(bool autoware_control){
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

  void UwRouteCosim::autoware_state_callback(AutowareState::SharedPtr msg){
    autoware_state = msg->state;
  }
}

RCLCPP_COMPONENTS_REGISTER_NODE(uw_route_cosim::UwRouteCosim)
