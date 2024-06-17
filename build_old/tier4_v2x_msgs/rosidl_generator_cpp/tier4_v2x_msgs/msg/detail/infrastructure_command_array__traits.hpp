// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tier4_v2x_msgs:msg/InfrastructureCommandArray.idl
// generated code does not contain a copyright notice

#ifndef TIER4_V2X_MSGS__MSG__DETAIL__INFRASTRUCTURE_COMMAND_ARRAY__TRAITS_HPP_
#define TIER4_V2X_MSGS__MSG__DETAIL__INFRASTRUCTURE_COMMAND_ARRAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tier4_v2x_msgs/msg/detail/infrastructure_command_array__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'commands'
#include "tier4_v2x_msgs/msg/detail/infrastructure_command__traits.hpp"

namespace tier4_v2x_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const InfrastructureCommandArray & msg,
  std::ostream & out)
{
  out << "{";
  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
    out << ", ";
  }

  // member: commands
  {
    if (msg.commands.size() == 0) {
      out << "commands: []";
    } else {
      out << "commands: [";
      size_t pending_items = msg.commands.size();
      for (auto item : msg.commands) {
        to_flow_style_yaml(item, out);
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
  const InfrastructureCommandArray & msg,
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

  // member: commands
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.commands.size() == 0) {
      out << "commands: []\n";
    } else {
      out << "commands:\n";
      for (auto item : msg.commands) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const InfrastructureCommandArray & msg, bool use_flow_style = false)
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

}  // namespace tier4_v2x_msgs

namespace rosidl_generator_traits
{

[[deprecated("use tier4_v2x_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tier4_v2x_msgs::msg::InfrastructureCommandArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  tier4_v2x_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tier4_v2x_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const tier4_v2x_msgs::msg::InfrastructureCommandArray & msg)
{
  return tier4_v2x_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tier4_v2x_msgs::msg::InfrastructureCommandArray>()
{
  return "tier4_v2x_msgs::msg::InfrastructureCommandArray";
}

template<>
inline const char * name<tier4_v2x_msgs::msg::InfrastructureCommandArray>()
{
  return "tier4_v2x_msgs/msg/InfrastructureCommandArray";
}

template<>
struct has_fixed_size<tier4_v2x_msgs::msg::InfrastructureCommandArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tier4_v2x_msgs::msg::InfrastructureCommandArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tier4_v2x_msgs::msg::InfrastructureCommandArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TIER4_V2X_MSGS__MSG__DETAIL__INFRASTRUCTURE_COMMAND_ARRAY__TRAITS_HPP_
