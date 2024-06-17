// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_external_api_msgs:msg/CpuStatus.idl
// generated code does not contain a copyright notice

#ifndef TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__CPU_STATUS__BUILDER_HPP_
#define TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__CPU_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_external_api_msgs/msg/detail/cpu_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_external_api_msgs
{

namespace msg
{

namespace builder
{

class Init_CpuStatus_idle
{
public:
  explicit Init_CpuStatus_idle(::tier4_external_api_msgs::msg::CpuStatus & msg)
  : msg_(msg)
  {}
  ::tier4_external_api_msgs::msg::CpuStatus idle(::tier4_external_api_msgs::msg::CpuStatus::_idle_type arg)
  {
    msg_.idle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_external_api_msgs::msg::CpuStatus msg_;
};

class Init_CpuStatus_sys
{
public:
  explicit Init_CpuStatus_sys(::tier4_external_api_msgs::msg::CpuStatus & msg)
  : msg_(msg)
  {}
  Init_CpuStatus_idle sys(::tier4_external_api_msgs::msg::CpuStatus::_sys_type arg)
  {
    msg_.sys = std::move(arg);
    return Init_CpuStatus_idle(msg_);
  }

private:
  ::tier4_external_api_msgs::msg::CpuStatus msg_;
};

class Init_CpuStatus_nice
{
public:
  explicit Init_CpuStatus_nice(::tier4_external_api_msgs::msg::CpuStatus & msg)
  : msg_(msg)
  {}
  Init_CpuStatus_sys nice(::tier4_external_api_msgs::msg::CpuStatus::_nice_type arg)
  {
    msg_.nice = std::move(arg);
    return Init_CpuStatus_sys(msg_);
  }

private:
  ::tier4_external_api_msgs::msg::CpuStatus msg_;
};

class Init_CpuStatus_usr
{
public:
  explicit Init_CpuStatus_usr(::tier4_external_api_msgs::msg::CpuStatus & msg)
  : msg_(msg)
  {}
  Init_CpuStatus_nice usr(::tier4_external_api_msgs::msg::CpuStatus::_usr_type arg)
  {
    msg_.usr = std::move(arg);
    return Init_CpuStatus_nice(msg_);
  }

private:
  ::tier4_external_api_msgs::msg::CpuStatus msg_;
};

class Init_CpuStatus_total
{
public:
  explicit Init_CpuStatus_total(::tier4_external_api_msgs::msg::CpuStatus & msg)
  : msg_(msg)
  {}
  Init_CpuStatus_usr total(::tier4_external_api_msgs::msg::CpuStatus::_total_type arg)
  {
    msg_.total = std::move(arg);
    return Init_CpuStatus_usr(msg_);
  }

private:
  ::tier4_external_api_msgs::msg::CpuStatus msg_;
};

class Init_CpuStatus_status
{
public:
  Init_CpuStatus_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CpuStatus_total status(::tier4_external_api_msgs::msg::CpuStatus::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_CpuStatus_total(msg_);
  }

private:
  ::tier4_external_api_msgs::msg::CpuStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_external_api_msgs::msg::CpuStatus>()
{
  return tier4_external_api_msgs::msg::builder::Init_CpuStatus_status();
}

}  // namespace tier4_external_api_msgs

#endif  // TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__CPU_STATUS__BUILDER_HPP_
