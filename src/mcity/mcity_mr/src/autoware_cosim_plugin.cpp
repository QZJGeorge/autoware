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

#include <autoware_cosim_plugin.hpp>

namespace autoware_cosim_plugin
{
  AutowareCosimPlugin::AutowareCosimPlugin(const rclcpp::NodeOptions &options)
      : Node("autoware_cosim_plugin", options)
  {
    pub_detected_objects = this->create_publisher<DetectedObjects>("/perception/object_recognition/detection/objects", 10);

    sub_ego_odom = this->create_subscription<Odometry>(
      "/localization/kinematic_state", 10, std::bind(&AutowareCosimPlugin::odom_callback, this, std::placeholders::_1));

    timer_ = rclcpp::create_timer(
        this, get_clock(), 50ms, std::bind(&AutowareCosimPlugin::on_timer, this));

    if (!redis_client.connect(true)) {
        RCLCPP_ERROR(this->get_logger(), "Failed to connect to Redis server.");
    } else {
        RCLCPP_INFO(this->get_logger(), "Connected to Redis server.");
    }
  }

  void AutowareCosimPlugin::on_timer(){
    sync_autoware_vehicle_to_cosim();
    sync_cosim_vehicle_to_autoware();
  }

  void AutowareCosimPlugin::sync_autoware_vehicle_to_cosim(){
    int zone = 17;                                 // ann arbor is in zone 17

    int prec = 10;                                 // we set conversion precision to 10 decimals
    bool north = true;                             // ann arbor is in northern hemisphere
    double yaw = get_ori_from_odom(saved_odom_msg);           // convert from quaternion to angle
    std::string mgrs = get_mgrs_from_odom(saved_odom_msg);    // get mgrs format string for conversion

    double x, y;
    // Convert the MGRS coordinates to UTM coordinates
    GeographicLib::MGRS::Reverse(mgrs, zone, north, x, y, prec);

    json data;

    data["CAV"]["x"] = x;
    data["CAV"]["y"] = y;
    data["CAV"]["z"] = 0.0;
    data["CAV"]["length"] = 5.0;
    data["CAV"]["width"] = 1.8;
    data["CAV"]["height"] = 1.5;
    data["CAV"]["orientation"] = yaw;
    data["CAV"]["speed_long"] = saved_odom_msg.twist.twist.linear.x;

    json autoware_cosim_vehicle_info;
    
    auto now = rclcpp::Clock().now();

    autoware_cosim_vehicle_info["timestamp"] = now.seconds();
    autoware_cosim_vehicle_info["data"] = data;

    redis_client.set("autoware_cosim_vehicle_info", autoware_cosim_vehicle_info.dump());
  }

  void AutowareCosimPlugin::sync_cosim_vehicle_to_autoware(){
    detected_objects_msg.objects.clear();

    string terasim_cosim_vehicle_info = redis_client.get("terasim_cosim_vehicle_info");
    if (terasim_cosim_vehicle_info == ""){
      RCLCPP_WARN_THROTTLE(rclcpp::get_logger("mcity_mr"), *get_clock(), 1000, "terasim_cosim_vehicle_info not available, waiting...");
      pub_detected_objects->publish(detected_objects_msg);
      return;
    }

    json terasim_cosim_vehicle_info_json_wrapper = json::parse(terasim_cosim_vehicle_info);
    json terasim_cosim_vehicle_info_json = terasim_cosim_vehicle_info_json_wrapper["data"];
    
    // Update bv info with new message, create new bvs
    for (json::iterator bv = terasim_cosim_vehicle_info_json.begin(); bv != terasim_cosim_vehicle_info_json.end(); ++bv) {
      string bv_key = bv.key();
      string bv_value = bv.value().dump();
      if(bv_key != "CAV"){
        update_bv_in_autoware_sim(bv_key, bv_value);
      }
    }

    detected_objects_msg.header.stamp = this->get_clock()->now();
    detected_objects_msg.header.frame_id = "map";

    // Publish the detected objects
    pub_detected_objects->publish(detected_objects_msg);
  }

  PoseWithCovariance AutowareCosimPlugin::get_pose_with_varience(nlohmann::json bv_value_json){
    PoseWithCovariance bv_pose_with_covariance;

    double x = bv_value_json["x"];
    double y = bv_value_json["y"];

    int zone = 17;           // ann arbor is in zone 17
    int prec = 8;            // set precision to 3 decimals (xxxxx.xxx)
    bool north = true;       // ann arbor is in northern hemisphere

    string mgrs;

    GeographicLib::MGRS::Forward(zone, north, x, y, prec, mgrs);

    string easting_str = mgrs.substr(5,8);
    string northing_str = mgrs.substr(13,8);

    int easting_int = std::stoi(easting_str);
    int northing_int = std::stoi(northing_str);

    double easting = easting_int/pow(10, 3);
    double northing = northing_int/pow(10, 3);

    double orientation = bv_value_json["orientation"];

    bv_pose_with_covariance.pose.position.x = easting;
    bv_pose_with_covariance.pose.position.y = northing;

    bv_pose_with_covariance.pose.orientation.w = cos(orientation / 2);
    bv_pose_with_covariance.pose.orientation.x = 0.0;
    bv_pose_with_covariance.pose.orientation.y = 0.0;
    bv_pose_with_covariance.pose.orientation.z = sin(orientation / 2);

    return bv_pose_with_covariance;
  }

  TwistWithCovariance AutowareCosimPlugin::get_twist_with_varience(nlohmann::json bv_value_json){
    TwistWithCovariance bv_twist_with_covariance;

    double speed_long = bv_value_json["speed_long"];
    bv_twist_with_covariance.twist.linear.x = speed_long;

    return bv_twist_with_covariance;
  }

  Shape AutowareCosimPlugin::get_shape(nlohmann::json bv_value_json){
    Shape bv_shape;
    bv_shape.type = Shape::BOUNDING_BOX;
    bv_shape.dimensions.x = bv_value_json["length"];
    bv_shape.dimensions.y = bv_value_json["width"];
    bv_shape.dimensions.z = bv_value_json["height"];
    return bv_shape;
  }

  ObjectClassification AutowareCosimPlugin::get_classification(string bv_key){
    ObjectClassification bv_classification;
    
    if (bv_key.find("POV") != std::string::npos){
      bv_classification.label = ObjectClassification::CAR;
    } else if (bv_key.find("BV") != std::string::npos){
      bv_classification.label = ObjectClassification::CAR;
    } else if (bv_key.find("CARLA") != std::string::npos){
      bv_classification.label = ObjectClassification::CAR;
    } else if (bv_key.find("VRU") != std::string::npos){
      bv_classification.label = ObjectClassification::PEDESTRIAN;
    } else{
      bv_classification.label = ObjectClassification::UNKNOWN;
    }

    bv_classification.probability = 1.0;
    return bv_classification;
  }

  void AutowareCosimPlugin::update_bv_in_autoware_sim(string bv_key, string bv_value){
    json bv_value_json = json::parse(bv_value);

    if (bv_value_json.is_primitive()) {
      string bv_value_processed = bv_value;
      bv_value_processed.erase(std::remove(bv_value_processed.begin(), bv_value_processed.end(), '\\'), bv_value_processed.end());
      bv_value_processed = bv_value_processed.substr(1, bv_value_processed.size()-2);
      bv_value_json = json::parse(bv_value_processed);
      RCLCPP_WARN(rclcpp::get_logger("rclcpp"), "The JSON message is corrupted, fixed");
    }

    DetectedObject detected_object;

    detected_object.existence_probability = 1.0;
    detected_object.classification.push_back(get_classification(bv_key));
    detected_object.kinematics.pose_with_covariance = get_pose_with_varience(bv_value_json);
    detected_object.kinematics.has_position_covariance = false;
    detected_object.kinematics.orientation_availability = 0;
    detected_object.kinematics.twist_with_covariance = get_twist_with_varience(bv_value_json);
    detected_object.kinematics.has_twist = false;
    detected_object.kinematics.has_twist_covariance = false;
    detected_object.shape = get_shape(bv_value_json);

    detected_objects_msg.objects.push_back(detected_object);
  }

  double AutowareCosimPlugin::get_ori_from_odom(Odometry msg){
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

  string AutowareCosimPlugin::get_mgrs_from_odom(Odometry msg){
    std::string ANN_ARBOR = "17TKG";

    int PRECISION = 4;  // increase precision to 4 decimal place
    int easting = round(msg.pose.pose.position.x * pow(10, PRECISION));   // Your easting coordinate
    int northing = round(msg.pose.pose.position.y * pow(10, PRECISION));  // Your northing coordinate

    std::ostringstream oss1, oss2;

    oss1 << std::setw(9) << std::setfill('0') << easting;
    oss2 << std::setw(9) << std::setfill('0') << northing;

    std::string easting_string = oss1.str();
    std::string northing_string = oss2.str();

    std::string mgrs = ANN_ARBOR + std::to_string(easting) + std::to_string(northing);

    return mgrs;
  }

  void AutowareCosimPlugin::odom_callback(Odometry::SharedPtr msg){
    saved_odom_msg = *msg;
  }
}

RCLCPP_COMPONENTS_REGISTER_NODE(autoware_cosim_plugin::AutowareCosimPlugin)
