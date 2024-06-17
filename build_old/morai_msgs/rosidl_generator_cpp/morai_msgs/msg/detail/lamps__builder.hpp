// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from morai_msgs:msg/Lamps.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__LAMPS__BUILDER_HPP_
#define MORAI_MSGS__MSG__DETAIL__LAMPS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "morai_msgs/msg/detail/lamps__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace morai_msgs
{

namespace msg
{

namespace builder
{

class Init_Lamps_emergency_signal
{
public:
  explicit Init_Lamps_emergency_signal(::morai_msgs::msg::Lamps & msg)
  : msg_(msg)
  {}
  ::morai_msgs::msg::Lamps emergency_signal(::morai_msgs::msg::Lamps::_emergency_signal_type arg)
  {
    msg_.emergency_signal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::morai_msgs::msg::Lamps msg_;
};

class Init_Lamps_turn_signal
{
public:
  explicit Init_Lamps_turn_signal(::morai_msgs::msg::Lamps & msg)
  : msg_(msg)
  {}
  Init_Lamps_emergency_signal turn_signal(::morai_msgs::msg::Lamps::_turn_signal_type arg)
  {
    msg_.turn_signal = std::move(arg);
    return Init_Lamps_emergency_signal(msg_);
  }

private:
  ::morai_msgs::msg::Lamps msg_;
};

class Init_Lamps_header
{
public:
  Init_Lamps_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Lamps_turn_signal header(::morai_msgs::msg::Lamps::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Lamps_turn_signal(msg_);
  }

private:
  ::morai_msgs::msg::Lamps msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::morai_msgs::msg::Lamps>()
{
  return morai_msgs::msg::builder::Init_Lamps_header();
}

}  // namespace morai_msgs

#endif  // MORAI_MSGS__MSG__DETAIL__LAMPS__BUILDER_HPP_
