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

#ifndef MCITY_PLANNER__publish_pointcloud__HPP_
#define MCITY_PLANNER__publish_pointcloud__HPP_

#include <iostream>
#include <GeographicLib/UTMUPS.hpp>
#include <GeographicLib/MGRS.hpp>

#include <glm/glm.hpp>
#include <glm/gtc/quaternion.hpp>
#include <glm/gtx/quaternion.hpp>
#include <glm/gtc/matrix_transform.hpp>

#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/header.hpp>
#include <nav_msgs/msg/occupancy_grid.hpp>
#include <rclcpp_components/register_node_macro.hpp>
#include <autoware_auto_perception_msgs/msg/predicted_objects.hpp>
#include <autoware_auto_vehicle_msgs/msg/steering_report.hpp>

namespace publish_pointcloud
{
    
using namespace std;

using std_msgs::msg::Header;
using nav_msgs::msg::OccupancyGrid;
using autoware_auto_perception_msgs::msg::PredictedObjects;
using autoware_auto_vehicle_msgs::msg::SteeringReport;

class PublishPointcloud : public rclcpp::Node
{
public:
  explicit PublishPointcloud(const rclcpp::NodeOptions & options);
  ~PublishPointcloud() = default;

private:
  rclcpp::Publisher<OccupancyGrid>::SharedPtr pub_grid;
  rclcpp::Publisher<PredictedObjects>::SharedPtr pub_pred_objects;
  rclcpp::Publisher<SteeringReport>::SharedPtr pub_steer;

  rclcpp::TimerBase::SharedPtr timer_;

  Header header;
  PredictedObjects pred_objects_msg;
  OccupancyGrid grid_msg;
  SteeringReport steer_msg;

  void pub_pointcloud(); 
  void calc_occ_grid();
};

}
#endif