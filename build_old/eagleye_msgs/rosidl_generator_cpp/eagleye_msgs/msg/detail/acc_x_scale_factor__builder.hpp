// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from eagleye_msgs:msg/AccXScaleFactor.idl
// generated code does not contain a copyright notice

#ifndef EAGLEYE_MSGS__MSG__DETAIL__ACC_X_SCALE_FACTOR__BUILDER_HPP_
#define EAGLEYE_MSGS__MSG__DETAIL__ACC_X_SCALE_FACTOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "eagleye_msgs/msg/detail/acc_x_scale_factor__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace eagleye_msgs
{

namespace msg
{

namespace builder
{

class Init_AccXScaleFactor_status
{
public:
  explicit Init_AccXScaleFactor_status(::eagleye_msgs::msg::AccXScaleFactor & msg)
  : msg_(msg)
  {}
  ::eagleye_msgs::msg::AccXScaleFactor status(::eagleye_msgs::msg::AccXScaleFactor::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::eagleye_msgs::msg::AccXScaleFactor msg_;
};

class Init_AccXScaleFactor_acc_x_scale_factor
{
public:
  explicit Init_AccXScaleFactor_acc_x_scale_factor(::eagleye_msgs::msg::AccXScaleFactor & msg)
  : msg_(msg)
  {}
  Init_AccXScaleFactor_status acc_x_scale_factor(::eagleye_msgs::msg::AccXScaleFactor::_acc_x_scale_factor_type arg)
  {
    msg_.acc_x_scale_factor = std::move(arg);
    return Init_AccXScaleFactor_status(msg_);
  }

private:
  ::eagleye_msgs::msg::AccXScaleFactor msg_;
};

class Init_AccXScaleFactor_header
{
public:
  Init_AccXScaleFactor_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AccXScaleFactor_acc_x_scale_factor header(::eagleye_msgs::msg::AccXScaleFactor::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_AccXScaleFactor_acc_x_scale_factor(msg_);
  }

private:
  ::eagleye_msgs::msg::AccXScaleFactor msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::eagleye_msgs::msg::AccXScaleFactor>()
{
  return eagleye_msgs::msg::builder::Init_AccXScaleFactor_header();
}

}  // namespace eagleye_msgs

#endif  // EAGLEYE_MSGS__MSG__DETAIL__ACC_X_SCALE_FACTOR__BUILDER_HPP_
