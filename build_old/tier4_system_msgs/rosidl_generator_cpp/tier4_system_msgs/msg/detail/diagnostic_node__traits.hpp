// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tier4_system_msgs:msg/DiagnosticNode.idl
// generated code does not contain a copyright notice

#ifndef TIER4_SYSTEM_MSGS__MSG__DETAIL__DIAGNOSTIC_NODE__TRAITS_HPP_
#define TIER4_SYSTEM_MSGS__MSG__DETAIL__DIAGNOSTIC_NODE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tier4_system_msgs/msg/detail/diagnostic_node__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'status'
#include "diagnostic_msgs/msg/detail/diagnostic_status__traits.hpp"
// Member 'links'
#include "tier4_system_msgs/msg/detail/diagnostic_link__traits.hpp"

namespace tier4_system_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const DiagnosticNode & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    to_flow_style_yaml(msg.status, out);
    out << ", ";
  }

  // member: links
  {
    if (msg.links.size() == 0) {
      out << "links: []";
    } else {
      out << "links: [";
      size_t pending_items = msg.links.size();
      for (auto item : msg.links) {
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
  const DiagnosticNode & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status:\n";
    to_block_style_yaml(msg.status, out, indentation + 2);
  }

  // member: links
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.links.size() == 0) {
      out << "links: []\n";
    } else {
      out << "links:\n";
      for (auto item : msg.links) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DiagnosticNode & msg, bool use_flow_style = false)
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

}  // namespace tier4_system_msgs

namespace rosidl_generator_traits
{

[[deprecated("use tier4_system_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tier4_system_msgs::msg::DiagnosticNode & msg,
  std::ostream & out, size_t indentation = 0)
{
  tier4_system_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tier4_system_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const tier4_system_msgs::msg::DiagnosticNode & msg)
{
  return tier4_system_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tier4_system_msgs::msg::DiagnosticNode>()
{
  return "tier4_system_msgs::msg::DiagnosticNode";
}

template<>
inline const char * name<tier4_system_msgs::msg::DiagnosticNode>()
{
  return "tier4_system_msgs/msg/DiagnosticNode";
}

template<>
struct has_fixed_size<tier4_system_msgs::msg::DiagnosticNode>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tier4_system_msgs::msg::DiagnosticNode>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tier4_system_msgs::msg::DiagnosticNode>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TIER4_SYSTEM_MSGS__MSG__DETAIL__DIAGNOSTIC_NODE__TRAITS_HPP_
