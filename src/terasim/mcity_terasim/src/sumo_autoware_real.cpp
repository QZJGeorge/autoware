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

#include "sumo_autoware_real.hpp"

namespace sumo_autoware_real{

  SumoAutowareReal::SumoAutowareReal(const rclcpp::NodeOptions & options)
  : Node("sumo_autoware_real", options)
  {
    sub_autoware_state = this->create_subscription<AutowareState>(
      "/autoware/state", 10, std::bind(&SumoAutowareReal::autoware_state_callback, this, std::placeholders::_1));

    cli_set_route_points = this->create_client<SetRoutePoints>("/planning/mission_planning/set_route_points");

    timer_ = rclcpp::create_timer(
      this, get_clock(), 1000ms, std::bind(&SumoAutowareReal::on_timer, this));

    // init_redis_client();
    init_route_points();
  }

  void SumoAutowareReal::on_timer(){
    // string terasim_status = get_key("terasim_status");
    // if (terasim_status == "" || terasim_status == "0"){
    //   RCLCPP_WARN(rclcpp::get_logger("rclcpp"), "Terasim not available, waiting...");
    //   return;
    // }

    // if (autoware_state == 0){
    //   RCLCPP_WARN(rclcpp::get_logger("rclcpp"), "Waiting for autoware to start up..");
    //   return;
    // } else if (autoware_state == 1){
    //   RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Waiting for GNSS localization...");
    // } else if (autoware_state == 2){
    set_route_points();
    //   RCLCPP_WARN(rclcpp::get_logger("rclcpp"), "Setting route points...");
    // }
  }

  void SumoAutowareReal::init_route_points(){
    wp0.position.x = 77649.625;
    wp0.position.y = 86695.296;
    wp0.position.z = 0.0;

    wp0.orientation.x = 0.0;
    wp0.orientation.y = 0.0;
    wp0.orientation.z = 0.68874525198885;
    wp0.orientation.w = 0.7250034330007105;

    wp1.position.x = 77616.9609375;
    wp1.position.y = 86880.828125;
    wp1.position.z = 0.0;

    wp1.orientation.x = 0.0;
    wp1.orientation.y = 0.0;
    wp1.orientation.z = -0.7423686519969227;
    wp1.orientation.w = 0.6699916301956853;

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

  void SumoAutowareReal::set_route_points(){
    while (!cli_set_route_points->wait_for_service(1s)) {
      if (!rclcpp::ok()) {
        RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Interrupted while waiting for the service. Exiting.");
      }
      RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "routing service not available, waiting again...");
    }

    auto set_route_points_req = std::make_shared<SetRoutePoints::Request>();

    set_route_points_req->header.frame_id = "map";
    set_route_points_req->goal = wp4;
    set_route_points_req->waypoints = {wp3};

    auto result_s = cli_set_route_points->async_send_request(set_route_points_req);
  }

  void SumoAutowareReal::autoware_state_callback(AutowareState::SharedPtr msg){
    autoware_state = msg->state;
  }

  void SumoAutowareReal::init_redis_client(){
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

  string SumoAutowareReal::get_key(string key){
    // GET key
    redisReply *reply = (redisReply *)redisCommand(context, "GET %s", key.c_str());
    string result = "";
    if (reply->type == REDIS_REPLY_STRING)
      result = reply->str;
    return result;
  }
}

RCLCPP_COMPONENTS_REGISTER_NODE(sumo_autoware_real::SumoAutowareReal)
