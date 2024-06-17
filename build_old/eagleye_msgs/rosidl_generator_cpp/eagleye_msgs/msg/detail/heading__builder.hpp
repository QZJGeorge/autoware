// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from eagleye_msgs:msg/Heading.idl
// generated code does not contain a copyright notice

#ifndef EAGLEYE_MSGS__MSG__DETAIL__HEADING__BUILDER_HPP_
#define EAGLEYE_MSGS__MSG__DETAIL__HEADING__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "eagleye_msgs/msg/detail/heading__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace eagleye_msgs
{

namespace msg
{

namespace builder
{

class Init_Heading_status
{
public:
  explicit Init_Heading_status(::eagleye_msgs::msg::Heading & msg)
  : msg_(msg)
  {}
  ::eagleye_msgs::msg::Heading status(::eagleye_msgs::msg::Heading::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::eagleye_msgs::msg::Heading msg_;
};

class Init_Heading_variance
{
public:
  explicit Init_Heading_variance(::eagleye_msgs::msg::Heading & msg)
  : msg_(msg)
  {}
  Init_Heading_status variance(::eagleye_msgs::msg::Heading::_variance_type arg)
  {
    msg_.variance = std::move(arg);
    return Init_Heading_status(msg_);
  }

private:
  ::eagleye_msgs::msg::Heading msg_;
};

class Init_Heading_heading_angle
{
public:
  explicit Init_Heading_heading_angle(::eagleye_msgs::msg::Heading & msg)
  : msg_(msg)
  {}
  Init_Heading_variance heading_angle(::eagleye_msgs::msg::Heading::_heading_angle_type arg)
  {
    msg_.heading_angle = std::move(arg);
    return Init_Heading_variance(msg_);
  }

private:
  ::eagleye_msgs::msg::Heading msg_;
};

class Init_Heading_header
{
public:
  Init_Heading_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Heading_heading_angle header(::eagleye_msgs::msg::Heading::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Heading_heading_angle(msg_);
  }

private:
  ::eagleye_msgs::msg::Heading msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::eagleye_msgs::msg::Heading>()
{
  return eagleye_msgs::msg::builder::Init_Heading_header();
}

}  // namespace eagleye_msgs

#endif  // EAGLEYE_MSGS__MSG__DETAIL__HEADING__BUILDER_HPP_
