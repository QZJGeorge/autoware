// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from vehicle_cmd_gate:msg/IsFilterActivated.idl
// generated code does not contain a copyright notice

#ifndef VEHICLE_CMD_GATE__MSG__DETAIL__IS_FILTER_ACTIVATED__TRAITS_HPP_
#define VEHICLE_CMD_GATE__MSG__DETAIL__IS_FILTER_ACTIVATED__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "vehicle_cmd_gate/msg/detail/is_filter_activated__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace vehicle_cmd_gate
{

namespace msg
{

inline void to_flow_style_yaml(
  const IsFilterActivated & msg,
  std::ostream & out)
{
  out << "{";
  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
    out << ", ";
  }

  // member: is_activated
  {
    out << "is_activated: ";
    rosidl_generator_traits::value_to_yaml(msg.is_activated, out);
    out << ", ";
  }

  // member: is_activated_on_steering
  {
    out << "is_activated_on_steering: ";
    rosidl_generator_traits::value_to_yaml(msg.is_activated_on_steering, out);
    out << ", ";
  }

  // member: is_activated_on_steering_rate
  {
    out << "is_activated_on_steering_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.is_activated_on_steering_rate, out);
    out << ", ";
  }

  // member: is_activated_on_speed
  {
    out << "is_activated_on_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.is_activated_on_speed, out);
    out << ", ";
  }

  // member: is_activated_on_acceleration
  {
    out << "is_activated_on_acceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.is_activated_on_acceleration, out);
    out << ", ";
  }

  // member: is_activated_on_jerk
  {
    out << "is_activated_on_jerk: ";
    rosidl_generator_traits::value_to_yaml(msg.is_activated_on_jerk, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const IsFilterActivated & msg,
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

  // member: is_activated
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_activated: ";
    rosidl_generator_traits::value_to_yaml(msg.is_activated, out);
    out << "\n";
  }

  // member: is_activated_on_steering
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_activated_on_steering: ";
    rosidl_generator_traits::value_to_yaml(msg.is_activated_on_steering, out);
    out << "\n";
  }

  // member: is_activated_on_steering_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_activated_on_steering_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.is_activated_on_steering_rate, out);
    out << "\n";
  }

  // member: is_activated_on_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_activated_on_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.is_activated_on_speed, out);
    out << "\n";
  }

  // member: is_activated_on_acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_activated_on_acceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.is_activated_on_acceleration, out);
    out << "\n";
  }

  // member: is_activated_on_jerk
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_activated_on_jerk: ";
    rosidl_generator_traits::value_to_yaml(msg.is_activated_on_jerk, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const IsFilterActivated & msg, bool use_flow_style = false)
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

}  // namespace vehicle_cmd_gate

namespace rosidl_generator_traits
{

[[deprecated("use vehicle_cmd_gate::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const vehicle_cmd_gate::msg::IsFilterActivated & msg,
  std::ostream & out, size_t indentation = 0)
{
  vehicle_cmd_gate::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use vehicle_cmd_gate::msg::to_yaml() instead")]]
inline std::string to_yaml(const vehicle_cmd_gate::msg::IsFilterActivated & msg)
{
  return vehicle_cmd_gate::msg::to_yaml(msg);
}

template<>
inline const char * data_type<vehicle_cmd_gate::msg::IsFilterActivated>()
{
  return "vehicle_cmd_gate::msg::IsFilterActivated";
}

template<>
inline const char * name<vehicle_cmd_gate::msg::IsFilterActivated>()
{
  return "vehicle_cmd_gate/msg/IsFilterActivated";
}

template<>
struct has_fixed_size<vehicle_cmd_gate::msg::IsFilterActivated>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<vehicle_cmd_gate::msg::IsFilterActivated>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<vehicle_cmd_gate::msg::IsFilterActivated>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // VEHICLE_CMD_GATE__MSG__DETAIL__IS_FILTER_ACTIVATED__TRAITS_HPP_
