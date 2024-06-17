// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tier4_control_msgs:srv/ExternalCommandSelect.idl
// generated code does not contain a copyright notice

#ifndef TIER4_CONTROL_MSGS__SRV__DETAIL__EXTERNAL_COMMAND_SELECT__TRAITS_HPP_
#define TIER4_CONTROL_MSGS__SRV__DETAIL__EXTERNAL_COMMAND_SELECT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tier4_control_msgs/srv/detail/external_command_select__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'mode'
#include "tier4_control_msgs/msg/detail/external_command_selector_mode__traits.hpp"

namespace tier4_control_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ExternalCommandSelect_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: mode
  {
    out << "mode: ";
    to_flow_style_yaml(msg.mode, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ExternalCommandSelect_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode:\n";
    to_block_style_yaml(msg.mode, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ExternalCommandSelect_Request & msg, bool use_flow_style = false)
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

}  // namespace tier4_control_msgs

namespace rosidl_generator_traits
{

[[deprecated("use tier4_control_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tier4_control_msgs::srv::ExternalCommandSelect_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  tier4_control_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tier4_control_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const tier4_control_msgs::srv::ExternalCommandSelect_Request & msg)
{
  return tier4_control_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<tier4_control_msgs::srv::ExternalCommandSelect_Request>()
{
  return "tier4_control_msgs::srv::ExternalCommandSelect_Request";
}

template<>
inline const char * name<tier4_control_msgs::srv::ExternalCommandSelect_Request>()
{
  return "tier4_control_msgs/srv/ExternalCommandSelect_Request";
}

template<>
struct has_fixed_size<tier4_control_msgs::srv::ExternalCommandSelect_Request>
  : std::integral_constant<bool, has_fixed_size<tier4_control_msgs::msg::ExternalCommandSelectorMode>::value> {};

template<>
struct has_bounded_size<tier4_control_msgs::srv::ExternalCommandSelect_Request>
  : std::integral_constant<bool, has_bounded_size<tier4_control_msgs::msg::ExternalCommandSelectorMode>::value> {};

template<>
struct is_message<tier4_control_msgs::srv::ExternalCommandSelect_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace tier4_control_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ExternalCommandSelect_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ExternalCommandSelect_Response & msg,
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

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ExternalCommandSelect_Response & msg, bool use_flow_style = false)
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

}  // namespace tier4_control_msgs

namespace rosidl_generator_traits
{

[[deprecated("use tier4_control_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tier4_control_msgs::srv::ExternalCommandSelect_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  tier4_control_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tier4_control_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const tier4_control_msgs::srv::ExternalCommandSelect_Response & msg)
{
  return tier4_control_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<tier4_control_msgs::srv::ExternalCommandSelect_Response>()
{
  return "tier4_control_msgs::srv::ExternalCommandSelect_Response";
}

template<>
inline const char * name<tier4_control_msgs::srv::ExternalCommandSelect_Response>()
{
  return "tier4_control_msgs/srv/ExternalCommandSelect_Response";
}

template<>
struct has_fixed_size<tier4_control_msgs::srv::ExternalCommandSelect_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tier4_control_msgs::srv::ExternalCommandSelect_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tier4_control_msgs::srv::ExternalCommandSelect_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tier4_control_msgs::srv::ExternalCommandSelect>()
{
  return "tier4_control_msgs::srv::ExternalCommandSelect";
}

template<>
inline const char * name<tier4_control_msgs::srv::ExternalCommandSelect>()
{
  return "tier4_control_msgs/srv/ExternalCommandSelect";
}

template<>
struct has_fixed_size<tier4_control_msgs::srv::ExternalCommandSelect>
  : std::integral_constant<
    bool,
    has_fixed_size<tier4_control_msgs::srv::ExternalCommandSelect_Request>::value &&
    has_fixed_size<tier4_control_msgs::srv::ExternalCommandSelect_Response>::value
  >
{
};

template<>
struct has_bounded_size<tier4_control_msgs::srv::ExternalCommandSelect>
  : std::integral_constant<
    bool,
    has_bounded_size<tier4_control_msgs::srv::ExternalCommandSelect_Request>::value &&
    has_bounded_size<tier4_control_msgs::srv::ExternalCommandSelect_Response>::value
  >
{
};

template<>
struct is_service<tier4_control_msgs::srv::ExternalCommandSelect>
  : std::true_type
{
};

template<>
struct is_service_request<tier4_control_msgs::srv::ExternalCommandSelect_Request>
  : std::true_type
{
};

template<>
struct is_service_response<tier4_control_msgs::srv::ExternalCommandSelect_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TIER4_CONTROL_MSGS__SRV__DETAIL__EXTERNAL_COMMAND_SELECT__TRAITS_HPP_
