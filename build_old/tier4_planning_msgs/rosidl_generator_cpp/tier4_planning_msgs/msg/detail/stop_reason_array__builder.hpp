// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_planning_msgs:msg/StopReasonArray.idl
// generated code does not contain a copyright notice

#ifndef TIER4_PLANNING_MSGS__MSG__DETAIL__STOP_REASON_ARRAY__BUILDER_HPP_
#define TIER4_PLANNING_MSGS__MSG__DETAIL__STOP_REASON_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_planning_msgs/msg/detail/stop_reason_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_planning_msgs
{

namespace msg
{

namespace builder
{

class Init_StopReasonArray_stop_reasons
{
public:
  explicit Init_StopReasonArray_stop_reasons(::tier4_planning_msgs::msg::StopReasonArray & msg)
  : msg_(msg)
  {}
  ::tier4_planning_msgs::msg::StopReasonArray stop_reasons(::tier4_planning_msgs::msg::StopReasonArray::_stop_reasons_type arg)
  {
    msg_.stop_reasons = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_planning_msgs::msg::StopReasonArray msg_;
};

class Init_StopReasonArray_header
{
public:
  Init_StopReasonArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StopReasonArray_stop_reasons header(::tier4_planning_msgs::msg::StopReasonArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_StopReasonArray_stop_reasons(msg_);
  }

private:
  ::tier4_planning_msgs::msg::StopReasonArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_planning_msgs::msg::StopReasonArray>()
{
  return tier4_planning_msgs::msg::builder::Init_StopReasonArray_header();
}

}  // namespace tier4_planning_msgs

#endif  // TIER4_PLANNING_MSGS__MSG__DETAIL__STOP_REASON_ARRAY__BUILDER_HPP_
