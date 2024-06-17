// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_rtc_msgs:msg/AutoModeStatusArray.idl
// generated code does not contain a copyright notice

#ifndef TIER4_RTC_MSGS__MSG__DETAIL__AUTO_MODE_STATUS_ARRAY__BUILDER_HPP_
#define TIER4_RTC_MSGS__MSG__DETAIL__AUTO_MODE_STATUS_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_rtc_msgs/msg/detail/auto_mode_status_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_rtc_msgs
{

namespace msg
{

namespace builder
{

class Init_AutoModeStatusArray_statuses
{
public:
  explicit Init_AutoModeStatusArray_statuses(::tier4_rtc_msgs::msg::AutoModeStatusArray & msg)
  : msg_(msg)
  {}
  ::tier4_rtc_msgs::msg::AutoModeStatusArray statuses(::tier4_rtc_msgs::msg::AutoModeStatusArray::_statuses_type arg)
  {
    msg_.statuses = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_rtc_msgs::msg::AutoModeStatusArray msg_;
};

class Init_AutoModeStatusArray_stamp
{
public:
  Init_AutoModeStatusArray_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AutoModeStatusArray_statuses stamp(::tier4_rtc_msgs::msg::AutoModeStatusArray::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_AutoModeStatusArray_statuses(msg_);
  }

private:
  ::tier4_rtc_msgs::msg::AutoModeStatusArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_rtc_msgs::msg::AutoModeStatusArray>()
{
  return tier4_rtc_msgs::msg::builder::Init_AutoModeStatusArray_stamp();
}

}  // namespace tier4_rtc_msgs

#endif  // TIER4_RTC_MSGS__MSG__DETAIL__AUTO_MODE_STATUS_ARRAY__BUILDER_HPP_
