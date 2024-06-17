// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tier4_vehicle_msgs:msg/ActuationStatus.idl
// generated code does not contain a copyright notice

#ifndef TIER4_VEHICLE_MSGS__MSG__DETAIL__ACTUATION_STATUS__TRAITS_HPP_
#define TIER4_VEHICLE_MSGS__MSG__DETAIL__ACTUATION_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tier4_vehicle_msgs/msg/detail/actuation_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace tier4_vehicle_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ActuationStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: accel_status
  {
    out << "accel_status: ";
    rosidl_generator_traits::value_to_yaml(msg.accel_status, out);
    out << ", ";
  }

  // member: brake_status
  {
    out << "brake_status: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_status, out);
    out << ", ";
  }

  // member: steer_status
  {
    out << "steer_status: ";
    rosidl_generator_traits::value_to_yaml(msg.steer_status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ActuationStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accel_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accel_status: ";
    rosidl_generator_traits::value_to_yaml(msg.accel_status, out);
    out << "\n";
  }

  // member: brake_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brake_status: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_status, out);
    out << "\n";
  }

  // member: steer_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steer_status: ";
    rosidl_generator_traits::value_to_yaml(msg.steer_status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ActuationStatus & msg, bool use_flow_style = false)
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

}  // namespace tier4_vehicle_msgs

namespace rosidl_generator_traits
{

[[deprecated("use tier4_vehicle_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tier4_vehicle_msgs::msg::ActuationStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  tier4_vehicle_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tier4_vehicle_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const tier4_vehicle_msgs::msg::ActuationStatus & msg)
{
  return tier4_vehicle_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tier4_vehicle_msgs::msg::ActuationStatus>()
{
  return "tier4_vehicle_msgs::msg::ActuationStatus";
}

template<>
inline const char * name<tier4_vehicle_msgs::msg::ActuationStatus>()
{
  return "tier4_vehicle_msgs/msg/ActuationStatus";
}

template<>
struct has_fixed_size<tier4_vehicle_msgs::msg::ActuationStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tier4_vehicle_msgs::msg::ActuationStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tier4_vehicle_msgs::msg::ActuationStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TIER4_VEHICLE_MSGS__MSG__DETAIL__ACTUATION_STATUS__TRAITS_HPP_
