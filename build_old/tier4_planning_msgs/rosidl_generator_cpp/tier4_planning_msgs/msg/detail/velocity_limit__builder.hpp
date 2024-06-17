// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_planning_msgs:msg/VelocityLimit.idl
// generated code does not contain a copyright notice

#ifndef TIER4_PLANNING_MSGS__MSG__DETAIL__VELOCITY_LIMIT__BUILDER_HPP_
#define TIER4_PLANNING_MSGS__MSG__DETAIL__VELOCITY_LIMIT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_planning_msgs/msg/detail/velocity_limit__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_planning_msgs
{

namespace msg
{

namespace builder
{

class Init_VelocityLimit_sender
{
public:
  explicit Init_VelocityLimit_sender(::tier4_planning_msgs::msg::VelocityLimit & msg)
  : msg_(msg)
  {}
  ::tier4_planning_msgs::msg::VelocityLimit sender(::tier4_planning_msgs::msg::VelocityLimit::_sender_type arg)
  {
    msg_.sender = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_planning_msgs::msg::VelocityLimit msg_;
};

class Init_VelocityLimit_constraints
{
public:
  explicit Init_VelocityLimit_constraints(::tier4_planning_msgs::msg::VelocityLimit & msg)
  : msg_(msg)
  {}
  Init_VelocityLimit_sender constraints(::tier4_planning_msgs::msg::VelocityLimit::_constraints_type arg)
  {
    msg_.constraints = std::move(arg);
    return Init_VelocityLimit_sender(msg_);
  }

private:
  ::tier4_planning_msgs::msg::VelocityLimit msg_;
};

class Init_VelocityLimit_use_constraints
{
public:
  explicit Init_VelocityLimit_use_constraints(::tier4_planning_msgs::msg::VelocityLimit & msg)
  : msg_(msg)
  {}
  Init_VelocityLimit_constraints use_constraints(::tier4_planning_msgs::msg::VelocityLimit::_use_constraints_type arg)
  {
    msg_.use_constraints = std::move(arg);
    return Init_VelocityLimit_constraints(msg_);
  }

private:
  ::tier4_planning_msgs::msg::VelocityLimit msg_;
};

class Init_VelocityLimit_max_velocity
{
public:
  explicit Init_VelocityLimit_max_velocity(::tier4_planning_msgs::msg::VelocityLimit & msg)
  : msg_(msg)
  {}
  Init_VelocityLimit_use_constraints max_velocity(::tier4_planning_msgs::msg::VelocityLimit::_max_velocity_type arg)
  {
    msg_.max_velocity = std::move(arg);
    return Init_VelocityLimit_use_constraints(msg_);
  }

private:
  ::tier4_planning_msgs::msg::VelocityLimit msg_;
};

class Init_VelocityLimit_stamp
{
public:
  Init_VelocityLimit_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VelocityLimit_max_velocity stamp(::tier4_planning_msgs::msg::VelocityLimit::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_VelocityLimit_max_velocity(msg_);
  }

private:
  ::tier4_planning_msgs::msg::VelocityLimit msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_planning_msgs::msg::VelocityLimit>()
{
  return tier4_planning_msgs::msg::builder::Init_VelocityLimit_stamp();
}

}  // namespace tier4_planning_msgs

#endif  // TIER4_PLANNING_MSGS__MSG__DETAIL__VELOCITY_LIMIT__BUILDER_HPP_
