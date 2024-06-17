// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tier4_v2x_msgs:msg/VirtualTrafficLightStateArray.idl
// generated code does not contain a copyright notice

#ifndef TIER4_V2X_MSGS__MSG__DETAIL__VIRTUAL_TRAFFIC_LIGHT_STATE_ARRAY__TRAITS_HPP_
#define TIER4_V2X_MSGS__MSG__DETAIL__VIRTUAL_TRAFFIC_LIGHT_STATE_ARRAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tier4_v2x_msgs/msg/detail/virtual_traffic_light_state_array__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'states'
#include "tier4_v2x_msgs/msg/detail/virtual_traffic_light_state__traits.hpp"

namespace tier4_v2x_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const VirtualTrafficLightStateArray & msg,
  std::ostream & out)
{
  out << "{";
  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
    out << ", ";
  }

  // member: states
  {
    if (msg.states.size() == 0) {
      out << "states: []";
    } else {
      out << "states: [";
      size_t pending_items = msg.states.size();
      for (auto item : msg.states) {
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
  const VirtualTrafficLightStateArray & msg,
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

  // member: states
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.states.size() == 0) {
      out << "states: []\n";
    } else {
      out << "states:\n";
      for (auto item : msg.states) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VirtualTrafficLightStateArray & msg, bool use_flow_style = false)
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
  const tier4_v2x_msgs::msg::VirtualTrafficLightStateArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  tier4_v2x_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tier4_v2x_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const tier4_v2x_msgs::msg::VirtualTrafficLightStateArray & msg)
{
  return tier4_v2x_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tier4_v2x_msgs::msg::VirtualTrafficLightStateArray>()
{
  return "tier4_v2x_msgs::msg::VirtualTrafficLightStateArray";
}

template<>
inline const char * name<tier4_v2x_msgs::msg::VirtualTrafficLightStateArray>()
{
  return "tier4_v2x_msgs/msg/VirtualTrafficLightStateArray";
}

template<>
struct has_fixed_size<tier4_v2x_msgs::msg::VirtualTrafficLightStateArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tier4_v2x_msgs::msg::VirtualTrafficLightStateArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tier4_v2x_msgs::msg::VirtualTrafficLightStateArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TIER4_V2X_MSGS__MSG__DETAIL__VIRTUAL_TRAFFIC_LIGHT_STATE_ARRAY__TRAITS_HPP_
