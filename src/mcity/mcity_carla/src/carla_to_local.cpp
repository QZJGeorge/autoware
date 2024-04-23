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

#include <carla_to_local.hpp>

namespace carla_to_local{
  CarlaToLocal::CarlaToLocal(const rclcpp::NodeOptions & options)
  : Node("carla_to_local", options)
  {
    pub_imu = this->create_publisher<Imu>("/sensing/imu/imu_data", 10);
    pub_pose = this->create_publisher<PoseWithCovarianceStamped>("/localization/pose_estimator/pose_with_covariance", 10);
    pub_twist = this->create_publisher<TwistWithCovarianceStamped>("/sensing/vehicle_velocity_converter/twist_with_covariance", 10);

    timer_ = rclcpp::create_timer(
        this, get_clock(), 20ms, std::bind(&CarlaToLocal::pub_localization, this));
    
    if (!redis_client.connect(true)) {
        RCLCPP_ERROR(this->get_logger(), "Failed to connect to Redis server.");
    } else {
        RCLCPP_INFO(this->get_logger(), "Connected to Redis server.");
    }
  }

  void CarlaToLocal::pub_localization(){
    // messages have not been updated
    string cosim_ego_vehicle_info = redis_client.get("cosim_ego_vehicle_info");
    if (cosim_ego_vehicle_info == ""){
      RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Waiting for cosim_ego_vehicle_info...");
      return;
    }

    json cosim_ego_vehicle_info_json = json::parse(cosim_ego_vehicle_info);

    header.stamp = this->get_clock()->now();
    header.frame_id = "map";

    double latitude = cosim_ego_vehicle_info_json["location"]["lat"];
    double longitude = cosim_ego_vehicle_info_json["location"]["lon"];

    double easting, northing;
    gcs_to_mgrs(latitude, longitude, easting, northing);

    pose_with_cov_msg.pose.pose.position.x = (float)easting;
    pose_with_cov_msg.pose.pose.position.y = (float)northing;
    pose_with_cov_msg.pose.pose.position.z = (float)0.0;

    //print easting and northing
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "easting: %f, northing: %f", easting, northing);


    double roll = cosim_ego_vehicle_info_json["rotation"]["roll"];
    double pitch = cosim_ego_vehicle_info_json["rotation"]["pitch"];
    double yaw = cosim_ego_vehicle_info_json["rotation"]["yaw"];

    // RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "roll: %f, pitch: %f, yaw: %f", roll, pitch, yaw);

    yaw = -yaw + 90.0;

    double yaw_offset = 8.0;
    yaw = yaw + yaw_offset;

    roll = roll * M_PI / 180.0;
    pitch = pitch * M_PI / 180.0;
    yaw = yaw * M_PI / 180.0;

    double qx, qy, qz, qw;
    eulerToQuaternion(roll, pitch, yaw, qx, qy, qz, qw);

    imu_msg.orientation.x = qx;
    imu_msg.orientation.y = qy;
    imu_msg.orientation.z = qz;
    imu_msg.orientation.w = qw;

    pose_with_cov_msg.pose.pose.orientation.x = qx;
    pose_with_cov_msg.pose.pose.orientation.y = qy;
    pose_with_cov_msg.pose.pose.orientation.z = qz;
    pose_with_cov_msg.pose.pose.orientation.w = qw;

    double velocity = cosim_ego_vehicle_info_json["velocity"];

    twist_with_cov_msg.twist.twist.linear.x = velocity;
    // RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "velocity: %f", velocity);

    // initialize the 6*6 covariance matrix [x,y,z,rot-x,rot-y,rot-z] to identity
    pose_with_cov_msg.pose.covariance = Identity_Min_6;
    twist_with_cov_msg.twist.covariance = Identity_6;

    pose_with_cov_msg.header = header;
    twist_with_cov_msg.header = header;
    imu_msg.header = header;

    pub_imu->publish(imu_msg);
    pub_pose->publish(pose_with_cov_msg);
    pub_twist->publish(twist_with_cov_msg);
  }

  void CarlaToLocal::eulerToQuaternion(double roll, double pitch, double yaw,
                        double& qx, double& qy, double& qz, double& qw) 
  {
      double cy = cos(yaw * 0.5); 
      double sy = sin(yaw * 0.5); 
      double cp = cos(pitch * 0.5); 
      double sp = sin(pitch * 0.5); 
      double cr = cos(roll * 0.5); 
      double sr = sin(roll * 0.5);
    
      qw = cr * cp * cy + sr * sp * sy;
      qx = sr * cp * cy - cr * sp * sy;
      qy = cr * sp * cy + sr * cp * sy;
      qz = cr * cp * sy - sr * sp * cy;

      // yaw (z-axis rotation)
      double siny_cosp = 2 * (qw * qz + qx * qy);
      double cosy_cosp = 1 - 2 * (qy * qy + qz * qz);
      double yaw_ori = std::atan2(siny_cosp, cosy_cosp);
      RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "yaw_ori: %f", yaw_ori * 180.0 / M_PI);
  }

  void CarlaToLocal::gcs_to_mgrs(double lat, double lon, double &easting, double &northing){
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
}

RCLCPP_COMPONENTS_REGISTER_NODE(carla_to_local::CarlaToLocal)
