// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_control_msgs:msg/IsStartRequested.idl
// generated code does not contain a copyright notice

#ifndef TIER4_CONTROL_MSGS__MSG__DETAIL__IS_START_REQUESTED__BUILDER_HPP_
#define TIER4_CONTROL_MSGS__MSG__DETAIL__IS_START_REQUESTED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_control_msgs/msg/detail/is_start_requested__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_control_msgs
{

namespace msg
{

namespace builder
{

class Init_IsStartRequested_data
{
public:
  explicit Init_IsStartRequested_data(::tier4_control_msgs::msg::IsStartRequested & msg)
  : msg_(msg)
  {}
  ::tier4_control_msgs::msg::IsStartRequested data(::tier4_control_msgs::msg::IsStartRequested::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_control_msgs::msg::IsStartRequested msg_;
};

class Init_IsStartRequested_stamp
{
public:
  Init_IsStartRequested_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IsStartRequested_data stamp(::tier4_control_msgs::msg::IsStartRequested::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_IsStartRequested_data(msg_);
  }

private:
  ::tier4_control_msgs::msg::IsStartRequested msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_control_msgs::msg::IsStartRequested>()
{
  return tier4_control_msgs::msg::builder::Init_IsStartRequested_stamp();
}

}  // namespace tier4_control_msgs

#endif  // TIER4_CONTROL_MSGS__MSG__DETAIL__IS_START_REQUESTED__BUILDER_HPP_
