// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_map_msgs:msg/PointCloudMapCellMetaDataWithID.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_MAP_MSGS__MSG__DETAIL__POINT_CLOUD_MAP_CELL_META_DATA_WITH_ID__BUILDER_HPP_
#define AUTOWARE_MAP_MSGS__MSG__DETAIL__POINT_CLOUD_MAP_CELL_META_DATA_WITH_ID__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_map_msgs/msg/detail/point_cloud_map_cell_meta_data_with_id__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_map_msgs
{

namespace msg
{

namespace builder
{

class Init_PointCloudMapCellMetaDataWithID_metadata
{
public:
  explicit Init_PointCloudMapCellMetaDataWithID_metadata(::autoware_map_msgs::msg::PointCloudMapCellMetaDataWithID & msg)
  : msg_(msg)
  {}
  ::autoware_map_msgs::msg::PointCloudMapCellMetaDataWithID metadata(::autoware_map_msgs::msg::PointCloudMapCellMetaDataWithID::_metadata_type arg)
  {
    msg_.metadata = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_map_msgs::msg::PointCloudMapCellMetaDataWithID msg_;
};

class Init_PointCloudMapCellMetaDataWithID_cell_id
{
public:
  Init_PointCloudMapCellMetaDataWithID_cell_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PointCloudMapCellMetaDataWithID_metadata cell_id(::autoware_map_msgs::msg::PointCloudMapCellMetaDataWithID::_cell_id_type arg)
  {
    msg_.cell_id = std::move(arg);
    return Init_PointCloudMapCellMetaDataWithID_metadata(msg_);
  }

private:
  ::autoware_map_msgs::msg::PointCloudMapCellMetaDataWithID msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_map_msgs::msg::PointCloudMapCellMetaDataWithID>()
{
  return autoware_map_msgs::msg::builder::Init_PointCloudMapCellMetaDataWithID_cell_id();
}

}  // namespace autoware_map_msgs

#endif  // AUTOWARE_MAP_MSGS__MSG__DETAIL__POINT_CLOUD_MAP_CELL_META_DATA_WITH_ID__BUILDER_HPP_
