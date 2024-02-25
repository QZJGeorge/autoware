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

    init_redis_client();
    init_localization();
    init_route_points();
  }

  void AutowareInterfaceCosim::on_timer(){
    if (autoware_state == 0){
      RCLCPP_WARN(rclcpp::get_logger("rclcpp"), "Waiting for autoware to start up..");
      return;
    } else if (autoware_state == 1){
      pub_localization();
      RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Publishing initial localization...");
    } else if (autoware_state == 2){
      set_route_points();
      RCLCPP_WARN(rclcpp::get_logger("rclcpp"), "Setting goal point...");
    } else if (autoware_state == 4){
      string terasim_status = get_key("terasim_status");
      if (terasim_status == "" || terasim_status == "0"){
        RCLCPP_WARN(rclcpp::get_logger("rclcpp"), "Terasim not available, waiting...");
      } else{
        set_autoware_control(true);
        set_operation_mode(AUTONOMOUS);
        RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Enabling autoware control...");
      }
    }
  }

  void AutowareInterfaceCosim::init_localization(){
    localization_msg.pose.pose.position.x = 77638.703125;
    localization_msg.pose.pose.position.y = 86530.3984375;

    localization_msg.pose.pose.orientation.x = 0.0;
    localization_msg.pose.pose.orientation.y = 0.0;
    localization_msg.pose.pose.orientation.z = 0.1351410441129879;
    localization_msg.pose.pose.orientation.w = 0.9908263713668765;
  }

  void AutowareInterfaceCosim::init_route_points(){
    wp0.position.x = 77655.625;
    wp0.position.y = 86757.359375;
    wp0.position.z = 0.0;

    wp0.orientation.x = 0.0;
    wp0.orientation.y = 0.0;
    wp0.orientation.z = 0.6900613220973807;
    wp0.orientation.w = 0.72375090448663;

    wp1.position.x = 77715.765625;
    wp1.position.y = 86862.0390625;
    wp1.position.z = 0.0;

    wp1.orientation.x = 0.0;
    wp1.orientation.y = 0.0;
    wp1.orientation.z = 0.6681716444489322;
    wp1.orientation.w = 0.7440071596123318;

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
  }

  void AutowareInterfaceCosim::pub_localization(){
    localization_msg.header.stamp = this->get_clock()->now();
    localization_msg.header.frame_id = "map";
    pub_local->publish(localization_msg);
  }

  void AutowareInterfaceCosim::set_route_points(){
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

  void AutowareInterfaceCosim::init_redis_client(){
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

  string AutowareInterfaceCosim::get_key(string key){
    // GET key
    redisReply *reply = (redisReply *)redisCommand(context, "GET %s", key.c_str());
    string result = "";
    if (reply->type == REDIS_REPLY_STRING)
      result = reply->str;
    return result;
  }
}

RCLCPP_COMPONENTS_REGISTER_NODE(autoware_interface_cosim::AutowareInterfaceCosim)
