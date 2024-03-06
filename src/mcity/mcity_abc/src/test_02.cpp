// Copyright 2029 Autoware Foundation
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

#include "test_02.hpp"

namespace test_02{

  Test02::Test02(const rclcpp::NodeOptions & options)
  : Node("test_02", options)
  {
    pub_goal = this->create_publisher<PoseStamped>("/planning/mission_planning/goal", 10);
    pub_local = this->create_publisher<PoseWithCovarianceStamped>("/initialpose", 10);

    cli_set_operation_mode = this->create_client<ChangeOperationMode>("/system/operation_mode/change_operation_mode");
    cli_set_autoware_control = this->create_client<ChangeAutowareControl>("/system/operation_mode/change_autoware_control");

    sub_autoware_state = this->create_subscription<AutowareState>(
      "/autoware/state", 10, std::bind(&Test02::autoware_state_callback, this, std::placeholders::_1));

    timer_ = rclcpp::create_timer(
      this, get_clock(), 1000ms, std::bind(&Test02::on_timer, this));

    init_redis_client();
  }

  void Test02::on_timer(){
    if (autoware_state == 0){
      RCLCPP_WARN(rclcpp::get_logger("rclcpp"), "Waiting for autoware to start up..");
      return;
    } else if (autoware_state == 1){
      publish_localization();
      RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Publishing initial localization...");
    } else if (autoware_state == 2){
      publish_goal();
      RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Setting goal point...");
    } else if (autoware_state == 4){
      string terasim_status = get_key("terasim_status");
      if (terasim_status == "" || terasim_status == "0"){
        RCLCPP_WARN(rclcpp::get_logger("rclcpp"), "Terasim not available, waiting...");
      } 
      else{
        set_autoware_control(true);
        set_operation_mode(AUTONOMOUS);
        RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Enabling autoware control...");
      }
    }
  }

  void Test02::publish_localization(){
    localization_msg.pose.pose.position.x = 77645.28125;
    localization_msg.pose.pose.position.y = 86593.59375;

    localization_msg.pose.pose.orientation.x = 0.0;
    localization_msg.pose.pose.orientation.y = 0.0;
    localization_msg.pose.pose.orientation.z = 0.6913908193836614;
    localization_msg.pose.pose.orientation.w = 0.7224809581379908;

    localization_msg.header.stamp = this->get_clock()->now();
    localization_msg.header.frame_id = "map";

    pub_local->publish(localization_msg);
  }

  void Test02::publish_goal(){
    goal_msg.pose.position.x = 77655.609375;
    goal_msg.pose.position.y = 86834.976562;

    goal_msg.pose.orientation.x = 0.0;
    goal_msg.pose.orientation.y = 0.0;
    goal_msg.pose.orientation.z = 0.6937102340784699;
    goal_msg.pose.orientation.w = 0.7202541989706096;

    goal_msg.header.stamp = this->get_clock()->now();
    goal_msg.header.frame_id = "map";

    pub_goal->publish(goal_msg);
  }

  void Test02::set_operation_mode(uint8_t mode){
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

  void Test02::set_autoware_control(bool autoware_control){
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

  void Test02::autoware_state_callback(AutowareState::SharedPtr msg){
    autoware_state = msg->state;
  }

  void Test02::init_redis_client(){
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

  string Test02::get_key(string key){
    // GET key
    redisReply *reply = (redisReply *)redisCommand(context, "GET %s", key.c_str());
    string result = "";
    if (reply->type == REDIS_REPLY_STRING)
      result = reply->str;
    return result;
  }
}

RCLCPP_COMPONENTS_REGISTER_NODE(test_02::Test02)
