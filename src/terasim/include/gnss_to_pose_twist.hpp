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

#ifndef MCITY_PLANNER__GNSS_TO_POSE_TWIST_HPP_
#define MCITY_PLANNER__GNSS_TO_POSE_TWIST_HPP_

#include <iostream>
#include <GeographicLib/UTMUPS.hpp>
#include <GeographicLib/MGRS.hpp>

#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/header.hpp>
#include <nav_msgs/msg/odometry.hpp>
#include <sensor_msgs/msg/imu.hpp>
#include <sensor_msgs/msg/nav_sat_fix.hpp>
#include <geometry_msgs/msg/twist_stamped.hpp>
#include <geometry_msgs/msg/pose_with_covariance_stamped.hpp>
#include <geometry_msgs/msg/twist_with_covariance_stamped.hpp>
#include <rclcpp_components/register_node_macro.hpp>

namespace gnss_to_pose_twist
{
    
using namespace std;
using namespace GeographicLib;

using std_msgs::msg::Header;
using nav_msgs::msg::Odometry;
using sensor_msgs::msg::Imu;
using sensor_msgs::msg::NavSatFix;
using geometry_msgs::msg::PoseWithCovarianceStamped;
using geometry_msgs::msg::TwistWithCovarianceStamped;

class GnssToPoseTwist : public rclcpp::Node
{
public:
  explicit GnssToPoseTwist(const rclcpp::NodeOptions & options);
  ~GnssToPoseTwist() = default;

private:
  rclcpp::Subscription<Imu>::SharedPtr sub_imu;
  rclcpp::Subscription<Odometry>::SharedPtr sub_odom;
  rclcpp::Subscription<NavSatFix>::SharedPtr sub_nav_sat_fix;

  rclcpp::Publisher<Imu>::SharedPtr pub_imu;
  rclcpp::Publisher<PoseWithCovarianceStamped>::SharedPtr pub_pose;
  rclcpp::Publisher<TwistWithCovarianceStamped>::SharedPtr pub_twist;

  rclcpp::TimerBase::SharedPtr timer_;

  bool imu_status = 0;
  bool odom_status = 0;
  bool nav_status = 0;

  Header header;

  Imu saved_imu_msg;
  Odometry saved_odom_msg;
  NavSatFix saved_nav_sat_fix_msg;

  std::array<double, 36> Identity_6 =
  {
    1.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 
    0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 
    0.0, 0.0, 0.0, 1.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 
    0.0, 0.0, 0.0, 0.0, 0.0, 1.0
  };

  PoseWithCovarianceStamped pose_with_cov;
  TwistWithCovarianceStamped twist_with_cov;

  void pub_localization();

  void imu_callback(Imu::SharedPtr msg);
  void odom_callback(Odometry::SharedPtr msg);
  void nav_callback(NavSatFix::SharedPtr msg);

  void calc_vehicle_quaternion(float &qx, float &qy, float &qz, float &qw);

  float calc_linear_x();

};

}
#endif