// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mcity_msgs:msg/VehicleState.idl
// generated code does not contain a copyright notice

#ifndef MCITY_MSGS__MSG__DETAIL__VEHICLE_STATE__TRAITS_HPP_
#define MCITY_MSGS__MSG__DETAIL__VEHICLE_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mcity_msgs/msg/detail/vehicle_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace mcity_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const VehicleState & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: z
  {
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << ", ";
  }

  // member: speed_x
  {
    out << "speed_x: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_x, out);
    out << ", ";
  }

  // member: speed_y
  {
    out << "speed_y: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_y, out);
    out << ", ";
  }

  // member: speed_z
  {
    out << "speed_z: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_z, out);
    out << ", ";
  }

  // member: acc_x
  {
    out << "acc_x: ";
    rosidl_generator_traits::value_to_yaml(msg.acc_x, out);
    out << ", ";
  }

  // member: acc_y
  {
    out << "acc_y: ";
    rosidl_generator_traits::value_to_yaml(msg.acc_y, out);
    out << ", ";
  }

  // member: acc_z
  {
    out << "acc_z: ";
    rosidl_generator_traits::value_to_yaml(msg.acc_z, out);
    out << ", ";
  }

  // member: heading
  {
    out << "heading: ";
    rosidl_generator_traits::value_to_yaml(msg.heading, out);
    out << ", ";
  }

  // member: yaw_rate
  {
    out << "yaw_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_rate, out);
    out << ", ";
  }

  // member: by_wire_enabled
  {
    out << "by_wire_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.by_wire_enabled, out);
    out << ", ";
  }

  // member: throttle_cmd
  {
    out << "throttle_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.throttle_cmd, out);
    out << ", ";
  }

  // member: throttle_input
  {
    out << "throttle_input: ";
    rosidl_generator_traits::value_to_yaml(msg.throttle_input, out);
    out << ", ";
  }

  // member: throttle_state
  {
    out << "throttle_state: ";
    rosidl_generator_traits::value_to_yaml(msg.throttle_state, out);
    out << ", ";
  }

  // member: throttle_enabled
  {
    out << "throttle_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.throttle_enabled, out);
    out << ", ";
  }

  // member: throttle_override
  {
    out << "throttle_override: ";
    rosidl_generator_traits::value_to_yaml(msg.throttle_override, out);
    out << ", ";
  }

  // member: throttle_driver
  {
    out << "throttle_driver: ";
    rosidl_generator_traits::value_to_yaml(msg.throttle_driver, out);
    out << ", ";
  }

  // member: throttle_timeout
  {
    out << "throttle_timeout: ";
    rosidl_generator_traits::value_to_yaml(msg.throttle_timeout, out);
    out << ", ";
  }

  // member: brake_cmd
  {
    out << "brake_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_cmd, out);
    out << ", ";
  }

  // member: brake_input
  {
    out << "brake_input: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_input, out);
    out << ", ";
  }

  // member: brake_state
  {
    out << "brake_state: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_state, out);
    out << ", ";
  }

  // member: brake_torq_cmd
  {
    out << "brake_torq_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_torq_cmd, out);
    out << ", ";
  }

  // member: brake_torq_input
  {
    out << "brake_torq_input: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_torq_input, out);
    out << ", ";
  }

  // member: brake_torq_state
  {
    out << "brake_torq_state: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_torq_state, out);
    out << ", ";
  }

  // member: brake_boo_output
  {
    out << "brake_boo_output: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_boo_output, out);
    out << ", ";
  }

  // member: brake_enabled
  {
    out << "brake_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_enabled, out);
    out << ", ";
  }

  // member: brake_override
  {
    out << "brake_override: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_override, out);
    out << ", ";
  }

  // member: brake_driver
  {
    out << "brake_driver: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_driver, out);
    out << ", ";
  }

  // member: brake_timeout
  {
    out << "brake_timeout: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_timeout, out);
    out << ", ";
  }

  // member: steer_cmd
  {
    out << "steer_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.steer_cmd, out);
    out << ", ";
  }

  // member: steer_state
  {
    out << "steer_state: ";
    rosidl_generator_traits::value_to_yaml(msg.steer_state, out);
    out << ", ";
  }

  // member: steer_torque
  {
    out << "steer_torque: ";
    rosidl_generator_traits::value_to_yaml(msg.steer_torque, out);
    out << ", ";
  }

  // member: steer_enabled
  {
    out << "steer_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.steer_enabled, out);
    out << ", ";
  }

  // member: steer_override
  {
    out << "steer_override: ";
    rosidl_generator_traits::value_to_yaml(msg.steer_override, out);
    out << ", ";
  }

  // member: steer_timeout
  {
    out << "steer_timeout: ";
    rosidl_generator_traits::value_to_yaml(msg.steer_timeout, out);
    out << ", ";
  }

  // member: gear_pos
  {
    out << "gear_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.gear_pos, out);
    out << ", ";
  }

  // member: wheel_v_front_left
  {
    out << "wheel_v_front_left: ";
    rosidl_generator_traits::value_to_yaml(msg.wheel_v_front_left, out);
    out << ", ";
  }

  // member: wheel_v_front_right
  {
    out << "wheel_v_front_right: ";
    rosidl_generator_traits::value_to_yaml(msg.wheel_v_front_right, out);
    out << ", ";
  }

  // member: wheel_v_rear_left
  {
    out << "wheel_v_rear_left: ";
    rosidl_generator_traits::value_to_yaml(msg.wheel_v_rear_left, out);
    out << ", ";
  }

  // member: wheel_v_rear_right
  {
    out << "wheel_v_rear_right: ";
    rosidl_generator_traits::value_to_yaml(msg.wheel_v_rear_right, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VehicleState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << "\n";
  }

  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << "\n";
  }

  // member: speed_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed_x: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_x, out);
    out << "\n";
  }

  // member: speed_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed_y: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_y, out);
    out << "\n";
  }

  // member: speed_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed_z: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_z, out);
    out << "\n";
  }

  // member: acc_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acc_x: ";
    rosidl_generator_traits::value_to_yaml(msg.acc_x, out);
    out << "\n";
  }

  // member: acc_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acc_y: ";
    rosidl_generator_traits::value_to_yaml(msg.acc_y, out);
    out << "\n";
  }

  // member: acc_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acc_z: ";
    rosidl_generator_traits::value_to_yaml(msg.acc_z, out);
    out << "\n";
  }

  // member: heading
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heading: ";
    rosidl_generator_traits::value_to_yaml(msg.heading, out);
    out << "\n";
  }

  // member: yaw_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_rate, out);
    out << "\n";
  }

  // member: by_wire_enabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "by_wire_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.by_wire_enabled, out);
    out << "\n";
  }

  // member: throttle_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "throttle_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.throttle_cmd, out);
    out << "\n";
  }

  // member: throttle_input
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "throttle_input: ";
    rosidl_generator_traits::value_to_yaml(msg.throttle_input, out);
    out << "\n";
  }

  // member: throttle_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "throttle_state: ";
    rosidl_generator_traits::value_to_yaml(msg.throttle_state, out);
    out << "\n";
  }

  // member: throttle_enabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "throttle_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.throttle_enabled, out);
    out << "\n";
  }

  // member: throttle_override
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "throttle_override: ";
    rosidl_generator_traits::value_to_yaml(msg.throttle_override, out);
    out << "\n";
  }

  // member: throttle_driver
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "throttle_driver: ";
    rosidl_generator_traits::value_to_yaml(msg.throttle_driver, out);
    out << "\n";
  }

  // member: throttle_timeout
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "throttle_timeout: ";
    rosidl_generator_traits::value_to_yaml(msg.throttle_timeout, out);
    out << "\n";
  }

  // member: brake_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brake_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_cmd, out);
    out << "\n";
  }

  // member: brake_input
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brake_input: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_input, out);
    out << "\n";
  }

  // member: brake_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brake_state: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_state, out);
    out << "\n";
  }

  // member: brake_torq_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brake_torq_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_torq_cmd, out);
    out << "\n";
  }

  // member: brake_torq_input
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brake_torq_input: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_torq_input, out);
    out << "\n";
  }

  // member: brake_torq_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brake_torq_state: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_torq_state, out);
    out << "\n";
  }

  // member: brake_boo_output
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brake_boo_output: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_boo_output, out);
    out << "\n";
  }

  // member: brake_enabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brake_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_enabled, out);
    out << "\n";
  }

  // member: brake_override
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brake_override: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_override, out);
    out << "\n";
  }

  // member: brake_driver
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brake_driver: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_driver, out);
    out << "\n";
  }

  // member: brake_timeout
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brake_timeout: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_timeout, out);
    out << "\n";
  }

  // member: steer_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steer_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.steer_cmd, out);
    out << "\n";
  }

  // member: steer_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steer_state: ";
    rosidl_generator_traits::value_to_yaml(msg.steer_state, out);
    out << "\n";
  }

  // member: steer_torque
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steer_torque: ";
    rosidl_generator_traits::value_to_yaml(msg.steer_torque, out);
    out << "\n";
  }

  // member: steer_enabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steer_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.steer_enabled, out);
    out << "\n";
  }

  // member: steer_override
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steer_override: ";
    rosidl_generator_traits::value_to_yaml(msg.steer_override, out);
    out << "\n";
  }

  // member: steer_timeout
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steer_timeout: ";
    rosidl_generator_traits::value_to_yaml(msg.steer_timeout, out);
    out << "\n";
  }

  // member: gear_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gear_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.gear_pos, out);
    out << "\n";
  }

  // member: wheel_v_front_left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wheel_v_front_left: ";
    rosidl_generator_traits::value_to_yaml(msg.wheel_v_front_left, out);
    out << "\n";
  }

  // member: wheel_v_front_right
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wheel_v_front_right: ";
    rosidl_generator_traits::value_to_yaml(msg.wheel_v_front_right, out);
    out << "\n";
  }

  // member: wheel_v_rear_left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wheel_v_rear_left: ";
    rosidl_generator_traits::value_to_yaml(msg.wheel_v_rear_left, out);
    out << "\n";
  }

  // member: wheel_v_rear_right
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wheel_v_rear_right: ";
    rosidl_generator_traits::value_to_yaml(msg.wheel_v_rear_right, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VehicleState & msg, bool use_flow_style = false)
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

}  // namespace mcity_msgs

namespace rosidl_generator_traits
{

[[deprecated("use mcity_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mcity_msgs::msg::VehicleState & msg,
  std::ostream & out, size_t indentation = 0)
{
  mcity_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mcity_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mcity_msgs::msg::VehicleState & msg)
{
  return mcity_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mcity_msgs::msg::VehicleState>()
{
  return "mcity_msgs::msg::VehicleState";
}

template<>
inline const char * name<mcity_msgs::msg::VehicleState>()
{
  return "mcity_msgs/msg/VehicleState";
}

template<>
struct has_fixed_size<mcity_msgs::msg::VehicleState>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mcity_msgs::msg::VehicleState>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mcity_msgs::msg::VehicleState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MCITY_MSGS__MSG__DETAIL__VEHICLE_STATE__TRAITS_HPP_
