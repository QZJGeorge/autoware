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

#include "gnss_to_dummy_pose_twist.hpp"

namespace gnss_to_dummy_pose_twist{

  GnssToDummyPoseTwist::GnssToDummyPoseTwist(const rclcpp::NodeOptions & options)
  : Node("gnss_to_dummy_pose_twist", options)
  {
    pub_imu = this->create_publisher<Imu>("/sensing/imu/imu_data", 10);
    pub_pose = this->create_publisher<PoseWithCovarianceStamped>("/localization/pose_estimator/pose_with_covariance", 10);
    pub_twist = this->create_publisher<TwistWithCovarianceStamped>("/sensing/vehicle_velocity_converter/twist_with_covariance", 10);
    pub_predicted_objects = this->create_publisher<PredictedObjects>("/perception/object_recognition/objects", 10);

    pub_map = this->create_publisher<nav_msgs::msg::OccupancyGrid>("/perception/occupancy_grid_map/map", 10);

    pub_steer = this->create_publisher<autoware_auto_vehicle_msgs::msg::SteeringReport>("/vehicle/status/steering_status", 10);

    sub_imu = this->create_subscription<Imu>(
      "/ins/imu", 10, std::bind(&GnssToDummyPoseTwist::imu_callback, this, std::placeholders::_1));
    sub_odom = this->create_subscription<Odometry>(
      "/ins/odometry", 10, std::bind(&GnssToDummyPoseTwist::odom_callback, this, std::placeholders::_1));
    sub_nav_sat_fix = this->create_subscription<NavSatFix>(
      "/ins/nav_sat_fix", 10, std::bind(&GnssToDummyPoseTwist::nav_callback, this, std::placeholders::_1));

    timer_ = rclcpp::create_timer(
        this, get_clock(), 20ms, std::bind(&GnssToDummyPoseTwist::pub_localization, this));
  }

  float GnssToDummyPoseTwist::calc_linear_x(){
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

  void GnssToDummyPoseTwist::calc_vehicle_quaternion(float &qx, float &qy, float &qz, float &qw){
    double x = saved_imu_msg.orientation.x;
    double y = saved_imu_msg.orientation.y;
    double z = saved_imu_msg.orientation.z;
    double w = saved_imu_msg.orientation.w;

    // yaw (z-axis rotation)
    double sinr_cosp = 2 * (w * x + y * z);
    double cosr_cosp = 1 - 2 * (x * x + y * y);
    double yaw = std::atan2(sinr_cosp, cosr_cosp);

    // pitch (y-axis rotation)
    double sinp = std::sqrt(1 + 2 * (w * y - x * z));
    double cosp = std::sqrt(1 - 2 * (w * y - x * z));
    double pitch = -(2 * std::atan2(sinp, cosp) - M_PI / 2 - M_PI/2);

    double roll = 0.0;

    qx = cos(yaw/2) * sin(roll/2) * cos(pitch/2) - sin(yaw/2) * cos(roll/2) * sin(pitch/2);
    qy = cos(yaw/2) * cos(roll/2) * sin(pitch/2) + sin(yaw/2) * sin(roll/2) * cos(pitch/2);
    qz = sin(yaw/2) * cos(roll/2) * cos(pitch/2) - cos(yaw/2) * sin(roll/2) * sin(pitch/2);
    qw = cos(yaw/2) * cos(roll/2) * cos(pitch/2) + sin(yaw/2) * sin(roll/2) * sin(pitch/2);
  }

  void GnssToDummyPoseTwist::imu_callback(Imu::SharedPtr msg){
    saved_imu_msg = *msg;
    imu_status = 1;
  }

  void GnssToDummyPoseTwist::odom_callback(Odometry::SharedPtr msg){
    saved_odom_msg = *msg;
    odom_status = 1;
  }

  void GnssToDummyPoseTwist::nav_callback(NavSatFix::SharedPtr msg){
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

  void GnssToDummyPoseTwist::pub_localization(){
    // messages have not been updated
    // if (imu_status == 0 || nav_status == 0 || odom_status == 0){
    //     return;
    // }

    // double latitude = saved_nav_sat_fix_msg.latitude;
    // double longitude = saved_nav_sat_fix_msg.longitude;
    // double altitude = saved_nav_sat_fix_msg.altitude;

    // double easting, northing;
    // gcs_to_mgrs(latitude, longitude, easting, northing);

    pose_with_cov.pose.pose.position.x = 77615.890625;
    pose_with_cov.pose.pose.position.y = 86786.3984375;
    pose_with_cov.pose.pose.position.z = 274.5710754394531;

    // float qx, qy, qz, qw;
    // calc_vehicle_quaternion(qx, qy, qz, qw);

    // pose_with_cov.pose.pose.orientation.x = 0.0062886388041079044;
    // pose_with_cov.pose.pose.orientation.y = 0.04399765282869339;
    // pose_with_cov.pose.pose.orientation.z = -0.14135341346263885;
    // pose_with_cov.pose.pose.orientation.w = 0.9889609813690186;

    pose_with_cov.pose.pose.orientation.x = 0.0;
    pose_with_cov.pose.pose.orientation.y = 0.0;
    pose_with_cov.pose.pose.orientation.z = 0.7071;
    pose_with_cov.pose.pose.orientation.w = 0.7071;

    // twist_with_cov.twist.twist.linear.x = calc_linear_x();
    twist_with_cov.twist.twist.linear.x = 0.0;

    // initialize the 6*6 covariance matrix [x,y,z,rot-x,rot-y,rot-z] to identity
    pose_with_cov.pose.covariance = Identity_6;
    twist_with_cov.twist.covariance = Identity_6;

    // include the 3x3 [x,y,z] position covariance matrix into and set no correlation between position and orientation
    // pose_with_cov.pose.covariance[0] = saved_nav_sat_fix_msg.position_covariance[0];
    // pose_with_cov.pose.covariance[1] = saved_nav_sat_fix_msg.position_covariance[1];
    // pose_with_cov.pose.covariance[2] = saved_nav_sat_fix_msg.position_covariance[2];
    // pose_with_cov.pose.covariance[6] = saved_nav_sat_fix_msg.position_covariance[3];
    // pose_with_cov.pose.covariance[7] = saved_nav_sat_fix_msg.position_covariance[4];
    // pose_with_cov.pose.covariance[8] = saved_nav_sat_fix_msg.position_covariance[5];
    // pose_with_cov.pose.covariance[12] = saved_nav_sat_fix_msg.position_covariance[6];
    // pose_with_cov.pose.covariance[13] = saved_nav_sat_fix_msg.position_covariance[7];
    // pose_with_cov.pose.covariance[14] = saved_nav_sat_fix_msg.position_covariance[8];

    header.stamp = this->get_clock()->now();
    header.frame_id = "map";

    pose_with_cov.header = header;
    twist_with_cov.header = header;
    saved_imu_msg.header = header;

    predicted_objects_msg.header = header;

    saved_imu_msg.orientation.x = 0.0;
    saved_imu_msg.orientation.y = 0.0;
    saved_imu_msg.orientation.z = 0.0;
    saved_imu_msg.orientation.w = 1.0;

    // pub_imu->publish(saved_imu_msg);
    pub_pose->publish(pose_with_cov);
    pub_twist->publish(twist_with_cov);
    pub_imu->publish(saved_imu_msg);

    pub_predicted_objects->publish(predicted_objects_msg);

    imu_status = 0;
    nav_status = 0;
    odom_status = 0;

    auto map = nav_msgs::msg::OccupancyGrid();
    map.info.resolution = 1.0; // Set resolution
    map.info.width = 100; // Set width
    map.info.height = 100; // Set height

    // Set all spaces as free (100 for occupied, -1 for unknown)
    map.data = std::vector<int8_t>(map.info.width * map.info.height, 0);

    RCLCPP_INFO(this->get_logger(), "Publishing an empty map");
        
    pub_map->publish(map);

    auto steer_msg = autoware_auto_vehicle_msgs::msg::SteeringReport();

    steer_msg.stamp = this->get_clock()->now();
    steer_msg.steering_tire_angle = 0.0;

    pub_steer->publish(steer_msg);

  }
}

RCLCPP_COMPONENTS_REGISTER_NODE(gnss_to_dummy_pose_twist::GnssToDummyPoseTwist)
