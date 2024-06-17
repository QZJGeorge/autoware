// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_vehicle_msgs:msg/BatteryStatus.idl
// generated code does not contain a copyright notice

#ifndef TIER4_VEHICLE_MSGS__MSG__DETAIL__BATTERY_STATUS__BUILDER_HPP_
#define TIER4_VEHICLE_MSGS__MSG__DETAIL__BATTERY_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_vehicle_msgs/msg/detail/battery_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_vehicle_msgs
{

namespace msg
{

namespace builder
{

class Init_BatteryStatus_energy_level
{
public:
  explicit Init_BatteryStatus_energy_level(::tier4_vehicle_msgs::msg::BatteryStatus & msg)
  : msg_(msg)
  {}
  ::tier4_vehicle_msgs::msg::BatteryStatus energy_level(::tier4_vehicle_msgs::msg::BatteryStatus::_energy_level_type arg)
  {
    msg_.energy_level = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_vehicle_msgs::msg::BatteryStatus msg_;
};

class Init_BatteryStatus_stamp
{
public:
  Init_BatteryStatus_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BatteryStatus_energy_level stamp(::tier4_vehicle_msgs::msg::BatteryStatus::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_BatteryStatus_energy_level(msg_);
  }

private:
  ::tier4_vehicle_msgs::msg::BatteryStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_vehicle_msgs::msg::BatteryStatus>()
{
  return tier4_vehicle_msgs::msg::builder::Init_BatteryStatus_stamp();
}

}  // namespace tier4_vehicle_msgs

#endif  // TIER4_VEHICLE_MSGS__MSG__DETAIL__BATTERY_STATUS__BUILDER_HPP_
