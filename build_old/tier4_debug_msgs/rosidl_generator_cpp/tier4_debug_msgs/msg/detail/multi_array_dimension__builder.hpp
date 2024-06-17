// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_debug_msgs:msg/MultiArrayDimension.idl
// generated code does not contain a copyright notice

#ifndef TIER4_DEBUG_MSGS__MSG__DETAIL__MULTI_ARRAY_DIMENSION__BUILDER_HPP_
#define TIER4_DEBUG_MSGS__MSG__DETAIL__MULTI_ARRAY_DIMENSION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_debug_msgs/msg/detail/multi_array_dimension__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_debug_msgs
{

namespace msg
{

namespace builder
{

class Init_MultiArrayDimension_stride
{
public:
  explicit Init_MultiArrayDimension_stride(::tier4_debug_msgs::msg::MultiArrayDimension & msg)
  : msg_(msg)
  {}
  ::tier4_debug_msgs::msg::MultiArrayDimension stride(::tier4_debug_msgs::msg::MultiArrayDimension::_stride_type arg)
  {
    msg_.stride = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_debug_msgs::msg::MultiArrayDimension msg_;
};

class Init_MultiArrayDimension_size
{
public:
  explicit Init_MultiArrayDimension_size(::tier4_debug_msgs::msg::MultiArrayDimension & msg)
  : msg_(msg)
  {}
  Init_MultiArrayDimension_stride size(::tier4_debug_msgs::msg::MultiArrayDimension::_size_type arg)
  {
    msg_.size = std::move(arg);
    return Init_MultiArrayDimension_stride(msg_);
  }

private:
  ::tier4_debug_msgs::msg::MultiArrayDimension msg_;
};

class Init_MultiArrayDimension_label
{
public:
  Init_MultiArrayDimension_label()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MultiArrayDimension_size label(::tier4_debug_msgs::msg::MultiArrayDimension::_label_type arg)
  {
    msg_.label = std::move(arg);
    return Init_MultiArrayDimension_size(msg_);
  }

private:
  ::tier4_debug_msgs::msg::MultiArrayDimension msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_debug_msgs::msg::MultiArrayDimension>()
{
  return tier4_debug_msgs::msg::builder::Init_MultiArrayDimension_label();
}

}  // namespace tier4_debug_msgs

#endif  // TIER4_DEBUG_MSGS__MSG__DETAIL__MULTI_ARRAY_DIMENSION__BUILDER_HPP_
