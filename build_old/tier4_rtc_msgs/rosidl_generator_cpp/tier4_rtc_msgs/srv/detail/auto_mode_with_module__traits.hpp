// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tier4_rtc_msgs:srv/AutoModeWithModule.idl
// generated code does not contain a copyright notice

#ifndef TIER4_RTC_MSGS__SRV__DETAIL__AUTO_MODE_WITH_MODULE__TRAITS_HPP_
#define TIER4_RTC_MSGS__SRV__DETAIL__AUTO_MODE_WITH_MODULE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tier4_rtc_msgs/srv/detail/auto_mode_with_module__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'module'
#include "tier4_rtc_msgs/msg/detail/module__traits.hpp"

namespace tier4_rtc_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const AutoModeWithModule_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: module
  {
    out << "module: ";
    to_flow_style_yaml(msg.module, out);
    out << ", ";
  }

  // member: enable
  {
    out << "enable: ";
    rosidl_generator_traits::value_to_yaml(msg.enable, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AutoModeWithModule_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: module
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "module:\n";
    to_block_style_yaml(msg.module, out, indentation + 2);
  }

  // member: enable
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enable: ";
    rosidl_generator_traits::value_to_yaml(msg.enable, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AutoModeWithModule_Request & msg, bool use_flow_style = false)
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

}  // namespace tier4_rtc_msgs

namespace rosidl_generator_traits
{

[[deprecated("use tier4_rtc_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tier4_rtc_msgs::srv::AutoModeWithModule_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  tier4_rtc_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tier4_rtc_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const tier4_rtc_msgs::srv::AutoModeWithModule_Request & msg)
{
  return tier4_rtc_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<tier4_rtc_msgs::srv::AutoModeWithModule_Request>()
{
  return "tier4_rtc_msgs::srv::AutoModeWithModule_Request";
}

template<>
inline const char * name<tier4_rtc_msgs::srv::AutoModeWithModule_Request>()
{
  return "tier4_rtc_msgs/srv/AutoModeWithModule_Request";
}

template<>
struct has_fixed_size<tier4_rtc_msgs::srv::AutoModeWithModule_Request>
  : std::integral_constant<bool, has_fixed_size<tier4_rtc_msgs::msg::Module>::value> {};

template<>
struct has_bounded_size<tier4_rtc_msgs::srv::AutoModeWithModule_Request>
  : std::integral_constant<bool, has_bounded_size<tier4_rtc_msgs::msg::Module>::value> {};

template<>
struct is_message<tier4_rtc_msgs::srv::AutoModeWithModule_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace tier4_rtc_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const AutoModeWithModule_Response & msg,
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
  const AutoModeWithModule_Response & msg,
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

inline std::string to_yaml(const AutoModeWithModule_Response & msg, bool use_flow_style = false)
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

}  // namespace tier4_rtc_msgs

namespace rosidl_generator_traits
{

[[deprecated("use tier4_rtc_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tier4_rtc_msgs::srv::AutoModeWithModule_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  tier4_rtc_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tier4_rtc_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const tier4_rtc_msgs::srv::AutoModeWithModule_Response & msg)
{
  return tier4_rtc_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<tier4_rtc_msgs::srv::AutoModeWithModule_Response>()
{
  return "tier4_rtc_msgs::srv::AutoModeWithModule_Response";
}

template<>
inline const char * name<tier4_rtc_msgs::srv::AutoModeWithModule_Response>()
{
  return "tier4_rtc_msgs/srv/AutoModeWithModule_Response";
}

template<>
struct has_fixed_size<tier4_rtc_msgs::srv::AutoModeWithModule_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tier4_rtc_msgs::srv::AutoModeWithModule_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tier4_rtc_msgs::srv::AutoModeWithModule_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tier4_rtc_msgs::srv::AutoModeWithModule>()
{
  return "tier4_rtc_msgs::srv::AutoModeWithModule";
}

template<>
inline const char * name<tier4_rtc_msgs::srv::AutoModeWithModule>()
{
  return "tier4_rtc_msgs/srv/AutoModeWithModule";
}

template<>
struct has_fixed_size<tier4_rtc_msgs::srv::AutoModeWithModule>
  : std::integral_constant<
    bool,
    has_fixed_size<tier4_rtc_msgs::srv::AutoModeWithModule_Request>::value &&
    has_fixed_size<tier4_rtc_msgs::srv::AutoModeWithModule_Response>::value
  >
{
};

template<>
struct has_bounded_size<tier4_rtc_msgs::srv::AutoModeWithModule>
  : std::integral_constant<
    bool,
    has_bounded_size<tier4_rtc_msgs::srv::AutoModeWithModule_Request>::value &&
    has_bounded_size<tier4_rtc_msgs::srv::AutoModeWithModule_Response>::value
  >
{
};

template<>
struct is_service<tier4_rtc_msgs::srv::AutoModeWithModule>
  : std::true_type
{
};

template<>
struct is_service_request<tier4_rtc_msgs::srv::AutoModeWithModule_Request>
  : std::true_type
{
};

template<>
struct is_service_response<tier4_rtc_msgs::srv::AutoModeWithModule_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TIER4_RTC_MSGS__SRV__DETAIL__AUTO_MODE_WITH_MODULE__TRAITS_HPP_
