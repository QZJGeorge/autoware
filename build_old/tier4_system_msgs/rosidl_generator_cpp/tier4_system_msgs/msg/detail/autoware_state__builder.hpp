// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_system_msgs:msg/AutowareState.idl
// generated code does not contain a copyright notice

#ifndef TIER4_SYSTEM_MSGS__MSG__DETAIL__AUTOWARE_STATE__BUILDER_HPP_
#define TIER4_SYSTEM_MSGS__MSG__DETAIL__AUTOWARE_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_system_msgs/msg/detail/autoware_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_system_msgs
{

namespace msg
{

namespace builder
{

class Init_AutowareState_msg
{
public:
  explicit Init_AutowareState_msg(::tier4_system_msgs::msg::AutowareState & msg)
  : msg_(msg)
  {}
  ::tier4_system_msgs::msg::AutowareState msg(::tier4_system_msgs::msg::AutowareState::_msg_type arg)
  {
    msg_.msg = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_system_msgs::msg::AutowareState msg_;
};

class Init_AutowareState_state
{
public:
  Init_AutowareState_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AutowareState_msg state(::tier4_system_msgs::msg::AutowareState::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_AutowareState_msg(msg_);
  }

private:
  ::tier4_system_msgs::msg::AutowareState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_system_msgs::msg::AutowareState>()
{
  return tier4_system_msgs::msg::builder::Init_AutowareState_state();
}

}  // namespace tier4_system_msgs

#endif  // TIER4_SYSTEM_MSGS__MSG__DETAIL__AUTOWARE_STATE__BUILDER_HPP_
