// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_adapi_v1_msgs:msg/VehicleStatus.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__VEHICLE_STATUS__BUILDER_HPP_
#define AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__VEHICLE_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_adapi_v1_msgs/msg/detail/vehicle_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_adapi_v1_msgs
{

namespace msg
{

namespace builder
{

class Init_VehicleStatus_energy_percentage
{
public:
  explicit Init_VehicleStatus_energy_percentage(::autoware_adapi_v1_msgs::msg::VehicleStatus & msg)
  : msg_(msg)
  {}
  ::autoware_adapi_v1_msgs::msg::VehicleStatus energy_percentage(::autoware_adapi_v1_msgs::msg::VehicleStatus::_energy_percentage_type arg)
  {
    msg_.energy_percentage = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_adapi_v1_msgs::msg::VehicleStatus msg_;
};

class Init_VehicleStatus_steering_tire_angle
{
public:
  explicit Init_VehicleStatus_steering_tire_angle(::autoware_adapi_v1_msgs::msg::VehicleStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleStatus_energy_percentage steering_tire_angle(::autoware_adapi_v1_msgs::msg::VehicleStatus::_steering_tire_angle_type arg)
  {
    msg_.steering_tire_angle = std::move(arg);
    return Init_VehicleStatus_energy_percentage(msg_);
  }

private:
  ::autoware_adapi_v1_msgs::msg::VehicleStatus msg_;
};

class Init_VehicleStatus_hazard_lights
{
public:
  explicit Init_VehicleStatus_hazard_lights(::autoware_adapi_v1_msgs::msg::VehicleStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleStatus_steering_tire_angle hazard_lights(::autoware_adapi_v1_msgs::msg::VehicleStatus::_hazard_lights_type arg)
  {
    msg_.hazard_lights = std::move(arg);
    return Init_VehicleStatus_steering_tire_angle(msg_);
  }

private:
  ::autoware_adapi_v1_msgs::msg::VehicleStatus msg_;
};

class Init_VehicleStatus_turn_indicators
{
public:
  explicit Init_VehicleStatus_turn_indicators(::autoware_adapi_v1_msgs::msg::VehicleStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleStatus_hazard_lights turn_indicators(::autoware_adapi_v1_msgs::msg::VehicleStatus::_turn_indicators_type arg)
  {
    msg_.turn_indicators = std::move(arg);
    return Init_VehicleStatus_hazard_lights(msg_);
  }

private:
  ::autoware_adapi_v1_msgs::msg::VehicleStatus msg_;
};

class Init_VehicleStatus_gear
{
public:
  explicit Init_VehicleStatus_gear(::autoware_adapi_v1_msgs::msg::VehicleStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleStatus_turn_indicators gear(::autoware_adapi_v1_msgs::msg::VehicleStatus::_gear_type arg)
  {
    msg_.gear = std::move(arg);
    return Init_VehicleStatus_turn_indicators(msg_);
  }

private:
  ::autoware_adapi_v1_msgs::msg::VehicleStatus msg_;
};

class Init_VehicleStatus_stamp
{
public:
  Init_VehicleStatus_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VehicleStatus_gear stamp(::autoware_adapi_v1_msgs::msg::VehicleStatus::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_VehicleStatus_gear(msg_);
  }

private:
  ::autoware_adapi_v1_msgs::msg::VehicleStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_adapi_v1_msgs::msg::VehicleStatus>()
{
  return autoware_adapi_v1_msgs::msg::builder::Init_VehicleStatus_stamp();
}

}  // namespace autoware_adapi_v1_msgs

#endif  // AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__VEHICLE_STATUS__BUILDER_HPP_
