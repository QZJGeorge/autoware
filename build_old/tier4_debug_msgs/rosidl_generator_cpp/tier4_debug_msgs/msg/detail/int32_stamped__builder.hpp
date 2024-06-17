// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_debug_msgs:msg/Int32Stamped.idl
// generated code does not contain a copyright notice

#ifndef TIER4_DEBUG_MSGS__MSG__DETAIL__INT32_STAMPED__BUILDER_HPP_
#define TIER4_DEBUG_MSGS__MSG__DETAIL__INT32_STAMPED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_debug_msgs/msg/detail/int32_stamped__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_debug_msgs
{

namespace msg
{

namespace builder
{

class Init_Int32Stamped_data
{
public:
  explicit Init_Int32Stamped_data(::tier4_debug_msgs::msg::Int32Stamped & msg)
  : msg_(msg)
  {}
  ::tier4_debug_msgs::msg::Int32Stamped data(::tier4_debug_msgs::msg::Int32Stamped::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_debug_msgs::msg::Int32Stamped msg_;
};

class Init_Int32Stamped_stamp
{
public:
  Init_Int32Stamped_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Int32Stamped_data stamp(::tier4_debug_msgs::msg::Int32Stamped::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_Int32Stamped_data(msg_);
  }

private:
  ::tier4_debug_msgs::msg::Int32Stamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_debug_msgs::msg::Int32Stamped>()
{
  return tier4_debug_msgs::msg::builder::Init_Int32Stamped_stamp();
}

}  // namespace tier4_debug_msgs

#endif  // TIER4_DEBUG_MSGS__MSG__DETAIL__INT32_STAMPED__BUILDER_HPP_
