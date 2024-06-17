// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from eagleye_msgs:msg/SlipAngle.idl
// generated code does not contain a copyright notice

#ifndef EAGLEYE_MSGS__MSG__DETAIL__SLIP_ANGLE__BUILDER_HPP_
#define EAGLEYE_MSGS__MSG__DETAIL__SLIP_ANGLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "eagleye_msgs/msg/detail/slip_angle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace eagleye_msgs
{

namespace msg
{

namespace builder
{

class Init_SlipAngle_status
{
public:
  explicit Init_SlipAngle_status(::eagleye_msgs::msg::SlipAngle & msg)
  : msg_(msg)
  {}
  ::eagleye_msgs::msg::SlipAngle status(::eagleye_msgs::msg::SlipAngle::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::eagleye_msgs::msg::SlipAngle msg_;
};

class Init_SlipAngle_slip_angle
{
public:
  explicit Init_SlipAngle_slip_angle(::eagleye_msgs::msg::SlipAngle & msg)
  : msg_(msg)
  {}
  Init_SlipAngle_status slip_angle(::eagleye_msgs::msg::SlipAngle::_slip_angle_type arg)
  {
    msg_.slip_angle = std::move(arg);
    return Init_SlipAngle_status(msg_);
  }

private:
  ::eagleye_msgs::msg::SlipAngle msg_;
};

class Init_SlipAngle_coefficient
{
public:
  explicit Init_SlipAngle_coefficient(::eagleye_msgs::msg::SlipAngle & msg)
  : msg_(msg)
  {}
  Init_SlipAngle_slip_angle coefficient(::eagleye_msgs::msg::SlipAngle::_coefficient_type arg)
  {
    msg_.coefficient = std::move(arg);
    return Init_SlipAngle_slip_angle(msg_);
  }

private:
  ::eagleye_msgs::msg::SlipAngle msg_;
};

class Init_SlipAngle_header
{
public:
  Init_SlipAngle_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SlipAngle_coefficient header(::eagleye_msgs::msg::SlipAngle::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SlipAngle_coefficient(msg_);
  }

private:
  ::eagleye_msgs::msg::SlipAngle msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::eagleye_msgs::msg::SlipAngle>()
{
  return eagleye_msgs::msg::builder::Init_SlipAngle_header();
}

}  // namespace eagleye_msgs

#endif  // EAGLEYE_MSGS__MSG__DETAIL__SLIP_ANGLE__BUILDER_HPP_
