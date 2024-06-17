// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_external_api_msgs:msg/VehicleStatus.idl
// generated code does not contain a copyright notice

#ifndef TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__VEHICLE_STATUS__BUILDER_HPP_
#define TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__VEHICLE_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_external_api_msgs/msg/detail/vehicle_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_external_api_msgs
{

namespace msg
{

namespace builder
{

class Init_VehicleStatus_gear_shift
{
public:
  explicit Init_VehicleStatus_gear_shift(::tier4_external_api_msgs::msg::VehicleStatus & msg)
  : msg_(msg)
  {}
  ::tier4_external_api_msgs::msg::VehicleStatus gear_shift(::tier4_external_api_msgs::msg::VehicleStatus::_gear_shift_type arg)
  {
    msg_.gear_shift = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_external_api_msgs::msg::VehicleStatus msg_;
};

class Init_VehicleStatus_turn_signal
{
public:
  explicit Init_VehicleStatus_turn_signal(::tier4_external_api_msgs::msg::VehicleStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleStatus_gear_shift turn_signal(::tier4_external_api_msgs::msg::VehicleStatus::_turn_signal_type arg)
  {
    msg_.turn_signal = std::move(arg);
    return Init_VehicleStatus_gear_shift(msg_);
  }

private:
  ::tier4_external_api_msgs::msg::VehicleStatus msg_;
};

class Init_VehicleStatus_steering
{
public:
  explicit Init_VehicleStatus_steering(::tier4_external_api_msgs::msg::VehicleStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleStatus_turn_signal steering(::tier4_external_api_msgs::msg::VehicleStatus::_steering_type arg)
  {
    msg_.steering = std::move(arg);
    return Init_VehicleStatus_turn_signal(msg_);
  }

private:
  ::tier4_external_api_msgs::msg::VehicleStatus msg_;
};

class Init_VehicleStatus_twist
{
public:
  Init_VehicleStatus_twist()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VehicleStatus_steering twist(::tier4_external_api_msgs::msg::VehicleStatus::_twist_type arg)
  {
    msg_.twist = std::move(arg);
    return Init_VehicleStatus_steering(msg_);
  }

private:
  ::tier4_external_api_msgs::msg::VehicleStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_external_api_msgs::msg::VehicleStatus>()
{
  return tier4_external_api_msgs::msg::builder::Init_VehicleStatus_twist();
}

}  // namespace tier4_external_api_msgs

#endif  // TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__VEHICLE_STATUS__BUILDER_HPP_
