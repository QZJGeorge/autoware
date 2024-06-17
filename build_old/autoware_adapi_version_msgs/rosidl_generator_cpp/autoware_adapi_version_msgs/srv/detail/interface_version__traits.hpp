// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_adapi_version_msgs:srv/InterfaceVersion.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_ADAPI_VERSION_MSGS__SRV__DETAIL__INTERFACE_VERSION__TRAITS_HPP_
#define AUTOWARE_ADAPI_VERSION_MSGS__SRV__DETAIL__INTERFACE_VERSION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "autoware_adapi_version_msgs/srv/detail/interface_version__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace autoware_adapi_version_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const InterfaceVersion_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const InterfaceVersion_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const InterfaceVersion_Request & msg, bool use_flow_style = false)
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

}  // namespace autoware_adapi_version_msgs

namespace rosidl_generator_traits
{

[[deprecated("use autoware_adapi_version_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const autoware_adapi_version_msgs::srv::InterfaceVersion_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  autoware_adapi_version_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use autoware_adapi_version_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const autoware_adapi_version_msgs::srv::InterfaceVersion_Request & msg)
{
  return autoware_adapi_version_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<autoware_adapi_version_msgs::srv::InterfaceVersion_Request>()
{
  return "autoware_adapi_version_msgs::srv::InterfaceVersion_Request";
}

template<>
inline const char * name<autoware_adapi_version_msgs::srv::InterfaceVersion_Request>()
{
  return "autoware_adapi_version_msgs/srv/InterfaceVersion_Request";
}

template<>
struct has_fixed_size<autoware_adapi_version_msgs::srv::InterfaceVersion_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<autoware_adapi_version_msgs::srv::InterfaceVersion_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<autoware_adapi_version_msgs::srv::InterfaceVersion_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace autoware_adapi_version_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const InterfaceVersion_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: major
  {
    out << "major: ";
    rosidl_generator_traits::value_to_yaml(msg.major, out);
    out << ", ";
  }

  // member: minor
  {
    out << "minor: ";
    rosidl_generator_traits::value_to_yaml(msg.minor, out);
    out << ", ";
  }

  // member: patch
  {
    out << "patch: ";
    rosidl_generator_traits::value_to_yaml(msg.patch, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const InterfaceVersion_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: major
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "major: ";
    rosidl_generator_traits::value_to_yaml(msg.major, out);
    out << "\n";
  }

  // member: minor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "minor: ";
    rosidl_generator_traits::value_to_yaml(msg.minor, out);
    out << "\n";
  }

  // member: patch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "patch: ";
    rosidl_generator_traits::value_to_yaml(msg.patch, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const InterfaceVersion_Response & msg, bool use_flow_style = false)
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

}  // namespace autoware_adapi_version_msgs

namespace rosidl_generator_traits
{

[[deprecated("use autoware_adapi_version_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const autoware_adapi_version_msgs::srv::InterfaceVersion_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  autoware_adapi_version_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use autoware_adapi_version_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const autoware_adapi_version_msgs::srv::InterfaceVersion_Response & msg)
{
  return autoware_adapi_version_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<autoware_adapi_version_msgs::srv::InterfaceVersion_Response>()
{
  return "autoware_adapi_version_msgs::srv::InterfaceVersion_Response";
}

template<>
inline const char * name<autoware_adapi_version_msgs::srv::InterfaceVersion_Response>()
{
  return "autoware_adapi_version_msgs/srv/InterfaceVersion_Response";
}

template<>
struct has_fixed_size<autoware_adapi_version_msgs::srv::InterfaceVersion_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<autoware_adapi_version_msgs::srv::InterfaceVersion_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<autoware_adapi_version_msgs::srv::InterfaceVersion_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<autoware_adapi_version_msgs::srv::InterfaceVersion>()
{
  return "autoware_adapi_version_msgs::srv::InterfaceVersion";
}

template<>
inline const char * name<autoware_adapi_version_msgs::srv::InterfaceVersion>()
{
  return "autoware_adapi_version_msgs/srv/InterfaceVersion";
}

template<>
struct has_fixed_size<autoware_adapi_version_msgs::srv::InterfaceVersion>
  : std::integral_constant<
    bool,
    has_fixed_size<autoware_adapi_version_msgs::srv::InterfaceVersion_Request>::value &&
    has_fixed_size<autoware_adapi_version_msgs::srv::InterfaceVersion_Response>::value
  >
{
};

template<>
struct has_bounded_size<autoware_adapi_version_msgs::srv::InterfaceVersion>
  : std::integral_constant<
    bool,
    has_bounded_size<autoware_adapi_version_msgs::srv::InterfaceVersion_Request>::value &&
    has_bounded_size<autoware_adapi_version_msgs::srv::InterfaceVersion_Response>::value
  >
{
};

template<>
struct is_service<autoware_adapi_version_msgs::srv::InterfaceVersion>
  : std::true_type
{
};

template<>
struct is_service_request<autoware_adapi_version_msgs::srv::InterfaceVersion_Request>
  : std::true_type
{
};

template<>
struct is_service_response<autoware_adapi_version_msgs::srv::InterfaceVersion_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_ADAPI_VERSION_MSGS__SRV__DETAIL__INTERFACE_VERSION__TRAITS_HPP_
