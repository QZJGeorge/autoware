// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from morai_msgs:srv/MoraiSyncModeSetGearSrv.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__SRV__DETAIL__MORAI_SYNC_MODE_SET_GEAR_SRV__TRAITS_HPP_
#define MORAI_MSGS__SRV__DETAIL__MORAI_SYNC_MODE_SET_GEAR_SRV__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "morai_msgs/srv/detail/morai_sync_mode_set_gear_srv__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'request'
#include "morai_msgs/msg/detail/sync_mode_set_gear__traits.hpp"

namespace morai_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const MoraiSyncModeSetGearSrv_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: request
  {
    out << "request: ";
    to_flow_style_yaml(msg.request, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoraiSyncModeSetGearSrv_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "request:\n";
    to_block_style_yaml(msg.request, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoraiSyncModeSetGearSrv_Request & msg, bool use_flow_style = false)
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

}  // namespace morai_msgs

namespace rosidl_generator_traits
{

[[deprecated("use morai_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const morai_msgs::srv::MoraiSyncModeSetGearSrv_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  morai_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use morai_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const morai_msgs::srv::MoraiSyncModeSetGearSrv_Request & msg)
{
  return morai_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<morai_msgs::srv::MoraiSyncModeSetGearSrv_Request>()
{
  return "morai_msgs::srv::MoraiSyncModeSetGearSrv_Request";
}

template<>
inline const char * name<morai_msgs::srv::MoraiSyncModeSetGearSrv_Request>()
{
  return "morai_msgs/srv/MoraiSyncModeSetGearSrv_Request";
}

template<>
struct has_fixed_size<morai_msgs::srv::MoraiSyncModeSetGearSrv_Request>
  : std::integral_constant<bool, has_fixed_size<morai_msgs::msg::SyncModeSetGear>::value> {};

template<>
struct has_bounded_size<morai_msgs::srv::MoraiSyncModeSetGearSrv_Request>
  : std::integral_constant<bool, has_bounded_size<morai_msgs::msg::SyncModeSetGear>::value> {};

template<>
struct is_message<morai_msgs::srv::MoraiSyncModeSetGearSrv_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'response'
#include "morai_msgs/msg/detail/sync_mode_result_response__traits.hpp"

namespace morai_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const MoraiSyncModeSetGearSrv_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: response
  {
    out << "response: ";
    to_flow_style_yaml(msg.response, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoraiSyncModeSetGearSrv_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "response:\n";
    to_block_style_yaml(msg.response, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoraiSyncModeSetGearSrv_Response & msg, bool use_flow_style = false)
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

}  // namespace morai_msgs

namespace rosidl_generator_traits
{

[[deprecated("use morai_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const morai_msgs::srv::MoraiSyncModeSetGearSrv_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  morai_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use morai_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const morai_msgs::srv::MoraiSyncModeSetGearSrv_Response & msg)
{
  return morai_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<morai_msgs::srv::MoraiSyncModeSetGearSrv_Response>()
{
  return "morai_msgs::srv::MoraiSyncModeSetGearSrv_Response";
}

template<>
inline const char * name<morai_msgs::srv::MoraiSyncModeSetGearSrv_Response>()
{
  return "morai_msgs/srv/MoraiSyncModeSetGearSrv_Response";
}

template<>
struct has_fixed_size<morai_msgs::srv::MoraiSyncModeSetGearSrv_Response>
  : std::integral_constant<bool, has_fixed_size<morai_msgs::msg::SyncModeResultResponse>::value> {};

template<>
struct has_bounded_size<morai_msgs::srv::MoraiSyncModeSetGearSrv_Response>
  : std::integral_constant<bool, has_bounded_size<morai_msgs::msg::SyncModeResultResponse>::value> {};

template<>
struct is_message<morai_msgs::srv::MoraiSyncModeSetGearSrv_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<morai_msgs::srv::MoraiSyncModeSetGearSrv>()
{
  return "morai_msgs::srv::MoraiSyncModeSetGearSrv";
}

template<>
inline const char * name<morai_msgs::srv::MoraiSyncModeSetGearSrv>()
{
  return "morai_msgs/srv/MoraiSyncModeSetGearSrv";
}

template<>
struct has_fixed_size<morai_msgs::srv::MoraiSyncModeSetGearSrv>
  : std::integral_constant<
    bool,
    has_fixed_size<morai_msgs::srv::MoraiSyncModeSetGearSrv_Request>::value &&
    has_fixed_size<morai_msgs::srv::MoraiSyncModeSetGearSrv_Response>::value
  >
{
};

template<>
struct has_bounded_size<morai_msgs::srv::MoraiSyncModeSetGearSrv>
  : std::integral_constant<
    bool,
    has_bounded_size<morai_msgs::srv::MoraiSyncModeSetGearSrv_Request>::value &&
    has_bounded_size<morai_msgs::srv::MoraiSyncModeSetGearSrv_Response>::value
  >
{
};

template<>
struct is_service<morai_msgs::srv::MoraiSyncModeSetGearSrv>
  : std::true_type
{
};

template<>
struct is_service_request<morai_msgs::srv::MoraiSyncModeSetGearSrv_Request>
  : std::true_type
{
};

template<>
struct is_service_response<morai_msgs::srv::MoraiSyncModeSetGearSrv_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MORAI_MSGS__SRV__DETAIL__MORAI_SYNC_MODE_SET_GEAR_SRV__TRAITS_HPP_
