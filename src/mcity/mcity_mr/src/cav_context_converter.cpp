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

#include <cav_context_converter.hpp>

namespace cav_context_converter
{
  CavContextConverter::CavContextConverter(const rclcpp::NodeOptions &options)
      : Node("cav_context_converter", options)
  {
    timer_ = rclcpp::create_timer(
        this, get_clock(), 50ms, std::bind(&CavContextConverter::on_timer, this));

    pub_detected_objects = this->create_publisher<DetectedObjects>("/perception/object_recognition/detection/objects", 10);

    if (!redis_client.connect(true)) {
        RCLCPP_ERROR(this->get_logger(), "Failed to connect to Redis server.");
    } else {
        RCLCPP_INFO(this->get_logger(), "Connected to Redis server.");
    }
  }

  void CavContextConverter::on_timer(){
    detected_objects_msg.objects.clear();

    string cav_context_info = redis_client.get("av_context");
    cav_context_info = post_process_cav_context_info(cav_context_info);

    if (cav_context_info == ""){
      RCLCPP_WARN_THROTTLE(rclcpp::get_logger("mcity_mr"), *get_clock(), 1000, "cav_context not available, waiting...");
      pub_detected_objects->publish(detected_objects_msg);
      return;
    }

    json cav_context_json_wrapper = json::parse(cav_context_info);
    json cav_context_json = cav_context_json_wrapper["data"];
    
    // Update bv info with new message, create new bvs
    for (json::iterator bv = cav_context_json.begin(); bv != cav_context_json.end(); ++bv) {
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

  string CavContextConverter::post_process_cav_context_info(string cav_context_info){
    string newString = cav_context_info;

    string::size_type n = 0;
    string toSearch = "Infinity";  // we want to replace all the Infinity with 0.0 because its is forbidden in json

    while ((n = newString.find(toSearch, n)) != string::npos)
    {
        newString.replace(n, toSearch.size(), "0.0");
        n += toSearch.size();
    }

    return newString;
  }

  PoseWithCovariance CavContextConverter::get_pose_with_varience(nlohmann::json bv_value_json){
    PoseWithCovariance bv_pose_with_covariance;

    double x = bv_value_json["x"];
    double y = bv_value_json["y"];

    double latitude = bv_value_json["latitude"];

    int zone = 17;           // ann arbor is in zone 17
    int prec = 8;            // set precision to 3 decimals (xxxxx.xxx)
    bool north = true;       // ann arbor is in northern hemisphere

    string mgrs;

    GeographicLib::MGRS::Forward(zone, north, x, y, latitude, prec, mgrs);

    string easting_str = mgrs.substr(5,8);
    string northing_str = mgrs.substr(13,8);

    int easting_int = std::stoi(easting_str);
    int northing_int = std::stoi(northing_str);

    double easting = easting_int/pow(10, 3);
    double northing = northing_int/pow(10, 3);

    bv_pose_with_covariance.pose.position.x = easting;
    bv_pose_with_covariance.pose.position.y = northing;

    double orientation = bv_value_json["orientation"];

    bv_pose_with_covariance.pose.orientation.w = cos(orientation / 2);
    bv_pose_with_covariance.pose.orientation.x = 0.0;
    bv_pose_with_covariance.pose.orientation.y = 0.0;
    bv_pose_with_covariance.pose.orientation.z = sin(orientation / 2);

    return bv_pose_with_covariance;
  }

  TwistWithCovariance CavContextConverter::get_twist_with_varience(nlohmann::json bv_value_json){
    TwistWithCovariance bv_twist_with_covariance;

    double speed_long = bv_value_json["speed_long"];
    bv_twist_with_covariance.twist.linear.x = speed_long;

    return bv_twist_with_covariance;
  }

  Shape CavContextConverter::get_shape(nlohmann::json bv_value_json){
    Shape bv_shape;
    bv_shape.type = Shape::BOUNDING_BOX;
    bv_shape.dimensions.x = bv_value_json["length"];
    bv_shape.dimensions.y = bv_value_json["width"];
    bv_shape.dimensions.z = bv_value_json["height"];
    return bv_shape;
  }

  ObjectClassification CavContextConverter::get_classification(string bv_key){
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

  void CavContextConverter::update_bv_in_autoware_sim(string bv_key, string bv_value){
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
}

RCLCPP_COMPONENTS_REGISTER_NODE(cav_context_converter::CavContextConverter)
