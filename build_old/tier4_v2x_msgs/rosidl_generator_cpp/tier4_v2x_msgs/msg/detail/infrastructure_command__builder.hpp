// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_v2x_msgs:msg/InfrastructureCommand.idl
// generated code does not contain a copyright notice

#ifndef TIER4_V2X_MSGS__MSG__DETAIL__INFRASTRUCTURE_COMMAND__BUILDER_HPP_
#define TIER4_V2X_MSGS__MSG__DETAIL__INFRASTRUCTURE_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_v2x_msgs/msg/detail/infrastructure_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_InfrastructureCommand_state
{
public:
  explicit Init_InfrastructureCommand_state(::tier4_v2x_msgs::msg::InfrastructureCommand & msg)
  : msg_(msg)
  {}
  ::tier4_v2x_msgs::msg::InfrastructureCommand state(::tier4_v2x_msgs::msg::InfrastructureCommand::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_v2x_msgs::msg::InfrastructureCommand msg_;
};

class Init_InfrastructureCommand_custom_tags
{
public:
  explicit Init_InfrastructureCommand_custom_tags(::tier4_v2x_msgs::msg::InfrastructureCommand & msg)
  : msg_(msg)
  {}
  Init_InfrastructureCommand_state custom_tags(::tier4_v2x_msgs::msg::InfrastructureCommand::_custom_tags_type arg)
  {
    msg_.custom_tags = std::move(arg);
    return Init_InfrastructureCommand_state(msg_);
  }

private:
  ::tier4_v2x_msgs::msg::InfrastructureCommand msg_;
};

class Init_InfrastructureCommand_id
{
public:
  explicit Init_InfrastructureCommand_id(::tier4_v2x_msgs::msg::InfrastructureCommand & msg)
  : msg_(msg)
  {}
  Init_InfrastructureCommand_custom_tags id(::tier4_v2x_msgs::msg::InfrastructureCommand::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_InfrastructureCommand_custom_tags(msg_);
  }

private:
  ::tier4_v2x_msgs::msg::InfrastructureCommand msg_;
};

class Init_InfrastructureCommand_type
{
public:
  explicit Init_InfrastructureCommand_type(::tier4_v2x_msgs::msg::InfrastructureCommand & msg)
  : msg_(msg)
  {}
  Init_InfrastructureCommand_id type(::tier4_v2x_msgs::msg::InfrastructureCommand::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_InfrastructureCommand_id(msg_);
  }

private:
  ::tier4_v2x_msgs::msg::InfrastructureCommand msg_;
};

class Init_InfrastructureCommand_stamp
{
public:
  Init_InfrastructureCommand_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_InfrastructureCommand_type stamp(::tier4_v2x_msgs::msg::InfrastructureCommand::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_InfrastructureCommand_type(msg_);
  }

private:
  ::tier4_v2x_msgs::msg::InfrastructureCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_v2x_msgs::msg::InfrastructureCommand>()
{
  return tier4_v2x_msgs::msg::builder::Init_InfrastructureCommand_stamp();
}

}  // namespace tier4_v2x_msgs

#endif  // TIER4_V2X_MSGS__MSG__DETAIL__INFRASTRUCTURE_COMMAND__BUILDER_HPP_
