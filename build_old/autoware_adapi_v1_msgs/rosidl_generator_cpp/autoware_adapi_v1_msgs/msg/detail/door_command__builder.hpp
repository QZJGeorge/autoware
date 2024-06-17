// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_adapi_v1_msgs:msg/DoorCommand.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__DOOR_COMMAND__BUILDER_HPP_
#define AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__DOOR_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_adapi_v1_msgs/msg/detail/door_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_adapi_v1_msgs
{

namespace msg
{

namespace builder
{

class Init_DoorCommand_command
{
public:
  explicit Init_DoorCommand_command(::autoware_adapi_v1_msgs::msg::DoorCommand & msg)
  : msg_(msg)
  {}
  ::autoware_adapi_v1_msgs::msg::DoorCommand command(::autoware_adapi_v1_msgs::msg::DoorCommand::_command_type arg)
  {
    msg_.command = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_adapi_v1_msgs::msg::DoorCommand msg_;
};

class Init_DoorCommand_index
{
public:
  Init_DoorCommand_index()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DoorCommand_command index(::autoware_adapi_v1_msgs::msg::DoorCommand::_index_type arg)
  {
    msg_.index = std::move(arg);
    return Init_DoorCommand_command(msg_);
  }

private:
  ::autoware_adapi_v1_msgs::msg::DoorCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_adapi_v1_msgs::msg::DoorCommand>()
{
  return autoware_adapi_v1_msgs::msg::builder::Init_DoorCommand_index();
}

}  // namespace autoware_adapi_v1_msgs

#endif  // AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__DOOR_COMMAND__BUILDER_HPP_
