// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_planning_msgs:msg/VelocityLimitConstraints.idl
// generated code does not contain a copyright notice

#ifndef TIER4_PLANNING_MSGS__MSG__DETAIL__VELOCITY_LIMIT_CONSTRAINTS__BUILDER_HPP_
#define TIER4_PLANNING_MSGS__MSG__DETAIL__VELOCITY_LIMIT_CONSTRAINTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_planning_msgs/msg/detail/velocity_limit_constraints__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_planning_msgs
{

namespace msg
{

namespace builder
{

class Init_VelocityLimitConstraints_min_jerk
{
public:
  explicit Init_VelocityLimitConstraints_min_jerk(::tier4_planning_msgs::msg::VelocityLimitConstraints & msg)
  : msg_(msg)
  {}
  ::tier4_planning_msgs::msg::VelocityLimitConstraints min_jerk(::tier4_planning_msgs::msg::VelocityLimitConstraints::_min_jerk_type arg)
  {
    msg_.min_jerk = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_planning_msgs::msg::VelocityLimitConstraints msg_;
};

class Init_VelocityLimitConstraints_max_jerk
{
public:
  explicit Init_VelocityLimitConstraints_max_jerk(::tier4_planning_msgs::msg::VelocityLimitConstraints & msg)
  : msg_(msg)
  {}
  Init_VelocityLimitConstraints_min_jerk max_jerk(::tier4_planning_msgs::msg::VelocityLimitConstraints::_max_jerk_type arg)
  {
    msg_.max_jerk = std::move(arg);
    return Init_VelocityLimitConstraints_min_jerk(msg_);
  }

private:
  ::tier4_planning_msgs::msg::VelocityLimitConstraints msg_;
};

class Init_VelocityLimitConstraints_min_acceleration
{
public:
  Init_VelocityLimitConstraints_min_acceleration()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VelocityLimitConstraints_max_jerk min_acceleration(::tier4_planning_msgs::msg::VelocityLimitConstraints::_min_acceleration_type arg)
  {
    msg_.min_acceleration = std::move(arg);
    return Init_VelocityLimitConstraints_max_jerk(msg_);
  }

private:
  ::tier4_planning_msgs::msg::VelocityLimitConstraints msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_planning_msgs::msg::VelocityLimitConstraints>()
{
  return tier4_planning_msgs::msg::builder::Init_VelocityLimitConstraints_min_acceleration();
}

}  // namespace tier4_planning_msgs

#endif  // TIER4_PLANNING_MSGS__MSG__DETAIL__VELOCITY_LIMIT_CONSTRAINTS__BUILDER_HPP_
