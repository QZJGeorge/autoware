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

#include <sumo_light_converter.hpp>

namespace sumo_light_converter{

  SumoLightConverter::SumoLightConverter(const rclcpp::NodeOptions & options)
  : Node("sumo_light_converter", options)
  {
    pub_signal_array = this->create_publisher<TrafficSignalArray>("/perception/traffic_light_recognition/traffic_signals", 10);

    timer_ = rclcpp::create_timer(
      this, get_clock(), 20ms, std::bind(&SumoLightConverter::on_timer, this));

    if (!redis_client.connect(true)) {
        RCLCPP_ERROR(this->get_logger(), "Failed to connect to Redis server.");
    } else {
        RCLCPP_INFO(this->get_logger(), "Connected to Redis server.");
    }
  }

  void SumoLightConverter::on_timer(){
    string av_tls = redis_client.get("av_tls");

    if (av_tls == ""){
      return;
    }

    json traffic_signals_json = json::parse(av_tls);
    json traffic_signals_tls_info = json::parse(traffic_signals_json["tls_info"].dump());

    update_signals(traffic_signals_tls_info);

    traffic_signal_array.stamp = this->get_clock()->now();
    traffic_signal_array.signals = signals;

    pub_signal_array->publish(traffic_signal_array);
  }

  void SumoLightConverter::update_signals(json traffic_signals_tls_info){
    traffic_signal_element.shape = TrafficSignalElement::CIRCLE;
    traffic_signal_element.status = TrafficSignalElement::SOLID_ON;
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
          traffic_signal_element.color = TrafficSignalElement::RED;
        } else if (traffic_light_state== "y"){
          traffic_signal_element.color = TrafficSignalElement::AMBER;
        } else{
          traffic_signal_element.color = TrafficSignalElement::GREEN;
        }

        traffic_signal.traffic_signal_id = (int64_t)(stoi(traffic_light_id));
        traffic_signal.elements = {traffic_signal_element};
        signals.push_back(traffic_signal);
      }
    }
  }
}

RCLCPP_COMPONENTS_REGISTER_NODE(sumo_light_converter::SumoLightConverter)
