// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tier4_simulation_msgs:msg/SimulationEvents.idl
// generated code does not contain a copyright notice

#ifndef TIER4_SIMULATION_MSGS__MSG__DETAIL__SIMULATION_EVENTS__TRAITS_HPP_
#define TIER4_SIMULATION_MSGS__MSG__DETAIL__SIMULATION_EVENTS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tier4_simulation_msgs/msg/detail/simulation_events__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'fault_injection_events'
#include "tier4_simulation_msgs/msg/detail/fault_injection_event__traits.hpp"

namespace tier4_simulation_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SimulationEvents & msg,
  std::ostream & out)
{
  out << "{";
  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
    out << ", ";
  }

  // member: fault_injection_events
  {
    if (msg.fault_injection_events.size() == 0) {
      out << "fault_injection_events: []";
    } else {
      out << "fault_injection_events: [";
      size_t pending_items = msg.fault_injection_events.size();
      for (auto item : msg.fault_injection_events) {
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
  const SimulationEvents & msg,
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

  // member: fault_injection_events
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.fault_injection_events.size() == 0) {
      out << "fault_injection_events: []\n";
    } else {
      out << "fault_injection_events:\n";
      for (auto item : msg.fault_injection_events) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SimulationEvents & msg, bool use_flow_style = false)
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
  const tier4_simulation_msgs::msg::SimulationEvents & msg,
  std::ostream & out, size_t indentation = 0)
{
  tier4_simulation_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tier4_simulation_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const tier4_simulation_msgs::msg::SimulationEvents & msg)
{
  return tier4_simulation_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tier4_simulation_msgs::msg::SimulationEvents>()
{
  return "tier4_simulation_msgs::msg::SimulationEvents";
}

template<>
inline const char * name<tier4_simulation_msgs::msg::SimulationEvents>()
{
  return "tier4_simulation_msgs/msg/SimulationEvents";
}

template<>
struct has_fixed_size<tier4_simulation_msgs::msg::SimulationEvents>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tier4_simulation_msgs::msg::SimulationEvents>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tier4_simulation_msgs::msg::SimulationEvents>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TIER4_SIMULATION_MSGS__MSG__DETAIL__SIMULATION_EVENTS__TRAITS_HPP_
