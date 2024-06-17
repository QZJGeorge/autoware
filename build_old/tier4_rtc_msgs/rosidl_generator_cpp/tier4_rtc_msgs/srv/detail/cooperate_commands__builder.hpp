// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_rtc_msgs:srv/CooperateCommands.idl
// generated code does not contain a copyright notice

#ifndef TIER4_RTC_MSGS__SRV__DETAIL__COOPERATE_COMMANDS__BUILDER_HPP_
#define TIER4_RTC_MSGS__SRV__DETAIL__COOPERATE_COMMANDS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_rtc_msgs/srv/detail/cooperate_commands__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_rtc_msgs
{

namespace srv
{

namespace builder
{

class Init_CooperateCommands_Request_commands
{
public:
  explicit Init_CooperateCommands_Request_commands(::tier4_rtc_msgs::srv::CooperateCommands_Request & msg)
  : msg_(msg)
  {}
  ::tier4_rtc_msgs::srv::CooperateCommands_Request commands(::tier4_rtc_msgs::srv::CooperateCommands_Request::_commands_type arg)
  {
    msg_.commands = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_rtc_msgs::srv::CooperateCommands_Request msg_;
};

class Init_CooperateCommands_Request_stamp
{
public:
  Init_CooperateCommands_Request_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CooperateCommands_Request_commands stamp(::tier4_rtc_msgs::srv::CooperateCommands_Request::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_CooperateCommands_Request_commands(msg_);
  }

private:
  ::tier4_rtc_msgs::srv::CooperateCommands_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_rtc_msgs::srv::CooperateCommands_Request>()
{
  return tier4_rtc_msgs::srv::builder::Init_CooperateCommands_Request_stamp();
}

}  // namespace tier4_rtc_msgs


namespace tier4_rtc_msgs
{

namespace srv
{

namespace builder
{

class Init_CooperateCommands_Response_responses
{
public:
  Init_CooperateCommands_Response_responses()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tier4_rtc_msgs::srv::CooperateCommands_Response responses(::tier4_rtc_msgs::srv::CooperateCommands_Response::_responses_type arg)
  {
    msg_.responses = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_rtc_msgs::srv::CooperateCommands_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_rtc_msgs::srv::CooperateCommands_Response>()
{
  return tier4_rtc_msgs::srv::builder::Init_CooperateCommands_Response_responses();
}

}  // namespace tier4_rtc_msgs

#endif  // TIER4_RTC_MSGS__SRV__DETAIL__COOPERATE_COMMANDS__BUILDER_HPP_
