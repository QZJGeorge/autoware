// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rtklib_msgs:msg/RtklibNav.idl
// generated code does not contain a copyright notice

#ifndef RTKLIB_MSGS__MSG__DETAIL__RTKLIB_NAV__BUILDER_HPP_
#define RTKLIB_MSGS__MSG__DETAIL__RTKLIB_NAV__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rtklib_msgs/msg/detail/rtklib_nav__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rtklib_msgs
{

namespace msg
{

namespace builder
{

class Init_RtklibNav_status
{
public:
  explicit Init_RtklibNav_status(::rtklib_msgs::msg::RtklibNav & msg)
  : msg_(msg)
  {}
  ::rtklib_msgs::msg::RtklibNav status(::rtklib_msgs::msg::RtklibNav::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rtklib_msgs::msg::RtklibNav msg_;
};

class Init_RtklibNav_ecef_vel
{
public:
  explicit Init_RtklibNav_ecef_vel(::rtklib_msgs::msg::RtklibNav & msg)
  : msg_(msg)
  {}
  Init_RtklibNav_status ecef_vel(::rtklib_msgs::msg::RtklibNav::_ecef_vel_type arg)
  {
    msg_.ecef_vel = std::move(arg);
    return Init_RtklibNav_status(msg_);
  }

private:
  ::rtklib_msgs::msg::RtklibNav msg_;
};

class Init_RtklibNav_ecef_pos
{
public:
  explicit Init_RtklibNav_ecef_pos(::rtklib_msgs::msg::RtklibNav & msg)
  : msg_(msg)
  {}
  Init_RtklibNav_ecef_vel ecef_pos(::rtklib_msgs::msg::RtklibNav::_ecef_pos_type arg)
  {
    msg_.ecef_pos = std::move(arg);
    return Init_RtklibNav_ecef_vel(msg_);
  }

private:
  ::rtklib_msgs::msg::RtklibNav msg_;
};

class Init_RtklibNav_tow
{
public:
  explicit Init_RtklibNav_tow(::rtklib_msgs::msg::RtklibNav & msg)
  : msg_(msg)
  {}
  Init_RtklibNav_ecef_pos tow(::rtklib_msgs::msg::RtklibNav::_tow_type arg)
  {
    msg_.tow = std::move(arg);
    return Init_RtklibNav_ecef_pos(msg_);
  }

private:
  ::rtklib_msgs::msg::RtklibNav msg_;
};

class Init_RtklibNav_header
{
public:
  Init_RtklibNav_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RtklibNav_tow header(::rtklib_msgs::msg::RtklibNav::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RtklibNav_tow(msg_);
  }

private:
  ::rtklib_msgs::msg::RtklibNav msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rtklib_msgs::msg::RtklibNav>()
{
  return rtklib_msgs::msg::builder::Init_RtklibNav_header();
}

}  // namespace rtklib_msgs

#endif  // RTKLIB_MSGS__MSG__DETAIL__RTKLIB_NAV__BUILDER_HPP_
