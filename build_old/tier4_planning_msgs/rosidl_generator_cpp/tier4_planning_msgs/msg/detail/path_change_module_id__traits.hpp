// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tier4_planning_msgs:msg/PathChangeModuleId.idl
// generated code does not contain a copyright notice

#ifndef TIER4_PLANNING_MSGS__MSG__DETAIL__PATH_CHANGE_MODULE_ID__TRAITS_HPP_
#define TIER4_PLANNING_MSGS__MSG__DETAIL__PATH_CHANGE_MODULE_ID__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tier4_planning_msgs/msg/detail/path_change_module_id__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace tier4_planning_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PathChangeModuleId & msg,
  std::ostream & out)
{
  out << "{";
  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PathChangeModuleId & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PathChangeModuleId & msg, bool use_flow_style = false)
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

}  // namespace tier4_planning_msgs

namespace rosidl_generator_traits
{

[[deprecated("use tier4_planning_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tier4_planning_msgs::msg::PathChangeModuleId & msg,
  std::ostream & out, size_t indentation = 0)
{
  tier4_planning_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tier4_planning_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const tier4_planning_msgs::msg::PathChangeModuleId & msg)
{
  return tier4_planning_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tier4_planning_msgs::msg::PathChangeModuleId>()
{
  return "tier4_planning_msgs::msg::PathChangeModuleId";
}

template<>
inline const char * name<tier4_planning_msgs::msg::PathChangeModuleId>()
{
  return "tier4_planning_msgs/msg/PathChangeModuleId";
}

template<>
struct has_fixed_size<tier4_planning_msgs::msg::PathChangeModuleId>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tier4_planning_msgs::msg::PathChangeModuleId>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tier4_planning_msgs::msg::PathChangeModuleId>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TIER4_PLANNING_MSGS__MSG__DETAIL__PATH_CHANGE_MODULE_ID__TRAITS_HPP_
