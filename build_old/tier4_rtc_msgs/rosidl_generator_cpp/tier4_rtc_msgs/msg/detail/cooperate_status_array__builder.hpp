// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_rtc_msgs:msg/CooperateStatusArray.idl
// generated code does not contain a copyright notice

#ifndef TIER4_RTC_MSGS__MSG__DETAIL__COOPERATE_STATUS_ARRAY__BUILDER_HPP_
#define TIER4_RTC_MSGS__MSG__DETAIL__COOPERATE_STATUS_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_rtc_msgs/msg/detail/cooperate_status_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_rtc_msgs
{

namespace msg
{

namespace builder
{

class Init_CooperateStatusArray_statuses
{
public:
  explicit Init_CooperateStatusArray_statuses(::tier4_rtc_msgs::msg::CooperateStatusArray & msg)
  : msg_(msg)
  {}
  ::tier4_rtc_msgs::msg::CooperateStatusArray statuses(::tier4_rtc_msgs::msg::CooperateStatusArray::_statuses_type arg)
  {
    msg_.statuses = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_rtc_msgs::msg::CooperateStatusArray msg_;
};

class Init_CooperateStatusArray_stamp
{
public:
  Init_CooperateStatusArray_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CooperateStatusArray_statuses stamp(::tier4_rtc_msgs::msg::CooperateStatusArray::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_CooperateStatusArray_statuses(msg_);
  }

private:
  ::tier4_rtc_msgs::msg::CooperateStatusArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_rtc_msgs::msg::CooperateStatusArray>()
{
  return tier4_rtc_msgs::msg::builder::Init_CooperateStatusArray_stamp();
}

}  // namespace tier4_rtc_msgs

#endif  // TIER4_RTC_MSGS__MSG__DETAIL__COOPERATE_STATUS_ARRAY__BUILDER_HPP_
