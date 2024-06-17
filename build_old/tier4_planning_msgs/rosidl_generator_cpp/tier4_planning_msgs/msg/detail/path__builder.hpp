// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_planning_msgs:msg/Path.idl
// generated code does not contain a copyright notice

#ifndef TIER4_PLANNING_MSGS__MSG__DETAIL__PATH__BUILDER_HPP_
#define TIER4_PLANNING_MSGS__MSG__DETAIL__PATH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_planning_msgs/msg/detail/path__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_planning_msgs
{

namespace msg
{

namespace builder
{

class Init_Path_drivable_area
{
public:
  explicit Init_Path_drivable_area(::tier4_planning_msgs::msg::Path & msg)
  : msg_(msg)
  {}
  ::tier4_planning_msgs::msg::Path drivable_area(::tier4_planning_msgs::msg::Path::_drivable_area_type arg)
  {
    msg_.drivable_area = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_planning_msgs::msg::Path msg_;
};

class Init_Path_points
{
public:
  explicit Init_Path_points(::tier4_planning_msgs::msg::Path & msg)
  : msg_(msg)
  {}
  Init_Path_drivable_area points(::tier4_planning_msgs::msg::Path::_points_type arg)
  {
    msg_.points = std::move(arg);
    return Init_Path_drivable_area(msg_);
  }

private:
  ::tier4_planning_msgs::msg::Path msg_;
};

class Init_Path_header
{
public:
  Init_Path_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Path_points header(::tier4_planning_msgs::msg::Path::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Path_points(msg_);
  }

private:
  ::tier4_planning_msgs::msg::Path msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_planning_msgs::msg::Path>()
{
  return tier4_planning_msgs::msg::builder::Init_Path_header();
}

}  // namespace tier4_planning_msgs

#endif  // TIER4_PLANNING_MSGS__MSG__DETAIL__PATH__BUILDER_HPP_
