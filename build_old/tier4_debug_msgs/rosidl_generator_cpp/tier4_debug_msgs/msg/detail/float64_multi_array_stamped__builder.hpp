// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_debug_msgs:msg/Float64MultiArrayStamped.idl
// generated code does not contain a copyright notice

#ifndef TIER4_DEBUG_MSGS__MSG__DETAIL__FLOAT64_MULTI_ARRAY_STAMPED__BUILDER_HPP_
#define TIER4_DEBUG_MSGS__MSG__DETAIL__FLOAT64_MULTI_ARRAY_STAMPED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_debug_msgs/msg/detail/float64_multi_array_stamped__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_debug_msgs
{

namespace msg
{

namespace builder
{

class Init_Float64MultiArrayStamped_data
{
public:
  explicit Init_Float64MultiArrayStamped_data(::tier4_debug_msgs::msg::Float64MultiArrayStamped & msg)
  : msg_(msg)
  {}
  ::tier4_debug_msgs::msg::Float64MultiArrayStamped data(::tier4_debug_msgs::msg::Float64MultiArrayStamped::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_debug_msgs::msg::Float64MultiArrayStamped msg_;
};

class Init_Float64MultiArrayStamped_layout
{
public:
  explicit Init_Float64MultiArrayStamped_layout(::tier4_debug_msgs::msg::Float64MultiArrayStamped & msg)
  : msg_(msg)
  {}
  Init_Float64MultiArrayStamped_data layout(::tier4_debug_msgs::msg::Float64MultiArrayStamped::_layout_type arg)
  {
    msg_.layout = std::move(arg);
    return Init_Float64MultiArrayStamped_data(msg_);
  }

private:
  ::tier4_debug_msgs::msg::Float64MultiArrayStamped msg_;
};

class Init_Float64MultiArrayStamped_stamp
{
public:
  Init_Float64MultiArrayStamped_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Float64MultiArrayStamped_layout stamp(::tier4_debug_msgs::msg::Float64MultiArrayStamped::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_Float64MultiArrayStamped_layout(msg_);
  }

private:
  ::tier4_debug_msgs::msg::Float64MultiArrayStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_debug_msgs::msg::Float64MultiArrayStamped>()
{
  return tier4_debug_msgs::msg::builder::Init_Float64MultiArrayStamped_stamp();
}

}  // namespace tier4_debug_msgs

#endif  // TIER4_DEBUG_MSGS__MSG__DETAIL__FLOAT64_MULTI_ARRAY_STAMPED__BUILDER_HPP_
