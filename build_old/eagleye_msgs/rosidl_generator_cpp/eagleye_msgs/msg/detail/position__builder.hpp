// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from eagleye_msgs:msg/Position.idl
// generated code does not contain a copyright notice

#ifndef EAGLEYE_MSGS__MSG__DETAIL__POSITION__BUILDER_HPP_
#define EAGLEYE_MSGS__MSG__DETAIL__POSITION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "eagleye_msgs/msg/detail/position__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace eagleye_msgs
{

namespace msg
{

namespace builder
{

class Init_Position_status
{
public:
  explicit Init_Position_status(::eagleye_msgs::msg::Position & msg)
  : msg_(msg)
  {}
  ::eagleye_msgs::msg::Position status(::eagleye_msgs::msg::Position::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::eagleye_msgs::msg::Position msg_;
};

class Init_Position_covariance
{
public:
  explicit Init_Position_covariance(::eagleye_msgs::msg::Position & msg)
  : msg_(msg)
  {}
  Init_Position_status covariance(::eagleye_msgs::msg::Position::_covariance_type arg)
  {
    msg_.covariance = std::move(arg);
    return Init_Position_status(msg_);
  }

private:
  ::eagleye_msgs::msg::Position msg_;
};

class Init_Position_ecef_base_pos
{
public:
  explicit Init_Position_ecef_base_pos(::eagleye_msgs::msg::Position & msg)
  : msg_(msg)
  {}
  Init_Position_covariance ecef_base_pos(::eagleye_msgs::msg::Position::_ecef_base_pos_type arg)
  {
    msg_.ecef_base_pos = std::move(arg);
    return Init_Position_covariance(msg_);
  }

private:
  ::eagleye_msgs::msg::Position msg_;
};

class Init_Position_enu_pos
{
public:
  explicit Init_Position_enu_pos(::eagleye_msgs::msg::Position & msg)
  : msg_(msg)
  {}
  Init_Position_ecef_base_pos enu_pos(::eagleye_msgs::msg::Position::_enu_pos_type arg)
  {
    msg_.enu_pos = std::move(arg);
    return Init_Position_ecef_base_pos(msg_);
  }

private:
  ::eagleye_msgs::msg::Position msg_;
};

class Init_Position_header
{
public:
  Init_Position_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Position_enu_pos header(::eagleye_msgs::msg::Position::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Position_enu_pos(msg_);
  }

private:
  ::eagleye_msgs::msg::Position msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::eagleye_msgs::msg::Position>()
{
  return eagleye_msgs::msg::builder::Init_Position_header();
}

}  // namespace eagleye_msgs

#endif  // EAGLEYE_MSGS__MSG__DETAIL__POSITION__BUILDER_HPP_
