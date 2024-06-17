// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from morai_msgs:msg/SyncModeCmd.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__SYNC_MODE_CMD__BUILDER_HPP_
#define MORAI_MSGS__MSG__DETAIL__SYNC_MODE_CMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "morai_msgs/msg/detail/sync_mode_cmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace morai_msgs
{

namespace msg
{

namespace builder
{

class Init_SyncModeCmd_time_step
{
public:
  explicit Init_SyncModeCmd_time_step(::morai_msgs::msg::SyncModeCmd & msg)
  : msg_(msg)
  {}
  ::morai_msgs::msg::SyncModeCmd time_step(::morai_msgs::msg::SyncModeCmd::_time_step_type arg)
  {
    msg_.time_step = std::move(arg);
    return std::move(msg_);
  }

private:
  ::morai_msgs::msg::SyncModeCmd msg_;
};

class Init_SyncModeCmd_start_sync_mode
{
public:
  explicit Init_SyncModeCmd_start_sync_mode(::morai_msgs::msg::SyncModeCmd & msg)
  : msg_(msg)
  {}
  Init_SyncModeCmd_time_step start_sync_mode(::morai_msgs::msg::SyncModeCmd::_start_sync_mode_type arg)
  {
    msg_.start_sync_mode = std::move(arg);
    return Init_SyncModeCmd_time_step(msg_);
  }

private:
  ::morai_msgs::msg::SyncModeCmd msg_;
};

class Init_SyncModeCmd_user_id
{
public:
  Init_SyncModeCmd_user_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SyncModeCmd_start_sync_mode user_id(::morai_msgs::msg::SyncModeCmd::_user_id_type arg)
  {
    msg_.user_id = std::move(arg);
    return Init_SyncModeCmd_start_sync_mode(msg_);
  }

private:
  ::morai_msgs::msg::SyncModeCmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::morai_msgs::msg::SyncModeCmd>()
{
  return morai_msgs::msg::builder::Init_SyncModeCmd_user_id();
}

}  // namespace morai_msgs

#endif  // MORAI_MSGS__MSG__DETAIL__SYNC_MODE_CMD__BUILDER_HPP_
