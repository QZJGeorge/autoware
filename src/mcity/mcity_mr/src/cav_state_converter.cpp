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

#include <cav_state_converter.hpp>

namespace cav_state_converter
{
  CavStateConverter::CavStateConverter(const rclcpp::NodeOptions &options)
      : Node("cav_state_converter", options)
  {
    sub_ego_odom = this->create_subscription<Odometry>(
      "/localization/kinematic_state", 10, std::bind(&CavStateConverter::odom_callback, this, std::placeholders::_1));

    timer_ = rclcpp::create_timer(
        this, get_clock(), 50ms, std::bind(&CavStateConverter::on_timer, this));

    if (!redis_client.connect(true)) {
        RCLCPP_ERROR(this->get_logger(), "Failed to connect to Redis server.");
    } else {
        RCLCPP_INFO(this->get_logger(), "Connected to Redis server.");
    }
  }

  void CavStateConverter::on_timer(){
    if (!odom_status) return;

    int zone = 17;                                 // ann arbor is in zone 17
    // int zone = 18;                                 // us dot is in zone 18

    int prec = 10;                                 // we set conversion precision to 10 decimals
    bool north = true;                             // ann arbor is in northern hemisphere
    double yaw = get_ori_from_odom(saved_odom_msg);           // convert from quaternion to angle
    std::string mgrs = get_mgrs_from_odom(saved_odom_msg);    // get mgrs format string for conversion

    double x, y;
    // Convert the MGRS coordinates to UTM coordinates
    GeographicLib::MGRS::Reverse(mgrs, zone, north, x, y, prec);

    json av_state;

    av_state["x"] = x;
    av_state["y"] = y;
    av_state["orientation"] = yaw;
    av_state["resolution"] = 0.1;
    av_state["velocity"] = saved_odom_msg.twist.twist.linear.x;

    auto now = rclcpp::Clock().now();
    av_state["timestamp"] = now.seconds();

    redis_client.set("av_state", av_state.dump());
    odom_status = false;
  }

  double CavStateConverter::get_ori_from_odom(Odometry msg){
    double quat_x = msg.pose.pose.orientation.x;
    double quat_y = msg.pose.pose.orientation.y;
    double quat_z = msg.pose.pose.orientation.z;
    double quat_w = msg.pose.pose.orientation.w;

    double yaw = std::atan2(2.0 * (quat_w * quat_z + quat_x * quat_y), 1.0 - 2.0 * (quat_y * quat_y + quat_z * quat_z));

    // normalize to the range from -pi to pi
    while(yaw > M_PI) yaw -= 2.*M_PI;
    while(yaw < -M_PI) yaw += 2.*M_PI;

    return yaw;
  }

  string CavStateConverter::get_mgrs_from_odom(Odometry msg){
    std::string ANN_ARBOR = "17TKG";
    // std::string DC = "18SUJ";

    int PRECISION = 4;  // increase precision to 4 decimal place
    int easting = round(msg.pose.pose.position.x * pow(10, PRECISION));   // Your easting coordinate
    int northing = round(msg.pose.pose.position.y * pow(10, PRECISION));  // Your northing coordinate

    std::ostringstream oss1, oss2;

    oss1 << std::setw(9) << std::setfill('0') << easting;
    oss2 << std::setw(9) << std::setfill('0') << northing;

    std::string easting_string = oss1.str();
    std::string northing_string = oss2.str();

    std::string mgrs = ANN_ARBOR + std::to_string(easting) + std::to_string(northing);
    // std::string mgrs = DC + easting_string + northing_string;

    return mgrs;
  }

  void CavStateConverter::odom_callback(Odometry::SharedPtr msg){
    saved_odom_msg = *msg;
    odom_status = true;
  }
}

RCLCPP_COMPONENTS_REGISTER_NODE(cav_state_converter::CavStateConverter)
