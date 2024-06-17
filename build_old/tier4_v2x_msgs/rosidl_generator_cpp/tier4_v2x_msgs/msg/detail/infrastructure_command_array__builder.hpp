// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_v2x_msgs:msg/InfrastructureCommandArray.idl
// generated code does not contain a copyright notice

#ifndef TIER4_V2X_MSGS__MSG__DETAIL__INFRASTRUCTURE_COMMAND_ARRAY__BUILDER_HPP_
#define TIER4_V2X_MSGS__MSG__DETAIL__INFRASTRUCTURE_COMMAND_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_v2x_msgs/msg/detail/infrastructure_command_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_InfrastructureCommandArray_commands
{
public:
  explicit Init_InfrastructureCommandArray_commands(::tier4_v2x_msgs::msg::InfrastructureCommandArray & msg)
  : msg_(msg)
  {}
  ::tier4_v2x_msgs::msg::InfrastructureCommandArray commands(::tier4_v2x_msgs::msg::InfrastructureCommandArray::_commands_type arg)
  {
    msg_.commands = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_v2x_msgs::msg::InfrastructureCommandArray msg_;
};

class Init_InfrastructureCommandArray_stamp
{
public:
  Init_InfrastructureCommandArray_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_InfrastructureCommandArray_commands stamp(::tier4_v2x_msgs::msg::InfrastructureCommandArray::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_InfrastructureCommandArray_commands(msg_);
  }

private:
  ::tier4_v2x_msgs::msg::InfrastructureCommandArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_v2x_msgs::msg::InfrastructureCommandArray>()
{
  return tier4_v2x_msgs::msg::builder::Init_InfrastructureCommandArray_stamp();
}

}  // namespace tier4_v2x_msgs

#endif  // TIER4_V2X_MSGS__MSG__DETAIL__INFRASTRUCTURE_COMMAND_ARRAY__BUILDER_HPP_
