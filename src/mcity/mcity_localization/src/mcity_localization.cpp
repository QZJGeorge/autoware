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

#include <mcity_localization.hpp>

namespace mcity_localization{
  McityLocalization::McityLocalization(const rclcpp::NodeOptions & options)
  : Node("mcity_localization", options)
  {
    pub_imu = this->create_publisher<Imu>("/sensing/imu/imu_data", 10);
    pub_pose = this->create_publisher<PoseWithCovarianceStamped>("/localization/pose_estimator/pose_with_covariance", 10);
    pub_twist = this->create_publisher<TwistWithCovarianceStamped>("/sensing/vehicle_velocity_converter/twist_with_covariance", 10);

    sub_imu = this->create_subscription<Imu>(
      "/ins/imu", 10, std::bind(&McityLocalization::imu_callback, this, std::placeholders::_1));
    sub_odom = this->create_subscription<Odometry>(
      "/ins/odometry", 10, std::bind(&McityLocalization::odom_callback, this, std::placeholders::_1));
    sub_nav_sat_fix = this->create_subscription<NavSatFix>(
      "/ins/nav_sat_fix", 10, std::bind(&McityLocalization::nav_callback, this, std::placeholders::_1));

    timer_ = rclcpp::create_timer(
        this, get_clock(), 20ms, std::bind(&McityLocalization::on_timer, this));
  }

  void McityLocalization::on_timer(){
    // messages have not been updated
    if (imu_status == 0 || nav_status == 0 || odom_status == 0){
        return;
    }

    header.stamp = this->get_clock()->now();
    header.frame_id = "map";

    double latitude = saved_nav_sat_fix_msg.latitude;
    double longitude = saved_nav_sat_fix_msg.longitude;

    double easting, northing;
    gcs_to_mgrs(latitude, longitude, easting, northing);

    pose_with_cov.pose.pose.position.x = (float)easting;
    pose_with_cov.pose.pose.position.y = (float)northing;
    pose_with_cov.pose.pose.position.z = (float)0.7;

    float qx, qy, qz, qw;
    calc_vehicle_orientation(qx, qy, qz, qw);

    pose_with_cov.pose.pose.orientation.x = qx;
    pose_with_cov.pose.pose.orientation.y = qy;
    pose_with_cov.pose.pose.orientation.z = qz;
    pose_with_cov.pose.pose.orientation.w = qw;

    twist_with_cov.twist.twist.linear.x = calc_linear_x();

    // initialize the 6*6 covariance matrix [x,y,z,rot-x,rot-y,rot-z] to identity
    pose_with_cov.pose.covariance = Identity_6;
    twist_with_cov.twist.covariance = Identity_6;

    // include the 3x3 [x,y,z] position covariance matrix into and set no correlation between position and orientation
    pose_with_cov.pose.covariance[0] = saved_nav_sat_fix_msg.position_covariance[0];
    pose_with_cov.pose.covariance[1] = saved_nav_sat_fix_msg.position_covariance[1];
    pose_with_cov.pose.covariance[2] = saved_nav_sat_fix_msg.position_covariance[2];
    pose_with_cov.pose.covariance[6] = saved_nav_sat_fix_msg.position_covariance[3];
    pose_with_cov.pose.covariance[7] = saved_nav_sat_fix_msg.position_covariance[4];
    pose_with_cov.pose.covariance[8] = saved_nav_sat_fix_msg.position_covariance[5];
    pose_with_cov.pose.covariance[12] = saved_nav_sat_fix_msg.position_covariance[6];
    pose_with_cov.pose.covariance[13] = saved_nav_sat_fix_msg.position_covariance[7];
    pose_with_cov.pose.covariance[14] = saved_nav_sat_fix_msg.position_covariance[8];

    pose_with_cov.header = header;
    twist_with_cov.header = header;
    saved_imu_msg.header = header;

    imu_status = 0;
    nav_status = 0;
    odom_status = 0;

    pub_imu->publish(saved_imu_msg);
    pub_pose->publish(pose_with_cov);
    pub_twist->publish(twist_with_cov);
  }

  float McityLocalization::calc_linear_x(){
    double vx = saved_odom_msg.twist.twist.linear.x;
    double vy = saved_odom_msg.twist.twist.linear.y;
    double vz = saved_odom_msg.twist.twist.linear.z;

    float speed = sqrt(vx*vx + vy*vy + vz*vz);

    // filter out noise
    if (speed < 0.05){
      speed = 0.00;
    }
    return speed;
  }

  void McityLocalization::calc_vehicle_orientation(float &qx, float &qy, float &qz, float &qw){
    qx = saved_imu_msg.orientation.x;
    qy = saved_imu_msg.orientation.y;
    qz = saved_imu_msg.orientation.z;
    qw = saved_imu_msg.orientation.w;
    
    // rotate the quaternion by its local axis three times to align the imu's frame with the vehicle's frame
    glm::quat quat = glm::quat(qw,qx,qy,qz);
    glm::quat rotationAroundX = glm::angleAxis(glm::radians(90.0f), glm::vec3(1.0f, 0.0f, 0.0f));
    glm::quat rotationAroundY = glm::angleAxis(glm::radians(-90.0f), glm::vec3(0.0f, 1.0f, 0.0f));
    glm::quat rotationAroundZ = glm::angleAxis(glm::radians(90.0f), glm::vec3(0.0f, 0.0f, 1.0f));

    quat = quat * rotationAroundX * rotationAroundY * rotationAroundZ;

    qx = quat.x;
    qy = quat.y;
    qz = quat.z;
    qw = quat.w;

    saved_imu_msg.orientation.x = quat.x;
    saved_imu_msg.orientation.y = quat.y;
    saved_imu_msg.orientation.z = quat.z;
    saved_imu_msg.orientation.w = quat.w;

    // quaternionToEuler(quat.x, quat.y, quat.z, quat.w);
  }

  void McityLocalization::quaternionToEuler(float qx, float qy, float qz, float qw) {
      // Calculate Euler angles (roll, pitch, and yaw) from the quaternions
      double roll = std::atan2(2.0 * (qw * qx + qy * qz), 1.0 - 2.0 * (qx * qx + qy * qy));
      double pitch = std::asin(2.0 * (qw * qy - qz * qx));
      double yaw = std::atan2(2.0 * (qw * qz + qx * qy), 1.0 - 2.0 * (qy * qy + qz * qz));

      // Convert from radians to degrees, if necessary
      roll *= 180.0 / M_PI;
      pitch *= 180.0 / M_PI;
      yaw *= 180.0 / M_PI;

      // Log the Euler angles
      RCLCPP_INFO(rclcpp::get_logger("mcity_localization"), "Roll: %f, Pitch: %f, Yaw: %f", roll, pitch, yaw);
  }

  void McityLocalization::gcs_to_mgrs(double lat, double lon, double &easting, double &northing){
    int zone;
    bool northp;
    double x, y;
    int prec = 9;
    string mgrs;
    
    UTMUPS::Forward(lat, lon, zone, northp, x, y);
    MGRS::Forward(zone, northp, x, y, lat, prec, mgrs);

    int easting_int = std::stoi(mgrs.substr(5,9));
    int northing_int = std::stoi(mgrs.substr(14,9));

    easting = easting_int/pow(10, 4);
    northing = northing_int/pow(10, 4);
  }

  void McityLocalization::imu_callback(Imu::SharedPtr msg){
    saved_imu_msg = *msg;
    imu_status = 1;
  }

  void McityLocalization::odom_callback(Odometry::SharedPtr msg){
    saved_odom_msg = *msg;
    odom_status = 1;
  }

  void McityLocalization::nav_callback(NavSatFix::SharedPtr msg){
    saved_nav_sat_fix_msg = *msg;
    nav_status = 1;
  }
}

RCLCPP_COMPONENTS_REGISTER_NODE(mcity_localization::McityLocalization)
