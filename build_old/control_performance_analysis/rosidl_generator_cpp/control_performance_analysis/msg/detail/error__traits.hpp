// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from control_performance_analysis:msg/Error.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_PERFORMANCE_ANALYSIS__MSG__DETAIL__ERROR__TRAITS_HPP_
#define CONTROL_PERFORMANCE_ANALYSIS__MSG__DETAIL__ERROR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "control_performance_analysis/msg/detail/error__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace control_performance_analysis
{

namespace msg
{

inline void to_flow_style_yaml(
  const Error & msg,
  std::ostream & out)
{
  out << "{";
  // member: lateral_error
  {
    out << "lateral_error: ";
    rosidl_generator_traits::value_to_yaml(msg.lateral_error, out);
    out << ", ";
  }

  // member: lateral_error_velocity
  {
    out << "lateral_error_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.lateral_error_velocity, out);
    out << ", ";
  }

  // member: lateral_error_acceleration
  {
    out << "lateral_error_acceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.lateral_error_acceleration, out);
    out << ", ";
  }

  // member: longitudinal_error
  {
    out << "longitudinal_error: ";
    rosidl_generator_traits::value_to_yaml(msg.longitudinal_error, out);
    out << ", ";
  }

  // member: longitudinal_error_velocity
  {
    out << "longitudinal_error_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.longitudinal_error_velocity, out);
    out << ", ";
  }

  // member: longitudinal_error_acceleration
  {
    out << "longitudinal_error_acceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.longitudinal_error_acceleration, out);
    out << ", ";
  }

  // member: heading_error
  {
    out << "heading_error: ";
    rosidl_generator_traits::value_to_yaml(msg.heading_error, out);
    out << ", ";
  }

  // member: heading_error_velocity
  {
    out << "heading_error_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.heading_error_velocity, out);
    out << ", ";
  }

  // member: control_effort_energy
  {
    out << "control_effort_energy: ";
    rosidl_generator_traits::value_to_yaml(msg.control_effort_energy, out);
    out << ", ";
  }

  // member: error_energy
  {
    out << "error_energy: ";
    rosidl_generator_traits::value_to_yaml(msg.error_energy, out);
    out << ", ";
  }

  // member: value_approximation
  {
    out << "value_approximation: ";
    rosidl_generator_traits::value_to_yaml(msg.value_approximation, out);
    out << ", ";
  }

  // member: curvature_estimate
  {
    out << "curvature_estimate: ";
    rosidl_generator_traits::value_to_yaml(msg.curvature_estimate, out);
    out << ", ";
  }

  // member: curvature_estimate_pp
  {
    out << "curvature_estimate_pp: ";
    rosidl_generator_traits::value_to_yaml(msg.curvature_estimate_pp, out);
    out << ", ";
  }

  // member: vehicle_velocity_error
  {
    out << "vehicle_velocity_error: ";
    rosidl_generator_traits::value_to_yaml(msg.vehicle_velocity_error, out);
    out << ", ";
  }

  // member: tracking_curvature_discontinuity_ability
  {
    out << "tracking_curvature_discontinuity_ability: ";
    rosidl_generator_traits::value_to_yaml(msg.tracking_curvature_discontinuity_ability, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Error & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: lateral_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lateral_error: ";
    rosidl_generator_traits::value_to_yaml(msg.lateral_error, out);
    out << "\n";
  }

  // member: lateral_error_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lateral_error_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.lateral_error_velocity, out);
    out << "\n";
  }

  // member: lateral_error_acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lateral_error_acceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.lateral_error_acceleration, out);
    out << "\n";
  }

  // member: longitudinal_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "longitudinal_error: ";
    rosidl_generator_traits::value_to_yaml(msg.longitudinal_error, out);
    out << "\n";
  }

  // member: longitudinal_error_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "longitudinal_error_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.longitudinal_error_velocity, out);
    out << "\n";
  }

  // member: longitudinal_error_acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "longitudinal_error_acceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.longitudinal_error_acceleration, out);
    out << "\n";
  }

  // member: heading_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heading_error: ";
    rosidl_generator_traits::value_to_yaml(msg.heading_error, out);
    out << "\n";
  }

  // member: heading_error_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heading_error_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.heading_error_velocity, out);
    out << "\n";
  }

  // member: control_effort_energy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "control_effort_energy: ";
    rosidl_generator_traits::value_to_yaml(msg.control_effort_energy, out);
    out << "\n";
  }

  // member: error_energy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_energy: ";
    rosidl_generator_traits::value_to_yaml(msg.error_energy, out);
    out << "\n";
  }

  // member: value_approximation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "value_approximation: ";
    rosidl_generator_traits::value_to_yaml(msg.value_approximation, out);
    out << "\n";
  }

  // member: curvature_estimate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "curvature_estimate: ";
    rosidl_generator_traits::value_to_yaml(msg.curvature_estimate, out);
    out << "\n";
  }

  // member: curvature_estimate_pp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "curvature_estimate_pp: ";
    rosidl_generator_traits::value_to_yaml(msg.curvature_estimate_pp, out);
    out << "\n";
  }

  // member: vehicle_velocity_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vehicle_velocity_error: ";
    rosidl_generator_traits::value_to_yaml(msg.vehicle_velocity_error, out);
    out << "\n";
  }

  // member: tracking_curvature_discontinuity_ability
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tracking_curvature_discontinuity_ability: ";
    rosidl_generator_traits::value_to_yaml(msg.tracking_curvature_discontinuity_ability, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Error & msg, bool use_flow_style = false)
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

}  // namespace control_performance_analysis

namespace rosidl_generator_traits
{

[[deprecated("use control_performance_analysis::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const control_performance_analysis::msg::Error & msg,
  std::ostream & out, size_t indentation = 0)
{
  control_performance_analysis::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use control_performance_analysis::msg::to_yaml() instead")]]
inline std::string to_yaml(const control_performance_analysis::msg::Error & msg)
{
  return control_performance_analysis::msg::to_yaml(msg);
}

template<>
inline const char * data_type<control_performance_analysis::msg::Error>()
{
  return "control_performance_analysis::msg::Error";
}

template<>
inline const char * name<control_performance_analysis::msg::Error>()
{
  return "control_performance_analysis/msg/Error";
}

template<>
struct has_fixed_size<control_performance_analysis::msg::Error>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<control_performance_analysis::msg::Error>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<control_performance_analysis::msg::Error>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CONTROL_PERFORMANCE_ANALYSIS__MSG__DETAIL__ERROR__TRAITS_HPP_
