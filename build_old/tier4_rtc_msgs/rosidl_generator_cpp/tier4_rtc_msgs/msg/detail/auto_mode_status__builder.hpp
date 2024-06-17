// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_rtc_msgs:msg/AutoModeStatus.idl
// generated code does not contain a copyright notice

#ifndef TIER4_RTC_MSGS__MSG__DETAIL__AUTO_MODE_STATUS__BUILDER_HPP_
#define TIER4_RTC_MSGS__MSG__DETAIL__AUTO_MODE_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_rtc_msgs/msg/detail/auto_mode_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_rtc_msgs
{

namespace msg
{

namespace builder
{

class Init_AutoModeStatus_is_auto_mode
{
public:
  explicit Init_AutoModeStatus_is_auto_mode(::tier4_rtc_msgs::msg::AutoModeStatus & msg)
  : msg_(msg)
  {}
  ::tier4_rtc_msgs::msg::AutoModeStatus is_auto_mode(::tier4_rtc_msgs::msg::AutoModeStatus::_is_auto_mode_type arg)
  {
    msg_.is_auto_mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_rtc_msgs::msg::AutoModeStatus msg_;
};

class Init_AutoModeStatus_module
{
public:
  Init_AutoModeStatus_module()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AutoModeStatus_is_auto_mode module(::tier4_rtc_msgs::msg::AutoModeStatus::_module_type arg)
  {
    msg_.module = std::move(arg);
    return Init_AutoModeStatus_is_auto_mode(msg_);
  }

private:
  ::tier4_rtc_msgs::msg::AutoModeStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_rtc_msgs::msg::AutoModeStatus>()
{
  return tier4_rtc_msgs::msg::builder::Init_AutoModeStatus_module();
}

}  // namespace tier4_rtc_msgs

#endif  // TIER4_RTC_MSGS__MSG__DETAIL__AUTO_MODE_STATUS__BUILDER_HPP_
