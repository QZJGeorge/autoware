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

#include "cav_route_planner.hpp"

namespace cav_route_planner{

  CavRoutePlanner::CavRoutePlanner(const rclcpp::NodeOptions & options)
  : Node("cav_route_planner", options)
  {
    cli_set_route_points = this->create_client<SetRoutePoints>("/planning/mission_planning/set_route_points");
    cli_clear_route = this->create_client<ClearRoute>("/planning/mission_planning/clear_route");

    sub_route_state = this->create_subscription<RouteState>(
      "/planning/mission_planning/route_state", 10, std::bind(&CavRoutePlanner::route_state_callback, this, std::placeholders::_1));

    sub_mode_state = this->create_subscription<OperationModeState>(
      "/system/operation_mode/state", 10, std::bind(&CavRoutePlanner::mode_state_callback, this, std::placeholders::_1));

    auto request = std::make_shared<SetRoutePoints::Request>();

    init_route(request);
    send_route(request);
  }

  void CavRoutePlanner::init_route(SetRoutePoints::Request::SharedPtr req){
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

    req->header.frame_id = "map";
    req->goal = wp4;
    req->waypoints = {wp0, wp1, wp2, wp3};
  }

  void CavRoutePlanner::send_route(SetRoutePoints::Request::SharedPtr req){
    while (!cli_set_route_points->wait_for_service(1s) || !cli_clear_route->wait_for_service(1s)) {
      if (!rclcpp::ok()) {
        RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Interrupted while waiting for the service. Exiting.");
      }
      RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "routing service not available, waiting again...");
    }

    auto clear = std::make_shared<ClearRoute::Request>();
    auto result_c =cli_clear_route->async_send_request(clear);
    cout << "clearing existing route..." << endl;
    
    // Wait for the result.
    if (rclcpp::spin_until_future_complete(this->get_node_base_interface(), result_c) ==
      rclcpp::FutureReturnCode::SUCCESS)
    {
      cout << "clear route result: " << result_c.get()->status.success << endl;
    } else {
      RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "failed to access route service");
    }

    cout << "setting new route..." << endl;
    sleep(1.0);

    auto result_s = cli_set_route_points->async_send_request(req);
    // Wait for the result.
    if (rclcpp::spin_until_future_complete(this->get_node_base_interface(), result_s) ==
      rclcpp::FutureReturnCode::SUCCESS)
    {
      cout << "set route result: " << result_s.get()->status.success << endl;
    } else {
      RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "failed to access route service");
    }
  }

  void CavRoutePlanner::route_state_callback(RouteState::SharedPtr msg){
    auto state = msg->state;

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

  void CavRoutePlanner::mode_state_callback(OperationModeState::SharedPtr msg){
      cout << "current operation mode: " << (int)msg->mode << endl;
  }
}

RCLCPP_COMPONENTS_REGISTER_NODE(cav_route_planner::CavRoutePlanner)
