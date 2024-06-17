// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_planning_msgs:msg/Trajectory.idl
// generated code does not contain a copyright notice

#ifndef TIER4_PLANNING_MSGS__MSG__DETAIL__TRAJECTORY__BUILDER_HPP_
#define TIER4_PLANNING_MSGS__MSG__DETAIL__TRAJECTORY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_planning_msgs/msg/detail/trajectory__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_planning_msgs
{

namespace msg
{

namespace builder
{

class Init_Trajectory_points
{
public:
  explicit Init_Trajectory_points(::tier4_planning_msgs::msg::Trajectory & msg)
  : msg_(msg)
  {}
  ::tier4_planning_msgs::msg::Trajectory points(::tier4_planning_msgs::msg::Trajectory::_points_type arg)
  {
    msg_.points = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_planning_msgs::msg::Trajectory msg_;
};

class Init_Trajectory_header
{
public:
  Init_Trajectory_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Trajectory_points header(::tier4_planning_msgs::msg::Trajectory::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Trajectory_points(msg_);
  }

private:
  ::tier4_planning_msgs::msg::Trajectory msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_planning_msgs::msg::Trajectory>()
{
  return tier4_planning_msgs::msg::builder::Init_Trajectory_header();
}

}  // namespace tier4_planning_msgs

#endif  // TIER4_PLANNING_MSGS__MSG__DETAIL__TRAJECTORY__BUILDER_HPP_
