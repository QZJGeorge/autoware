//  Copyright 2022 Tier IV, Inc. All rights reserved.
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.

#ifndef MCITY_TERASIM__CAX_CONTEXT_CONVERTER_HPP_
#define MCITY_TERASIM__CAX_CONTEXT_CONVERTER_HPP_

#include <cmath>
#include <string>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <algorithm>
#include <nlohmann/json.hpp>
#include <hiredis/hiredis.h>
#include <GeographicLib/MGRS.hpp>

#include <rclcpp/rclcpp.hpp>
#include <nav_msgs/msg/odometry.hpp>
#include <rclcpp_components/register_node_macro.hpp>
#include <geometry_msgs/msg/pose_with_covariance.hpp>
#include <geometry_msgs/msg/twist_with_covariance.hpp>
#include <autoware_auto_perception_msgs/msg/shape.hpp>
#include <autoware_auto_perception_msgs/msg/object_classification.hpp>
#include <autoware_auto_perception_msgs/msg/detected_object.hpp>
#include <autoware_auto_perception_msgs/msg/detected_objects.hpp>

namespace sumo_background_vehicle_converter
{
    
using namespace std;

using nlohmann::json;
using nav_msgs::msg::Odometry;
using geometry_msgs::msg::PoseWithCovariance;
using geometry_msgs::msg::TwistWithCovariance;
using autoware_auto_perception_msgs::msg::Shape;
using autoware_auto_perception_msgs::msg::ObjectClassification;
using autoware_auto_perception_msgs::msg::DetectedObject;
using autoware_auto_perception_msgs::msg::DetectedObjects;

class SumoBackgroundVehicleConverter : public rclcpp::Node
{
public:
  explicit SumoBackgroundVehicleConverter(const rclcpp::NodeOptions & options);
  ~SumoBackgroundVehicleConverter() = default;

private:
  uint8_t BOUNDING_BOX=0;
  uint8_t CYLINDER=1;
  uint8_t POLYGON=2;

  rclcpp::TimerBase::SharedPtr timer_;
  rclcpp::Publisher<DetectedObjects>::SharedPtr pub_detected_objects;

  redisContext *context;

  DetectedObjects detected_objects_msg;

  string last_cav_context_vehicle_info_ros;

  void on_timer();
  void init_redis_client();
  void set_key(string key, string value);
  void update_bv_in_autoware_sim(string bv_key, string bv_value);

  double get_ori_from_odom(Odometry::SharedPtr msg);
  bool in_range(string cav_value, string bv_value);

  string get_key(string key);
  string get_mgrs_from_odom(Odometry::SharedPtr msg);
  string get_cav_ego_speed_ros(double velocity);
  string get_cav_ego_positionheading_ros(double lat, double lon, double yaw);
  string post_process_cav_context_vehicle_info_ros(string cav_context_vehicle_info_ros);

  geometry_msgs::msg::PoseWithCovariance get_pose_with_varience(nlohmann::json bv_value_json);
  geometry_msgs::msg::TwistWithCovariance get_twist_with_varience(nlohmann::json bv_value_json);
  autoware_auto_perception_msgs::msg::Shape get_shape(nlohmann::json bv_value_json);
  autoware_auto_perception_msgs::msg::ObjectClassification get_classification(string bv_key);
};

}

#endif