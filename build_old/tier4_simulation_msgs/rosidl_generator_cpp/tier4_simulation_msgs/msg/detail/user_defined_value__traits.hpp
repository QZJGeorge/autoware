// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tier4_simulation_msgs:msg/UserDefinedValue.idl
// generated code does not contain a copyright notice

#ifndef TIER4_SIMULATION_MSGS__MSG__DETAIL__USER_DEFINED_VALUE__TRAITS_HPP_
#define TIER4_SIMULATION_MSGS__MSG__DETAIL__USER_DEFINED_VALUE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tier4_simulation_msgs/msg/detail/user_defined_value__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'type'
#include "tier4_simulation_msgs/msg/detail/user_defined_value_type__traits.hpp"

namespace tier4_simulation_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const UserDefinedValue & msg,
  std::ostream & out)
{
  out << "{";
  // member: type
  {
    out << "type: ";
    to_flow_style_yaml(msg.type, out);
    out << ", ";
  }

  // member: value
  {
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const UserDefinedValue & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type:\n";
    to_block_style_yaml(msg.type, out, indentation + 2);
  }

  // member: value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const UserDefinedValue & msg, bool use_flow_style = false)
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

}  // namespace tier4_simulation_msgs

namespace rosidl_generator_traits
{

[[deprecated("use tier4_simulation_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tier4_simulation_msgs::msg::UserDefinedValue & msg,
  std::ostream & out, size_t indentation = 0)
{
  tier4_simulation_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tier4_simulation_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const tier4_simulation_msgs::msg::UserDefinedValue & msg)
{
  return tier4_simulation_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tier4_simulation_msgs::msg::UserDefinedValue>()
{
  return "tier4_simulation_msgs::msg::UserDefinedValue";
}

template<>
inline const char * name<tier4_simulation_msgs::msg::UserDefinedValue>()
{
  return "tier4_simulation_msgs/msg/UserDefinedValue";
}

template<>
struct has_fixed_size<tier4_simulation_msgs::msg::UserDefinedValue>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tier4_simulation_msgs::msg::UserDefinedValue>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tier4_simulation_msgs::msg::UserDefinedValue>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TIER4_SIMULATION_MSGS__MSG__DETAIL__USER_DEFINED_VALUE__TRAITS_HPP_
