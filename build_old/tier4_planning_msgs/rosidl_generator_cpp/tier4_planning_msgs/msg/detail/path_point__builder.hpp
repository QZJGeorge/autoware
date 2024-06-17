// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_planning_msgs:msg/PathPoint.idl
// generated code does not contain a copyright notice

#ifndef TIER4_PLANNING_MSGS__MSG__DETAIL__PATH_POINT__BUILDER_HPP_
#define TIER4_PLANNING_MSGS__MSG__DETAIL__PATH_POINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_planning_msgs/msg/detail/path_point__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_planning_msgs
{

namespace msg
{

namespace builder
{

class Init_PathPoint_type
{
public:
  explicit Init_PathPoint_type(::tier4_planning_msgs::msg::PathPoint & msg)
  : msg_(msg)
  {}
  ::tier4_planning_msgs::msg::PathPoint type(::tier4_planning_msgs::msg::PathPoint::_type_type arg)
  {
    msg_.type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_planning_msgs::msg::PathPoint msg_;
};

class Init_PathPoint_twist
{
public:
  explicit Init_PathPoint_twist(::tier4_planning_msgs::msg::PathPoint & msg)
  : msg_(msg)
  {}
  Init_PathPoint_type twist(::tier4_planning_msgs::msg::PathPoint::_twist_type arg)
  {
    msg_.twist = std::move(arg);
    return Init_PathPoint_type(msg_);
  }

private:
  ::tier4_planning_msgs::msg::PathPoint msg_;
};

class Init_PathPoint_pose
{
public:
  Init_PathPoint_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PathPoint_twist pose(::tier4_planning_msgs::msg::PathPoint::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_PathPoint_twist(msg_);
  }

private:
  ::tier4_planning_msgs::msg::PathPoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_planning_msgs::msg::PathPoint>()
{
  return tier4_planning_msgs::msg::builder::Init_PathPoint_pose();
}

}  // namespace tier4_planning_msgs

#endif  // TIER4_PLANNING_MSGS__MSG__DETAIL__PATH_POINT__BUILDER_HPP_
