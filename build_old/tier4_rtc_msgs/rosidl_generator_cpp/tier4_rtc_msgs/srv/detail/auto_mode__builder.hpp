// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_rtc_msgs:srv/AutoMode.idl
// generated code does not contain a copyright notice

#ifndef TIER4_RTC_MSGS__SRV__DETAIL__AUTO_MODE__BUILDER_HPP_
#define TIER4_RTC_MSGS__SRV__DETAIL__AUTO_MODE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_rtc_msgs/srv/detail/auto_mode__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_rtc_msgs
{

namespace srv
{

namespace builder
{

class Init_AutoMode_Request_enable
{
public:
  Init_AutoMode_Request_enable()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tier4_rtc_msgs::srv::AutoMode_Request enable(::tier4_rtc_msgs::srv::AutoMode_Request::_enable_type arg)
  {
    msg_.enable = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_rtc_msgs::srv::AutoMode_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_rtc_msgs::srv::AutoMode_Request>()
{
  return tier4_rtc_msgs::srv::builder::Init_AutoMode_Request_enable();
}

}  // namespace tier4_rtc_msgs


namespace tier4_rtc_msgs
{

namespace srv
{

namespace builder
{

class Init_AutoMode_Response_success
{
public:
  Init_AutoMode_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tier4_rtc_msgs::srv::AutoMode_Response success(::tier4_rtc_msgs::srv::AutoMode_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_rtc_msgs::srv::AutoMode_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_rtc_msgs::srv::AutoMode_Response>()
{
  return tier4_rtc_msgs::srv::builder::Init_AutoMode_Response_success();
}

}  // namespace tier4_rtc_msgs

#endif  // TIER4_RTC_MSGS__SRV__DETAIL__AUTO_MODE__BUILDER_HPP_
