// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from behavior_velocity_planner:srv/LoadPlugin.idl
// generated code does not contain a copyright notice

#ifndef BEHAVIOR_VELOCITY_PLANNER__SRV__DETAIL__LOAD_PLUGIN__TRAITS_HPP_
#define BEHAVIOR_VELOCITY_PLANNER__SRV__DETAIL__LOAD_PLUGIN__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "behavior_velocity_planner/srv/detail/load_plugin__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace behavior_velocity_planner
{

namespace srv
{

inline void to_flow_style_yaml(
  const LoadPlugin_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: plugin_name
  {
    out << "plugin_name: ";
    rosidl_generator_traits::value_to_yaml(msg.plugin_name, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LoadPlugin_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: plugin_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "plugin_name: ";
    rosidl_generator_traits::value_to_yaml(msg.plugin_name, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LoadPlugin_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace behavior_velocity_planner

namespace rosidl_generator_traits
{

[[deprecated("use behavior_velocity_planner::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const behavior_velocity_planner::srv::LoadPlugin_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  behavior_velocity_planner::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use behavior_velocity_planner::srv::to_yaml() instead")]]
inline std::string to_yaml(const behavior_velocity_planner::srv::LoadPlugin_Request & msg)
{
  return behavior_velocity_planner::srv::to_yaml(msg);
}

template<>
inline const char * data_type<behavior_velocity_planner::srv::LoadPlugin_Request>()
{
  return "behavior_velocity_planner::srv::LoadPlugin_Request";
}

template<>
inline const char * name<behavior_velocity_planner::srv::LoadPlugin_Request>()
{
  return "behavior_velocity_planner/srv/LoadPlugin_Request";
}

template<>
struct has_fixed_size<behavior_velocity_planner::srv::LoadPlugin_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<behavior_velocity_planner::srv::LoadPlugin_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<behavior_velocity_planner::srv::LoadPlugin_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace behavior_velocity_planner
{

namespace srv
{

inline void to_flow_style_yaml(
  const LoadPlugin_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LoadPlugin_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LoadPlugin_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace behavior_velocity_planner

namespace rosidl_generator_traits
{

[[deprecated("use behavior_velocity_planner::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const behavior_velocity_planner::srv::LoadPlugin_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  behavior_velocity_planner::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use behavior_velocity_planner::srv::to_yaml() instead")]]
inline std::string to_yaml(const behavior_velocity_planner::srv::LoadPlugin_Response & msg)
{
  return behavior_velocity_planner::srv::to_yaml(msg);
}

template<>
inline const char * data_type<behavior_velocity_planner::srv::LoadPlugin_Response>()
{
  return "behavior_velocity_planner::srv::LoadPlugin_Response";
}

template<>
inline const char * name<behavior_velocity_planner::srv::LoadPlugin_Response>()
{
  return "behavior_velocity_planner/srv/LoadPlugin_Response";
}

template<>
struct has_fixed_size<behavior_velocity_planner::srv::LoadPlugin_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<behavior_velocity_planner::srv::LoadPlugin_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<behavior_velocity_planner::srv::LoadPlugin_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<behavior_velocity_planner::srv::LoadPlugin>()
{
  return "behavior_velocity_planner::srv::LoadPlugin";
}

template<>
inline const char * name<behavior_velocity_planner::srv::LoadPlugin>()
{
  return "behavior_velocity_planner/srv/LoadPlugin";
}

template<>
struct has_fixed_size<behavior_velocity_planner::srv::LoadPlugin>
  : std::integral_constant<
    bool,
    has_fixed_size<behavior_velocity_planner::srv::LoadPlugin_Request>::value &&
    has_fixed_size<behavior_velocity_planner::srv::LoadPlugin_Response>::value
  >
{
};

template<>
struct has_bounded_size<behavior_velocity_planner::srv::LoadPlugin>
  : std::integral_constant<
    bool,
    has_bounded_size<behavior_velocity_planner::srv::LoadPlugin_Request>::value &&
    has_bounded_size<behavior_velocity_planner::srv::LoadPlugin_Response>::value
  >
{
};

template<>
struct is_service<behavior_velocity_planner::srv::LoadPlugin>
  : std::true_type
{
};

template<>
struct is_service_request<behavior_velocity_planner::srv::LoadPlugin_Request>
  : std::true_type
{
};

template<>
struct is_service_response<behavior_velocity_planner::srv::LoadPlugin_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // BEHAVIOR_VELOCITY_PLANNER__SRV__DETAIL__LOAD_PLUGIN__TRAITS_HPP_
