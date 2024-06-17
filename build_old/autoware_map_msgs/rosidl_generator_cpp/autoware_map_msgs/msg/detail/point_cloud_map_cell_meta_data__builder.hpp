// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_map_msgs:msg/PointCloudMapCellMetaData.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_MAP_MSGS__MSG__DETAIL__POINT_CLOUD_MAP_CELL_META_DATA__BUILDER_HPP_
#define AUTOWARE_MAP_MSGS__MSG__DETAIL__POINT_CLOUD_MAP_CELL_META_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_map_msgs/msg/detail/point_cloud_map_cell_meta_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_map_msgs
{

namespace msg
{

namespace builder
{

class Init_PointCloudMapCellMetaData_max_y
{
public:
  explicit Init_PointCloudMapCellMetaData_max_y(::autoware_map_msgs::msg::PointCloudMapCellMetaData & msg)
  : msg_(msg)
  {}
  ::autoware_map_msgs::msg::PointCloudMapCellMetaData max_y(::autoware_map_msgs::msg::PointCloudMapCellMetaData::_max_y_type arg)
  {
    msg_.max_y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_map_msgs::msg::PointCloudMapCellMetaData msg_;
};

class Init_PointCloudMapCellMetaData_max_x
{
public:
  explicit Init_PointCloudMapCellMetaData_max_x(::autoware_map_msgs::msg::PointCloudMapCellMetaData & msg)
  : msg_(msg)
  {}
  Init_PointCloudMapCellMetaData_max_y max_x(::autoware_map_msgs::msg::PointCloudMapCellMetaData::_max_x_type arg)
  {
    msg_.max_x = std::move(arg);
    return Init_PointCloudMapCellMetaData_max_y(msg_);
  }

private:
  ::autoware_map_msgs::msg::PointCloudMapCellMetaData msg_;
};

class Init_PointCloudMapCellMetaData_min_y
{
public:
  explicit Init_PointCloudMapCellMetaData_min_y(::autoware_map_msgs::msg::PointCloudMapCellMetaData & msg)
  : msg_(msg)
  {}
  Init_PointCloudMapCellMetaData_max_x min_y(::autoware_map_msgs::msg::PointCloudMapCellMetaData::_min_y_type arg)
  {
    msg_.min_y = std::move(arg);
    return Init_PointCloudMapCellMetaData_max_x(msg_);
  }

private:
  ::autoware_map_msgs::msg::PointCloudMapCellMetaData msg_;
};

class Init_PointCloudMapCellMetaData_min_x
{
public:
  Init_PointCloudMapCellMetaData_min_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PointCloudMapCellMetaData_min_y min_x(::autoware_map_msgs::msg::PointCloudMapCellMetaData::_min_x_type arg)
  {
    msg_.min_x = std::move(arg);
    return Init_PointCloudMapCellMetaData_min_y(msg_);
  }

private:
  ::autoware_map_msgs::msg::PointCloudMapCellMetaData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_map_msgs::msg::PointCloudMapCellMetaData>()
{
  return autoware_map_msgs::msg::builder::Init_PointCloudMapCellMetaData_min_x();
}

}  // namespace autoware_map_msgs

#endif  // AUTOWARE_MAP_MSGS__MSG__DETAIL__POINT_CLOUD_MAP_CELL_META_DATA__BUILDER_HPP_
