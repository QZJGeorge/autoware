// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_planning_msgs:msg/VelocityLimitClearCommand.idl
// generated code does not contain a copyright notice

#ifndef TIER4_PLANNING_MSGS__MSG__DETAIL__VELOCITY_LIMIT_CLEAR_COMMAND__BUILDER_HPP_
#define TIER4_PLANNING_MSGS__MSG__DETAIL__VELOCITY_LIMIT_CLEAR_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_planning_msgs/msg/detail/velocity_limit_clear_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_planning_msgs
{

namespace msg
{

namespace builder
{

class Init_VelocityLimitClearCommand_sender
{
public:
  explicit Init_VelocityLimitClearCommand_sender(::tier4_planning_msgs::msg::VelocityLimitClearCommand & msg)
  : msg_(msg)
  {}
  ::tier4_planning_msgs::msg::VelocityLimitClearCommand sender(::tier4_planning_msgs::msg::VelocityLimitClearCommand::_sender_type arg)
  {
    msg_.sender = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_planning_msgs::msg::VelocityLimitClearCommand msg_;
};

class Init_VelocityLimitClearCommand_command
{
public:
  explicit Init_VelocityLimitClearCommand_command(::tier4_planning_msgs::msg::VelocityLimitClearCommand & msg)
  : msg_(msg)
  {}
  Init_VelocityLimitClearCommand_sender command(::tier4_planning_msgs::msg::VelocityLimitClearCommand::_command_type arg)
  {
    msg_.command = std::move(arg);
    return Init_VelocityLimitClearCommand_sender(msg_);
  }

private:
  ::tier4_planning_msgs::msg::VelocityLimitClearCommand msg_;
};

class Init_VelocityLimitClearCommand_stamp
{
public:
  Init_VelocityLimitClearCommand_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VelocityLimitClearCommand_command stamp(::tier4_planning_msgs::msg::VelocityLimitClearCommand::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_VelocityLimitClearCommand_command(msg_);
  }

private:
  ::tier4_planning_msgs::msg::VelocityLimitClearCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_planning_msgs::msg::VelocityLimitClearCommand>()
{
  return tier4_planning_msgs::msg::builder::Init_VelocityLimitClearCommand_stamp();
}

}  // namespace tier4_planning_msgs

#endif  // TIER4_PLANNING_MSGS__MSG__DETAIL__VELOCITY_LIMIT_CLEAR_COMMAND__BUILDER_HPP_
