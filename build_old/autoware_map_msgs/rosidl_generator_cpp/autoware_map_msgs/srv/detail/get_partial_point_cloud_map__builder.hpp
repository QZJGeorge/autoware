// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_map_msgs:srv/GetPartialPointCloudMap.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_MAP_MSGS__SRV__DETAIL__GET_PARTIAL_POINT_CLOUD_MAP__BUILDER_HPP_
#define AUTOWARE_MAP_MSGS__SRV__DETAIL__GET_PARTIAL_POINT_CLOUD_MAP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_map_msgs/srv/detail/get_partial_point_cloud_map__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_map_msgs
{

namespace srv
{

namespace builder
{

class Init_GetPartialPointCloudMap_Request_area
{
public:
  Init_GetPartialPointCloudMap_Request_area()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::autoware_map_msgs::srv::GetPartialPointCloudMap_Request area(::autoware_map_msgs::srv::GetPartialPointCloudMap_Request::_area_type arg)
  {
    msg_.area = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_map_msgs::srv::GetPartialPointCloudMap_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_map_msgs::srv::GetPartialPointCloudMap_Request>()
{
  return autoware_map_msgs::srv::builder::Init_GetPartialPointCloudMap_Request_area();
}

}  // namespace autoware_map_msgs


namespace autoware_map_msgs
{

namespace srv
{

namespace builder
{

class Init_GetPartialPointCloudMap_Response_new_pointcloud_with_ids
{
public:
  explicit Init_GetPartialPointCloudMap_Response_new_pointcloud_with_ids(::autoware_map_msgs::srv::GetPartialPointCloudMap_Response & msg)
  : msg_(msg)
  {}
  ::autoware_map_msgs::srv::GetPartialPointCloudMap_Response new_pointcloud_with_ids(::autoware_map_msgs::srv::GetPartialPointCloudMap_Response::_new_pointcloud_with_ids_type arg)
  {
    msg_.new_pointcloud_with_ids = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_map_msgs::srv::GetPartialPointCloudMap_Response msg_;
};

class Init_GetPartialPointCloudMap_Response_header
{
public:
  Init_GetPartialPointCloudMap_Response_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetPartialPointCloudMap_Response_new_pointcloud_with_ids header(::autoware_map_msgs::srv::GetPartialPointCloudMap_Response::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GetPartialPointCloudMap_Response_new_pointcloud_with_ids(msg_);
  }

private:
  ::autoware_map_msgs::srv::GetPartialPointCloudMap_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_map_msgs::srv::GetPartialPointCloudMap_Response>()
{
  return autoware_map_msgs::srv::builder::Init_GetPartialPointCloudMap_Response_header();
}

}  // namespace autoware_map_msgs

#endif  // AUTOWARE_MAP_MSGS__SRV__DETAIL__GET_PARTIAL_POINT_CLOUD_MAP__BUILDER_HPP_
