// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tier4_planning_msgs:msg/Scenario.idl
// generated code does not contain a copyright notice

#ifndef TIER4_PLANNING_MSGS__MSG__DETAIL__SCENARIO__TRAITS_HPP_
#define TIER4_PLANNING_MSGS__MSG__DETAIL__SCENARIO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tier4_planning_msgs/msg/detail/scenario__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace tier4_planning_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Scenario & msg,
  std::ostream & out)
{
  out << "{";
  // member: current_scenario
  {
    out << "current_scenario: ";
    rosidl_generator_traits::value_to_yaml(msg.current_scenario, out);
    out << ", ";
  }

  // member: activating_scenarios
  {
    if (msg.activating_scenarios.size() == 0) {
      out << "activating_scenarios: []";
    } else {
      out << "activating_scenarios: [";
      size_t pending_items = msg.activating_scenarios.size();
      for (auto item : msg.activating_scenarios) {
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
  const Scenario & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: current_scenario
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_scenario: ";
    rosidl_generator_traits::value_to_yaml(msg.current_scenario, out);
    out << "\n";
  }

  // member: activating_scenarios
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.activating_scenarios.size() == 0) {
      out << "activating_scenarios: []\n";
    } else {
      out << "activating_scenarios:\n";
      for (auto item : msg.activating_scenarios) {
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

inline std::string to_yaml(const Scenario & msg, bool use_flow_style = false)
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
  const tier4_planning_msgs::msg::Scenario & msg,
  std::ostream & out, size_t indentation = 0)
{
  tier4_planning_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tier4_planning_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const tier4_planning_msgs::msg::Scenario & msg)
{
  return tier4_planning_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tier4_planning_msgs::msg::Scenario>()
{
  return "tier4_planning_msgs::msg::Scenario";
}

template<>
inline const char * name<tier4_planning_msgs::msg::Scenario>()
{
  return "tier4_planning_msgs/msg/Scenario";
}

template<>
struct has_fixed_size<tier4_planning_msgs::msg::Scenario>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tier4_planning_msgs::msg::Scenario>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tier4_planning_msgs::msg::Scenario>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TIER4_PLANNING_MSGS__MSG__DETAIL__SCENARIO__TRAITS_HPP_
