// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_adapi_v1_msgs:msg/VehicleDimensions.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__VEHICLE_DIMENSIONS__TRAITS_HPP_
#define AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__VEHICLE_DIMENSIONS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "autoware_adapi_v1_msgs/msg/detail/vehicle_dimensions__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'footprint'
#include "geometry_msgs/msg/detail/polygon__traits.hpp"

namespace autoware_adapi_v1_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const VehicleDimensions & msg,
  std::ostream & out)
{
  out << "{";
  // member: wheel_radius
  {
    out << "wheel_radius: ";
    rosidl_generator_traits::value_to_yaml(msg.wheel_radius, out);
    out << ", ";
  }

  // member: wheel_width
  {
    out << "wheel_width: ";
    rosidl_generator_traits::value_to_yaml(msg.wheel_width, out);
    out << ", ";
  }

  // member: wheel_base
  {
    out << "wheel_base: ";
    rosidl_generator_traits::value_to_yaml(msg.wheel_base, out);
    out << ", ";
  }

  // member: wheel_tread
  {
    out << "wheel_tread: ";
    rosidl_generator_traits::value_to_yaml(msg.wheel_tread, out);
    out << ", ";
  }

  // member: front_overhang
  {
    out << "front_overhang: ";
    rosidl_generator_traits::value_to_yaml(msg.front_overhang, out);
    out << ", ";
  }

  // member: rear_overhang
  {
    out << "rear_overhang: ";
    rosidl_generator_traits::value_to_yaml(msg.rear_overhang, out);
    out << ", ";
  }

  // member: left_overhang
  {
    out << "left_overhang: ";
    rosidl_generator_traits::value_to_yaml(msg.left_overhang, out);
    out << ", ";
  }

  // member: right_overhang
  {
    out << "right_overhang: ";
    rosidl_generator_traits::value_to_yaml(msg.right_overhang, out);
    out << ", ";
  }

  // member: height
  {
    out << "height: ";
    rosidl_generator_traits::value_to_yaml(msg.height, out);
    out << ", ";
  }

  // member: footprint
  {
    out << "footprint: ";
    to_flow_style_yaml(msg.footprint, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VehicleDimensions & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: wheel_radius
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wheel_radius: ";
    rosidl_generator_traits::value_to_yaml(msg.wheel_radius, out);
    out << "\n";
  }

  // member: wheel_width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wheel_width: ";
    rosidl_generator_traits::value_to_yaml(msg.wheel_width, out);
    out << "\n";
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

  // member: wheel_tread
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wheel_tread: ";
    rosidl_generator_traits::value_to_yaml(msg.wheel_tread, out);
    out << "\n";
  }

  // member: front_overhang
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "front_overhang: ";
    rosidl_generator_traits::value_to_yaml(msg.front_overhang, out);
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

  // member: left_overhang
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_overhang: ";
    rosidl_generator_traits::value_to_yaml(msg.left_overhang, out);
    out << "\n";
  }

  // member: right_overhang
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_overhang: ";
    rosidl_generator_traits::value_to_yaml(msg.right_overhang, out);
    out << "\n";
  }

  // member: height
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "height: ";
    rosidl_generator_traits::value_to_yaml(msg.height, out);
    out << "\n";
  }

  // member: footprint
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "footprint:\n";
    to_block_style_yaml(msg.footprint, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VehicleDimensions & msg, bool use_flow_style = false)
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
  const autoware_adapi_v1_msgs::msg::VehicleDimensions & msg,
  std::ostream & out, size_t indentation = 0)
{
  autoware_adapi_v1_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use autoware_adapi_v1_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const autoware_adapi_v1_msgs::msg::VehicleDimensions & msg)
{
  return autoware_adapi_v1_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<autoware_adapi_v1_msgs::msg::VehicleDimensions>()
{
  return "autoware_adapi_v1_msgs::msg::VehicleDimensions";
}

template<>
inline const char * name<autoware_adapi_v1_msgs::msg::VehicleDimensions>()
{
  return "autoware_adapi_v1_msgs/msg/VehicleDimensions";
}

template<>
struct has_fixed_size<autoware_adapi_v1_msgs::msg::VehicleDimensions>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Polygon>::value> {};

template<>
struct has_bounded_size<autoware_adapi_v1_msgs::msg::VehicleDimensions>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Polygon>::value> {};

template<>
struct is_message<autoware_adapi_v1_msgs::msg::VehicleDimensions>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__VEHICLE_DIMENSIONS__TRAITS_HPP_
