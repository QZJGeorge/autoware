// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from eagleye_msgs:msg/VelocityScaleFactor.idl
// generated code does not contain a copyright notice

#ifndef EAGLEYE_MSGS__MSG__DETAIL__VELOCITY_SCALE_FACTOR__BUILDER_HPP_
#define EAGLEYE_MSGS__MSG__DETAIL__VELOCITY_SCALE_FACTOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "eagleye_msgs/msg/detail/velocity_scale_factor__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace eagleye_msgs
{

namespace msg
{

namespace builder
{

class Init_VelocityScaleFactor_status
{
public:
  explicit Init_VelocityScaleFactor_status(::eagleye_msgs::msg::VelocityScaleFactor & msg)
  : msg_(msg)
  {}
  ::eagleye_msgs::msg::VelocityScaleFactor status(::eagleye_msgs::msg::VelocityScaleFactor::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::eagleye_msgs::msg::VelocityScaleFactor msg_;
};

class Init_VelocityScaleFactor_scale_factor
{
public:
  explicit Init_VelocityScaleFactor_scale_factor(::eagleye_msgs::msg::VelocityScaleFactor & msg)
  : msg_(msg)
  {}
  Init_VelocityScaleFactor_status scale_factor(::eagleye_msgs::msg::VelocityScaleFactor::_scale_factor_type arg)
  {
    msg_.scale_factor = std::move(arg);
    return Init_VelocityScaleFactor_status(msg_);
  }

private:
  ::eagleye_msgs::msg::VelocityScaleFactor msg_;
};

class Init_VelocityScaleFactor_header
{
public:
  Init_VelocityScaleFactor_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VelocityScaleFactor_scale_factor header(::eagleye_msgs::msg::VelocityScaleFactor::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_VelocityScaleFactor_scale_factor(msg_);
  }

private:
  ::eagleye_msgs::msg::VelocityScaleFactor msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::eagleye_msgs::msg::VelocityScaleFactor>()
{
  return eagleye_msgs::msg::builder::Init_VelocityScaleFactor_header();
}

}  // namespace eagleye_msgs

#endif  // EAGLEYE_MSGS__MSG__DETAIL__VELOCITY_SCALE_FACTOR__BUILDER_HPP_
