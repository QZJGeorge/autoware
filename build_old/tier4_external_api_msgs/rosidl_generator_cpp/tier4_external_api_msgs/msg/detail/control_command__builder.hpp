// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_external_api_msgs:msg/ControlCommand.idl
// generated code does not contain a copyright notice

#ifndef TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__CONTROL_COMMAND__BUILDER_HPP_
#define TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__CONTROL_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_external_api_msgs/msg/detail/control_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_external_api_msgs
{

namespace msg
{

namespace builder
{

class Init_ControlCommand_brake
{
public:
  explicit Init_ControlCommand_brake(::tier4_external_api_msgs::msg::ControlCommand & msg)
  : msg_(msg)
  {}
  ::tier4_external_api_msgs::msg::ControlCommand brake(::tier4_external_api_msgs::msg::ControlCommand::_brake_type arg)
  {
    msg_.brake = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_external_api_msgs::msg::ControlCommand msg_;
};

class Init_ControlCommand_throttle
{
public:
  explicit Init_ControlCommand_throttle(::tier4_external_api_msgs::msg::ControlCommand & msg)
  : msg_(msg)
  {}
  Init_ControlCommand_brake throttle(::tier4_external_api_msgs::msg::ControlCommand::_throttle_type arg)
  {
    msg_.throttle = std::move(arg);
    return Init_ControlCommand_brake(msg_);
  }

private:
  ::tier4_external_api_msgs::msg::ControlCommand msg_;
};

class Init_ControlCommand_steering_angle_velocity
{
public:
  explicit Init_ControlCommand_steering_angle_velocity(::tier4_external_api_msgs::msg::ControlCommand & msg)
  : msg_(msg)
  {}
  Init_ControlCommand_throttle steering_angle_velocity(::tier4_external_api_msgs::msg::ControlCommand::_steering_angle_velocity_type arg)
  {
    msg_.steering_angle_velocity = std::move(arg);
    return Init_ControlCommand_throttle(msg_);
  }

private:
  ::tier4_external_api_msgs::msg::ControlCommand msg_;
};

class Init_ControlCommand_steering_angle
{
public:
  Init_ControlCommand_steering_angle()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ControlCommand_steering_angle_velocity steering_angle(::tier4_external_api_msgs::msg::ControlCommand::_steering_angle_type arg)
  {
    msg_.steering_angle = std::move(arg);
    return Init_ControlCommand_steering_angle_velocity(msg_);
  }

private:
  ::tier4_external_api_msgs::msg::ControlCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_external_api_msgs::msg::ControlCommand>()
{
  return tier4_external_api_msgs::msg::builder::Init_ControlCommand_steering_angle();
}

}  // namespace tier4_external_api_msgs

#endif  // TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__CONTROL_COMMAND__BUILDER_HPP_
