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

#include <publish_pointcloud.hpp>

namespace publish_pointcloud{
  PublishPointcloud::PublishPointcloud(const rclcpp::NodeOptions & options)
  : Node("publish_pointcloud", options)
  {
    pub_grid = this->create_publisher<OccupancyGrid>("/perception/occupancy_grid_map/map", 10);
    pub_pred_objects = this->create_publisher<PredictedObjects>("/perception/object_recognition/objects", 10);
    pub_steer = this->create_publisher<SteeringReport>("/vehicle/status/steering_status", 10);

    timer_ = rclcpp::create_timer(
        this, get_clock(), 100ms, std::bind(&PublishPointcloud::pub_pointcloud, this));

    calc_occ_grid();
  }

  void PublishPointcloud::calc_occ_grid(){
    grid_msg.info.resolution = 1.0; // Set resolution
    grid_msg.info.width = 100; // Set width
    grid_msg.info.height = 100; // Set height
    grid_msg.data = std::vector<int8_t>(grid_msg.info.width * grid_msg.info.height, 0); // Set all spaces as free
  }

  void PublishPointcloud::pub_pointcloud(){
    steer_msg.stamp = this->get_clock()->now();
    steer_msg.steering_tire_angle = 0.0;

    pub_grid->publish(grid_msg);
    pub_pred_objects->publish(pred_objects_msg);
    pub_steer->publish(steer_msg);
  }
}

RCLCPP_COMPONENTS_REGISTER_NODE(publish_pointcloud::PublishPointcloud)
