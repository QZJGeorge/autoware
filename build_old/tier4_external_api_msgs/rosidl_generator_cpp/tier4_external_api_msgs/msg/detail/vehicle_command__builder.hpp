// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_external_api_msgs:msg/VehicleCommand.idl
// generated code does not contain a copyright notice

#ifndef TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__VEHICLE_COMMAND__BUILDER_HPP_
#define TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__VEHICLE_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_external_api_msgs/msg/detail/vehicle_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_external_api_msgs
{

namespace msg
{

namespace builder
{

class Init_VehicleCommand_acceleration
{
public:
  explicit Init_VehicleCommand_acceleration(::tier4_external_api_msgs::msg::VehicleCommand & msg)
  : msg_(msg)
  {}
  ::tier4_external_api_msgs::msg::VehicleCommand acceleration(::tier4_external_api_msgs::msg::VehicleCommand::_acceleration_type arg)
  {
    msg_.acceleration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_external_api_msgs::msg::VehicleCommand msg_;
};

class Init_VehicleCommand_velocity
{
public:
  Init_VehicleCommand_velocity()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VehicleCommand_acceleration velocity(::tier4_external_api_msgs::msg::VehicleCommand::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_VehicleCommand_acceleration(msg_);
  }

private:
  ::tier4_external_api_msgs::msg::VehicleCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_external_api_msgs::msg::VehicleCommand>()
{
  return tier4_external_api_msgs::msg::builder::Init_VehicleCommand_velocity();
}

}  // namespace tier4_external_api_msgs

#endif  // TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__VEHICLE_COMMAND__BUILDER_HPP_
