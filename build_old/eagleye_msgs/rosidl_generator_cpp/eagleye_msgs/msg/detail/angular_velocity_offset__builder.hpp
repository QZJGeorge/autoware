// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from eagleye_msgs:msg/AngularVelocityOffset.idl
// generated code does not contain a copyright notice

#ifndef EAGLEYE_MSGS__MSG__DETAIL__ANGULAR_VELOCITY_OFFSET__BUILDER_HPP_
#define EAGLEYE_MSGS__MSG__DETAIL__ANGULAR_VELOCITY_OFFSET__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "eagleye_msgs/msg/detail/angular_velocity_offset__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace eagleye_msgs
{

namespace msg
{

namespace builder
{

class Init_AngularVelocityOffset_status
{
public:
  explicit Init_AngularVelocityOffset_status(::eagleye_msgs::msg::AngularVelocityOffset & msg)
  : msg_(msg)
  {}
  ::eagleye_msgs::msg::AngularVelocityOffset status(::eagleye_msgs::msg::AngularVelocityOffset::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::eagleye_msgs::msg::AngularVelocityOffset msg_;
};

class Init_AngularVelocityOffset_angular_velocity_offset
{
public:
  explicit Init_AngularVelocityOffset_angular_velocity_offset(::eagleye_msgs::msg::AngularVelocityOffset & msg)
  : msg_(msg)
  {}
  Init_AngularVelocityOffset_status angular_velocity_offset(::eagleye_msgs::msg::AngularVelocityOffset::_angular_velocity_offset_type arg)
  {
    msg_.angular_velocity_offset = std::move(arg);
    return Init_AngularVelocityOffset_status(msg_);
  }

private:
  ::eagleye_msgs::msg::AngularVelocityOffset msg_;
};

class Init_AngularVelocityOffset_header
{
public:
  Init_AngularVelocityOffset_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AngularVelocityOffset_angular_velocity_offset header(::eagleye_msgs::msg::AngularVelocityOffset::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_AngularVelocityOffset_angular_velocity_offset(msg_);
  }

private:
  ::eagleye_msgs::msg::AngularVelocityOffset msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::eagleye_msgs::msg::AngularVelocityOffset>()
{
  return eagleye_msgs::msg::builder::Init_AngularVelocityOffset_header();
}

}  // namespace eagleye_msgs

#endif  // EAGLEYE_MSGS__MSG__DETAIL__ANGULAR_VELOCITY_OFFSET__BUILDER_HPP_
