// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_external_api_msgs:srv/GetVersion.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_EXTERNAL_API_MSGS__SRV__DETAIL__GET_VERSION__TRAITS_HPP_
#define AUTOWARE_EXTERNAL_API_MSGS__SRV__DETAIL__GET_VERSION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "autoware_external_api_msgs/srv/detail/get_version__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace autoware_external_api_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetVersion_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetVersion_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetVersion_Request & msg, bool use_flow_style = false)
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

}  // namespace autoware_external_api_msgs

namespace rosidl_generator_traits
{

[[deprecated("use autoware_external_api_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const autoware_external_api_msgs::srv::GetVersion_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  autoware_external_api_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use autoware_external_api_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const autoware_external_api_msgs::srv::GetVersion_Request & msg)
{
  return autoware_external_api_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<autoware_external_api_msgs::srv::GetVersion_Request>()
{
  return "autoware_external_api_msgs::srv::GetVersion_Request";
}

template<>
inline const char * name<autoware_external_api_msgs::srv::GetVersion_Request>()
{
  return "autoware_external_api_msgs/srv/GetVersion_Request";
}

template<>
struct has_fixed_size<autoware_external_api_msgs::srv::GetVersion_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<autoware_external_api_msgs::srv::GetVersion_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<autoware_external_api_msgs::srv::GetVersion_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'status'
#include "tier4_external_api_msgs/msg/detail/response_status__traits.hpp"

namespace autoware_external_api_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetVersion_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    to_flow_style_yaml(msg.status, out);
    out << ", ";
  }

  // member: version
  {
    out << "version: ";
    rosidl_generator_traits::value_to_yaml(msg.version, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetVersion_Response & msg,
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

  // member: version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "version: ";
    rosidl_generator_traits::value_to_yaml(msg.version, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetVersion_Response & msg, bool use_flow_style = false)
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

}  // namespace autoware_external_api_msgs

namespace rosidl_generator_traits
{

[[deprecated("use autoware_external_api_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const autoware_external_api_msgs::srv::GetVersion_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  autoware_external_api_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use autoware_external_api_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const autoware_external_api_msgs::srv::GetVersion_Response & msg)
{
  return autoware_external_api_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<autoware_external_api_msgs::srv::GetVersion_Response>()
{
  return "autoware_external_api_msgs::srv::GetVersion_Response";
}

template<>
inline const char * name<autoware_external_api_msgs::srv::GetVersion_Response>()
{
  return "autoware_external_api_msgs/srv/GetVersion_Response";
}

template<>
struct has_fixed_size<autoware_external_api_msgs::srv::GetVersion_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<autoware_external_api_msgs::srv::GetVersion_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<autoware_external_api_msgs::srv::GetVersion_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<autoware_external_api_msgs::srv::GetVersion>()
{
  return "autoware_external_api_msgs::srv::GetVersion";
}

template<>
inline const char * name<autoware_external_api_msgs::srv::GetVersion>()
{
  return "autoware_external_api_msgs/srv/GetVersion";
}

template<>
struct has_fixed_size<autoware_external_api_msgs::srv::GetVersion>
  : std::integral_constant<
    bool,
    has_fixed_size<autoware_external_api_msgs::srv::GetVersion_Request>::value &&
    has_fixed_size<autoware_external_api_msgs::srv::GetVersion_Response>::value
  >
{
};

template<>
struct has_bounded_size<autoware_external_api_msgs::srv::GetVersion>
  : std::integral_constant<
    bool,
    has_bounded_size<autoware_external_api_msgs::srv::GetVersion_Request>::value &&
    has_bounded_size<autoware_external_api_msgs::srv::GetVersion_Response>::value
  >
{
};

template<>
struct is_service<autoware_external_api_msgs::srv::GetVersion>
  : std::true_type
{
};

template<>
struct is_service_request<autoware_external_api_msgs::srv::GetVersion_Request>
  : std::true_type
{
};

template<>
struct is_service_response<autoware_external_api_msgs::srv::GetVersion_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_EXTERNAL_API_MSGS__SRV__DETAIL__GET_VERSION__TRAITS_HPP_
