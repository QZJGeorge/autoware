// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tier4_system_msgs:msg/EmergencyStateStamped.idl
// generated code does not contain a copyright notice

#ifndef TIER4_SYSTEM_MSGS__MSG__DETAIL__EMERGENCY_STATE_STAMPED__TRAITS_HPP_
#define TIER4_SYSTEM_MSGS__MSG__DETAIL__EMERGENCY_STATE_STAMPED__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tier4_system_msgs/msg/detail/emergency_state_stamped__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'state'
#include "tier4_system_msgs/msg/detail/emergency_state__traits.hpp"

namespace tier4_system_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const EmergencyStateStamped & msg,
  std::ostream & out)
{
  out << "{";
  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
    out << ", ";
  }

  // member: state
  {
    out << "state: ";
    to_flow_style_yaml(msg.state, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EmergencyStateStamped & msg,
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

  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state:\n";
    to_block_style_yaml(msg.state, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EmergencyStateStamped & msg, bool use_flow_style = false)
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
  const tier4_system_msgs::msg::EmergencyStateStamped & msg,
  std::ostream & out, size_t indentation = 0)
{
  tier4_system_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tier4_system_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const tier4_system_msgs::msg::EmergencyStateStamped & msg)
{
  return tier4_system_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tier4_system_msgs::msg::EmergencyStateStamped>()
{
  return "tier4_system_msgs::msg::EmergencyStateStamped";
}

template<>
inline const char * name<tier4_system_msgs::msg::EmergencyStateStamped>()
{
  return "tier4_system_msgs/msg/EmergencyStateStamped";
}

template<>
struct has_fixed_size<tier4_system_msgs::msg::EmergencyStateStamped>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value && has_fixed_size<tier4_system_msgs::msg::EmergencyState>::value> {};

template<>
struct has_bounded_size<tier4_system_msgs::msg::EmergencyStateStamped>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value && has_bounded_size<tier4_system_msgs::msg::EmergencyState>::value> {};

template<>
struct is_message<tier4_system_msgs::msg::EmergencyStateStamped>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TIER4_SYSTEM_MSGS__MSG__DETAIL__EMERGENCY_STATE_STAMPED__TRAITS_HPP_
