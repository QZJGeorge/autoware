// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_map_msgs:srv/GetDifferentialPointCloudMap.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_MAP_MSGS__SRV__DETAIL__GET_DIFFERENTIAL_POINT_CLOUD_MAP__BUILDER_HPP_
#define AUTOWARE_MAP_MSGS__SRV__DETAIL__GET_DIFFERENTIAL_POINT_CLOUD_MAP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_map_msgs/srv/detail/get_differential_point_cloud_map__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_map_msgs
{

namespace srv
{

namespace builder
{

class Init_GetDifferentialPointCloudMap_Request_cached_ids
{
public:
  explicit Init_GetDifferentialPointCloudMap_Request_cached_ids(::autoware_map_msgs::srv::GetDifferentialPointCloudMap_Request & msg)
  : msg_(msg)
  {}
  ::autoware_map_msgs::srv::GetDifferentialPointCloudMap_Request cached_ids(::autoware_map_msgs::srv::GetDifferentialPointCloudMap_Request::_cached_ids_type arg)
  {
    msg_.cached_ids = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_map_msgs::srv::GetDifferentialPointCloudMap_Request msg_;
};

class Init_GetDifferentialPointCloudMap_Request_area
{
public:
  Init_GetDifferentialPointCloudMap_Request_area()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetDifferentialPointCloudMap_Request_cached_ids area(::autoware_map_msgs::srv::GetDifferentialPointCloudMap_Request::_area_type arg)
  {
    msg_.area = std::move(arg);
    return Init_GetDifferentialPointCloudMap_Request_cached_ids(msg_);
  }

private:
  ::autoware_map_msgs::srv::GetDifferentialPointCloudMap_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_map_msgs::srv::GetDifferentialPointCloudMap_Request>()
{
  return autoware_map_msgs::srv::builder::Init_GetDifferentialPointCloudMap_Request_area();
}

}  // namespace autoware_map_msgs


namespace autoware_map_msgs
{

namespace srv
{

namespace builder
{

class Init_GetDifferentialPointCloudMap_Response_ids_to_remove
{
public:
  explicit Init_GetDifferentialPointCloudMap_Response_ids_to_remove(::autoware_map_msgs::srv::GetDifferentialPointCloudMap_Response & msg)
  : msg_(msg)
  {}
  ::autoware_map_msgs::srv::GetDifferentialPointCloudMap_Response ids_to_remove(::autoware_map_msgs::srv::GetDifferentialPointCloudMap_Response::_ids_to_remove_type arg)
  {
    msg_.ids_to_remove = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_map_msgs::srv::GetDifferentialPointCloudMap_Response msg_;
};

class Init_GetDifferentialPointCloudMap_Response_new_pointcloud_with_ids
{
public:
  explicit Init_GetDifferentialPointCloudMap_Response_new_pointcloud_with_ids(::autoware_map_msgs::srv::GetDifferentialPointCloudMap_Response & msg)
  : msg_(msg)
  {}
  Init_GetDifferentialPointCloudMap_Response_ids_to_remove new_pointcloud_with_ids(::autoware_map_msgs::srv::GetDifferentialPointCloudMap_Response::_new_pointcloud_with_ids_type arg)
  {
    msg_.new_pointcloud_with_ids = std::move(arg);
    return Init_GetDifferentialPointCloudMap_Response_ids_to_remove(msg_);
  }

private:
  ::autoware_map_msgs::srv::GetDifferentialPointCloudMap_Response msg_;
};

class Init_GetDifferentialPointCloudMap_Response_header
{
public:
  Init_GetDifferentialPointCloudMap_Response_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetDifferentialPointCloudMap_Response_new_pointcloud_with_ids header(::autoware_map_msgs::srv::GetDifferentialPointCloudMap_Response::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GetDifferentialPointCloudMap_Response_new_pointcloud_with_ids(msg_);
  }

private:
  ::autoware_map_msgs::srv::GetDifferentialPointCloudMap_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_map_msgs::srv::GetDifferentialPointCloudMap_Response>()
{
  return autoware_map_msgs::srv::builder::Init_GetDifferentialPointCloudMap_Response_header();
}

}  // namespace autoware_map_msgs

#endif  // AUTOWARE_MAP_MSGS__SRV__DETAIL__GET_DIFFERENTIAL_POINT_CLOUD_MAP__BUILDER_HPP_
