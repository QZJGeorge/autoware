// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mcity_msgs:msg/Control.idl
// generated code does not contain a copyright notice

#ifndef MCITY_MSGS__MSG__DETAIL__CONTROL__BUILDER_HPP_
#define MCITY_MSGS__MSG__DETAIL__CONTROL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mcity_msgs/msg/detail/control__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mcity_msgs
{

namespace msg
{

namespace builder
{

class Init_Control_turn_signal_cmd
{
public:
  explicit Init_Control_turn_signal_cmd(::mcity_msgs::msg::Control & msg)
  : msg_(msg)
  {}
  ::mcity_msgs::msg::Control turn_signal_cmd(::mcity_msgs::msg::Control::_turn_signal_cmd_type arg)
  {
    msg_.turn_signal_cmd = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mcity_msgs::msg::Control msg_;
};

class Init_Control_gear_cmd
{
public:
  explicit Init_Control_gear_cmd(::mcity_msgs::msg::Control & msg)
  : msg_(msg)
  {}
  Init_Control_turn_signal_cmd gear_cmd(::mcity_msgs::msg::Control::_gear_cmd_type arg)
  {
    msg_.gear_cmd = std::move(arg);
    return Init_Control_turn_signal_cmd(msg_);
  }

private:
  ::mcity_msgs::msg::Control msg_;
};

class Init_Control_steering_cmd
{
public:
  explicit Init_Control_steering_cmd(::mcity_msgs::msg::Control & msg)
  : msg_(msg)
  {}
  Init_Control_gear_cmd steering_cmd(::mcity_msgs::msg::Control::_steering_cmd_type arg)
  {
    msg_.steering_cmd = std::move(arg);
    return Init_Control_gear_cmd(msg_);
  }

private:
  ::mcity_msgs::msg::Control msg_;
};

class Init_Control_throttle_cmd
{
public:
  explicit Init_Control_throttle_cmd(::mcity_msgs::msg::Control & msg)
  : msg_(msg)
  {}
  Init_Control_steering_cmd throttle_cmd(::mcity_msgs::msg::Control::_throttle_cmd_type arg)
  {
    msg_.throttle_cmd = std::move(arg);
    return Init_Control_steering_cmd(msg_);
  }

private:
  ::mcity_msgs::msg::Control msg_;
};

class Init_Control_brake_cmd
{
public:
  explicit Init_Control_brake_cmd(::mcity_msgs::msg::Control & msg)
  : msg_(msg)
  {}
  Init_Control_throttle_cmd brake_cmd(::mcity_msgs::msg::Control::_brake_cmd_type arg)
  {
    msg_.brake_cmd = std::move(arg);
    return Init_Control_throttle_cmd(msg_);
  }

private:
  ::mcity_msgs::msg::Control msg_;
};

class Init_Control_count
{
public:
  explicit Init_Control_count(::mcity_msgs::msg::Control & msg)
  : msg_(msg)
  {}
  Init_Control_brake_cmd count(::mcity_msgs::msg::Control::_count_type arg)
  {
    msg_.count = std::move(arg);
    return Init_Control_brake_cmd(msg_);
  }

private:
  ::mcity_msgs::msg::Control msg_;
};

class Init_Control_timestamp
{
public:
  Init_Control_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Control_count timestamp(::mcity_msgs::msg::Control::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_Control_count(msg_);
  }

private:
  ::mcity_msgs::msg::Control msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mcity_msgs::msg::Control>()
{
  return mcity_msgs::msg::builder::Init_Control_timestamp();
}

}  // namespace mcity_msgs

#endif  // MCITY_MSGS__MSG__DETAIL__CONTROL__BUILDER_HPP_
