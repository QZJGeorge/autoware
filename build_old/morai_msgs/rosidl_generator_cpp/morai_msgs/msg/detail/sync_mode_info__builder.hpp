// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from morai_msgs:msg/SyncModeInfo.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__SYNC_MODE_INFO__BUILDER_HPP_
#define MORAI_MSGS__MSG__DETAIL__SYNC_MODE_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "morai_msgs/msg/detail/sync_mode_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace morai_msgs
{

namespace msg
{

namespace builder
{

class Init_SyncModeInfo_can_send_tick
{
public:
  explicit Init_SyncModeInfo_can_send_tick(::morai_msgs::msg::SyncModeInfo & msg)
  : msg_(msg)
  {}
  ::morai_msgs::msg::SyncModeInfo can_send_tick(::morai_msgs::msg::SyncModeInfo::_can_send_tick_type arg)
  {
    msg_.can_send_tick = std::move(arg);
    return std::move(msg_);
  }

private:
  ::morai_msgs::msg::SyncModeInfo msg_;
};

class Init_SyncModeInfo_frame
{
public:
  explicit Init_SyncModeInfo_frame(::morai_msgs::msg::SyncModeInfo & msg)
  : msg_(msg)
  {}
  Init_SyncModeInfo_can_send_tick frame(::morai_msgs::msg::SyncModeInfo::_frame_type arg)
  {
    msg_.frame = std::move(arg);
    return Init_SyncModeInfo_can_send_tick(msg_);
  }

private:
  ::morai_msgs::msg::SyncModeInfo msg_;
};

class Init_SyncModeInfo_status
{
public:
  explicit Init_SyncModeInfo_status(::morai_msgs::msg::SyncModeInfo & msg)
  : msg_(msg)
  {}
  Init_SyncModeInfo_frame status(::morai_msgs::msg::SyncModeInfo::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_SyncModeInfo_frame(msg_);
  }

private:
  ::morai_msgs::msg::SyncModeInfo msg_;
};

class Init_SyncModeInfo_master_id
{
public:
  Init_SyncModeInfo_master_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SyncModeInfo_status master_id(::morai_msgs::msg::SyncModeInfo::_master_id_type arg)
  {
    msg_.master_id = std::move(arg);
    return Init_SyncModeInfo_status(msg_);
  }

private:
  ::morai_msgs::msg::SyncModeInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::morai_msgs::msg::SyncModeInfo>()
{
  return morai_msgs::msg::builder::Init_SyncModeInfo_master_id();
}

}  // namespace morai_msgs

#endif  // MORAI_MSGS__MSG__DETAIL__SYNC_MODE_INFO__BUILDER_HPP_
