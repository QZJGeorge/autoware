// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tier4_debug_msgs:msg/Float32MultiArrayStamped.idl
// generated code does not contain a copyright notice

#ifndef TIER4_DEBUG_MSGS__MSG__DETAIL__FLOAT32_MULTI_ARRAY_STAMPED__TRAITS_HPP_
#define TIER4_DEBUG_MSGS__MSG__DETAIL__FLOAT32_MULTI_ARRAY_STAMPED__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tier4_debug_msgs/msg/detail/float32_multi_array_stamped__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'layout'
#include "tier4_debug_msgs/msg/detail/multi_array_layout__traits.hpp"

namespace tier4_debug_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Float32MultiArrayStamped & msg,
  std::ostream & out)
{
  out << "{";
  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
    out << ", ";
  }

  // member: layout
  {
    out << "layout: ";
    to_flow_style_yaml(msg.layout, out);
    out << ", ";
  }

  // member: data
  {
    if (msg.data.size() == 0) {
      out << "data: []";
    } else {
      out << "data: [";
      size_t pending_items = msg.data.size();
      for (auto item : msg.data) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Float32MultiArrayStamped & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }

  // member: layout
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "layout:\n";
    to_block_style_yaml(msg.layout, out, indentation + 2);
  }

  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.data.size() == 0) {
      out << "data: []\n";
    } else {
      out << "data:\n";
      for (auto item : msg.data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Float32MultiArrayStamped & msg, bool use_flow_style = false)
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
  const tier4_debug_msgs::msg::Float32MultiArrayStamped & msg,
  std::ostream & out, size_t indentation = 0)
{
  tier4_debug_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tier4_debug_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const tier4_debug_msgs::msg::Float32MultiArrayStamped & msg)
{
  return tier4_debug_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tier4_debug_msgs::msg::Float32MultiArrayStamped>()
{
  return "tier4_debug_msgs::msg::Float32MultiArrayStamped";
}

template<>
inline const char * name<tier4_debug_msgs::msg::Float32MultiArrayStamped>()
{
  return "tier4_debug_msgs/msg/Float32MultiArrayStamped";
}

template<>
struct has_fixed_size<tier4_debug_msgs::msg::Float32MultiArrayStamped>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tier4_debug_msgs::msg::Float32MultiArrayStamped>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tier4_debug_msgs::msg::Float32MultiArrayStamped>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TIER4_DEBUG_MSGS__MSG__DETAIL__FLOAT32_MULTI_ARRAY_STAMPED__TRAITS_HPP_
