// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_map_msgs:msg/AreaInfo.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_MAP_MSGS__MSG__DETAIL__AREA_INFO__BUILDER_HPP_
#define AUTOWARE_MAP_MSGS__MSG__DETAIL__AREA_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_map_msgs/msg/detail/area_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_map_msgs
{

namespace msg
{

namespace builder
{

class Init_AreaInfo_radius
{
public:
  explicit Init_AreaInfo_radius(::autoware_map_msgs::msg::AreaInfo & msg)
  : msg_(msg)
  {}
  ::autoware_map_msgs::msg::AreaInfo radius(::autoware_map_msgs::msg::AreaInfo::_radius_type arg)
  {
    msg_.radius = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_map_msgs::msg::AreaInfo msg_;
};

class Init_AreaInfo_center_y
{
public:
  explicit Init_AreaInfo_center_y(::autoware_map_msgs::msg::AreaInfo & msg)
  : msg_(msg)
  {}
  Init_AreaInfo_radius center_y(::autoware_map_msgs::msg::AreaInfo::_center_y_type arg)
  {
    msg_.center_y = std::move(arg);
    return Init_AreaInfo_radius(msg_);
  }

private:
  ::autoware_map_msgs::msg::AreaInfo msg_;
};

class Init_AreaInfo_center_x
{
public:
  Init_AreaInfo_center_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AreaInfo_center_y center_x(::autoware_map_msgs::msg::AreaInfo::_center_x_type arg)
  {
    msg_.center_x = std::move(arg);
    return Init_AreaInfo_center_y(msg_);
  }

private:
  ::autoware_map_msgs::msg::AreaInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_map_msgs::msg::AreaInfo>()
{
  return autoware_map_msgs::msg::builder::Init_AreaInfo_center_x();
}

}  // namespace autoware_map_msgs

#endif  // AUTOWARE_MAP_MSGS__MSG__DETAIL__AREA_INFO__BUILDER_HPP_
