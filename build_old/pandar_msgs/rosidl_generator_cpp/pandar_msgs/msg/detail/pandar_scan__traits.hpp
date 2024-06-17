// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pandar_msgs:msg/PandarScan.idl
// generated code does not contain a copyright notice

#ifndef PANDAR_MSGS__MSG__DETAIL__PANDAR_SCAN__TRAITS_HPP_
#define PANDAR_MSGS__MSG__DETAIL__PANDAR_SCAN__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pandar_msgs/msg/detail/pandar_scan__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'packets'
#include "pandar_msgs/msg/detail/pandar_packet__traits.hpp"

namespace pandar_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PandarScan & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: packets
  {
    if (msg.packets.size() == 0) {
      out << "packets: []";
    } else {
      out << "packets: [";
      size_t pending_items = msg.packets.size();
      for (auto item : msg.packets) {
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
  const PandarScan & msg,
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

  // member: packets
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.packets.size() == 0) {
      out << "packets: []\n";
    } else {
      out << "packets:\n";
      for (auto item : msg.packets) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PandarScan & msg, bool use_flow_style = false)
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

}  // namespace pandar_msgs

namespace rosidl_generator_traits
{

[[deprecated("use pandar_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const pandar_msgs::msg::PandarScan & msg,
  std::ostream & out, size_t indentation = 0)
{
  pandar_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pandar_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const pandar_msgs::msg::PandarScan & msg)
{
  return pandar_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<pandar_msgs::msg::PandarScan>()
{
  return "pandar_msgs::msg::PandarScan";
}

template<>
inline const char * name<pandar_msgs::msg::PandarScan>()
{
  return "pandar_msgs/msg/PandarScan";
}

template<>
struct has_fixed_size<pandar_msgs::msg::PandarScan>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<pandar_msgs::msg::PandarScan>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<pandar_msgs::msg::PandarScan>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PANDAR_MSGS__MSG__DETAIL__PANDAR_SCAN__TRAITS_HPP_
