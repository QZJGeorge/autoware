// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_adapi_v1_msgs:msg/VehicleStatus.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__VEHICLE_STATUS__TRAITS_HPP_
#define AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__VEHICLE_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "autoware_adapi_v1_msgs/msg/detail/vehicle_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'gear'
#include "autoware_adapi_v1_msgs/msg/detail/gear__traits.hpp"
// Member 'turn_indicators'
#include "autoware_adapi_v1_msgs/msg/detail/turn_indicators__traits.hpp"
// Member 'hazard_lights'
#include "autoware_adapi_v1_msgs/msg/detail/hazard_lights__traits.hpp"

namespace autoware_adapi_v1_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const VehicleStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
    out << ", ";
  }

  // member: gear
  {
    out << "gear: ";
    to_flow_style_yaml(msg.gear, out);
    out << ", ";
  }

  // member: turn_indicators
  {
    out << "turn_indicators: ";
    to_flow_style_yaml(msg.turn_indicators, out);
    out << ", ";
  }

  // member: hazard_lights
  {
    out << "hazard_lights: ";
    to_flow_style_yaml(msg.hazard_lights, out);
    out << ", ";
  }

  // member: steering_tire_angle
  {
    out << "steering_tire_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.steering_tire_angle, out);
    out << ", ";
  }

  // member: energy_percentage
  {
    out << "energy_percentage: ";
    rosidl_generator_traits::value_to_yaml(msg.energy_percentage, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VehicleStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }

  // member: gear
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gear:\n";
    to_block_style_yaml(msg.gear, out, indentation + 2);
  }

  // member: turn_indicators
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "turn_indicators:\n";
    to_block_style_yaml(msg.turn_indicators, out, indentation + 2);
  }

  // member: hazard_lights
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hazard_lights:\n";
    to_block_style_yaml(msg.hazard_lights, out, indentation + 2);
  }

  // member: steering_tire_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steering_tire_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.steering_tire_angle, out);
    out << "\n";
  }

  // member: energy_percentage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "energy_percentage: ";
    rosidl_generator_traits::value_to_yaml(msg.energy_percentage, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VehicleStatus & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace autoware_adapi_v1_msgs

namespace rosidl_generator_traits
{

[[deprecated("use autoware_adapi_v1_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const autoware_adapi_v1_msgs::msg::VehicleStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  autoware_adapi_v1_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use autoware_adapi_v1_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const autoware_adapi_v1_msgs::msg::VehicleStatus & msg)
{
  return autoware_adapi_v1_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<autoware_adapi_v1_msgs::msg::VehicleStatus>()
{
  return "autoware_adapi_v1_msgs::msg::VehicleStatus";
}

template<>
inline const char * name<autoware_adapi_v1_msgs::msg::VehicleStatus>()
{
  return "autoware_adapi_v1_msgs/msg/VehicleStatus";
}

template<>
struct has_fixed_size<autoware_adapi_v1_msgs::msg::VehicleStatus>
  : std::integral_constant<bool, has_fixed_size<autoware_adapi_v1_msgs::msg::Gear>::value && has_fixed_size<autoware_adapi_v1_msgs::msg::HazardLights>::value && has_fixed_size<autoware_adapi_v1_msgs::msg::TurnIndicators>::value && has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<autoware_adapi_v1_msgs::msg::VehicleStatus>
  : std::integral_constant<bool, has_bounded_size<autoware_adapi_v1_msgs::msg::Gear>::value && has_bounded_size<autoware_adapi_v1_msgs::msg::HazardLights>::value && has_bounded_size<autoware_adapi_v1_msgs::msg::TurnIndicators>::value && has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<autoware_adapi_v1_msgs::msg::VehicleStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__VEHICLE_STATUS__TRAITS_HPP_
