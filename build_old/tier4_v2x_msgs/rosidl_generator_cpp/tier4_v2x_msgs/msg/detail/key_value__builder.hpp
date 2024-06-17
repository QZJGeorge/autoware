// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_v2x_msgs:msg/KeyValue.idl
// generated code does not contain a copyright notice

#ifndef TIER4_V2X_MSGS__MSG__DETAIL__KEY_VALUE__BUILDER_HPP_
#define TIER4_V2X_MSGS__MSG__DETAIL__KEY_VALUE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_v2x_msgs/msg/detail/key_value__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_KeyValue_value
{
public:
  explicit Init_KeyValue_value(::tier4_v2x_msgs::msg::KeyValue & msg)
  : msg_(msg)
  {}
  ::tier4_v2x_msgs::msg::KeyValue value(::tier4_v2x_msgs::msg::KeyValue::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_v2x_msgs::msg::KeyValue msg_;
};

class Init_KeyValue_key
{
public:
  Init_KeyValue_key()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_KeyValue_value key(::tier4_v2x_msgs::msg::KeyValue::_key_type arg)
  {
    msg_.key = std::move(arg);
    return Init_KeyValue_value(msg_);
  }

private:
  ::tier4_v2x_msgs::msg::KeyValue msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_v2x_msgs::msg::KeyValue>()
{
  return tier4_v2x_msgs::msg::builder::Init_KeyValue_key();
}

}  // namespace tier4_v2x_msgs

#endif  // TIER4_V2X_MSGS__MSG__DETAIL__KEY_VALUE__BUILDER_HPP_
