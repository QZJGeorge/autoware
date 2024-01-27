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

#ifndef MCITY_TERASIM__CARLA_TO_LOCAL__HPP_
#define MCITY_TERASIM__CARLA_TO_LOCAL__HPP_

#include <GeographicLib/UTMUPS.hpp>
#include <GeographicLib/MGRS.hpp>

#include <nlohmann/json.hpp>
#include <hiredis/hiredis.h>

#include <glm/glm.hpp>
#include <glm/gtc/quaternion.hpp>
#include <glm/gtx/quaternion.hpp>
#include <glm/gtc/matrix_transform.hpp>

#include <iostream>
#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/header.hpp>
#include <sensor_msgs/msg/imu.hpp>
#include <geometry_msgs/msg/twist_stamped.hpp>
#include <geometry_msgs/msg/pose_with_covariance_stamped.hpp>
#include <geometry_msgs/msg/twist_with_covariance_stamped.hpp>
#include <rclcpp_components/register_node_macro.hpp>


namespace carla_to_local
{
    
using namespace std;
using namespace GeographicLib;

using nlohmann::json;
using std_msgs::msg::Header;
using sensor_msgs::msg::Imu;
using geometry_msgs::msg::PoseWithCovarianceStamped;
using geometry_msgs::msg::TwistWithCovarianceStamped;


class CarlaToLocal : public rclcpp::Node
{
public:
  explicit CarlaToLocal(const rclcpp::NodeOptions & options);
  ~CarlaToLocal() = default;

private:
  rclcpp::Publisher<Imu>::SharedPtr pub_imu;
  rclcpp::Publisher<PoseWithCovarianceStamped>::SharedPtr pub_pose;
  rclcpp::Publisher<TwistWithCovarianceStamped>::SharedPtr pub_twist;

  rclcpp::TimerBase::SharedPtr timer_;

  redisContext *context;

  Header header;

  std::array<double, 36> Identity_6 =
  {
    1.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 
    0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 
    0.0, 0.0, 0.0, 1.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 
    0.0, 0.0, 0.0, 0.0, 0.0, 1.0
  };

  std::array<double, 36> Identity_Min_6 =
  {
    0.001, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.001, 0.0, 0.0, 0.0, 0.0, 
    0.0, 0.0, 0.001, 0.0, 0.0, 0.0, 
    0.0, 0.0, 0.0, 0.001, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.001, 0.0, 
    0.0, 0.0, 0.0, 0.0, 0.0, 0.001
  };

  Imu imu_msg;
  PoseWithCovarianceStamped pose_with_cov_msg;
  TwistWithCovarianceStamped twist_with_cov_msg;

  void init_redis_client();
  void pub_localization();
  void calc_vehicle_orientation(float &qx, float &qy, float &qz, float &qw);
  void eulerToQuaternion(double roll, double pitch, double yaw,
                        double& qx, double& qy, double& qz, double& qw);
  void gcs_to_mgrs(double lat, double lon, double &easting, double &northing);
                        
  string get_key(string key);
  
  float calc_linear_x();

};

}
#endif