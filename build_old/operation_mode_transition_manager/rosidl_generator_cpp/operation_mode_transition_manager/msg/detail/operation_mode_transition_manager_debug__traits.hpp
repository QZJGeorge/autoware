// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from operation_mode_transition_manager:msg/OperationModeTransitionManagerDebug.idl
// generated code does not contain a copyright notice

#ifndef OPERATION_MODE_TRANSITION_MANAGER__MSG__DETAIL__OPERATION_MODE_TRANSITION_MANAGER_DEBUG__TRAITS_HPP_
#define OPERATION_MODE_TRANSITION_MANAGER__MSG__DETAIL__OPERATION_MODE_TRANSITION_MANAGER_DEBUG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "operation_mode_transition_manager/msg/detail/operation_mode_transition_manager_debug__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace operation_mode_transition_manager
{

namespace msg
{

inline void to_flow_style_yaml(
  const OperationModeTransitionManagerDebug & msg,
  std::ostream & out)
{
  out << "{";
  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
    out << ", ";
  }

  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: in_autoware_control
  {
    out << "in_autoware_control: ";
    rosidl_generator_traits::value_to_yaml(msg.in_autoware_control, out);
    out << ", ";
  }

  // member: in_transition
  {
    out << "in_transition: ";
    rosidl_generator_traits::value_to_yaml(msg.in_transition, out);
    out << ", ";
  }

  // member: is_all_ok
  {
    out << "is_all_ok: ";
    rosidl_generator_traits::value_to_yaml(msg.is_all_ok, out);
    out << ", ";
  }

  // member: engage_allowed_for_stopped_vehicle
  {
    out << "engage_allowed_for_stopped_vehicle: ";
    rosidl_generator_traits::value_to_yaml(msg.engage_allowed_for_stopped_vehicle, out);
    out << ", ";
  }

  // member: trajectory_available_ok
  {
    out << "trajectory_available_ok: ";
    rosidl_generator_traits::value_to_yaml(msg.trajectory_available_ok, out);
    out << ", ";
  }

  // member: lateral_deviation_ok
  {
    out << "lateral_deviation_ok: ";
    rosidl_generator_traits::value_to_yaml(msg.lateral_deviation_ok, out);
    out << ", ";
  }

  // member: yaw_deviation_ok
  {
    out << "yaw_deviation_ok: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_deviation_ok, out);
    out << ", ";
  }

  // member: speed_upper_deviation_ok
  {
    out << "speed_upper_deviation_ok: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_upper_deviation_ok, out);
    out << ", ";
  }

  // member: speed_lower_deviation_ok
  {
    out << "speed_lower_deviation_ok: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_lower_deviation_ok, out);
    out << ", ";
  }

  // member: stop_ok
  {
    out << "stop_ok: ";
    rosidl_generator_traits::value_to_yaml(msg.stop_ok, out);
    out << ", ";
  }

  // member: large_acceleration_ok
  {
    out << "large_acceleration_ok: ";
    rosidl_generator_traits::value_to_yaml(msg.large_acceleration_ok, out);
    out << ", ";
  }

  // member: large_lateral_acceleration_ok
  {
    out << "large_lateral_acceleration_ok: ";
    rosidl_generator_traits::value_to_yaml(msg.large_lateral_acceleration_ok, out);
    out << ", ";
  }

  // member: large_lateral_acceleration_diff_ok
  {
    out << "large_lateral_acceleration_diff_ok: ";
    rosidl_generator_traits::value_to_yaml(msg.large_lateral_acceleration_diff_ok, out);
    out << ", ";
  }

  // member: current_speed
  {
    out << "current_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.current_speed, out);
    out << ", ";
  }

  // member: target_control_speed
  {
    out << "target_control_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.target_control_speed, out);
    out << ", ";
  }

  // member: target_planning_speed
  {
    out << "target_planning_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.target_planning_speed, out);
    out << ", ";
  }

  // member: target_control_acceleration
  {
    out << "target_control_acceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.target_control_acceleration, out);
    out << ", ";
  }

  // member: lateral_acceleration
  {
    out << "lateral_acceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.lateral_acceleration, out);
    out << ", ";
  }

  // member: lateral_acceleration_deviation
  {
    out << "lateral_acceleration_deviation: ";
    rosidl_generator_traits::value_to_yaml(msg.lateral_acceleration_deviation, out);
    out << ", ";
  }

  // member: lateral_deviation
  {
    out << "lateral_deviation: ";
    rosidl_generator_traits::value_to_yaml(msg.lateral_deviation, out);
    out << ", ";
  }

  // member: yaw_deviation
  {
    out << "yaw_deviation: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_deviation, out);
    out << ", ";
  }

  // member: speed_deviation
  {
    out << "speed_deviation: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_deviation, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const OperationModeTransitionManagerDebug & msg,
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

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: in_autoware_control
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "in_autoware_control: ";
    rosidl_generator_traits::value_to_yaml(msg.in_autoware_control, out);
    out << "\n";
  }

  // member: in_transition
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "in_transition: ";
    rosidl_generator_traits::value_to_yaml(msg.in_transition, out);
    out << "\n";
  }

  // member: is_all_ok
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_all_ok: ";
    rosidl_generator_traits::value_to_yaml(msg.is_all_ok, out);
    out << "\n";
  }

  // member: engage_allowed_for_stopped_vehicle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "engage_allowed_for_stopped_vehicle: ";
    rosidl_generator_traits::value_to_yaml(msg.engage_allowed_for_stopped_vehicle, out);
    out << "\n";
  }

  // member: trajectory_available_ok
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "trajectory_available_ok: ";
    rosidl_generator_traits::value_to_yaml(msg.trajectory_available_ok, out);
    out << "\n";
  }

  // member: lateral_deviation_ok
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lateral_deviation_ok: ";
    rosidl_generator_traits::value_to_yaml(msg.lateral_deviation_ok, out);
    out << "\n";
  }

  // member: yaw_deviation_ok
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw_deviation_ok: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_deviation_ok, out);
    out << "\n";
  }

  // member: speed_upper_deviation_ok
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed_upper_deviation_ok: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_upper_deviation_ok, out);
    out << "\n";
  }

  // member: speed_lower_deviation_ok
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed_lower_deviation_ok: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_lower_deviation_ok, out);
    out << "\n";
  }

  // member: stop_ok
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stop_ok: ";
    rosidl_generator_traits::value_to_yaml(msg.stop_ok, out);
    out << "\n";
  }

  // member: large_acceleration_ok
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "large_acceleration_ok: ";
    rosidl_generator_traits::value_to_yaml(msg.large_acceleration_ok, out);
    out << "\n";
  }

  // member: large_lateral_acceleration_ok
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "large_lateral_acceleration_ok: ";
    rosidl_generator_traits::value_to_yaml(msg.large_lateral_acceleration_ok, out);
    out << "\n";
  }

  // member: large_lateral_acceleration_diff_ok
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "large_lateral_acceleration_diff_ok: ";
    rosidl_generator_traits::value_to_yaml(msg.large_lateral_acceleration_diff_ok, out);
    out << "\n";
  }

  // member: current_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.current_speed, out);
    out << "\n";
  }

  // member: target_control_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_control_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.target_control_speed, out);
    out << "\n";
  }

  // member: target_planning_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_planning_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.target_planning_speed, out);
    out << "\n";
  }

  // member: target_control_acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_control_acceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.target_control_acceleration, out);
    out << "\n";
  }

  // member: lateral_acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lateral_acceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.lateral_acceleration, out);
    out << "\n";
  }

  // member: lateral_acceleration_deviation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lateral_acceleration_deviation: ";
    rosidl_generator_traits::value_to_yaml(msg.lateral_acceleration_deviation, out);
    out << "\n";
  }

  // member: lateral_deviation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lateral_deviation: ";
    rosidl_generator_traits::value_to_yaml(msg.lateral_deviation, out);
    out << "\n";
  }

  // member: yaw_deviation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw_deviation: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_deviation, out);
    out << "\n";
  }

  // member: speed_deviation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed_deviation: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_deviation, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const OperationModeTransitionManagerDebug & msg, bool use_flow_style = false)
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

}  // namespace operation_mode_transition_manager

namespace rosidl_generator_traits
{

[[deprecated("use operation_mode_transition_manager::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const operation_mode_transition_manager::msg::OperationModeTransitionManagerDebug & msg,
  std::ostream & out, size_t indentation = 0)
{
  operation_mode_transition_manager::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use operation_mode_transition_manager::msg::to_yaml() instead")]]
inline std::string to_yaml(const operation_mode_transition_manager::msg::OperationModeTransitionManagerDebug & msg)
{
  return operation_mode_transition_manager::msg::to_yaml(msg);
}

template<>
inline const char * data_type<operation_mode_transition_manager::msg::OperationModeTransitionManagerDebug>()
{
  return "operation_mode_transition_manager::msg::OperationModeTransitionManagerDebug";
}

template<>
inline const char * name<operation_mode_transition_manager::msg::OperationModeTransitionManagerDebug>()
{
  return "operation_mode_transition_manager/msg/OperationModeTransitionManagerDebug";
}

template<>
struct has_fixed_size<operation_mode_transition_manager::msg::OperationModeTransitionManagerDebug>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<operation_mode_transition_manager::msg::OperationModeTransitionManagerDebug>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<operation_mode_transition_manager::msg::OperationModeTransitionManagerDebug>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // OPERATION_MODE_TRANSITION_MANAGER__MSG__DETAIL__OPERATION_MODE_TRANSITION_MANAGER_DEBUG__TRAITS_HPP_
