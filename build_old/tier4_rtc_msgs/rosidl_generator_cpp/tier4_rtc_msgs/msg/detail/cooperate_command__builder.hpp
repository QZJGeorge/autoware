// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_rtc_msgs:msg/CooperateCommand.idl
// generated code does not contain a copyright notice

#ifndef TIER4_RTC_MSGS__MSG__DETAIL__COOPERATE_COMMAND__BUILDER_HPP_
#define TIER4_RTC_MSGS__MSG__DETAIL__COOPERATE_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_rtc_msgs/msg/detail/cooperate_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_rtc_msgs
{

namespace msg
{

namespace builder
{

class Init_CooperateCommand_command
{
public:
  explicit Init_CooperateCommand_command(::tier4_rtc_msgs::msg::CooperateCommand & msg)
  : msg_(msg)
  {}
  ::tier4_rtc_msgs::msg::CooperateCommand command(::tier4_rtc_msgs::msg::CooperateCommand::_command_type arg)
  {
    msg_.command = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_rtc_msgs::msg::CooperateCommand msg_;
};

class Init_CooperateCommand_module
{
public:
  explicit Init_CooperateCommand_module(::tier4_rtc_msgs::msg::CooperateCommand & msg)
  : msg_(msg)
  {}
  Init_CooperateCommand_command module(::tier4_rtc_msgs::msg::CooperateCommand::_module_type arg)
  {
    msg_.module = std::move(arg);
    return Init_CooperateCommand_command(msg_);
  }

private:
  ::tier4_rtc_msgs::msg::CooperateCommand msg_;
};

class Init_CooperateCommand_uuid
{
public:
  Init_CooperateCommand_uuid()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CooperateCommand_module uuid(::tier4_rtc_msgs::msg::CooperateCommand::_uuid_type arg)
  {
    msg_.uuid = std::move(arg);
    return Init_CooperateCommand_module(msg_);
  }

private:
  ::tier4_rtc_msgs::msg::CooperateCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_rtc_msgs::msg::CooperateCommand>()
{
  return tier4_rtc_msgs::msg::builder::Init_CooperateCommand_uuid();
}

}  // namespace tier4_rtc_msgs

#endif  // TIER4_RTC_MSGS__MSG__DETAIL__COOPERATE_COMMAND__BUILDER_HPP_
