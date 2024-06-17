// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from morai_msgs:msg/PRCtrlCmd.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__PR_CTRL_CMD__BUILDER_HPP_
#define MORAI_MSGS__MSG__DETAIL__PR_CTRL_CMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "morai_msgs/msg/detail/pr_ctrl_cmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace morai_msgs
{

namespace msg
{

namespace builder
{

class Init_PRCtrlCmd_angular_velocity
{
public:
  explicit Init_PRCtrlCmd_angular_velocity(::morai_msgs::msg::PRCtrlCmd & msg)
  : msg_(msg)
  {}
  ::morai_msgs::msg::PRCtrlCmd angular_velocity(::morai_msgs::msg::PRCtrlCmd::_angular_velocity_type arg)
  {
    msg_.angular_velocity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::morai_msgs::msg::PRCtrlCmd msg_;
};

class Init_PRCtrlCmd_latitudinal_velocity
{
public:
  explicit Init_PRCtrlCmd_latitudinal_velocity(::morai_msgs::msg::PRCtrlCmd & msg)
  : msg_(msg)
  {}
  Init_PRCtrlCmd_angular_velocity latitudinal_velocity(::morai_msgs::msg::PRCtrlCmd::_latitudinal_velocity_type arg)
  {
    msg_.latitudinal_velocity = std::move(arg);
    return Init_PRCtrlCmd_angular_velocity(msg_);
  }

private:
  ::morai_msgs::msg::PRCtrlCmd msg_;
};

class Init_PRCtrlCmd_longitudinal_velocity
{
public:
  Init_PRCtrlCmd_longitudinal_velocity()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PRCtrlCmd_latitudinal_velocity longitudinal_velocity(::morai_msgs::msg::PRCtrlCmd::_longitudinal_velocity_type arg)
  {
    msg_.longitudinal_velocity = std::move(arg);
    return Init_PRCtrlCmd_latitudinal_velocity(msg_);
  }

private:
  ::morai_msgs::msg::PRCtrlCmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::morai_msgs::msg::PRCtrlCmd>()
{
  return morai_msgs::msg::builder::Init_PRCtrlCmd_longitudinal_velocity();
}

}  // namespace morai_msgs

#endif  // MORAI_MSGS__MSG__DETAIL__PR_CTRL_CMD__BUILDER_HPP_
