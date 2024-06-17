// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_api_msgs:msg/StopCommand.idl
// generated code does not contain a copyright notice

#ifndef TIER4_API_MSGS__MSG__DETAIL__STOP_COMMAND__BUILDER_HPP_
#define TIER4_API_MSGS__MSG__DETAIL__STOP_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_api_msgs/msg/detail/stop_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_api_msgs
{

namespace msg
{

namespace builder
{

class Init_StopCommand_stop
{
public:
  explicit Init_StopCommand_stop(::tier4_api_msgs::msg::StopCommand & msg)
  : msg_(msg)
  {}
  ::tier4_api_msgs::msg::StopCommand stop(::tier4_api_msgs::msg::StopCommand::_stop_type arg)
  {
    msg_.stop = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_api_msgs::msg::StopCommand msg_;
};

class Init_StopCommand_stamp
{
public:
  Init_StopCommand_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StopCommand_stop stamp(::tier4_api_msgs::msg::StopCommand::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_StopCommand_stop(msg_);
  }

private:
  ::tier4_api_msgs::msg::StopCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_api_msgs::msg::StopCommand>()
{
  return tier4_api_msgs::msg::builder::Init_StopCommand_stamp();
}

}  // namespace tier4_api_msgs

#endif  // TIER4_API_MSGS__MSG__DETAIL__STOP_COMMAND__BUILDER_HPP_
