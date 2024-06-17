// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from morai_msgs:msg/IntersectionControl.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__INTERSECTION_CONTROL__TRAITS_HPP_
#define MORAI_MSGS__MSG__DETAIL__INTERSECTION_CONTROL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "morai_msgs/msg/detail/intersection_control__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace morai_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const IntersectionControl & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: intersection_index
  {
    out << "intersection_index: ";
    rosidl_generator_traits::value_to_yaml(msg.intersection_index, out);
    out << ", ";
  }

  // member: intersection_status
  {
    out << "intersection_status: ";
    rosidl_generator_traits::value_to_yaml(msg.intersection_status, out);
    out << ", ";
  }

  // member: intersection_status_time
  {
    out << "intersection_status_time: ";
    rosidl_generator_traits::value_to_yaml(msg.intersection_status_time, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const IntersectionControl & msg,
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

  // member: intersection_index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "intersection_index: ";
    rosidl_generator_traits::value_to_yaml(msg.intersection_index, out);
    out << "\n";
  }

  // member: intersection_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "intersection_status: ";
    rosidl_generator_traits::value_to_yaml(msg.intersection_status, out);
    out << "\n";
  }

  // member: intersection_status_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "intersection_status_time: ";
    rosidl_generator_traits::value_to_yaml(msg.intersection_status_time, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const IntersectionControl & msg, bool use_flow_style = false)
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
  const morai_msgs::msg::IntersectionControl & msg,
  std::ostream & out, size_t indentation = 0)
{
  morai_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use morai_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const morai_msgs::msg::IntersectionControl & msg)
{
  return morai_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<morai_msgs::msg::IntersectionControl>()
{
  return "morai_msgs::msg::IntersectionControl";
}

template<>
inline const char * name<morai_msgs::msg::IntersectionControl>()
{
  return "morai_msgs/msg/IntersectionControl";
}

template<>
struct has_fixed_size<morai_msgs::msg::IntersectionControl>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<morai_msgs::msg::IntersectionControl>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<morai_msgs::msg::IntersectionControl>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MORAI_MSGS__MSG__DETAIL__INTERSECTION_CONTROL__TRAITS_HPP_
