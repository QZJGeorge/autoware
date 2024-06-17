// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tier4_simulation_msgs:msg/FaultInjectionEvent.idl
// generated code does not contain a copyright notice

#ifndef TIER4_SIMULATION_MSGS__MSG__DETAIL__FAULT_INJECTION_EVENT__TRAITS_HPP_
#define TIER4_SIMULATION_MSGS__MSG__DETAIL__FAULT_INJECTION_EVENT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tier4_simulation_msgs/msg/detail/fault_injection_event__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace tier4_simulation_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const FaultInjectionEvent & msg,
  std::ostream & out)
{
  out << "{";
  // member: level
  {
    out << "level: ";
    rosidl_generator_traits::value_to_yaml(msg.level, out);
    out << ", ";
  }

  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FaultInjectionEvent & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: level
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "level: ";
    rosidl_generator_traits::value_to_yaml(msg.level, out);
    out << "\n";
  }

  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FaultInjectionEvent & msg, bool use_flow_style = false)
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
  const tier4_simulation_msgs::msg::FaultInjectionEvent & msg,
  std::ostream & out, size_t indentation = 0)
{
  tier4_simulation_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tier4_simulation_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const tier4_simulation_msgs::msg::FaultInjectionEvent & msg)
{
  return tier4_simulation_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tier4_simulation_msgs::msg::FaultInjectionEvent>()
{
  return "tier4_simulation_msgs::msg::FaultInjectionEvent";
}

template<>
inline const char * name<tier4_simulation_msgs::msg::FaultInjectionEvent>()
{
  return "tier4_simulation_msgs/msg/FaultInjectionEvent";
}

template<>
struct has_fixed_size<tier4_simulation_msgs::msg::FaultInjectionEvent>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tier4_simulation_msgs::msg::FaultInjectionEvent>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tier4_simulation_msgs::msg::FaultInjectionEvent>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TIER4_SIMULATION_MSGS__MSG__DETAIL__FAULT_INJECTION_EVENT__TRAITS_HPP_
