// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from eagleye_msgs:msg/Height.idl
// generated code does not contain a copyright notice

#ifndef EAGLEYE_MSGS__MSG__DETAIL__HEIGHT__BUILDER_HPP_
#define EAGLEYE_MSGS__MSG__DETAIL__HEIGHT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "eagleye_msgs/msg/detail/height__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace eagleye_msgs
{

namespace msg
{

namespace builder
{

class Init_Height_status
{
public:
  explicit Init_Height_status(::eagleye_msgs::msg::Height & msg)
  : msg_(msg)
  {}
  ::eagleye_msgs::msg::Height status(::eagleye_msgs::msg::Height::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::eagleye_msgs::msg::Height msg_;
};

class Init_Height_height
{
public:
  explicit Init_Height_height(::eagleye_msgs::msg::Height & msg)
  : msg_(msg)
  {}
  Init_Height_status height(::eagleye_msgs::msg::Height::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_Height_status(msg_);
  }

private:
  ::eagleye_msgs::msg::Height msg_;
};

class Init_Height_header
{
public:
  Init_Height_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Height_height header(::eagleye_msgs::msg::Height::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Height_height(msg_);
  }

private:
  ::eagleye_msgs::msg::Height msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::eagleye_msgs::msg::Height>()
{
  return eagleye_msgs::msg::builder::Init_Height_header();
}

}  // namespace eagleye_msgs

#endif  // EAGLEYE_MSGS__MSG__DETAIL__HEIGHT__BUILDER_HPP_
