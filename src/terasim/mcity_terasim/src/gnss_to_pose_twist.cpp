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

#include "gnss_to_pose_twist.hpp"

namespace gnss_to_pose_twist{
  GnssToPoseTwist::GnssToPoseTwist(const rclcpp::NodeOptions & options)
  : Node("gnss_to_pose_twist", options)
  {
    pub_imu = this->create_publisher<Imu>("/sensing/imu/imu_data", 10);
    pub_pose = this->create_publisher<PoseWithCovarianceStamped>("/localization/pose_estimator/pose_with_covariance", 10);
    pub_twist = this->create_publisher<TwistWithCovarianceStamped>("/sensing/vehicle_velocity_converter/twist_with_covariance", 10);
    pub_grid = this->create_publisher<OccupancyGrid>("/perception/occupancy_grid_map/map", 10);
    pub_steer = this->create_publisher<SteeringReport>("/vehicle/status/steering_status", 10);
    pub_pred_objects = this->create_publisher<PredictedObjects>("/perception/object_recognition/objects", 10);

    sub_imu = this->create_subscription<Imu>(
      "/ins/imu", 10, std::bind(&GnssToPoseTwist::imu_callback, this, std::placeholders::_1));
    sub_odom = this->create_subscription<Odometry>(
      "/ins/odometry", 10, std::bind(&GnssToPoseTwist::odom_callback, this, std::placeholders::_1));
    sub_nav_sat_fix = this->create_subscription<NavSatFix>(
      "/ins/nav_sat_fix", 10, std::bind(&GnssToPoseTwist::nav_callback, this, std::placeholders::_1));

    timer_ = rclcpp::create_timer(
        this, get_clock(), 20ms, std::bind(&GnssToPoseTwist::pub_localization, this));

    calc_occ_grid();
  }

  float GnssToPoseTwist::calc_linear_x(){
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

  void GnssToPoseTwist::calc_vehicle_orientation(float &qx, float &qy, float &qz, float &qw){
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

    saved_imu_msg.orientation.x = qx = quat.x;
    saved_imu_msg.orientation.y = qy = quat.y;
    saved_imu_msg.orientation.z = qz = quat.z;
    saved_imu_msg.orientation.w = qw = quat.w;

    // // The following is for debugging purpose only
    // // roll (x-axis rotation)
    // double sinr_cosp = 2 * (qw * qx + qy * qz);
    // double cosr_cosp = 1 - 2 * (qx * qx + qy * qy);
    // double roll_ori = std::atan2(sinr_cosp, cosr_cosp);
    // // pitch (y-axis rotation)
    // double sinp = std::sqrt(1 + 2 * (qw * qy - qx * qz));
    // double cosp = std::sqrt(1 - 2 * (qw * qy - qx * qz));
    // double pitch_ori = 2 * std::atan2(sinp, cosp) - M_PI / 2;
    // // yaw (z-axis rotation)
    // double siny_cosp = 2 * (qw * qz + qx * qy);
    // double cosy_cosp = 1 - 2 * (qy * qy + qz * qz);
    // double yaw_ori = std::atan2(siny_cosp, cosy_cosp);
    // // print out the orientation
    // RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "roll_ori: %f", roll_ori);
    // RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "pitch_ori: %f", pitch_ori);
    // RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "yaw_ori: %f", yaw_ori);
  }

  void GnssToPoseTwist::imu_callback(Imu::SharedPtr msg){
    saved_imu_msg = *msg;
    imu_status = 1;
  }

  void GnssToPoseTwist::odom_callback(Odometry::SharedPtr msg){
    saved_odom_msg = *msg;
    odom_status = 1;
  }

  void GnssToPoseTwist::nav_callback(NavSatFix::SharedPtr msg){
    saved_nav_sat_fix_msg = *msg;
    nav_status = 1;
  }

  void gcs_to_mgrs(double lat, double lon, double &easting, double &northing){
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

  void GnssToPoseTwist::calc_occ_grid(){
    grid_msg.info.resolution = 1.0; // Set resolution
    grid_msg.info.width = 100; // Set width
    grid_msg.info.height = 100; // Set height
    grid_msg.data = std::vector<int8_t>(grid_msg.info.width * grid_msg.info.height, 0); // Set all spaces as free
  }

  void GnssToPoseTwist::pub_localization(){
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

    pose_with_cov.pose.pose.position.z = (float)0.0;

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

    steer_msg.stamp = this->get_clock()->now();
    steer_msg.steering_tire_angle = 0.0;

    pose_with_cov.header = header;
    twist_with_cov.header = header;
    saved_imu_msg.header = header;
    pred_objects_msg.header = header;

    pub_imu->publish(saved_imu_msg);
    pub_pose->publish(pose_with_cov);
    pub_twist->publish(twist_with_cov);
    pub_grid->publish(grid_msg);
    pub_pred_objects->publish(pred_objects_msg);
    pub_steer->publish(steer_msg);

    imu_status = 0;
    nav_status = 0;
    odom_status = 0;
  }
}

RCLCPP_COMPONENTS_REGISTER_NODE(gnss_to_pose_twist::GnssToPoseTwist)
