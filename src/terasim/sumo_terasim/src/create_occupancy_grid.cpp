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

#include <create_occupancy_grid.hpp>

namespace create_occupancy_grid
{
  CreateOccupancyGrid::CreateOccupancyGrid(const rclcpp::NodeOptions &options)
      : Node("create_occupancy_grid", options)
  {
    timer_ = rclcpp::create_timer(
        this, get_clock(), 200ms, std::bind(&CreateOccupancyGrid::on_timer, this));

    pub_occ_grid = this->create_publisher<OccupancyGrid>("/perception/occupancy_grid_map/map", 10);

    sub_ego_odom = this->create_subscription<Odometry>(
      "/localization/kinematic_state", 10, std::bind(&CreateOccupancyGrid::odom_callback, this, std::placeholders::_1));

    init();
  }

  void CreateOccupancyGrid::init(){
    map.info.map_load_time.sec = 0;
    map.info.map_load_time.nanosec = 0;

    map.info.resolution = 0.5;

    map.info.origin.position.x = 77584.0;
    map.info.origin.position.y = 86772.5;
    map.info.origin.position.z = 0.0;

    map.info.origin.orientation.x = 0;
    map.info.origin.orientation.y = 0;
    map.info.origin.orientation.z = 0;
    map.info.origin.orientation.w = 1;

    map.info.height = map_height;
    map.info.width = map_width;

    //Initialize occupancy grid with value 0 (free)
    map.data = std::vector<int8_t>(map.info.width * map.info.height, 0);
  }

  void CreateOccupancyGrid::on_timer(){
    map.info.origin.position.x = saved_odom_msg.pose.pose.position.x - (map_width/2);
    map.info.origin.position.y = saved_odom_msg.pose.pose.position.y - (map_height/2);
    map.info.origin.position.z = 0.0;

    map.header.frame_id = "map";
    map.header.stamp = this->get_clock()->now();
    pub_occ_grid->publish(map);
  }

  void CreateOccupancyGrid::odom_callback(const Odometry::SharedPtr msg){
    saved_odom_msg = *msg;
  }
}

RCLCPP_COMPONENTS_REGISTER_NODE(create_occupancy_grid::CreateOccupancyGrid)
