// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from morai_msgs:msg/WaitForTick.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__WAIT_FOR_TICK__BUILDER_HPP_
#define MORAI_MSGS__MSG__DETAIL__WAIT_FOR_TICK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "morai_msgs/msg/detail/wait_for_tick__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace morai_msgs
{

namespace msg
{

namespace builder
{

class Init_WaitForTick_frame
{
public:
  explicit Init_WaitForTick_frame(::morai_msgs::msg::WaitForTick & msg)
  : msg_(msg)
  {}
  ::morai_msgs::msg::WaitForTick frame(::morai_msgs::msg::WaitForTick::_frame_type arg)
  {
    msg_.frame = std::move(arg);
    return std::move(msg_);
  }

private:
  ::morai_msgs::msg::WaitForTick msg_;
};

class Init_WaitForTick_user_id
{
public:
  Init_WaitForTick_user_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WaitForTick_frame user_id(::morai_msgs::msg::WaitForTick::_user_id_type arg)
  {
    msg_.user_id = std::move(arg);
    return Init_WaitForTick_frame(msg_);
  }

private:
  ::morai_msgs::msg::WaitForTick msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::morai_msgs::msg::WaitForTick>()
{
  return morai_msgs::msg::builder::Init_WaitForTick_user_id();
}

}  // namespace morai_msgs

#endif  // MORAI_MSGS__MSG__DETAIL__WAIT_FOR_TICK__BUILDER_HPP_
