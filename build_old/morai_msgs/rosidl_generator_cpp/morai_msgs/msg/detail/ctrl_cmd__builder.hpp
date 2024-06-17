// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from morai_msgs:msg/CtrlCmd.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__CTRL_CMD__BUILDER_HPP_
#define MORAI_MSGS__MSG__DETAIL__CTRL_CMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "morai_msgs/msg/detail/ctrl_cmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace morai_msgs
{

namespace msg
{

namespace builder
{

class Init_CtrlCmd_acceleration
{
public:
  explicit Init_CtrlCmd_acceleration(::morai_msgs::msg::CtrlCmd & msg)
  : msg_(msg)
  {}
  ::morai_msgs::msg::CtrlCmd acceleration(::morai_msgs::msg::CtrlCmd::_acceleration_type arg)
  {
    msg_.acceleration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::morai_msgs::msg::CtrlCmd msg_;
};

class Init_CtrlCmd_velocity
{
public:
  explicit Init_CtrlCmd_velocity(::morai_msgs::msg::CtrlCmd & msg)
  : msg_(msg)
  {}
  Init_CtrlCmd_acceleration velocity(::morai_msgs::msg::CtrlCmd::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_CtrlCmd_acceleration(msg_);
  }

private:
  ::morai_msgs::msg::CtrlCmd msg_;
};

class Init_CtrlCmd_steering
{
public:
  explicit Init_CtrlCmd_steering(::morai_msgs::msg::CtrlCmd & msg)
  : msg_(msg)
  {}
  Init_CtrlCmd_velocity steering(::morai_msgs::msg::CtrlCmd::_steering_type arg)
  {
    msg_.steering = std::move(arg);
    return Init_CtrlCmd_velocity(msg_);
  }

private:
  ::morai_msgs::msg::CtrlCmd msg_;
};

class Init_CtrlCmd_brake
{
public:
  explicit Init_CtrlCmd_brake(::morai_msgs::msg::CtrlCmd & msg)
  : msg_(msg)
  {}
  Init_CtrlCmd_steering brake(::morai_msgs::msg::CtrlCmd::_brake_type arg)
  {
    msg_.brake = std::move(arg);
    return Init_CtrlCmd_steering(msg_);
  }

private:
  ::morai_msgs::msg::CtrlCmd msg_;
};

class Init_CtrlCmd_accel
{
public:
  explicit Init_CtrlCmd_accel(::morai_msgs::msg::CtrlCmd & msg)
  : msg_(msg)
  {}
  Init_CtrlCmd_brake accel(::morai_msgs::msg::CtrlCmd::_accel_type arg)
  {
    msg_.accel = std::move(arg);
    return Init_CtrlCmd_brake(msg_);
  }

private:
  ::morai_msgs::msg::CtrlCmd msg_;
};

class Init_CtrlCmd_longl_cmd_type
{
public:
  Init_CtrlCmd_longl_cmd_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CtrlCmd_accel longl_cmd_type(::morai_msgs::msg::CtrlCmd::_longl_cmd_type_type arg)
  {
    msg_.longl_cmd_type = std::move(arg);
    return Init_CtrlCmd_accel(msg_);
  }

private:
  ::morai_msgs::msg::CtrlCmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::morai_msgs::msg::CtrlCmd>()
{
  return morai_msgs::msg::builder::Init_CtrlCmd_longl_cmd_type();
}

}  // namespace morai_msgs

#endif  // MORAI_MSGS__MSG__DETAIL__CTRL_CMD__BUILDER_HPP_
