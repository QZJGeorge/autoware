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

#include "cav_context_converter.hpp"

namespace cav_context_converter
{
  CavContextConverter::CavContextConverter(const rclcpp::NodeOptions &options)
      : Node("cav_context_converter", options)
  {
    timer_ = rclcpp::create_timer(
        this, get_clock(), 50ms, std::bind(&CavContextConverter::on_timer, this));

    pub_bv_object = this->create_publisher<Object>("/simulation/dummy_perception_publisher/object_info", 10);

    init_redis_client();
  }

  double CavContextConverter::get_ori_from_odom(Odometry::SharedPtr msg){
    double quat_x = msg->pose.pose.orientation.x;
    double quat_y = msg->pose.pose.orientation.y;
    double quat_z = msg->pose.pose.orientation.z;
    double quat_w = msg->pose.pose.orientation.w;

    double yaw = std::atan2(2.0 * (quat_w * quat_z + quat_x * quat_y), 1.0 - 2.0 * (quat_y * quat_y + quat_z * quat_z));

    // normalize to the range from -pi to pi
    while(yaw > M_PI) yaw -= 2.*M_PI;
    while(yaw < -M_PI) yaw += 2.*M_PI;

    return yaw;
  }

  string CavContextConverter::get_mgrs_from_odom(Odometry::SharedPtr msg){
    string ANN_ARBOR = "17TKG";

    int PRECISION = 4;  // increase precision to 4 decimal place
    int easting = round(msg->pose.pose.position.x * pow(10, PRECISION));   // Your easting coordinate
    int northing = round(msg->pose.pose.position.y * pow(10, PRECISION));  // Your northing coordinate

    string mgrs = ANN_ARBOR + std::to_string(easting) + std::to_string(northing);
    return mgrs;
  }

  string CavContextConverter::get_cav_ego_positionheading_ros(double lat, double lon, double yaw){
    nlohmann::json cav_dic;
    cav_dic["x"] = lat;
    cav_dic["y"] = lon;
    cav_dic["orientation"] = yaw;
    return cav_dic.dump();;
  }

  string CavContextConverter::get_cav_ego_speed_ros(double velocity){
    nlohmann::json cav_dic;
    cav_dic["velocity"] = velocity;
    return cav_dic.dump();;
  }

  string CavContextConverter::post_process_cav_context_vehicle_info_ros(string cav_context_vehicle_info_ros){
    string newString = cav_context_vehicle_info_ros;

    string::size_type n = 0;
    string toSearch = "Infinity";  // we want to replace all the Infinity with 0.0 because its is forbidden in json

    while ((n = newString.find(toSearch, n)) != string::npos)
    {
        newString.replace(n, toSearch.size(), "0.0");
        n += toSearch.size();
    }

    return newString;
  }

  UUID CavContextConverter::get_uuid_msg(string bv_key) {
    boost::uuids::string_generator sgen;
    boost::uuids::uuid namespace_uuid = sgen("00000000-0000-0000-0000-000000000000");
    boost::uuids::name_generator_sha1 gen(namespace_uuid);
    boost::uuids::uuid boost_uuid = gen(bv_key);

    unique_identifier_msgs::msg::UUID msg;
    std::copy(boost_uuid.begin(), boost_uuid.end(), msg.uuid.begin());
    return msg;
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
    cout << bv_value_json["speed_long"] << endl;
    // bv_twist_with_covariance.twist.linear.x = 0.0;
    bv_twist_with_covariance.twist.linear.x = bv_value_json["speed_long"];
    return bv_twist_with_covariance;
  }

  Shape CavContextConverter::get_shape(nlohmann::json bv_value_json){
    Shape bv_shape;
    bv_shape.type = 0;
    bv_shape.dimensions.x = bv_value_json["length"];
    bv_shape.dimensions.y = bv_value_json["width"];
    bv_shape.dimensions.z = bv_value_json["height"];
    return bv_shape;
  }

  ObjectClassification CavContextConverter::get_classification(){
    ObjectClassification bv_classification;
    bv_classification.label = 1;
    bv_classification.probability = 1.0;
    return bv_classification;
  }

  bool CavContextConverter::in_range(string cav_value, string bv_value){
    json cav_value_json = json::parse(cav_value);
    json bv_value_json = json::parse(bv_value);
    double x_diff = cav_value_json["x"].get<double>()-bv_value_json["x"].get<double>();
    double y_diff = cav_value_json["y"].get<double>()-bv_value_json["y"].get<double>();
    return std::sqrt(std::pow(x_diff, 2)+std::pow(y_diff, 2)) < 45.0;
  }


  void CavContextConverter::update_bv_in_autoware_sim(uint8_t action, string bv_key, string bv_value){
    Object bv_object;
    
    if (action == DELETEALL){
      bv_object.action = action;
      pub_bv_object->publish(bv_object);
      return;
    }

    if (bv_key == "CAV"){
      return;
    }

    json bv_value_json = json::parse(bv_value);

    if (bv_value_json.is_primitive()) {
      string bv_value_processed = bv_value;
      bv_value_processed.erase(std::remove(bv_value_processed.begin(), bv_value_processed.end(), '\\'), bv_value_processed.end());
      bv_value_processed = bv_value_processed.substr(1, bv_value_processed.size()-2);
      bv_value_json = json::parse(bv_value_processed);
      RCLCPP_WARN(rclcpp::get_logger("rclcpp"), "The JSON message is corrupted, fixed");
    }

    bv_object.header.stamp = this->get_clock()->now();
    bv_object.header.frame_id = "map";
    bv_object.id = get_uuid_msg(bv_key);
    bv_object.initial_state.pose_covariance = get_pose_with_varience(bv_value_json);
    bv_object.initial_state.twist_covariance = get_twist_with_varience(bv_value_json);
    bv_object.shape = get_shape(bv_value_json);
    bv_object.classification = get_classification();
    bv_object.max_velocity = 33.33333;
    bv_object.min_velocity = -33.33333;
    bv_object.action = action;

    pub_bv_object->publish(bv_object);
  }

  void CavContextConverter::init_redis_client(){
    // Connecting to the Redis server on localhost
    context = redisConnect("127.0.0.1", 6379);

    // handle error
    if (context == NULL || context->err) {
      if (context){
        RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Connect redis error: %d", context->err);
      } else {
        RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Can't allocate redis context");
      }
    } else {
      RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Connected to redis server at 127.0.0.1:6379");
    }
  }

  void CavContextConverter::set_key(string key, string value){
    // SET key
    redisReply *reply = (redisReply *)redisCommand(context, "SET %s %s", key.c_str(), value.c_str());
    if (reply->type == REDIS_REPLY_ERROR){
      RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Redis set key error: %s", key.c_str());
    }
    if (reply->type == REDIS_REPLY_STATUS){
      
    }
  }

  string CavContextConverter::get_key(string key){
    // GET key
    redisReply *reply = (redisReply *)redisCommand(context, "GET %s", key.c_str());
    string result = "";
    if (reply->type == REDIS_REPLY_STRING)
      result = reply->str;
    return result;
  }

  void CavContextConverter::on_timer(){
    string cav_context_vehicle_info_ros = get_key("av_context");
    if (cav_context_vehicle_info_ros == last_cav_context_vehicle_info_ros){
      return;
    } 
    
    last_cav_context_vehicle_info_ros = cav_context_vehicle_info_ros;
    string newString = post_process_cav_context_vehicle_info_ros(cav_context_vehicle_info_ros);

    if (newString == ""){
      RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "cav_context not available, waiting...");
      update_bv_in_autoware_sim(DELETEALL, "", "");
      cav_context_history_json.clear();
      return;
    }

    json cav_context_current_json = json::parse(newString);
    json cav_context_history_copy = cav_context_history_json;

    string cav_value = cav_context_current_json["CAV"].dump();

    // For bvs that exist in hitory but now out of range, remove them
    for (json::iterator bv = cav_context_history_copy.begin(); bv != cav_context_history_copy.end(); ++bv) {
        if (!cav_context_current_json.contains(bv.key())) {
          update_bv_in_autoware_sim(DELETE, bv.key(), bv.value().dump());
          cav_context_history_json.erase(bv.key());
        } 
    }

    // Update bv info with new message, create new bvs
    for (json::iterator bv = cav_context_current_json.begin(); bv != cav_context_current_json.end(); ++bv) {
      string bv_value = bv.value().dump();
      if(in_range(cav_value, bv_value)){
        if (cav_context_history_json.contains(bv.key())) {
          cav_context_history_json[bv.key()] = bv_value;
          update_bv_in_autoware_sim(MODIFY, bv.key(), bv_value);
        }else {
          cav_context_history_json.emplace(bv.key(), bv_value);
          update_bv_in_autoware_sim(ADD, bv.key(), bv_value);
        }
      }else{
        if (cav_context_history_json.contains(bv.key())) {
          update_bv_in_autoware_sim(DELETE, bv.key(), bv.value().dump());
          cav_context_history_json.erase(bv.key());
        }
      }
    }
  }
}

RCLCPP_COMPONENTS_REGISTER_NODE(cav_context_converter::CavContextConverter)
