// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tier4_control_msgs:srv/SetStop.idl
// generated code does not contain a copyright notice

#ifndef TIER4_CONTROL_MSGS__SRV__DETAIL__SET_STOP__TRAITS_HPP_
#define TIER4_CONTROL_MSGS__SRV__DETAIL__SET_STOP__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tier4_control_msgs/srv/detail/set_stop__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace tier4_control_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetStop_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: stop
  {
    out << "stop: ";
    rosidl_generator_traits::value_to_yaml(msg.stop, out);
    out << ", ";
  }

  // member: request_source
  {
    out << "request_source: ";
    rosidl_generator_traits::value_to_yaml(msg.request_source, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetStop_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: stop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stop: ";
    rosidl_generator_traits::value_to_yaml(msg.stop, out);
    out << "\n";
  }

  // member: request_source
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "request_source: ";
    rosidl_generator_traits::value_to_yaml(msg.request_source, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetStop_Request & msg, bool use_flow_style = false)
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
  const tier4_control_msgs::srv::SetStop_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  tier4_control_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tier4_control_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const tier4_control_msgs::srv::SetStop_Request & msg)
{
  return tier4_control_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<tier4_control_msgs::srv::SetStop_Request>()
{
  return "tier4_control_msgs::srv::SetStop_Request";
}

template<>
inline const char * name<tier4_control_msgs::srv::SetStop_Request>()
{
  return "tier4_control_msgs/srv/SetStop_Request";
}

template<>
struct has_fixed_size<tier4_control_msgs::srv::SetStop_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tier4_control_msgs::srv::SetStop_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tier4_control_msgs::srv::SetStop_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'status'
#include "autoware_common_msgs/msg/detail/response_status__traits.hpp"

namespace tier4_control_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetStop_Response & msg,
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
  const SetStop_Response & msg,
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

inline std::string to_yaml(const SetStop_Response & msg, bool use_flow_style = false)
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
  const tier4_control_msgs::srv::SetStop_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  tier4_control_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tier4_control_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const tier4_control_msgs::srv::SetStop_Response & msg)
{
  return tier4_control_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<tier4_control_msgs::srv::SetStop_Response>()
{
  return "tier4_control_msgs::srv::SetStop_Response";
}

template<>
inline const char * name<tier4_control_msgs::srv::SetStop_Response>()
{
  return "tier4_control_msgs/srv/SetStop_Response";
}

template<>
struct has_fixed_size<tier4_control_msgs::srv::SetStop_Response>
  : std::integral_constant<bool, has_fixed_size<autoware_common_msgs::msg::ResponseStatus>::value> {};

template<>
struct has_bounded_size<tier4_control_msgs::srv::SetStop_Response>
  : std::integral_constant<bool, has_bounded_size<autoware_common_msgs::msg::ResponseStatus>::value> {};

template<>
struct is_message<tier4_control_msgs::srv::SetStop_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tier4_control_msgs::srv::SetStop>()
{
  return "tier4_control_msgs::srv::SetStop";
}

template<>
inline const char * name<tier4_control_msgs::srv::SetStop>()
{
  return "tier4_control_msgs/srv/SetStop";
}

template<>
struct has_fixed_size<tier4_control_msgs::srv::SetStop>
  : std::integral_constant<
    bool,
    has_fixed_size<tier4_control_msgs::srv::SetStop_Request>::value &&
    has_fixed_size<tier4_control_msgs::srv::SetStop_Response>::value
  >
{
};

template<>
struct has_bounded_size<tier4_control_msgs::srv::SetStop>
  : std::integral_constant<
    bool,
    has_bounded_size<tier4_control_msgs::srv::SetStop_Request>::value &&
    has_bounded_size<tier4_control_msgs::srv::SetStop_Response>::value
  >
{
};

template<>
struct is_service<tier4_control_msgs::srv::SetStop>
  : std::true_type
{
};

template<>
struct is_service_request<tier4_control_msgs::srv::SetStop_Request>
  : std::true_type
{
};

template<>
struct is_service_response<tier4_control_msgs::srv::SetStop_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TIER4_CONTROL_MSGS__SRV__DETAIL__SET_STOP__TRAITS_HPP_
