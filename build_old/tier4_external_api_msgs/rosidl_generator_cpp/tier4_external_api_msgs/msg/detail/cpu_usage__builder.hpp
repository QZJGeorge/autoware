// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_external_api_msgs:msg/CpuUsage.idl
// generated code does not contain a copyright notice

#ifndef TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__CPU_USAGE__BUILDER_HPP_
#define TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__CPU_USAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_external_api_msgs/msg/detail/cpu_usage__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_external_api_msgs
{

namespace msg
{

namespace builder
{

class Init_CpuUsage_cpus
{
public:
  explicit Init_CpuUsage_cpus(::tier4_external_api_msgs::msg::CpuUsage & msg)
  : msg_(msg)
  {}
  ::tier4_external_api_msgs::msg::CpuUsage cpus(::tier4_external_api_msgs::msg::CpuUsage::_cpus_type arg)
  {
    msg_.cpus = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_external_api_msgs::msg::CpuUsage msg_;
};

class Init_CpuUsage_all
{
public:
  explicit Init_CpuUsage_all(::tier4_external_api_msgs::msg::CpuUsage & msg)
  : msg_(msg)
  {}
  Init_CpuUsage_cpus all(::tier4_external_api_msgs::msg::CpuUsage::_all_type arg)
  {
    msg_.all = std::move(arg);
    return Init_CpuUsage_cpus(msg_);
  }

private:
  ::tier4_external_api_msgs::msg::CpuUsage msg_;
};

class Init_CpuUsage_stamp
{
public:
  Init_CpuUsage_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CpuUsage_all stamp(::tier4_external_api_msgs::msg::CpuUsage::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_CpuUsage_all(msg_);
  }

private:
  ::tier4_external_api_msgs::msg::CpuUsage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_external_api_msgs::msg::CpuUsage>()
{
  return tier4_external_api_msgs::msg::builder::Init_CpuUsage_stamp();
}

}  // namespace tier4_external_api_msgs

#endif  // TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__CPU_USAGE__BUILDER_HPP_
