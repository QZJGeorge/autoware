// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tier4_system_msgs:srv/ChangeAutowareControl.idl
// generated code does not contain a copyright notice

#ifndef TIER4_SYSTEM_MSGS__SRV__DETAIL__CHANGE_AUTOWARE_CONTROL__TRAITS_HPP_
#define TIER4_SYSTEM_MSGS__SRV__DETAIL__CHANGE_AUTOWARE_CONTROL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tier4_system_msgs/srv/detail/change_autoware_control__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace tier4_system_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ChangeAutowareControl_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: autoware_control
  {
    out << "autoware_control: ";
    rosidl_generator_traits::value_to_yaml(msg.autoware_control, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ChangeAutowareControl_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: autoware_control
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "autoware_control: ";
    rosidl_generator_traits::value_to_yaml(msg.autoware_control, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ChangeAutowareControl_Request & msg, bool use_flow_style = false)
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

}  // namespace tier4_system_msgs

namespace rosidl_generator_traits
{

[[deprecated("use tier4_system_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tier4_system_msgs::srv::ChangeAutowareControl_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  tier4_system_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tier4_system_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const tier4_system_msgs::srv::ChangeAutowareControl_Request & msg)
{
  return tier4_system_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<tier4_system_msgs::srv::ChangeAutowareControl_Request>()
{
  return "tier4_system_msgs::srv::ChangeAutowareControl_Request";
}

template<>
inline const char * name<tier4_system_msgs::srv::ChangeAutowareControl_Request>()
{
  return "tier4_system_msgs/srv/ChangeAutowareControl_Request";
}

template<>
struct has_fixed_size<tier4_system_msgs::srv::ChangeAutowareControl_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tier4_system_msgs::srv::ChangeAutowareControl_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tier4_system_msgs::srv::ChangeAutowareControl_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'status'
#include "autoware_common_msgs/msg/detail/response_status__traits.hpp"

namespace tier4_system_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ChangeAutowareControl_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    to_flow_style_yaml(msg.status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ChangeAutowareControl_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status:\n";
    to_block_style_yaml(msg.status, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ChangeAutowareControl_Response & msg, bool use_flow_style = false)
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

}  // namespace tier4_system_msgs

namespace rosidl_generator_traits
{

[[deprecated("use tier4_system_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tier4_system_msgs::srv::ChangeAutowareControl_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  tier4_system_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tier4_system_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const tier4_system_msgs::srv::ChangeAutowareControl_Response & msg)
{
  return tier4_system_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<tier4_system_msgs::srv::ChangeAutowareControl_Response>()
{
  return "tier4_system_msgs::srv::ChangeAutowareControl_Response";
}

template<>
inline const char * name<tier4_system_msgs::srv::ChangeAutowareControl_Response>()
{
  return "tier4_system_msgs/srv/ChangeAutowareControl_Response";
}

template<>
struct has_fixed_size<tier4_system_msgs::srv::ChangeAutowareControl_Response>
  : std::integral_constant<bool, has_fixed_size<autoware_common_msgs::msg::ResponseStatus>::value> {};

template<>
struct has_bounded_size<tier4_system_msgs::srv::ChangeAutowareControl_Response>
  : std::integral_constant<bool, has_bounded_size<autoware_common_msgs::msg::ResponseStatus>::value> {};

template<>
struct is_message<tier4_system_msgs::srv::ChangeAutowareControl_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tier4_system_msgs::srv::ChangeAutowareControl>()
{
  return "tier4_system_msgs::srv::ChangeAutowareControl";
}

template<>
inline const char * name<tier4_system_msgs::srv::ChangeAutowareControl>()
{
  return "tier4_system_msgs/srv/ChangeAutowareControl";
}

template<>
struct has_fixed_size<tier4_system_msgs::srv::ChangeAutowareControl>
  : std::integral_constant<
    bool,
    has_fixed_size<tier4_system_msgs::srv::ChangeAutowareControl_Request>::value &&
    has_fixed_size<tier4_system_msgs::srv::ChangeAutowareControl_Response>::value
  >
{
};

template<>
struct has_bounded_size<tier4_system_msgs::srv::ChangeAutowareControl>
  : std::integral_constant<
    bool,
    has_bounded_size<tier4_system_msgs::srv::ChangeAutowareControl_Request>::value &&
    has_bounded_size<tier4_system_msgs::srv::ChangeAutowareControl_Response>::value
  >
{
};

template<>
struct is_service<tier4_system_msgs::srv::ChangeAutowareControl>
  : std::true_type
{
};

template<>
struct is_service_request<tier4_system_msgs::srv::ChangeAutowareControl_Request>
  : std::true_type
{
};

template<>
struct is_service_response<tier4_system_msgs::srv::ChangeAutowareControl_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TIER4_SYSTEM_MSGS__SRV__DETAIL__CHANGE_AUTOWARE_CONTROL__TRAITS_HPP_
