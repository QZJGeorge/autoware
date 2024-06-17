// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_system_msgs:msg/ModeChangeAvailable.idl
// generated code does not contain a copyright notice

#ifndef TIER4_SYSTEM_MSGS__MSG__DETAIL__MODE_CHANGE_AVAILABLE__BUILDER_HPP_
#define TIER4_SYSTEM_MSGS__MSG__DETAIL__MODE_CHANGE_AVAILABLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_system_msgs/msg/detail/mode_change_available__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_system_msgs
{

namespace msg
{

namespace builder
{

class Init_ModeChangeAvailable_available
{
public:
  explicit Init_ModeChangeAvailable_available(::tier4_system_msgs::msg::ModeChangeAvailable & msg)
  : msg_(msg)
  {}
  ::tier4_system_msgs::msg::ModeChangeAvailable available(::tier4_system_msgs::msg::ModeChangeAvailable::_available_type arg)
  {
    msg_.available = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_system_msgs::msg::ModeChangeAvailable msg_;
};

class Init_ModeChangeAvailable_stamp
{
public:
  Init_ModeChangeAvailable_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ModeChangeAvailable_available stamp(::tier4_system_msgs::msg::ModeChangeAvailable::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_ModeChangeAvailable_available(msg_);
  }

private:
  ::tier4_system_msgs::msg::ModeChangeAvailable msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_system_msgs::msg::ModeChangeAvailable>()
{
  return tier4_system_msgs::msg::builder::Init_ModeChangeAvailable_stamp();
}

}  // namespace tier4_system_msgs

#endif  // TIER4_SYSTEM_MSGS__MSG__DETAIL__MODE_CHANGE_AVAILABLE__BUILDER_HPP_
