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

#include "sumo_autoware_cosim.hpp"

namespace sumo_autoware_cosim{

  SumoAutowareCosim::SumoAutowareCosim(const rclcpp::NodeOptions & options)
  : Node("sumo_autoware_cosim", options)
  {
    pub_local = this->create_publisher<PoseWithCovarianceStamped>("/initialpose", 10);

    cli_clear_route = this->create_client<ClearRoute>("/planning/mission_planning/clear_route");
    cli_set_route_points = this->create_client<SetRoutePoints>("/planning/mission_planning/set_route_points");
    cli_set_operation_mode = this->create_client<ChangeOperationMode>("/system/operation_mode/change_operation_mode");

    sub_route_state = this->create_subscription<RouteState>(
      "/planning/mission_planning/route_state", 10, std::bind(&SumoAutowareCosim::route_state_callback, this, std::placeholders::_1));

    timer_ = rclcpp::create_timer(
      this, get_clock(), 500ms, std::bind(&SumoAutowareCosim::on_timer, this));

    init_redis_client();
    init_localization();
    init_route_points();
  }

  void SumoAutowareCosim::on_timer(){
    string terasim_state = get_key("terasim_state");
    if (terasim_state == ""){
      pub_localization();
      RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "failed to read terasim state, please try again");
      return;
    }

    int state = stoi(terasim_state);
    if (state == 0){
      pub_localization();

      if (route_state_msg.state != UNSET){
        clear_route();
      }
      set_operation_mode(STOP);
    } else{
      if (route_state_msg.state != SET){
        set_route_points();
      }
      set_operation_mode(AUTONOMOUS);
    }
  }

  void SumoAutowareCosim::init_redis_client(){
    // Connecting to the Redis server on localhost
    context = redisConnect("127.0.0.1", 6379);

    // handle error
    if (context == NULL || context->err) {
      if (context){
        cout << "Error: " << context->errstr << endl;
      } else {
        std::cout << "Can't allocate redis context" << endl;
      }
    } else {
      cout << "Connected to redis server at 127.0.0.1:6379" << endl;
    }
  }

  string SumoAutowareCosim::get_key(string key){
    // GET key
    redisReply *reply = (redisReply *)redisCommand(context, "GET %s", key.c_str());
    string result = "";
    if (reply->type == REDIS_REPLY_STRING)
      result = reply->str;
    return result;
  }

  void SumoAutowareCosim::init_localization(){
    localization_msg.pose.pose.position.x = 77603.84375;
    localization_msg.pose.pose.position.y = 86526.0625;

    localization_msg.pose.pose.orientation.x = 0.0;
    localization_msg.pose.pose.orientation.y = 0.0;
    localization_msg.pose.pose.orientation.z = 0.18735418183937574;
    localization_msg.pose.pose.orientation.w = 0.9822924261885043;
  }

  void SumoAutowareCosim::init_route_points(){
    wp0.position.x = 77656.75;
    wp0.position.y = 86778.1953125;
    wp0.position.z = 0.0;

    wp0.orientation.x = 0.0;
    wp0.orientation.y = 0.0;
    wp0.orientation.z = 0.6845353431369396;
    wp0.orientation.w = 0.7289796732395165;

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

    wp4.position.x = 77538.734375;
    wp4.position.y = 86518.5390625;
    wp4.position.z = 0.0;

    wp4.orientation.x = 0.0;
    wp4.orientation.y = 0.0;
    wp4.orientation.z = 0.06457478852556715;
    wp4.orientation.w = 0.9979128702882223;
  }

  void SumoAutowareCosim::pub_localization(){
    localization_msg.header.stamp = this->get_clock()->now();
    localization_msg.header.frame_id = "map";
    pub_local->publish(localization_msg);
  }

  void SumoAutowareCosim::clear_route(){
    while (!cli_clear_route->wait_for_service(1s)) {
      if (!rclcpp::ok()) {
        RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Interrupted while waiting for the service. Exiting.");
      }
      RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "routing service not available, waiting again...");
    }

    auto req = std::make_shared<ClearRoute::Request>();
    auto result_c =cli_clear_route->async_send_request(req);
    cout << "clearing existing route..." << endl;
  }

  void SumoAutowareCosim::set_route_points(){
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
  }

  void SumoAutowareCosim::set_operation_mode(uint8_t mode){
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

  void SumoAutowareCosim::route_state_callback(RouteState::SharedPtr msg){
    route_state_msg = *msg;
    auto state = route_state_msg.state;

    if (state == UNKNOWN){
      cout << "route state: unknown" << endl;
    } else if (state == UNSET){
      cout << "route state: unset" << endl;
    } else if (state == SET){
      cout << "route state: set" << endl;
    } else if (state == ARRIVED){
      cout << "route state: arrived" << endl;
    } else if (state == CHANGING){
      cout << "route state: changing" << endl;
    }
  }

  // void SumoAutowareCosim::mode_state_callback(OperationModeState::SharedPtr msg){
  //   operation_mode_msg = *msg;
  //   cout << "current operation mode: " << operation_mode_msg.mode << endl;
  // }
}

RCLCPP_COMPONENTS_REGISTER_NODE(sumo_autoware_cosim::SumoAutowareCosim)
