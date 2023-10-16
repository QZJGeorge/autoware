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

#include "test_07.hpp"

namespace test_07{

  Test07::Test07(const rclcpp::NodeOptions & options)
  : Node("test_07", options)
  {
    pub_local = this->create_publisher<PoseWithCovarianceStamped>("/initialpose", 10);

    cli_clear_route = this->create_client<ClearRoute>("/planning/mission_planning/clear_route");
    cli_set_route_points = this->create_client<SetRoutePoints>("/planning/mission_planning/set_route_points");
    cli_set_operation_mode = this->create_client<ChangeOperationMode>("/system/operation_mode/change_operation_mode");
    cli_set_autoware_control = this->create_client<ChangeAutowareControl>("/system/operation_mode/change_autoware_control");

    sub_autoware_state = this->create_subscription<AutowareState>(
      "/autoware/state", 10, std::bind(&Test07::autoware_state_callback, this, std::placeholders::_1));
    sub_route_state = this->create_subscription<RouteState>(
      "/planning/mission_planning/route_state", 10, std::bind(&Test07::route_state_callback, this, std::placeholders::_1));

    timer_ = rclcpp::create_timer(
      this, get_clock(), 1000ms, std::bind(&Test07::on_timer, this));

    init_redis_client();
    init_localization();
    init_route_points();
  }

  void Test07::on_timer(){
    if (autoware_state == 1){
      pub_localization();
      RCLCPP_WARN(rclcpp::get_logger("rclcpp"), "Autoware state unset, publishing initial localization...");
    }

    string terasim_state = get_key("terasim_state");
    if (terasim_state == ""){
      pub_localization();
      RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Failed to read terasim state, please try again");
      return;
    }

    int tera_state = stoi(terasim_state);
    if (tera_state == 0){
      clear_route();
      set_autoware_control(false);
      set_operation_mode(STOP);
      RCLCPP_WARN(rclcpp::get_logger("rclcpp"), "Terasim not available, waiting...");
    } else{
      set_route_points();
      set_autoware_control(true);
      set_operation_mode(AUTONOMOUS);
      RCLCPP_WARN(rclcpp::get_logger("rclcpp"), "Setting route points and enable autoware control");
    }
  }

  void Test07::init_redis_client(){
    // Connecting to the Redis server on localhost
    context = redisConnect("127.0.0.1", 6379);

    // handle error
    if (context == NULL || context->err) {
      if (context){
        RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Connect redis error: %d", context->err);
      } else {
        RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Can't allocate redis context");
      }
    } else {
      RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Connected to redis server at 127.0.0.1:6379");
    }
  }

  string Test07::get_key(string key){
    // GET key
    redisReply *reply = (redisReply *)redisCommand(context, "GET %s", key.c_str());
    string result = "";
    if (reply->type == REDIS_REPLY_STRING)
      result = reply->str;
    return result;
  }

  void Test07::init_localization(){
    localization_msg.pose.pose.position.x = 77556.03125;
    localization_msg.pose.pose.position.y = 86623.046875;

    localization_msg.pose.pose.orientation.x = 0.0;
    localization_msg.pose.pose.orientation.y = 0.0;
    localization_msg.pose.pose.orientation.z = 0.7818829738767389;
    localization_msg.pose.pose.orientation.w = 0.6234252282043669;
  }

  void Test07::init_route_points(){
    wp0.position.x = 77557.875;
    wp0.position.y = 86747.5;
    wp0.position.z = 0.0;

    wp0.orientation.x = 0.0;
    wp0.orientation.y = 0.0;
    wp0.orientation.z = 0.6861936955947625;
    wp0.orientation.w = 0.727418869789616;
  }

  void Test07::pub_localization(){
    localization_msg.header.stamp = this->get_clock()->now();
    localization_msg.header.frame_id = "map";
    pub_local->publish(localization_msg);
  }

  void Test07::clear_route(){
    while (!cli_clear_route->wait_for_service(1s)) {
      if (!rclcpp::ok()) {
        RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Interrupted while waiting for the service. Exiting.");
      }
      RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "routing service not available, waiting again...");
    }

    auto req = std::make_shared<ClearRoute::Request>();
    auto result_c =cli_clear_route->async_send_request(req);

    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Clearing existing route...");
  }

  void Test07::set_route_points(){
    while (!cli_set_route_points->wait_for_service(1s)) {
      if (!rclcpp::ok()) {
        RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Interrupted while waiting for the service. Exiting.");
      }
      RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "routing service not available, waiting again...");
    }

    auto set_route_points_req = std::make_shared<SetRoutePoints::Request>();

    set_route_points_req->header.frame_id = "map";
    set_route_points_req->goal = wp0;
    // set_route_points_req->waypoints = {wp0, wp1, wp2, wp3};

    auto result_s = cli_set_route_points->async_send_request(set_route_points_req);
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Setting new route...");
  }

  void Test07::set_operation_mode(uint8_t mode){
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

  void Test07::set_autoware_control(bool autoware_control){
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

  void Test07::autoware_state_callback(AutowareState::SharedPtr msg){
    autoware_state = msg->state;
  }

  void Test07::route_state_callback(RouteState::SharedPtr msg){
    route_state_msg = *msg;
  }
}

RCLCPP_COMPONENTS_REGISTER_NODE(test_07::Test07)
