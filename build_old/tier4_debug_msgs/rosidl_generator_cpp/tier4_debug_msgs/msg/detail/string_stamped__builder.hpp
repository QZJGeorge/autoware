// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_debug_msgs:msg/StringStamped.idl
// generated code does not contain a copyright notice

#ifndef TIER4_DEBUG_MSGS__MSG__DETAIL__STRING_STAMPED__BUILDER_HPP_
#define TIER4_DEBUG_MSGS__MSG__DETAIL__STRING_STAMPED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_debug_msgs/msg/detail/string_stamped__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_debug_msgs
{

namespace msg
{

namespace builder
{

class Init_StringStamped_data
{
public:
  explicit Init_StringStamped_data(::tier4_debug_msgs::msg::StringStamped & msg)
  : msg_(msg)
  {}
  ::tier4_debug_msgs::msg::StringStamped data(::tier4_debug_msgs::msg::StringStamped::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_debug_msgs::msg::StringStamped msg_;
};

class Init_StringStamped_stamp
{
public:
  Init_StringStamped_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StringStamped_data stamp(::tier4_debug_msgs::msg::StringStamped::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_StringStamped_data(msg_);
  }

private:
  ::tier4_debug_msgs::msg::StringStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_debug_msgs::msg::StringStamped>()
{
  return tier4_debug_msgs::msg::builder::Init_StringStamped_stamp();
}

}  // namespace tier4_debug_msgs

#endif  // TIER4_DEBUG_MSGS__MSG__DETAIL__STRING_STAMPED__BUILDER_HPP_
