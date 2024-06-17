// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from morai_msgs:msg/SyncModeCtrlCmd.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__SYNC_MODE_CTRL_CMD__BUILDER_HPP_
#define MORAI_MSGS__MSG__DETAIL__SYNC_MODE_CTRL_CMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "morai_msgs/msg/detail/sync_mode_ctrl_cmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace morai_msgs
{

namespace msg
{

namespace builder
{

class Init_SyncModeCtrlCmd_sensor_capture
{
public:
  explicit Init_SyncModeCtrlCmd_sensor_capture(::morai_msgs::msg::SyncModeCtrlCmd & msg)
  : msg_(msg)
  {}
  ::morai_msgs::msg::SyncModeCtrlCmd sensor_capture(::morai_msgs::msg::SyncModeCtrlCmd::_sensor_capture_type arg)
  {
    msg_.sensor_capture = std::move(arg);
    return std::move(msg_);
  }

private:
  ::morai_msgs::msg::SyncModeCtrlCmd msg_;
};

class Init_SyncModeCtrlCmd_command
{
public:
  explicit Init_SyncModeCtrlCmd_command(::morai_msgs::msg::SyncModeCtrlCmd & msg)
  : msg_(msg)
  {}
  Init_SyncModeCtrlCmd_sensor_capture command(::morai_msgs::msg::SyncModeCtrlCmd::_command_type arg)
  {
    msg_.command = std::move(arg);
    return Init_SyncModeCtrlCmd_sensor_capture(msg_);
  }

private:
  ::morai_msgs::msg::SyncModeCtrlCmd msg_;
};

class Init_SyncModeCtrlCmd_frame
{
public:
  Init_SyncModeCtrlCmd_frame()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SyncModeCtrlCmd_command frame(::morai_msgs::msg::SyncModeCtrlCmd::_frame_type arg)
  {
    msg_.frame = std::move(arg);
    return Init_SyncModeCtrlCmd_command(msg_);
  }

private:
  ::morai_msgs::msg::SyncModeCtrlCmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::morai_msgs::msg::SyncModeCtrlCmd>()
{
  return morai_msgs::msg::builder::Init_SyncModeCtrlCmd_frame();
}

}  // namespace morai_msgs

#endif  // MORAI_MSGS__MSG__DETAIL__SYNC_MODE_CTRL_CMD__BUILDER_HPP_
