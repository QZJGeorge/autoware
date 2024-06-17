// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_map_msgs:msg/PointCloudMapCellWithID.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_MAP_MSGS__MSG__DETAIL__POINT_CLOUD_MAP_CELL_WITH_ID__BUILDER_HPP_
#define AUTOWARE_MAP_MSGS__MSG__DETAIL__POINT_CLOUD_MAP_CELL_WITH_ID__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_map_msgs/msg/detail/point_cloud_map_cell_with_id__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_map_msgs
{

namespace msg
{

namespace builder
{

class Init_PointCloudMapCellWithID_metadata
{
public:
  explicit Init_PointCloudMapCellWithID_metadata(::autoware_map_msgs::msg::PointCloudMapCellWithID & msg)
  : msg_(msg)
  {}
  ::autoware_map_msgs::msg::PointCloudMapCellWithID metadata(::autoware_map_msgs::msg::PointCloudMapCellWithID::_metadata_type arg)
  {
    msg_.metadata = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_map_msgs::msg::PointCloudMapCellWithID msg_;
};

class Init_PointCloudMapCellWithID_pointcloud
{
public:
  explicit Init_PointCloudMapCellWithID_pointcloud(::autoware_map_msgs::msg::PointCloudMapCellWithID & msg)
  : msg_(msg)
  {}
  Init_PointCloudMapCellWithID_metadata pointcloud(::autoware_map_msgs::msg::PointCloudMapCellWithID::_pointcloud_type arg)
  {
    msg_.pointcloud = std::move(arg);
    return Init_PointCloudMapCellWithID_metadata(msg_);
  }

private:
  ::autoware_map_msgs::msg::PointCloudMapCellWithID msg_;
};

class Init_PointCloudMapCellWithID_cell_id
{
public:
  Init_PointCloudMapCellWithID_cell_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PointCloudMapCellWithID_pointcloud cell_id(::autoware_map_msgs::msg::PointCloudMapCellWithID::_cell_id_type arg)
  {
    msg_.cell_id = std::move(arg);
    return Init_PointCloudMapCellWithID_pointcloud(msg_);
  }

private:
  ::autoware_map_msgs::msg::PointCloudMapCellWithID msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_map_msgs::msg::PointCloudMapCellWithID>()
{
  return autoware_map_msgs::msg::builder::Init_PointCloudMapCellWithID_cell_id();
}

}  // namespace autoware_map_msgs

#endif  // AUTOWARE_MAP_MSGS__MSG__DETAIL__POINT_CLOUD_MAP_CELL_WITH_ID__BUILDER_HPP_
