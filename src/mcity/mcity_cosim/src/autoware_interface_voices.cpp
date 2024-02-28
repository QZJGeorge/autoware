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

#include <autoware_interface_voices.hpp>

namespace autoware_interface_voices{

  AutowareInterfaceVoices::AutowareInterfaceVoices(const rclcpp::NodeOptions & options)
  : Node("autoware_interface_voices", options)
  {
    pub_local = this->create_publisher<PoseWithCovarianceStamped>("/initialpose", 10);
    sub_autoware_state = this->create_subscription<AutowareState>(
      "/autoware/state", 10, std::bind(&AutowareInterfaceVoices::autoware_state_callback, this, std::placeholders::_1));
    sub_ego_odom = this->create_subscription<Odometry>(
      "/localization/kinematic_state", 10, std::bind(&AutowareInterfaceVoices::odom_callback, this, std::placeholders::_1));

    cli_set_route_points = this->create_client<SetRoutePoints>("/planning/mission_planning/set_route_points");
    cli_set_operation_mode = this->create_client<ChangeOperationMode>("/system/operation_mode/change_operation_mode");
    cli_set_autoware_control = this->create_client<ChangeAutowareControl>("/system/operation_mode/change_autoware_control");

    timer_ = rclcpp::create_timer(
      this, get_clock(), 1000ms, std::bind(&AutowareInterfaceVoices::on_timer, this));

    init_redis_client();
  }

  void AutowareInterfaceVoices::on_timer(){
    if (autoware_state == 0){
      RCLCPP_WARN(rclcpp::get_logger("rclcpp"), "Waiting for autoware to start up..");
      return;
    } else if (autoware_state == 1){
      init_localization();
      RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Publishing initial localization...");
    } else if (autoware_state == 2){
        set_route_points();
        RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Setting route points...");
    } else if (autoware_state == 4){
      string terasim_status = get_key("terasim_status");
      if (terasim_status == "" || terasim_status == "0"){
        RCLCPP_WARN(rclcpp::get_logger("rclcpp"), "Terasim not available, waiting...");
      } 
      // else{
      //   set_autoware_control(true);
      //   set_operation_mode(AUTONOMOUS);
      //   RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Enabling autoware control...");
      // }
    }
  }

  void AutowareInterfaceVoices::init_localization(){
    PoseWithCovarianceStamped localization_msg;

    localization_msg.pose.pose.position.x = 77663.359375;
    localization_msg.pose.pose.position.y = 86904.6171875;

    localization_msg.pose.pose.orientation.x = 0.0;
    localization_msg.pose.pose.orientation.y = 0.0;
    localization_msg.pose.pose.orientation.z = 0.9958484575054507;
    localization_msg.pose.pose.orientation.w = 0.09102664271527604;

    localization_msg.header.stamp = this->get_clock()->now();
    localization_msg.header.frame_id = "map";

    pub_local->publish(localization_msg);
  }

  void AutowareInterfaceVoices::set_route_points(){
    while (!cli_set_route_points->wait_for_service(1s)) {
      if (!rclcpp::ok()) {
        RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Interrupted while waiting for the service. Exiting.");
      }
      RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "routing service not available, waiting again...");
    }

    auto set_route_points_req = std::make_shared<SetRoutePoints::Request>();

    wp0.position.x = 77591.7109375;
    wp0.position.y = 86607.234375;
    wp0.position.z = 0.0;

    wp0.orientation.x = 0.0;
    wp0.orientation.y = 0.0;
    wp0.orientation.z = -0.9662077634526249;
    wp0.orientation.w = 0.2577645395392397;

    wp1.position.x = 77557.86440452958;
    wp1.position.y = 86753.16055185757;
    wp1.position.z = 0.0;

    wp1.orientation.x = 0.0;
    wp1.orientation.y = 0.0;
    wp1.orientation.z = -0.6901563927517875;
    wp1.orientation.w = -0.7236602473148849;

    wp2.position.x = 77598.5703125;
    wp2.position.y = 86809.1953125;
    wp2.position.z = 0.0;

    wp2.orientation.x = 0.0;
    wp2.orientation.y = 0.0;
    wp2.orientation.z = -0.03636267383050546;
    wp2.orientation.w = 0.999338659290181;

    set_route_points_req->header.frame_id = "map";
    set_route_points_req->goal = wp2;
    set_route_points_req->waypoints = {wp0, wp1};

    auto result_s = cli_set_route_points->async_send_request(set_route_points_req);
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Setting new route...");
  }

  void AutowareInterfaceVoices::set_operation_mode(uint8_t mode){
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

  void AutowareInterfaceVoices::set_autoware_control(bool autoware_control){
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

  void AutowareInterfaceVoices::autoware_state_callback(AutowareState::SharedPtr msg){
    autoware_state = msg->state;
  }

  void AutowareInterfaceVoices::odom_callback(Odometry::SharedPtr msg){
    odom_msg = *msg;
  }

  void AutowareInterfaceVoices::init_redis_client(){
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

  string AutowareInterfaceVoices::get_key(string key){
    // GET key
    redisReply *reply = (redisReply *)redisCommand(context, "GET %s", key.c_str());
    string result = "";
    if (reply->type == REDIS_REPLY_STRING)
      result = reply->str;
    return result;
  }
}

RCLCPP_COMPONENTS_REGISTER_NODE(autoware_interface_voices::AutowareInterfaceVoices)
