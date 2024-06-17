// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_map_msgs:msg/AreaInfo.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_MAP_MSGS__MSG__DETAIL__AREA_INFO__TRAITS_HPP_
#define AUTOWARE_MAP_MSGS__MSG__DETAIL__AREA_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "autoware_map_msgs/msg/detail/area_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace autoware_map_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const AreaInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: center_x
  {
    out << "center_x: ";
    rosidl_generator_traits::value_to_yaml(msg.center_x, out);
    out << ", ";
  }

  // member: center_y
  {
    out << "center_y: ";
    rosidl_generator_traits::value_to_yaml(msg.center_y, out);
    out << ", ";
  }

  // member: radius
  {
    out << "radius: ";
    rosidl_generator_traits::value_to_yaml(msg.radius, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AreaInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: center_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "center_x: ";
    rosidl_generator_traits::value_to_yaml(msg.center_x, out);
    out << "\n";
  }

  // member: center_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "center_y: ";
    rosidl_generator_traits::value_to_yaml(msg.center_y, out);
    out << "\n";
  }

  // member: radius
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "radius: ";
    rosidl_generator_traits::value_to_yaml(msg.radius, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AreaInfo & msg, bool use_flow_style = false)
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

}  // namespace autoware_map_msgs

namespace rosidl_generator_traits
{

[[deprecated("use autoware_map_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const autoware_map_msgs::msg::AreaInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  autoware_map_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use autoware_map_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const autoware_map_msgs::msg::AreaInfo & msg)
{
  return autoware_map_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<autoware_map_msgs::msg::AreaInfo>()
{
  return "autoware_map_msgs::msg::AreaInfo";
}

template<>
inline const char * name<autoware_map_msgs::msg::AreaInfo>()
{
  return "autoware_map_msgs/msg/AreaInfo";
}

template<>
struct has_fixed_size<autoware_map_msgs::msg::AreaInfo>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<autoware_map_msgs::msg::AreaInfo>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<autoware_map_msgs::msg::AreaInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_MAP_MSGS__MSG__DETAIL__AREA_INFO__TRAITS_HPP_
