// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tier4_system_msgs:msg/HazardStatus.idl
// generated code does not contain a copyright notice

#ifndef TIER4_SYSTEM_MSGS__MSG__DETAIL__HAZARD_STATUS__TRAITS_HPP_
#define TIER4_SYSTEM_MSGS__MSG__DETAIL__HAZARD_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tier4_system_msgs/msg/detail/hazard_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'diagnostics_nf'
// Member 'diagnostics_sf'
// Member 'diagnostics_lf'
// Member 'diagnostics_spf'
#include "diagnostic_msgs/msg/detail/diagnostic_status__traits.hpp"

namespace tier4_system_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const HazardStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: level
  {
    out << "level: ";
    rosidl_generator_traits::value_to_yaml(msg.level, out);
    out << ", ";
  }

  // member: emergency
  {
    out << "emergency: ";
    rosidl_generator_traits::value_to_yaml(msg.emergency, out);
    out << ", ";
  }

  // member: emergency_holding
  {
    out << "emergency_holding: ";
    rosidl_generator_traits::value_to_yaml(msg.emergency_holding, out);
    out << ", ";
  }

  // member: diagnostics_nf
  {
    if (msg.diagnostics_nf.size() == 0) {
      out << "diagnostics_nf: []";
    } else {
      out << "diagnostics_nf: [";
      size_t pending_items = msg.diagnostics_nf.size();
      for (auto item : msg.diagnostics_nf) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: diagnostics_sf
  {
    if (msg.diagnostics_sf.size() == 0) {
      out << "diagnostics_sf: []";
    } else {
      out << "diagnostics_sf: [";
      size_t pending_items = msg.diagnostics_sf.size();
      for (auto item : msg.diagnostics_sf) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: diagnostics_lf
  {
    if (msg.diagnostics_lf.size() == 0) {
      out << "diagnostics_lf: []";
    } else {
      out << "diagnostics_lf: [";
      size_t pending_items = msg.diagnostics_lf.size();
      for (auto item : msg.diagnostics_lf) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: diagnostics_spf
  {
    if (msg.diagnostics_spf.size() == 0) {
      out << "diagnostics_spf: []";
    } else {
      out << "diagnostics_spf: [";
      size_t pending_items = msg.diagnostics_spf.size();
      for (auto item : msg.diagnostics_spf) {
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
  const HazardStatus & msg,
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

  // member: emergency
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "emergency: ";
    rosidl_generator_traits::value_to_yaml(msg.emergency, out);
    out << "\n";
  }

  // member: emergency_holding
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "emergency_holding: ";
    rosidl_generator_traits::value_to_yaml(msg.emergency_holding, out);
    out << "\n";
  }

  // member: diagnostics_nf
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.diagnostics_nf.size() == 0) {
      out << "diagnostics_nf: []\n";
    } else {
      out << "diagnostics_nf:\n";
      for (auto item : msg.diagnostics_nf) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: diagnostics_sf
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.diagnostics_sf.size() == 0) {
      out << "diagnostics_sf: []\n";
    } else {
      out << "diagnostics_sf:\n";
      for (auto item : msg.diagnostics_sf) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: diagnostics_lf
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.diagnostics_lf.size() == 0) {
      out << "diagnostics_lf: []\n";
    } else {
      out << "diagnostics_lf:\n";
      for (auto item : msg.diagnostics_lf) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: diagnostics_spf
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.diagnostics_spf.size() == 0) {
      out << "diagnostics_spf: []\n";
    } else {
      out << "diagnostics_spf:\n";
      for (auto item : msg.diagnostics_spf) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HazardStatus & msg, bool use_flow_style = false)
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
  const tier4_system_msgs::msg::HazardStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  tier4_system_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tier4_system_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const tier4_system_msgs::msg::HazardStatus & msg)
{
  return tier4_system_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tier4_system_msgs::msg::HazardStatus>()
{
  return "tier4_system_msgs::msg::HazardStatus";
}

template<>
inline const char * name<tier4_system_msgs::msg::HazardStatus>()
{
  return "tier4_system_msgs/msg/HazardStatus";
}

template<>
struct has_fixed_size<tier4_system_msgs::msg::HazardStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tier4_system_msgs::msg::HazardStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tier4_system_msgs::msg::HazardStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TIER4_SYSTEM_MSGS__MSG__DETAIL__HAZARD_STATUS__TRAITS_HPP_
