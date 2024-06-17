// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_map_msgs:msg/PointCloudMapMetaData.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_MAP_MSGS__MSG__DETAIL__POINT_CLOUD_MAP_META_DATA__BUILDER_HPP_
#define AUTOWARE_MAP_MSGS__MSG__DETAIL__POINT_CLOUD_MAP_META_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_map_msgs/msg/detail/point_cloud_map_meta_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_map_msgs
{

namespace msg
{

namespace builder
{

class Init_PointCloudMapMetaData_metadata_list
{
public:
  explicit Init_PointCloudMapMetaData_metadata_list(::autoware_map_msgs::msg::PointCloudMapMetaData & msg)
  : msg_(msg)
  {}
  ::autoware_map_msgs::msg::PointCloudMapMetaData metadata_list(::autoware_map_msgs::msg::PointCloudMapMetaData::_metadata_list_type arg)
  {
    msg_.metadata_list = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_map_msgs::msg::PointCloudMapMetaData msg_;
};

class Init_PointCloudMapMetaData_header
{
public:
  Init_PointCloudMapMetaData_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PointCloudMapMetaData_metadata_list header(::autoware_map_msgs::msg::PointCloudMapMetaData::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PointCloudMapMetaData_metadata_list(msg_);
  }

private:
  ::autoware_map_msgs::msg::PointCloudMapMetaData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_map_msgs::msg::PointCloudMapMetaData>()
{
  return autoware_map_msgs::msg::builder::Init_PointCloudMapMetaData_header();
}

}  // namespace autoware_map_msgs

#endif  // AUTOWARE_MAP_MSGS__MSG__DETAIL__POINT_CLOUD_MAP_META_DATA__BUILDER_HPP_
