// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_vehicle_msgs:msg/ActuationCommand.idl
// generated code does not contain a copyright notice

#ifndef TIER4_VEHICLE_MSGS__MSG__DETAIL__ACTUATION_COMMAND__BUILDER_HPP_
#define TIER4_VEHICLE_MSGS__MSG__DETAIL__ACTUATION_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_vehicle_msgs/msg/detail/actuation_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_vehicle_msgs
{

namespace msg
{

namespace builder
{

class Init_ActuationCommand_steer_cmd
{
public:
  explicit Init_ActuationCommand_steer_cmd(::tier4_vehicle_msgs::msg::ActuationCommand & msg)
  : msg_(msg)
  {}
  ::tier4_vehicle_msgs::msg::ActuationCommand steer_cmd(::tier4_vehicle_msgs::msg::ActuationCommand::_steer_cmd_type arg)
  {
    msg_.steer_cmd = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_vehicle_msgs::msg::ActuationCommand msg_;
};

class Init_ActuationCommand_brake_cmd
{
public:
  explicit Init_ActuationCommand_brake_cmd(::tier4_vehicle_msgs::msg::ActuationCommand & msg)
  : msg_(msg)
  {}
  Init_ActuationCommand_steer_cmd brake_cmd(::tier4_vehicle_msgs::msg::ActuationCommand::_brake_cmd_type arg)
  {
    msg_.brake_cmd = std::move(arg);
    return Init_ActuationCommand_steer_cmd(msg_);
  }

private:
  ::tier4_vehicle_msgs::msg::ActuationCommand msg_;
};

class Init_ActuationCommand_accel_cmd
{
public:
  Init_ActuationCommand_accel_cmd()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActuationCommand_brake_cmd accel_cmd(::tier4_vehicle_msgs::msg::ActuationCommand::_accel_cmd_type arg)
  {
    msg_.accel_cmd = std::move(arg);
    return Init_ActuationCommand_brake_cmd(msg_);
  }

private:
  ::tier4_vehicle_msgs::msg::ActuationCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_vehicle_msgs::msg::ActuationCommand>()
{
  return tier4_vehicle_msgs::msg::builder::Init_ActuationCommand_accel_cmd();
}

}  // namespace tier4_vehicle_msgs

#endif  // TIER4_VEHICLE_MSGS__MSG__DETAIL__ACTUATION_COMMAND__BUILDER_HPP_
