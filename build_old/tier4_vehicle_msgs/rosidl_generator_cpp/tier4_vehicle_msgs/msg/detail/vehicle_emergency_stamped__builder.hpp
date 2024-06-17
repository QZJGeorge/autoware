// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_vehicle_msgs:msg/VehicleEmergencyStamped.idl
// generated code does not contain a copyright notice

#ifndef TIER4_VEHICLE_MSGS__MSG__DETAIL__VEHICLE_EMERGENCY_STAMPED__BUILDER_HPP_
#define TIER4_VEHICLE_MSGS__MSG__DETAIL__VEHICLE_EMERGENCY_STAMPED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_vehicle_msgs/msg/detail/vehicle_emergency_stamped__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_vehicle_msgs
{

namespace msg
{

namespace builder
{

class Init_VehicleEmergencyStamped_emergency
{
public:
  explicit Init_VehicleEmergencyStamped_emergency(::tier4_vehicle_msgs::msg::VehicleEmergencyStamped & msg)
  : msg_(msg)
  {}
  ::tier4_vehicle_msgs::msg::VehicleEmergencyStamped emergency(::tier4_vehicle_msgs::msg::VehicleEmergencyStamped::_emergency_type arg)
  {
    msg_.emergency = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_vehicle_msgs::msg::VehicleEmergencyStamped msg_;
};

class Init_VehicleEmergencyStamped_stamp
{
public:
  Init_VehicleEmergencyStamped_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VehicleEmergencyStamped_emergency stamp(::tier4_vehicle_msgs::msg::VehicleEmergencyStamped::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_VehicleEmergencyStamped_emergency(msg_);
  }

private:
  ::tier4_vehicle_msgs::msg::VehicleEmergencyStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_vehicle_msgs::msg::VehicleEmergencyStamped>()
{
  return tier4_vehicle_msgs::msg::builder::Init_VehicleEmergencyStamped_stamp();
}

}  // namespace tier4_vehicle_msgs

#endif  // TIER4_VEHICLE_MSGS__MSG__DETAIL__VEHICLE_EMERGENCY_STAMPED__BUILDER_HPP_
