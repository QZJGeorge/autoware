//  Copyright 2022 Tier IV, Inc. All rights reserved.
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.

#ifndef MCITY_MR_OCC_GRID_CONVERTER_HPP_
#define MCITY_MR_OCC_GRID_CONVERTER_HPP_


#include <rclcpp/rclcpp.hpp>
#include <nav_msgs/msg/odometry.hpp>
#include <nav_msgs/msg/occupancy_grid.hpp>
#include <rclcpp_components/register_node_macro.hpp>


namespace occ_grid_converter
{
    
using namespace std;

using nav_msgs::msg::Odometry;
using nav_msgs::msg::OccupancyGrid;

class OccGridConverter : public rclcpp::Node
{
public:
  explicit OccGridConverter(const rclcpp::NodeOptions & options);
  ~OccGridConverter() = default;

private:
  rclcpp::Publisher<OccupancyGrid>::SharedPtr pub_occ_grid;
  rclcpp::Subscription<Odometry>::SharedPtr sub_ego_odom;

  rclcpp::TimerBase::SharedPtr timer_;

  double map_height = 300;
  double map_width = 300;

  OccupancyGrid map;
  Odometry saved_odom_msg;

  void init();
  void on_timer();
  void odom_callback(const Odometry::SharedPtr msg);
};

}

#endif