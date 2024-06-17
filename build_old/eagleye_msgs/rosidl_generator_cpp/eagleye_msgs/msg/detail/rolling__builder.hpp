// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from eagleye_msgs:msg/Rolling.idl
// generated code does not contain a copyright notice

#ifndef EAGLEYE_MSGS__MSG__DETAIL__ROLLING__BUILDER_HPP_
#define EAGLEYE_MSGS__MSG__DETAIL__ROLLING__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "eagleye_msgs/msg/detail/rolling__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace eagleye_msgs
{

namespace msg
{

namespace builder
{

class Init_Rolling_status
{
public:
  explicit Init_Rolling_status(::eagleye_msgs::msg::Rolling & msg)
  : msg_(msg)
  {}
  ::eagleye_msgs::msg::Rolling status(::eagleye_msgs::msg::Rolling::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::eagleye_msgs::msg::Rolling msg_;
};

class Init_Rolling_rolling_angle
{
public:
  explicit Init_Rolling_rolling_angle(::eagleye_msgs::msg::Rolling & msg)
  : msg_(msg)
  {}
  Init_Rolling_status rolling_angle(::eagleye_msgs::msg::Rolling::_rolling_angle_type arg)
  {
    msg_.rolling_angle = std::move(arg);
    return Init_Rolling_status(msg_);
  }

private:
  ::eagleye_msgs::msg::Rolling msg_;
};

class Init_Rolling_header
{
public:
  Init_Rolling_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Rolling_rolling_angle header(::eagleye_msgs::msg::Rolling::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Rolling_rolling_angle(msg_);
  }

private:
  ::eagleye_msgs::msg::Rolling msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::eagleye_msgs::msg::Rolling>()
{
  return eagleye_msgs::msg::builder::Init_Rolling_header();
}

}  // namespace eagleye_msgs

#endif  // EAGLEYE_MSGS__MSG__DETAIL__ROLLING__BUILDER_HPP_
