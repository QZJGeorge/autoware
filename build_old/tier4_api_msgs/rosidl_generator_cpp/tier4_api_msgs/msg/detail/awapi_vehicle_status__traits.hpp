// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tier4_api_msgs:msg/AwapiVehicleStatus.idl
// generated code does not contain a copyright notice

#ifndef TIER4_API_MSGS__MSG__DETAIL__AWAPI_VEHICLE_STATUS__TRAITS_HPP_
#define TIER4_API_MSGS__MSG__DETAIL__AWAPI_VEHICLE_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tier4_api_msgs/msg/detail/awapi_vehicle_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"
// Member 'eulerangle'
#include "tier4_api_msgs/msg/detail/euler__traits.hpp"
// Member 'geo_point'
#include "geographic_msgs/msg/detail/geo_point__traits.hpp"

namespace tier4_api_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const AwapiVehicleStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
    out << ", ";
  }

  // member: eulerangle
  {
    out << "eulerangle: ";
    to_flow_style_yaml(msg.eulerangle, out);
    out << ", ";
  }

  // member: geo_point
  {
    out << "geo_point: ";
    to_flow_style_yaml(msg.geo_point, out);
    out << ", ";
  }

  // member: velocity
  {
    out << "velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity, out);
    out << ", ";
  }

  // member: acceleration
  {
    out << "acceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.acceleration, out);
    out << ", ";
  }

  // member: steering
  {
    out << "steering: ";
    rosidl_generator_traits::value_to_yaml(msg.steering, out);
    out << ", ";
  }

  // member: steering_velocity
  {
    out << "steering_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.steering_velocity, out);
    out << ", ";
  }

  // member: angular_velocity
  {
    out << "angular_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.angular_velocity, out);
    out << ", ";
  }

  // member: gear
  {
    out << "gear: ";
    rosidl_generator_traits::value_to_yaml(msg.gear, out);
    out << ", ";
  }

  // member: energy_level
  {
    out << "energy_level: ";
    rosidl_generator_traits::value_to_yaml(msg.energy_level, out);
    out << ", ";
  }

  // member: turn_signal
  {
    out << "turn_signal: ";
    rosidl_generator_traits::value_to_yaml(msg.turn_signal, out);
    out << ", ";
  }

  // member: target_velocity
  {
    out << "target_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.target_velocity, out);
    out << ", ";
  }

  // member: target_acceleration
  {
    out << "target_acceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.target_acceleration, out);
    out << ", ";
  }

  // member: target_steering
  {
    out << "target_steering: ";
    rosidl_generator_traits::value_to_yaml(msg.target_steering, out);
    out << ", ";
  }

  // member: target_steering_velocity
  {
    out << "target_steering_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.target_steering_velocity, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AwapiVehicleStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_block_style_yaml(msg.pose, out, indentation + 2);
  }

  // member: eulerangle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "eulerangle:\n";
    to_block_style_yaml(msg.eulerangle, out, indentation + 2);
  }

  // member: geo_point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "geo_point:\n";
    to_block_style_yaml(msg.geo_point, out, indentation + 2);
  }

  // member: velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity, out);
    out << "\n";
  }

  // member: acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.acceleration, out);
    out << "\n";
  }

  // member: steering
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steering: ";
    rosidl_generator_traits::value_to_yaml(msg.steering, out);
    out << "\n";
  }

  // member: steering_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steering_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.steering_velocity, out);
    out << "\n";
  }

  // member: angular_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angular_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.angular_velocity, out);
    out << "\n";
  }

  // member: gear
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gear: ";
    rosidl_generator_traits::value_to_yaml(msg.gear, out);
    out << "\n";
  }

  // member: energy_level
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "energy_level: ";
    rosidl_generator_traits::value_to_yaml(msg.energy_level, out);
    out << "\n";
  }

  // member: turn_signal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "turn_signal: ";
    rosidl_generator_traits::value_to_yaml(msg.turn_signal, out);
    out << "\n";
  }

  // member: target_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.target_velocity, out);
    out << "\n";
  }

  // member: target_acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_acceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.target_acceleration, out);
    out << "\n";
  }

  // member: target_steering
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_steering: ";
    rosidl_generator_traits::value_to_yaml(msg.target_steering, out);
    out << "\n";
  }

  // member: target_steering_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_steering_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.target_steering_velocity, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AwapiVehicleStatus & msg, bool use_flow_style = false)
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

}  // namespace tier4_api_msgs

namespace rosidl_generator_traits
{

[[deprecated("use tier4_api_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tier4_api_msgs::msg::AwapiVehicleStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  tier4_api_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tier4_api_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const tier4_api_msgs::msg::AwapiVehicleStatus & msg)
{
  return tier4_api_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tier4_api_msgs::msg::AwapiVehicleStatus>()
{
  return "tier4_api_msgs::msg::AwapiVehicleStatus";
}

template<>
inline const char * name<tier4_api_msgs::msg::AwapiVehicleStatus>()
{
  return "tier4_api_msgs/msg/AwapiVehicleStatus";
}

template<>
struct has_fixed_size<tier4_api_msgs::msg::AwapiVehicleStatus>
  : std::integral_constant<bool, has_fixed_size<geographic_msgs::msg::GeoPoint>::value && has_fixed_size<geometry_msgs::msg::Pose>::value && has_fixed_size<std_msgs::msg::Header>::value && has_fixed_size<tier4_api_msgs::msg::Euler>::value> {};

template<>
struct has_bounded_size<tier4_api_msgs::msg::AwapiVehicleStatus>
  : std::integral_constant<bool, has_bounded_size<geographic_msgs::msg::GeoPoint>::value && has_bounded_size<geometry_msgs::msg::Pose>::value && has_bounded_size<std_msgs::msg::Header>::value && has_bounded_size<tier4_api_msgs::msg::Euler>::value> {};

template<>
struct is_message<tier4_api_msgs::msg::AwapiVehicleStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TIER4_API_MSGS__MSG__DETAIL__AWAPI_VEHICLE_STATUS__TRAITS_HPP_
