// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from morai_msgs:msg/MapSpec.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__MAP_SPEC__TRAITS_HPP_
#define MORAI_MSGS__MSG__DETAIL__MAP_SPEC__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "morai_msgs/msg/detail/map_spec__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'utm_offset'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace morai_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MapSpec & msg,
  std::ostream & out)
{
  out << "{";
  // member: plane_coordinate_system
  {
    out << "plane_coordinate_system: ";
    rosidl_generator_traits::value_to_yaml(msg.plane_coordinate_system, out);
    out << ", ";
  }

  // member: utm_num
  {
    out << "utm_num: ";
    rosidl_generator_traits::value_to_yaml(msg.utm_num, out);
    out << ", ";
  }

  // member: utm_offset
  {
    out << "utm_offset: ";
    to_flow_style_yaml(msg.utm_offset, out);
    out << ", ";
  }

  // member: ellipse
  {
    out << "ellipse: ";
    rosidl_generator_traits::value_to_yaml(msg.ellipse, out);
    out << ", ";
  }

  // member: central_latitude
  {
    out << "central_latitude: ";
    rosidl_generator_traits::value_to_yaml(msg.central_latitude, out);
    out << ", ";
  }

  // member: central_meridian
  {
    out << "central_meridian: ";
    rosidl_generator_traits::value_to_yaml(msg.central_meridian, out);
    out << ", ";
  }

  // member: scale_factor
  {
    out << "scale_factor: ";
    rosidl_generator_traits::value_to_yaml(msg.scale_factor, out);
    out << ", ";
  }

  // member: false_easting
  {
    out << "false_easting: ";
    rosidl_generator_traits::value_to_yaml(msg.false_easting, out);
    out << ", ";
  }

  // member: false_northing
  {
    out << "false_northing: ";
    rosidl_generator_traits::value_to_yaml(msg.false_northing, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MapSpec & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: plane_coordinate_system
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "plane_coordinate_system: ";
    rosidl_generator_traits::value_to_yaml(msg.plane_coordinate_system, out);
    out << "\n";
  }

  // member: utm_num
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "utm_num: ";
    rosidl_generator_traits::value_to_yaml(msg.utm_num, out);
    out << "\n";
  }

  // member: utm_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "utm_offset:\n";
    to_block_style_yaml(msg.utm_offset, out, indentation + 2);
  }

  // member: ellipse
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ellipse: ";
    rosidl_generator_traits::value_to_yaml(msg.ellipse, out);
    out << "\n";
  }

  // member: central_latitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "central_latitude: ";
    rosidl_generator_traits::value_to_yaml(msg.central_latitude, out);
    out << "\n";
  }

  // member: central_meridian
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "central_meridian: ";
    rosidl_generator_traits::value_to_yaml(msg.central_meridian, out);
    out << "\n";
  }

  // member: scale_factor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "scale_factor: ";
    rosidl_generator_traits::value_to_yaml(msg.scale_factor, out);
    out << "\n";
  }

  // member: false_easting
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "false_easting: ";
    rosidl_generator_traits::value_to_yaml(msg.false_easting, out);
    out << "\n";
  }

  // member: false_northing
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "false_northing: ";
    rosidl_generator_traits::value_to_yaml(msg.false_northing, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MapSpec & msg, bool use_flow_style = false)
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
  const morai_msgs::msg::MapSpec & msg,
  std::ostream & out, size_t indentation = 0)
{
  morai_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use morai_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const morai_msgs::msg::MapSpec & msg)
{
  return morai_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<morai_msgs::msg::MapSpec>()
{
  return "morai_msgs::msg::MapSpec";
}

template<>
inline const char * name<morai_msgs::msg::MapSpec>()
{
  return "morai_msgs/msg/MapSpec";
}

template<>
struct has_fixed_size<morai_msgs::msg::MapSpec>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<morai_msgs::msg::MapSpec>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<morai_msgs::msg::MapSpec>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MORAI_MSGS__MSG__DETAIL__MAP_SPEC__TRAITS_HPP_
