// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_rtc_msgs:msg/CooperateResponse.idl
// generated code does not contain a copyright notice

#ifndef TIER4_RTC_MSGS__MSG__DETAIL__COOPERATE_RESPONSE__BUILDER_HPP_
#define TIER4_RTC_MSGS__MSG__DETAIL__COOPERATE_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_rtc_msgs/msg/detail/cooperate_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_rtc_msgs
{

namespace msg
{

namespace builder
{

class Init_CooperateResponse_success
{
public:
  explicit Init_CooperateResponse_success(::tier4_rtc_msgs::msg::CooperateResponse & msg)
  : msg_(msg)
  {}
  ::tier4_rtc_msgs::msg::CooperateResponse success(::tier4_rtc_msgs::msg::CooperateResponse::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_rtc_msgs::msg::CooperateResponse msg_;
};

class Init_CooperateResponse_module
{
public:
  explicit Init_CooperateResponse_module(::tier4_rtc_msgs::msg::CooperateResponse & msg)
  : msg_(msg)
  {}
  Init_CooperateResponse_success module(::tier4_rtc_msgs::msg::CooperateResponse::_module_type arg)
  {
    msg_.module = std::move(arg);
    return Init_CooperateResponse_success(msg_);
  }

private:
  ::tier4_rtc_msgs::msg::CooperateResponse msg_;
};

class Init_CooperateResponse_uuid
{
public:
  Init_CooperateResponse_uuid()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CooperateResponse_module uuid(::tier4_rtc_msgs::msg::CooperateResponse::_uuid_type arg)
  {
    msg_.uuid = std::move(arg);
    return Init_CooperateResponse_module(msg_);
  }

private:
  ::tier4_rtc_msgs::msg::CooperateResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_rtc_msgs::msg::CooperateResponse>()
{
  return tier4_rtc_msgs::msg::builder::Init_CooperateResponse_uuid();
}

}  // namespace tier4_rtc_msgs

#endif  // TIER4_RTC_MSGS__MSG__DETAIL__COOPERATE_RESPONSE__BUILDER_HPP_
