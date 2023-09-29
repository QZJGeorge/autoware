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

#include "traffic_signal_control.hpp"

namespace traffic_signal_control{

  TrafficSignalControl::TrafficSignalControl(const rclcpp::NodeOptions & options)
  : Node("traffic_signal_control", options)
  {
    pub_signal_array = this->create_publisher<TrafficSignalArray>("/perception/traffic_light_recognition/traffic_signals", 10);

    timer_ = rclcpp::create_timer(
      this, get_clock(), 20ms, std::bind(&TrafficSignalControl::on_timer, this));

    init_redis_client();
  }

  void TrafficSignalControl::update_signals(json traffic_signals_tls_info){
    traffic_signal_element.shape = CIRCLE;
    traffic_signal_element.status = SOLID_ON;
    traffic_signal_element.confidence = 1.0;

    for(auto& node : traffic_signals_tls_info.items())
    {
      string node_number = node.key().substr(5,2);
      string light_info = node.value()["tls_state"].dump();
      light_info = light_info.substr(1, light_info.size() - 2);

      for (int i = 0; i < (int)light_info.length(); i++){
        string traffic_light_id = node_number + to_string(i) + "000";
        string traffic_light_state = light_info.substr(i,1);

        if (traffic_light_state == "r"){
          traffic_signal_element.color = RED;
        } else if (traffic_light_state== "y"){
          traffic_signal_element.color = AMBER;
        } else{
          traffic_signal_element.color = GREEN;
        }

        traffic_signal.traffic_signal_id = (int64_t)(stoi(traffic_light_id));
        traffic_signal.elements = {traffic_signal_element};
        signals.push_back(traffic_signal);
      }
    }
  }

  void TrafficSignalControl::init_redis_client(){
    // Connecting to the Redis server on localhost
    context = redisConnect("127.0.0.1", 6379);

    // handle error
    if (context == NULL || context->err) {
      if (context){
        cout << "Error: " << context->errstr << endl;
      } else {
        std::cout << "Can't allocate redis context" << endl;
      }
    } else {
      cout << "Connected to redis server at 127.0.0.1:6379" << endl;
    }
  }

  string TrafficSignalControl::get_key(string key){
    // GET key
    redisReply *reply = (redisReply *)redisCommand(context, "GET %s", key.c_str());
    string result = "";
    if (reply->type == REDIS_REPLY_STRING)
      result = reply->str;
    return result;
  }

  void TrafficSignalControl::on_timer(){
    string cav_front_tls_info_ros = get_key("cav_front_tls_info_ros");

    if (cav_front_tls_info_ros == ""){
      cout << "cav_front_tls_info_ros not availble, waiting..." << endl;
      return;
    }

    json traffic_signals_json = json::parse(cav_front_tls_info_ros);
    json traffic_signals_tls_info = json::parse(traffic_signals_json["tls_info"].dump());

    update_signals(traffic_signals_tls_info);

    traffic_signal_array.stamp = this->get_clock()->now();
    traffic_signal_array.signals = signals;

    cout << "publishing traffic signal" << endl;
    pub_signal_array->publish(traffic_signal_array);
  }
}

RCLCPP_COMPONENTS_REGISTER_NODE(traffic_signal_control::TrafficSignalControl)
