// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rtklib_msgs:msg/RtklibNav.idl
// generated code does not contain a copyright notice

#ifndef RTKLIB_MSGS__MSG__DETAIL__RTKLIB_NAV__TRAITS_HPP_
#define RTKLIB_MSGS__MSG__DETAIL__RTKLIB_NAV__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rtklib_msgs/msg/detail/rtklib_nav__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'ecef_pos'
#include "geometry_msgs/msg/detail/point__traits.hpp"
// Member 'ecef_vel'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"
// Member 'status'
#include "sensor_msgs/msg/detail/nav_sat_fix__traits.hpp"

namespace rtklib_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RtklibNav & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: tow
  {
    out << "tow: ";
    rosidl_generator_traits::value_to_yaml(msg.tow, out);
    out << ", ";
  }

  // member: ecef_pos
  {
    out << "ecef_pos: ";
    to_flow_style_yaml(msg.ecef_pos, out);
    out << ", ";
  }

  // member: ecef_vel
  {
    out << "ecef_vel: ";
    to_flow_style_yaml(msg.ecef_vel, out);
    out << ", ";
  }

  // member: status
  {
    out << "status: ";
    to_flow_style_yaml(msg.status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RtklibNav & msg,
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

  // member: tow
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tow: ";
    rosidl_generator_traits::value_to_yaml(msg.tow, out);
    out << "\n";
  }

  // member: ecef_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ecef_pos:\n";
    to_block_style_yaml(msg.ecef_pos, out, indentation + 2);
  }

  // member: ecef_vel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ecef_vel:\n";
    to_block_style_yaml(msg.ecef_vel, out, indentation + 2);
  }

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status:\n";
    to_block_style_yaml(msg.status, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RtklibNav & msg, bool use_flow_style = false)
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

}  // namespace rtklib_msgs

namespace rosidl_generator_traits
{

[[deprecated("use rtklib_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rtklib_msgs::msg::RtklibNav & msg,
  std::ostream & out, size_t indentation = 0)
{
  rtklib_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rtklib_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rtklib_msgs::msg::RtklibNav & msg)
{
  return rtklib_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rtklib_msgs::msg::RtklibNav>()
{
  return "rtklib_msgs::msg::RtklibNav";
}

template<>
inline const char * name<rtklib_msgs::msg::RtklibNav>()
{
  return "rtklib_msgs/msg/RtklibNav";
}

template<>
struct has_fixed_size<rtklib_msgs::msg::RtklibNav>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Point>::value && has_fixed_size<geometry_msgs::msg::Vector3>::value && has_fixed_size<sensor_msgs::msg::NavSatFix>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<rtklib_msgs::msg::RtklibNav>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Point>::value && has_bounded_size<geometry_msgs::msg::Vector3>::value && has_bounded_size<sensor_msgs::msg::NavSatFix>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<rtklib_msgs::msg::RtklibNav>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RTKLIB_MSGS__MSG__DETAIL__RTKLIB_NAV__TRAITS_HPP_
