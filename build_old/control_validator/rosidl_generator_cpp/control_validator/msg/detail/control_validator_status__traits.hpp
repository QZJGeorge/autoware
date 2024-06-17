// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from control_validator:msg/ControlValidatorStatus.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_VALIDATOR__MSG__DETAIL__CONTROL_VALIDATOR_STATUS__TRAITS_HPP_
#define CONTROL_VALIDATOR__MSG__DETAIL__CONTROL_VALIDATOR_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "control_validator/msg/detail/control_validator_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace control_validator
{

namespace msg
{

inline void to_flow_style_yaml(
  const ControlValidatorStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
    out << ", ";
  }

  // member: is_valid_max_distance_deviation
  {
    out << "is_valid_max_distance_deviation: ";
    rosidl_generator_traits::value_to_yaml(msg.is_valid_max_distance_deviation, out);
    out << ", ";
  }

  // member: max_distance_deviation
  {
    out << "max_distance_deviation: ";
    rosidl_generator_traits::value_to_yaml(msg.max_distance_deviation, out);
    out << ", ";
  }

  // member: invalid_count
  {
    out << "invalid_count: ";
    rosidl_generator_traits::value_to_yaml(msg.invalid_count, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ControlValidatorStatus & msg,
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

  // member: is_valid_max_distance_deviation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_valid_max_distance_deviation: ";
    rosidl_generator_traits::value_to_yaml(msg.is_valid_max_distance_deviation, out);
    out << "\n";
  }

  // member: max_distance_deviation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_distance_deviation: ";
    rosidl_generator_traits::value_to_yaml(msg.max_distance_deviation, out);
    out << "\n";
  }

  // member: invalid_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "invalid_count: ";
    rosidl_generator_traits::value_to_yaml(msg.invalid_count, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ControlValidatorStatus & msg, bool use_flow_style = false)
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

}  // namespace control_validator

namespace rosidl_generator_traits
{

[[deprecated("use control_validator::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const control_validator::msg::ControlValidatorStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  control_validator::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use control_validator::msg::to_yaml() instead")]]
inline std::string to_yaml(const control_validator::msg::ControlValidatorStatus & msg)
{
  return control_validator::msg::to_yaml(msg);
}

template<>
inline const char * data_type<control_validator::msg::ControlValidatorStatus>()
{
  return "control_validator::msg::ControlValidatorStatus";
}

template<>
inline const char * name<control_validator::msg::ControlValidatorStatus>()
{
  return "control_validator/msg/ControlValidatorStatus";
}

template<>
struct has_fixed_size<control_validator::msg::ControlValidatorStatus>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<control_validator::msg::ControlValidatorStatus>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<control_validator::msg::ControlValidatorStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CONTROL_VALIDATOR__MSG__DETAIL__CONTROL_VALIDATOR_STATUS__TRAITS_HPP_
