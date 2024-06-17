// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_rtc_msgs:msg/CooperateStatus.idl
// generated code does not contain a copyright notice

#ifndef TIER4_RTC_MSGS__MSG__DETAIL__COOPERATE_STATUS__BUILDER_HPP_
#define TIER4_RTC_MSGS__MSG__DETAIL__COOPERATE_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_rtc_msgs/msg/detail/cooperate_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_rtc_msgs
{

namespace msg
{

namespace builder
{

class Init_CooperateStatus_finish_distance
{
public:
  explicit Init_CooperateStatus_finish_distance(::tier4_rtc_msgs::msg::CooperateStatus & msg)
  : msg_(msg)
  {}
  ::tier4_rtc_msgs::msg::CooperateStatus finish_distance(::tier4_rtc_msgs::msg::CooperateStatus::_finish_distance_type arg)
  {
    msg_.finish_distance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_rtc_msgs::msg::CooperateStatus msg_;
};

class Init_CooperateStatus_start_distance
{
public:
  explicit Init_CooperateStatus_start_distance(::tier4_rtc_msgs::msg::CooperateStatus & msg)
  : msg_(msg)
  {}
  Init_CooperateStatus_finish_distance start_distance(::tier4_rtc_msgs::msg::CooperateStatus::_start_distance_type arg)
  {
    msg_.start_distance = std::move(arg);
    return Init_CooperateStatus_finish_distance(msg_);
  }

private:
  ::tier4_rtc_msgs::msg::CooperateStatus msg_;
};

class Init_CooperateStatus_auto_mode
{
public:
  explicit Init_CooperateStatus_auto_mode(::tier4_rtc_msgs::msg::CooperateStatus & msg)
  : msg_(msg)
  {}
  Init_CooperateStatus_start_distance auto_mode(::tier4_rtc_msgs::msg::CooperateStatus::_auto_mode_type arg)
  {
    msg_.auto_mode = std::move(arg);
    return Init_CooperateStatus_start_distance(msg_);
  }

private:
  ::tier4_rtc_msgs::msg::CooperateStatus msg_;
};

class Init_CooperateStatus_command_status
{
public:
  explicit Init_CooperateStatus_command_status(::tier4_rtc_msgs::msg::CooperateStatus & msg)
  : msg_(msg)
  {}
  Init_CooperateStatus_auto_mode command_status(::tier4_rtc_msgs::msg::CooperateStatus::_command_status_type arg)
  {
    msg_.command_status = std::move(arg);
    return Init_CooperateStatus_auto_mode(msg_);
  }

private:
  ::tier4_rtc_msgs::msg::CooperateStatus msg_;
};

class Init_CooperateStatus_safe
{
public:
  explicit Init_CooperateStatus_safe(::tier4_rtc_msgs::msg::CooperateStatus & msg)
  : msg_(msg)
  {}
  Init_CooperateStatus_command_status safe(::tier4_rtc_msgs::msg::CooperateStatus::_safe_type arg)
  {
    msg_.safe = std::move(arg);
    return Init_CooperateStatus_command_status(msg_);
  }

private:
  ::tier4_rtc_msgs::msg::CooperateStatus msg_;
};

class Init_CooperateStatus_module
{
public:
  explicit Init_CooperateStatus_module(::tier4_rtc_msgs::msg::CooperateStatus & msg)
  : msg_(msg)
  {}
  Init_CooperateStatus_safe module(::tier4_rtc_msgs::msg::CooperateStatus::_module_type arg)
  {
    msg_.module = std::move(arg);
    return Init_CooperateStatus_safe(msg_);
  }

private:
  ::tier4_rtc_msgs::msg::CooperateStatus msg_;
};

class Init_CooperateStatus_uuid
{
public:
  explicit Init_CooperateStatus_uuid(::tier4_rtc_msgs::msg::CooperateStatus & msg)
  : msg_(msg)
  {}
  Init_CooperateStatus_module uuid(::tier4_rtc_msgs::msg::CooperateStatus::_uuid_type arg)
  {
    msg_.uuid = std::move(arg);
    return Init_CooperateStatus_module(msg_);
  }

private:
  ::tier4_rtc_msgs::msg::CooperateStatus msg_;
};

class Init_CooperateStatus_stamp
{
public:
  Init_CooperateStatus_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CooperateStatus_uuid stamp(::tier4_rtc_msgs::msg::CooperateStatus::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_CooperateStatus_uuid(msg_);
  }

private:
  ::tier4_rtc_msgs::msg::CooperateStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_rtc_msgs::msg::CooperateStatus>()
{
  return tier4_rtc_msgs::msg::builder::Init_CooperateStatus_stamp();
}

}  // namespace tier4_rtc_msgs

#endif  // TIER4_RTC_MSGS__MSG__DETAIL__COOPERATE_STATUS__BUILDER_HPP_
