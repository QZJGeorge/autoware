// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from eagleye_msgs:msg/Pitching.idl
// generated code does not contain a copyright notice

#ifndef EAGLEYE_MSGS__MSG__DETAIL__PITCHING__BUILDER_HPP_
#define EAGLEYE_MSGS__MSG__DETAIL__PITCHING__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "eagleye_msgs/msg/detail/pitching__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace eagleye_msgs
{

namespace msg
{

namespace builder
{

class Init_Pitching_status
{
public:
  explicit Init_Pitching_status(::eagleye_msgs::msg::Pitching & msg)
  : msg_(msg)
  {}
  ::eagleye_msgs::msg::Pitching status(::eagleye_msgs::msg::Pitching::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::eagleye_msgs::msg::Pitching msg_;
};

class Init_Pitching_pitching_angle
{
public:
  explicit Init_Pitching_pitching_angle(::eagleye_msgs::msg::Pitching & msg)
  : msg_(msg)
  {}
  Init_Pitching_status pitching_angle(::eagleye_msgs::msg::Pitching::_pitching_angle_type arg)
  {
    msg_.pitching_angle = std::move(arg);
    return Init_Pitching_status(msg_);
  }

private:
  ::eagleye_msgs::msg::Pitching msg_;
};

class Init_Pitching_header
{
public:
  Init_Pitching_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Pitching_pitching_angle header(::eagleye_msgs::msg::Pitching::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Pitching_pitching_angle(msg_);
  }

private:
  ::eagleye_msgs::msg::Pitching msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::eagleye_msgs::msg::Pitching>()
{
  return eagleye_msgs::msg::builder::Init_Pitching_header();
}

}  // namespace eagleye_msgs

#endif  // EAGLEYE_MSGS__MSG__DETAIL__PITCHING__BUILDER_HPP_
