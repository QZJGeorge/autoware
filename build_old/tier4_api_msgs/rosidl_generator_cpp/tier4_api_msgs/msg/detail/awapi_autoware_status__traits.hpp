// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tier4_api_msgs:msg/AwapiAutowareStatus.idl
// generated code does not contain a copyright notice

#ifndef TIER4_API_MSGS__MSG__DETAIL__AWAPI_AUTOWARE_STATUS__TRAITS_HPP_
#define TIER4_API_MSGS__MSG__DETAIL__AWAPI_AUTOWARE_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tier4_api_msgs/msg/detail/awapi_autoware_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'hazard_status'
#include "tier4_system_msgs/msg/detail/hazard_status_stamped__traits.hpp"
// Member 'stop_reason'
#include "tier4_planning_msgs/msg/detail/stop_reason_array__traits.hpp"
// Member 'diagnostics'
// Member 'error_diagnostics'
#include "diagnostic_msgs/msg/detail/diagnostic_status__traits.hpp"

namespace tier4_api_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const AwapiAutowareStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: autoware_state
  {
    out << "autoware_state: ";
    rosidl_generator_traits::value_to_yaml(msg.autoware_state, out);
    out << ", ";
  }

  // member: control_mode
  {
    out << "control_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.control_mode, out);
    out << ", ";
  }

  // member: gate_mode
  {
    out << "gate_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.gate_mode, out);
    out << ", ";
  }

  // member: emergency_stopped
  {
    out << "emergency_stopped: ";
    rosidl_generator_traits::value_to_yaml(msg.emergency_stopped, out);
    out << ", ";
  }

  // member: current_max_velocity
  {
    out << "current_max_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.current_max_velocity, out);
    out << ", ";
  }

  // member: hazard_status
  {
    out << "hazard_status: ";
    to_flow_style_yaml(msg.hazard_status, out);
    out << ", ";
  }

  // member: stop_reason
  {
    out << "stop_reason: ";
    to_flow_style_yaml(msg.stop_reason, out);
    out << ", ";
  }

  // member: diagnostics
  {
    if (msg.diagnostics.size() == 0) {
      out << "diagnostics: []";
    } else {
      out << "diagnostics: [";
      size_t pending_items = msg.diagnostics.size();
      for (auto item : msg.diagnostics) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: error_diagnostics
  {
    if (msg.error_diagnostics.size() == 0) {
      out << "error_diagnostics: []";
    } else {
      out << "error_diagnostics: [";
      size_t pending_items = msg.error_diagnostics.size();
      for (auto item : msg.error_diagnostics) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: autonomous_overridden
  {
    out << "autonomous_overridden: ";
    rosidl_generator_traits::value_to_yaml(msg.autonomous_overridden, out);
    out << ", ";
  }

  // member: arrived_goal
  {
    out << "arrived_goal: ";
    rosidl_generator_traits::value_to_yaml(msg.arrived_goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AwapiAutowareStatus & msg,
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

  // member: autoware_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "autoware_state: ";
    rosidl_generator_traits::value_to_yaml(msg.autoware_state, out);
    out << "\n";
  }

  // member: control_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "control_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.control_mode, out);
    out << "\n";
  }

  // member: gate_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gate_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.gate_mode, out);
    out << "\n";
  }

  // member: emergency_stopped
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "emergency_stopped: ";
    rosidl_generator_traits::value_to_yaml(msg.emergency_stopped, out);
    out << "\n";
  }

  // member: current_max_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_max_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.current_max_velocity, out);
    out << "\n";
  }

  // member: hazard_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hazard_status:\n";
    to_block_style_yaml(msg.hazard_status, out, indentation + 2);
  }

  // member: stop_reason
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stop_reason:\n";
    to_block_style_yaml(msg.stop_reason, out, indentation + 2);
  }

  // member: diagnostics
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.diagnostics.size() == 0) {
      out << "diagnostics: []\n";
    } else {
      out << "diagnostics:\n";
      for (auto item : msg.diagnostics) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: error_diagnostics
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.error_diagnostics.size() == 0) {
      out << "error_diagnostics: []\n";
    } else {
      out << "error_diagnostics:\n";
      for (auto item : msg.error_diagnostics) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: autonomous_overridden
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "autonomous_overridden: ";
    rosidl_generator_traits::value_to_yaml(msg.autonomous_overridden, out);
    out << "\n";
  }

  // member: arrived_goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "arrived_goal: ";
    rosidl_generator_traits::value_to_yaml(msg.arrived_goal, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AwapiAutowareStatus & msg, bool use_flow_style = false)
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

}  // namespace tier4_api_msgs

namespace rosidl_generator_traits
{

[[deprecated("use tier4_api_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tier4_api_msgs::msg::AwapiAutowareStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  tier4_api_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tier4_api_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const tier4_api_msgs::msg::AwapiAutowareStatus & msg)
{
  return tier4_api_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tier4_api_msgs::msg::AwapiAutowareStatus>()
{
  return "tier4_api_msgs::msg::AwapiAutowareStatus";
}

template<>
inline const char * name<tier4_api_msgs::msg::AwapiAutowareStatus>()
{
  return "tier4_api_msgs/msg/AwapiAutowareStatus";
}

template<>
struct has_fixed_size<tier4_api_msgs::msg::AwapiAutowareStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tier4_api_msgs::msg::AwapiAutowareStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tier4_api_msgs::msg::AwapiAutowareStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TIER4_API_MSGS__MSG__DETAIL__AWAPI_AUTOWARE_STATUS__TRAITS_HPP_
