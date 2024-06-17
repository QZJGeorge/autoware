// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tier4_debug_msgs:msg/MultiArrayDimension.idl
// generated code does not contain a copyright notice

#ifndef TIER4_DEBUG_MSGS__MSG__DETAIL__MULTI_ARRAY_DIMENSION__TRAITS_HPP_
#define TIER4_DEBUG_MSGS__MSG__DETAIL__MULTI_ARRAY_DIMENSION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tier4_debug_msgs/msg/detail/multi_array_dimension__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace tier4_debug_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MultiArrayDimension & msg,
  std::ostream & out)
{
  out << "{";
  // member: label
  {
    out << "label: ";
    rosidl_generator_traits::value_to_yaml(msg.label, out);
    out << ", ";
  }

  // member: size
  {
    out << "size: ";
    rosidl_generator_traits::value_to_yaml(msg.size, out);
    out << ", ";
  }

  // member: stride
  {
    out << "stride: ";
    rosidl_generator_traits::value_to_yaml(msg.stride, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MultiArrayDimension & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: label
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "label: ";
    rosidl_generator_traits::value_to_yaml(msg.label, out);
    out << "\n";
  }

  // member: size
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "size: ";
    rosidl_generator_traits::value_to_yaml(msg.size, out);
    out << "\n";
  }

  // member: stride
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stride: ";
    rosidl_generator_traits::value_to_yaml(msg.stride, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MultiArrayDimension & msg, bool use_flow_style = false)
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

}  // namespace tier4_debug_msgs

namespace rosidl_generator_traits
{

[[deprecated("use tier4_debug_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tier4_debug_msgs::msg::MultiArrayDimension & msg,
  std::ostream & out, size_t indentation = 0)
{
  tier4_debug_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tier4_debug_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const tier4_debug_msgs::msg::MultiArrayDimension & msg)
{
  return tier4_debug_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tier4_debug_msgs::msg::MultiArrayDimension>()
{
  return "tier4_debug_msgs::msg::MultiArrayDimension";
}

template<>
inline const char * name<tier4_debug_msgs::msg::MultiArrayDimension>()
{
  return "tier4_debug_msgs/msg/MultiArrayDimension";
}

template<>
struct has_fixed_size<tier4_debug_msgs::msg::MultiArrayDimension>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tier4_debug_msgs::msg::MultiArrayDimension>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tier4_debug_msgs::msg::MultiArrayDimension>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TIER4_DEBUG_MSGS__MSG__DETAIL__MULTI_ARRAY_DIMENSION__TRAITS_HPP_
