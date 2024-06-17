// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from morai_msgs:msg/SyncModeSetGear.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__SYNC_MODE_SET_GEAR__BUILDER_HPP_
#define MORAI_MSGS__MSG__DETAIL__SYNC_MODE_SET_GEAR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "morai_msgs/msg/detail/sync_mode_set_gear__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace morai_msgs
{

namespace msg
{

namespace builder
{

class Init_SyncModeSetGear_frame
{
public:
  explicit Init_SyncModeSetGear_frame(::morai_msgs::msg::SyncModeSetGear & msg)
  : msg_(msg)
  {}
  ::morai_msgs::msg::SyncModeSetGear frame(::morai_msgs::msg::SyncModeSetGear::_frame_type arg)
  {
    msg_.frame = std::move(arg);
    return std::move(msg_);
  }

private:
  ::morai_msgs::msg::SyncModeSetGear msg_;
};

class Init_SyncModeSetGear_gear
{
public:
  Init_SyncModeSetGear_gear()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SyncModeSetGear_frame gear(::morai_msgs::msg::SyncModeSetGear::_gear_type arg)
  {
    msg_.gear = std::move(arg);
    return Init_SyncModeSetGear_frame(msg_);
  }

private:
  ::morai_msgs::msg::SyncModeSetGear msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::morai_msgs::msg::SyncModeSetGear>()
{
  return morai_msgs::msg::builder::Init_SyncModeSetGear_gear();
}

}  // namespace morai_msgs

#endif  // MORAI_MSGS__MSG__DETAIL__SYNC_MODE_SET_GEAR__BUILDER_HPP_
