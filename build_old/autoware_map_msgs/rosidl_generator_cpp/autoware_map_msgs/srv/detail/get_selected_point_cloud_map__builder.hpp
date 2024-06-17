// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_map_msgs:srv/GetSelectedPointCloudMap.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_MAP_MSGS__SRV__DETAIL__GET_SELECTED_POINT_CLOUD_MAP__BUILDER_HPP_
#define AUTOWARE_MAP_MSGS__SRV__DETAIL__GET_SELECTED_POINT_CLOUD_MAP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_map_msgs/srv/detail/get_selected_point_cloud_map__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_map_msgs
{

namespace srv
{

namespace builder
{

class Init_GetSelectedPointCloudMap_Request_cell_ids
{
public:
  Init_GetSelectedPointCloudMap_Request_cell_ids()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::autoware_map_msgs::srv::GetSelectedPointCloudMap_Request cell_ids(::autoware_map_msgs::srv::GetSelectedPointCloudMap_Request::_cell_ids_type arg)
  {
    msg_.cell_ids = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_map_msgs::srv::GetSelectedPointCloudMap_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_map_msgs::srv::GetSelectedPointCloudMap_Request>()
{
  return autoware_map_msgs::srv::builder::Init_GetSelectedPointCloudMap_Request_cell_ids();
}

}  // namespace autoware_map_msgs


namespace autoware_map_msgs
{

namespace srv
{

namespace builder
{

class Init_GetSelectedPointCloudMap_Response_new_pointcloud_with_ids
{
public:
  explicit Init_GetSelectedPointCloudMap_Response_new_pointcloud_with_ids(::autoware_map_msgs::srv::GetSelectedPointCloudMap_Response & msg)
  : msg_(msg)
  {}
  ::autoware_map_msgs::srv::GetSelectedPointCloudMap_Response new_pointcloud_with_ids(::autoware_map_msgs::srv::GetSelectedPointCloudMap_Response::_new_pointcloud_with_ids_type arg)
  {
    msg_.new_pointcloud_with_ids = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_map_msgs::srv::GetSelectedPointCloudMap_Response msg_;
};

class Init_GetSelectedPointCloudMap_Response_header
{
public:
  Init_GetSelectedPointCloudMap_Response_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetSelectedPointCloudMap_Response_new_pointcloud_with_ids header(::autoware_map_msgs::srv::GetSelectedPointCloudMap_Response::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GetSelectedPointCloudMap_Response_new_pointcloud_with_ids(msg_);
  }

private:
  ::autoware_map_msgs::srv::GetSelectedPointCloudMap_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_map_msgs::srv::GetSelectedPointCloudMap_Response>()
{
  return autoware_map_msgs::srv::builder::Init_GetSelectedPointCloudMap_Response_header();
}

}  // namespace autoware_map_msgs

#endif  // AUTOWARE_MAP_MSGS__SRV__DETAIL__GET_SELECTED_POINT_CLOUD_MAP__BUILDER_HPP_
