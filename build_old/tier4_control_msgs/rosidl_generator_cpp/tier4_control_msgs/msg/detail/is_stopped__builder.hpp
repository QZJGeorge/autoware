// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_control_msgs:msg/IsStopped.idl
// generated code does not contain a copyright notice

#ifndef TIER4_CONTROL_MSGS__MSG__DETAIL__IS_STOPPED__BUILDER_HPP_
#define TIER4_CONTROL_MSGS__MSG__DETAIL__IS_STOPPED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_control_msgs/msg/detail/is_stopped__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_control_msgs
{

namespace msg
{

namespace builder
{

class Init_IsStopped_requested_sources
{
public:
  explicit Init_IsStopped_requested_sources(::tier4_control_msgs::msg::IsStopped & msg)
  : msg_(msg)
  {}
  ::tier4_control_msgs::msg::IsStopped requested_sources(::tier4_control_msgs::msg::IsStopped::_requested_sources_type arg)
  {
    msg_.requested_sources = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_control_msgs::msg::IsStopped msg_;
};

class Init_IsStopped_data
{
public:
  explicit Init_IsStopped_data(::tier4_control_msgs::msg::IsStopped & msg)
  : msg_(msg)
  {}
  Init_IsStopped_requested_sources data(::tier4_control_msgs::msg::IsStopped::_data_type arg)
  {
    msg_.data = std::move(arg);
    return Init_IsStopped_requested_sources(msg_);
  }

private:
  ::tier4_control_msgs::msg::IsStopped msg_;
};

class Init_IsStopped_stamp
{
public:
  Init_IsStopped_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IsStopped_data stamp(::tier4_control_msgs::msg::IsStopped::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_IsStopped_data(msg_);
  }

private:
  ::tier4_control_msgs::msg::IsStopped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_control_msgs::msg::IsStopped>()
{
  return tier4_control_msgs::msg::builder::Init_IsStopped_stamp();
}

}  // namespace tier4_control_msgs

#endif  // TIER4_CONTROL_MSGS__MSG__DETAIL__IS_STOPPED__BUILDER_HPP_
