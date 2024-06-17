// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from morai_msgs:msg/IntscnTL.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__INTSCN_TL__BUILDER_HPP_
#define MORAI_MSGS__MSG__DETAIL__INTSCN_TL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "morai_msgs/msg/detail/intscn_tl__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace morai_msgs
{

namespace msg
{

namespace builder
{

class Init_IntscnTL_delta_time
{
public:
  explicit Init_IntscnTL_delta_time(::morai_msgs::msg::IntscnTL & msg)
  : msg_(msg)
  {}
  ::morai_msgs::msg::IntscnTL delta_time(::morai_msgs::msg::IntscnTL::_delta_time_type arg)
  {
    msg_.delta_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::morai_msgs::msg::IntscnTL msg_;
};

class Init_IntscnTL_state
{
public:
  explicit Init_IntscnTL_state(::morai_msgs::msg::IntscnTL & msg)
  : msg_(msg)
  {}
  Init_IntscnTL_delta_time state(::morai_msgs::msg::IntscnTL::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_IntscnTL_delta_time(msg_);
  }

private:
  ::morai_msgs::msg::IntscnTL msg_;
};

class Init_IntscnTL_idx
{
public:
  explicit Init_IntscnTL_idx(::morai_msgs::msg::IntscnTL & msg)
  : msg_(msg)
  {}
  Init_IntscnTL_state idx(::morai_msgs::msg::IntscnTL::_idx_type arg)
  {
    msg_.idx = std::move(arg);
    return Init_IntscnTL_state(msg_);
  }

private:
  ::morai_msgs::msg::IntscnTL msg_;
};

class Init_IntscnTL_header
{
public:
  Init_IntscnTL_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IntscnTL_idx header(::morai_msgs::msg::IntscnTL::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_IntscnTL_idx(msg_);
  }

private:
  ::morai_msgs::msg::IntscnTL msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::morai_msgs::msg::IntscnTL>()
{
  return morai_msgs::msg::builder::Init_IntscnTL_header();
}

}  // namespace morai_msgs

#endif  // MORAI_MSGS__MSG__DETAIL__INTSCN_TL__BUILDER_HPP_
