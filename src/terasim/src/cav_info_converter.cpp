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

#include "cav_info_converter.hpp"

namespace cav_info_converter
{

  CavInfoConverter::CavInfoConverter(const rclcpp::NodeOptions &options)
      : Node("cav_info_converter", options)
  {
    sub_ego_odom = this->create_subscription<Odometry>(
      "/localization/kinematic_state", 10, std::bind(&CavInfoConverter::odom_callback, this, std::placeholders::_1));

    init_redis_client();
    signal(SIGINT, handleShutdown);  // Register the signal handler for clearing redis cashe before shutting down node
  }

  double CavInfoConverter::get_ori_from_odom(Odometry::SharedPtr msg){
    double quat_x = msg->pose.pose.orientation.x;
    double quat_y = msg->pose.pose.orientation.y;
    double quat_z = msg->pose.pose.orientation.z;
    double quat_w = msg->pose.pose.orientation.w;

    double yaw = std::atan2(2.0 * (quat_w * quat_z + quat_x * quat_y), 1.0 - 2.0 * (quat_y * quat_y + quat_z * quat_z));

    // normalize to the range from -pi to pi
    while(yaw > M_PI) yaw -= 2.*M_PI;
    while(yaw < -M_PI) yaw += 2.*M_PI;

    return yaw;
  }

  string CavInfoConverter::get_mgrs_from_odom(Odometry::SharedPtr msg){
    std::string ANN_ARBOR = "17TKG";

    int PRECISION = 4;  // increase precision to 4 decimal place
    int easting = round(msg->pose.pose.position.x * pow(10, PRECISION));   // Your easting coordinate
    int northing = round(msg->pose.pose.position.y * pow(10, PRECISION));  // Your northing coordinate

    std::string mgrs = ANN_ARBOR + std::to_string(easting) + std::to_string(northing);
    return mgrs;
  }

  void CavInfoConverter::odom_callback(Odometry::SharedPtr msg){
    int zone = 17;                                 // ann arbor is in zone 17
    int prec = 10;                                 // we set conversion precision to 10 decimals
    bool north = true;                             // ann arbor is in northern hemisphere
    double yaw = get_ori_from_odom(msg);           // convert from quaternion to angle
    std::string mgrs = get_mgrs_from_odom(msg);    // get mgrs format string for conversion

    double lat, lon;
    // Convert the MGRS coordinates to UTM coordinates
    GeographicLib::MGRS::Reverse(mgrs, zone, north, lat, lon, prec);

    json av_state;

    av_state["x"] = lat;
    av_state["y"] = lon;
    av_state["orientation"] = yaw;
    av_state["velocity"] = 0.0;
    av_state["resolution"] = 0.1;

    set_key("av_state", av_state.dump());
    set_key("terasim_time", get_key("terasim_time"));
  }

  void CavInfoConverter::init_redis_client(){
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

  void CavInfoConverter::set_key(string key, string value){
    // SET key
    redisReply *reply = (redisReply *)redisCommand(context, "SET %s %s", key.c_str(), value.c_str());
    if (reply->type == REDIS_REPLY_ERROR){
      RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Redis set key error: %s", key.c_str());
    }
    if (reply->type == REDIS_REPLY_STATUS){

    }
  }

  string CavInfoConverter::get_key(string key){
    // GET key
    redisReply *reply = (redisReply *)redisCommand(context, "GET %s", key.c_str());
    std::string result = "";
    if (reply->type == REDIS_REPLY_STRING)
      result = reply->str;
    return result;
  }
}

RCLCPP_COMPONENTS_REGISTER_NODE(cav_info_converter::CavInfoConverter)
