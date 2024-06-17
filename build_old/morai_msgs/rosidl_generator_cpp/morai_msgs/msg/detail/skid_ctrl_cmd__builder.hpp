// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from morai_msgs:msg/SkidCtrlCmd.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__SKID_CTRL_CMD__BUILDER_HPP_
#define MORAI_MSGS__MSG__DETAIL__SKID_CTRL_CMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "morai_msgs/msg/detail/skid_ctrl_cmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace morai_msgs
{

namespace msg
{

namespace builder
{

class Init_SkidCtrlCmd_velocity_ctrl
{
public:
  explicit Init_SkidCtrlCmd_velocity_ctrl(::morai_msgs::msg::SkidCtrlCmd & msg)
  : msg_(msg)
  {}
  ::morai_msgs::msg::SkidCtrlCmd velocity_ctrl(::morai_msgs::msg::SkidCtrlCmd::_velocity_ctrl_type arg)
  {
    msg_.velocity_ctrl = std::move(arg);
    return std::move(msg_);
  }

private:
  ::morai_msgs::msg::SkidCtrlCmd msg_;
};

class Init_SkidCtrlCmd_skid_model_ctrl
{
public:
  explicit Init_SkidCtrlCmd_skid_model_ctrl(::morai_msgs::msg::SkidCtrlCmd & msg)
  : msg_(msg)
  {}
  Init_SkidCtrlCmd_velocity_ctrl skid_model_ctrl(::morai_msgs::msg::SkidCtrlCmd::_skid_model_ctrl_type arg)
  {
    msg_.skid_model_ctrl = std::move(arg);
    return Init_SkidCtrlCmd_velocity_ctrl(msg_);
  }

private:
  ::morai_msgs::msg::SkidCtrlCmd msg_;
};

class Init_SkidCtrlCmd_cmd_type
{
public:
  Init_SkidCtrlCmd_cmd_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SkidCtrlCmd_skid_model_ctrl cmd_type(::morai_msgs::msg::SkidCtrlCmd::_cmd_type_type arg)
  {
    msg_.cmd_type = std::move(arg);
    return Init_SkidCtrlCmd_skid_model_ctrl(msg_);
  }

private:
  ::morai_msgs::msg::SkidCtrlCmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::morai_msgs::msg::SkidCtrlCmd>()
{
  return morai_msgs::msg::builder::Init_SkidCtrlCmd_cmd_type();
}

}  // namespace morai_msgs

#endif  // MORAI_MSGS__MSG__DETAIL__SKID_CTRL_CMD__BUILDER_HPP_
