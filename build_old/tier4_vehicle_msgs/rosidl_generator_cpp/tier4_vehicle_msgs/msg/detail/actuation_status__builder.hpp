// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_vehicle_msgs:msg/ActuationStatus.idl
// generated code does not contain a copyright notice

#ifndef TIER4_VEHICLE_MSGS__MSG__DETAIL__ACTUATION_STATUS__BUILDER_HPP_
#define TIER4_VEHICLE_MSGS__MSG__DETAIL__ACTUATION_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_vehicle_msgs/msg/detail/actuation_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_vehicle_msgs
{

namespace msg
{

namespace builder
{

class Init_ActuationStatus_steer_status
{
public:
  explicit Init_ActuationStatus_steer_status(::tier4_vehicle_msgs::msg::ActuationStatus & msg)
  : msg_(msg)
  {}
  ::tier4_vehicle_msgs::msg::ActuationStatus steer_status(::tier4_vehicle_msgs::msg::ActuationStatus::_steer_status_type arg)
  {
    msg_.steer_status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_vehicle_msgs::msg::ActuationStatus msg_;
};

class Init_ActuationStatus_brake_status
{
public:
  explicit Init_ActuationStatus_brake_status(::tier4_vehicle_msgs::msg::ActuationStatus & msg)
  : msg_(msg)
  {}
  Init_ActuationStatus_steer_status brake_status(::tier4_vehicle_msgs::msg::ActuationStatus::_brake_status_type arg)
  {
    msg_.brake_status = std::move(arg);
    return Init_ActuationStatus_steer_status(msg_);
  }

private:
  ::tier4_vehicle_msgs::msg::ActuationStatus msg_;
};

class Init_ActuationStatus_accel_status
{
public:
  Init_ActuationStatus_accel_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActuationStatus_brake_status accel_status(::tier4_vehicle_msgs::msg::ActuationStatus::_accel_status_type arg)
  {
    msg_.accel_status = std::move(arg);
    return Init_ActuationStatus_brake_status(msg_);
  }

private:
  ::tier4_vehicle_msgs::msg::ActuationStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_vehicle_msgs::msg::ActuationStatus>()
{
  return tier4_vehicle_msgs::msg::builder::Init_ActuationStatus_accel_status();
}

}  // namespace tier4_vehicle_msgs

#endif  // TIER4_VEHICLE_MSGS__MSG__DETAIL__ACTUATION_STATUS__BUILDER_HPP_
