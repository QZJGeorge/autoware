// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from eagleye_msgs:msg/VelocityScaleFactor.idl
// generated code does not contain a copyright notice

#ifndef EAGLEYE_MSGS__MSG__DETAIL__VELOCITY_SCALE_FACTOR__TRAITS_HPP_
#define EAGLEYE_MSGS__MSG__DETAIL__VELOCITY_SCALE_FACTOR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "eagleye_msgs/msg/detail/velocity_scale_factor__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'status'
#include "eagleye_msgs/msg/detail/status__traits.hpp"

namespace eagleye_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const VelocityScaleFactor & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: scale_factor
  {
    out << "scale_factor: ";
    rosidl_generator_traits::value_to_yaml(msg.scale_factor, out);
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
  const VelocityScaleFactor & msg,
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

  // member: scale_factor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "scale_factor: ";
    rosidl_generator_traits::value_to_yaml(msg.scale_factor, out);
    out << "\n";
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

inline std::string to_yaml(const VelocityScaleFactor & msg, bool use_flow_style = false)
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

}  // namespace eagleye_msgs

namespace rosidl_generator_traits
{

[[deprecated("use eagleye_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const eagleye_msgs::msg::VelocityScaleFactor & msg,
  std::ostream & out, size_t indentation = 0)
{
  eagleye_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use eagleye_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const eagleye_msgs::msg::VelocityScaleFactor & msg)
{
  return eagleye_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<eagleye_msgs::msg::VelocityScaleFactor>()
{
  return "eagleye_msgs::msg::VelocityScaleFactor";
}

template<>
inline const char * name<eagleye_msgs::msg::VelocityScaleFactor>()
{
  return "eagleye_msgs/msg/VelocityScaleFactor";
}

template<>
struct has_fixed_size<eagleye_msgs::msg::VelocityScaleFactor>
  : std::integral_constant<bool, has_fixed_size<eagleye_msgs::msg::Status>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<eagleye_msgs::msg::VelocityScaleFactor>
  : std::integral_constant<bool, has_bounded_size<eagleye_msgs::msg::Status>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<eagleye_msgs::msg::VelocityScaleFactor>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // EAGLEYE_MSGS__MSG__DETAIL__VELOCITY_SCALE_FACTOR__TRAITS_HPP_
