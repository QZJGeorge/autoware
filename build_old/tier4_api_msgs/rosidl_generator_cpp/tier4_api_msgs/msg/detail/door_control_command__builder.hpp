// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_api_msgs:msg/DoorControlCommand.idl
// generated code does not contain a copyright notice

#ifndef TIER4_API_MSGS__MSG__DETAIL__DOOR_CONTROL_COMMAND__BUILDER_HPP_
#define TIER4_API_MSGS__MSG__DETAIL__DOOR_CONTROL_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_api_msgs/msg/detail/door_control_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_api_msgs
{

namespace msg
{

namespace builder
{

class Init_DoorControlCommand_open
{
public:
  explicit Init_DoorControlCommand_open(::tier4_api_msgs::msg::DoorControlCommand & msg)
  : msg_(msg)
  {}
  ::tier4_api_msgs::msg::DoorControlCommand open(::tier4_api_msgs::msg::DoorControlCommand::_open_type arg)
  {
    msg_.open = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_api_msgs::msg::DoorControlCommand msg_;
};

class Init_DoorControlCommand_stamp
{
public:
  Init_DoorControlCommand_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DoorControlCommand_open stamp(::tier4_api_msgs::msg::DoorControlCommand::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_DoorControlCommand_open(msg_);
  }

private:
  ::tier4_api_msgs::msg::DoorControlCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_api_msgs::msg::DoorControlCommand>()
{
  return tier4_api_msgs::msg::builder::Init_DoorControlCommand_stamp();
}

}  // namespace tier4_api_msgs

#endif  // TIER4_API_MSGS__MSG__DETAIL__DOOR_CONTROL_COMMAND__BUILDER_HPP_
