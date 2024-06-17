// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from morai_msgs:msg/VehicleSpec.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__VEHICLE_SPEC__TRAITS_HPP_
#define MORAI_MSGS__MSG__DETAIL__VEHICLE_SPEC__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "morai_msgs/msg/detail/vehicle_spec__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'size'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace morai_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const VehicleSpec & msg,
  std::ostream & out)
{
  out << "{";
  // member: size
  {
    out << "size: ";
    to_flow_style_yaml(msg.size, out);
    out << ", ";
  }

  // member: wheel_base
  {
    out << "wheel_base: ";
    rosidl_generator_traits::value_to_yaml(msg.wheel_base, out);
    out << ", ";
  }

  // member: max_steering
  {
    out << "max_steering: ";
    rosidl_generator_traits::value_to_yaml(msg.max_steering, out);
    out << ", ";
  }

  // member: overhang
  {
    out << "overhang: ";
    rosidl_generator_traits::value_to_yaml(msg.overhang, out);
    out << ", ";
  }

  // member: rear_overhang
  {
    out << "rear_overhang: ";
    rosidl_generator_traits::value_to_yaml(msg.rear_overhang, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VehicleSpec & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: size
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "size:\n";
    to_block_style_yaml(msg.size, out, indentation + 2);
  }

  // member: wheel_base
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wheel_base: ";
    rosidl_generator_traits::value_to_yaml(msg.wheel_base, out);
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

  // member: overhang
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "overhang: ";
    rosidl_generator_traits::value_to_yaml(msg.overhang, out);
    out << "\n";
  }

  // member: rear_overhang
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rear_overhang: ";
    rosidl_generator_traits::value_to_yaml(msg.rear_overhang, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VehicleSpec & msg, bool use_flow_style = false)
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

}  // namespace morai_msgs

namespace rosidl_generator_traits
{

[[deprecated("use morai_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const morai_msgs::msg::VehicleSpec & msg,
  std::ostream & out, size_t indentation = 0)
{
  morai_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use morai_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const morai_msgs::msg::VehicleSpec & msg)
{
  return morai_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<morai_msgs::msg::VehicleSpec>()
{
  return "morai_msgs::msg::VehicleSpec";
}

template<>
inline const char * name<morai_msgs::msg::VehicleSpec>()
{
  return "morai_msgs/msg/VehicleSpec";
}

template<>
struct has_fixed_size<morai_msgs::msg::VehicleSpec>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct has_bounded_size<morai_msgs::msg::VehicleSpec>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct is_message<morai_msgs::msg::VehicleSpec>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MORAI_MSGS__MSG__DETAIL__VEHICLE_SPEC__TRAITS_HPP_
