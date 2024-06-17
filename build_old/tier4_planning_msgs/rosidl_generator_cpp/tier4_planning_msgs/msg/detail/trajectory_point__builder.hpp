// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_planning_msgs:msg/TrajectoryPoint.idl
// generated code does not contain a copyright notice

#ifndef TIER4_PLANNING_MSGS__MSG__DETAIL__TRAJECTORY_POINT__BUILDER_HPP_
#define TIER4_PLANNING_MSGS__MSG__DETAIL__TRAJECTORY_POINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_planning_msgs/msg/detail/trajectory_point__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_planning_msgs
{

namespace msg
{

namespace builder
{

class Init_TrajectoryPoint_accel
{
public:
  explicit Init_TrajectoryPoint_accel(::tier4_planning_msgs::msg::TrajectoryPoint & msg)
  : msg_(msg)
  {}
  ::tier4_planning_msgs::msg::TrajectoryPoint accel(::tier4_planning_msgs::msg::TrajectoryPoint::_accel_type arg)
  {
    msg_.accel = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_planning_msgs::msg::TrajectoryPoint msg_;
};

class Init_TrajectoryPoint_twist
{
public:
  explicit Init_TrajectoryPoint_twist(::tier4_planning_msgs::msg::TrajectoryPoint & msg)
  : msg_(msg)
  {}
  Init_TrajectoryPoint_accel twist(::tier4_planning_msgs::msg::TrajectoryPoint::_twist_type arg)
  {
    msg_.twist = std::move(arg);
    return Init_TrajectoryPoint_accel(msg_);
  }

private:
  ::tier4_planning_msgs::msg::TrajectoryPoint msg_;
};

class Init_TrajectoryPoint_pose
{
public:
  Init_TrajectoryPoint_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrajectoryPoint_twist pose(::tier4_planning_msgs::msg::TrajectoryPoint::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_TrajectoryPoint_twist(msg_);
  }

private:
  ::tier4_planning_msgs::msg::TrajectoryPoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_planning_msgs::msg::TrajectoryPoint>()
{
  return tier4_planning_msgs::msg::builder::Init_TrajectoryPoint_pose();
}

}  // namespace tier4_planning_msgs

#endif  // TIER4_PLANNING_MSGS__MSG__DETAIL__TRAJECTORY_POINT__BUILDER_HPP_
