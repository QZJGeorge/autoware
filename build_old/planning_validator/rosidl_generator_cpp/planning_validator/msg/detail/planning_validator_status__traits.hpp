// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from planning_validator:msg/PlanningValidatorStatus.idl
// generated code does not contain a copyright notice

#ifndef PLANNING_VALIDATOR__MSG__DETAIL__PLANNING_VALIDATOR_STATUS__TRAITS_HPP_
#define PLANNING_VALIDATOR__MSG__DETAIL__PLANNING_VALIDATOR_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "planning_validator/msg/detail/planning_validator_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace planning_validator
{

namespace msg
{

inline void to_flow_style_yaml(
  const PlanningValidatorStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
    out << ", ";
  }

  // member: is_valid_finite_value
  {
    out << "is_valid_finite_value: ";
    rosidl_generator_traits::value_to_yaml(msg.is_valid_finite_value, out);
    out << ", ";
  }

  // member: is_valid_interval
  {
    out << "is_valid_interval: ";
    rosidl_generator_traits::value_to_yaml(msg.is_valid_interval, out);
    out << ", ";
  }

  // member: is_valid_relative_angle
  {
    out << "is_valid_relative_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.is_valid_relative_angle, out);
    out << ", ";
  }

  // member: is_valid_curvature
  {
    out << "is_valid_curvature: ";
    rosidl_generator_traits::value_to_yaml(msg.is_valid_curvature, out);
    out << ", ";
  }

  // member: is_valid_lateral_acc
  {
    out << "is_valid_lateral_acc: ";
    rosidl_generator_traits::value_to_yaml(msg.is_valid_lateral_acc, out);
    out << ", ";
  }

  // member: is_valid_longitudinal_max_acc
  {
    out << "is_valid_longitudinal_max_acc: ";
    rosidl_generator_traits::value_to_yaml(msg.is_valid_longitudinal_max_acc, out);
    out << ", ";
  }

  // member: is_valid_longitudinal_min_acc
  {
    out << "is_valid_longitudinal_min_acc: ";
    rosidl_generator_traits::value_to_yaml(msg.is_valid_longitudinal_min_acc, out);
    out << ", ";
  }

  // member: is_valid_steering
  {
    out << "is_valid_steering: ";
    rosidl_generator_traits::value_to_yaml(msg.is_valid_steering, out);
    out << ", ";
  }

  // member: is_valid_steering_rate
  {
    out << "is_valid_steering_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.is_valid_steering_rate, out);
    out << ", ";
  }

  // member: is_valid_velocity_deviation
  {
    out << "is_valid_velocity_deviation: ";
    rosidl_generator_traits::value_to_yaml(msg.is_valid_velocity_deviation, out);
    out << ", ";
  }

  // member: is_valid_distance_deviation
  {
    out << "is_valid_distance_deviation: ";
    rosidl_generator_traits::value_to_yaml(msg.is_valid_distance_deviation, out);
    out << ", ";
  }

  // member: max_interval_distance
  {
    out << "max_interval_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.max_interval_distance, out);
    out << ", ";
  }

  // member: max_relative_angle
  {
    out << "max_relative_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.max_relative_angle, out);
    out << ", ";
  }

  // member: max_curvature
  {
    out << "max_curvature: ";
    rosidl_generator_traits::value_to_yaml(msg.max_curvature, out);
    out << ", ";
  }

  // member: max_lateral_acc
  {
    out << "max_lateral_acc: ";
    rosidl_generator_traits::value_to_yaml(msg.max_lateral_acc, out);
    out << ", ";
  }

  // member: max_longitudinal_acc
  {
    out << "max_longitudinal_acc: ";
    rosidl_generator_traits::value_to_yaml(msg.max_longitudinal_acc, out);
    out << ", ";
  }

  // member: min_longitudinal_acc
  {
    out << "min_longitudinal_acc: ";
    rosidl_generator_traits::value_to_yaml(msg.min_longitudinal_acc, out);
    out << ", ";
  }

  // member: max_steering
  {
    out << "max_steering: ";
    rosidl_generator_traits::value_to_yaml(msg.max_steering, out);
    out << ", ";
  }

  // member: max_steering_rate
  {
    out << "max_steering_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.max_steering_rate, out);
    out << ", ";
  }

  // member: velocity_deviation
  {
    out << "velocity_deviation: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity_deviation, out);
    out << ", ";
  }

  // member: distance_deviation
  {
    out << "distance_deviation: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_deviation, out);
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
  const PlanningValidatorStatus & msg,
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

  // member: is_valid_finite_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_valid_finite_value: ";
    rosidl_generator_traits::value_to_yaml(msg.is_valid_finite_value, out);
    out << "\n";
  }

  // member: is_valid_interval
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_valid_interval: ";
    rosidl_generator_traits::value_to_yaml(msg.is_valid_interval, out);
    out << "\n";
  }

  // member: is_valid_relative_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_valid_relative_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.is_valid_relative_angle, out);
    out << "\n";
  }

  // member: is_valid_curvature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_valid_curvature: ";
    rosidl_generator_traits::value_to_yaml(msg.is_valid_curvature, out);
    out << "\n";
  }

  // member: is_valid_lateral_acc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_valid_lateral_acc: ";
    rosidl_generator_traits::value_to_yaml(msg.is_valid_lateral_acc, out);
    out << "\n";
  }

  // member: is_valid_longitudinal_max_acc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_valid_longitudinal_max_acc: ";
    rosidl_generator_traits::value_to_yaml(msg.is_valid_longitudinal_max_acc, out);
    out << "\n";
  }

  // member: is_valid_longitudinal_min_acc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_valid_longitudinal_min_acc: ";
    rosidl_generator_traits::value_to_yaml(msg.is_valid_longitudinal_min_acc, out);
    out << "\n";
  }

  // member: is_valid_steering
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_valid_steering: ";
    rosidl_generator_traits::value_to_yaml(msg.is_valid_steering, out);
    out << "\n";
  }

  // member: is_valid_steering_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_valid_steering_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.is_valid_steering_rate, out);
    out << "\n";
  }

  // member: is_valid_velocity_deviation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_valid_velocity_deviation: ";
    rosidl_generator_traits::value_to_yaml(msg.is_valid_velocity_deviation, out);
    out << "\n";
  }

  // member: is_valid_distance_deviation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_valid_distance_deviation: ";
    rosidl_generator_traits::value_to_yaml(msg.is_valid_distance_deviation, out);
    out << "\n";
  }

  // member: max_interval_distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_interval_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.max_interval_distance, out);
    out << "\n";
  }

  // member: max_relative_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_relative_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.max_relative_angle, out);
    out << "\n";
  }

  // member: max_curvature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_curvature: ";
    rosidl_generator_traits::value_to_yaml(msg.max_curvature, out);
    out << "\n";
  }

  // member: max_lateral_acc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_lateral_acc: ";
    rosidl_generator_traits::value_to_yaml(msg.max_lateral_acc, out);
    out << "\n";
  }

  // member: max_longitudinal_acc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_longitudinal_acc: ";
    rosidl_generator_traits::value_to_yaml(msg.max_longitudinal_acc, out);
    out << "\n";
  }

  // member: min_longitudinal_acc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "min_longitudinal_acc: ";
    rosidl_generator_traits::value_to_yaml(msg.min_longitudinal_acc, out);
    out << "\n";
  }

  // member: max_steering
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_steering: ";
    rosidl_generator_traits::value_to_yaml(msg.max_steering, out);
    out << "\n";
  }

  // member: max_steering_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_steering_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.max_steering_rate, out);
    out << "\n";
  }

  // member: velocity_deviation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity_deviation: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity_deviation, out);
    out << "\n";
  }

  // member: distance_deviation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance_deviation: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_deviation, out);
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

inline std::string to_yaml(const PlanningValidatorStatus & msg, bool use_flow_style = false)
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

}  // namespace planning_validator

namespace rosidl_generator_traits
{

[[deprecated("use planning_validator::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const planning_validator::msg::PlanningValidatorStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  planning_validator::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use planning_validator::msg::to_yaml() instead")]]
inline std::string to_yaml(const planning_validator::msg::PlanningValidatorStatus & msg)
{
  return planning_validator::msg::to_yaml(msg);
}

template<>
inline const char * data_type<planning_validator::msg::PlanningValidatorStatus>()
{
  return "planning_validator::msg::PlanningValidatorStatus";
}

template<>
inline const char * name<planning_validator::msg::PlanningValidatorStatus>()
{
  return "planning_validator/msg/PlanningValidatorStatus";
}

template<>
struct has_fixed_size<planning_validator::msg::PlanningValidatorStatus>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<planning_validator::msg::PlanningValidatorStatus>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<planning_validator::msg::PlanningValidatorStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PLANNING_VALIDATOR__MSG__DETAIL__PLANNING_VALIDATOR_STATUS__TRAITS_HPP_
