// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from static_centerline_optimizer:srv/LoadMap.idl
// generated code does not contain a copyright notice

#ifndef STATIC_CENTERLINE_OPTIMIZER__SRV__DETAIL__LOAD_MAP__TRAITS_HPP_
#define STATIC_CENTERLINE_OPTIMIZER__SRV__DETAIL__LOAD_MAP__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "static_centerline_optimizer/srv/detail/load_map__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace static_centerline_optimizer
{

namespace srv
{

inline void to_flow_style_yaml(
  const LoadMap_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: map
  {
    out << "map: ";
    rosidl_generator_traits::value_to_yaml(msg.map, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LoadMap_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: map
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "map: ";
    rosidl_generator_traits::value_to_yaml(msg.map, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LoadMap_Request & msg, bool use_flow_style = false)
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

}  // namespace static_centerline_optimizer

namespace rosidl_generator_traits
{

[[deprecated("use static_centerline_optimizer::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const static_centerline_optimizer::srv::LoadMap_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  static_centerline_optimizer::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use static_centerline_optimizer::srv::to_yaml() instead")]]
inline std::string to_yaml(const static_centerline_optimizer::srv::LoadMap_Request & msg)
{
  return static_centerline_optimizer::srv::to_yaml(msg);
}

template<>
inline const char * data_type<static_centerline_optimizer::srv::LoadMap_Request>()
{
  return "static_centerline_optimizer::srv::LoadMap_Request";
}

template<>
inline const char * name<static_centerline_optimizer::srv::LoadMap_Request>()
{
  return "static_centerline_optimizer/srv/LoadMap_Request";
}

template<>
struct has_fixed_size<static_centerline_optimizer::srv::LoadMap_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<static_centerline_optimizer::srv::LoadMap_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<static_centerline_optimizer::srv::LoadMap_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace static_centerline_optimizer
{

namespace srv
{

inline void to_flow_style_yaml(
  const LoadMap_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LoadMap_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
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

inline std::string to_yaml(const LoadMap_Response & msg, bool use_flow_style = false)
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

}  // namespace static_centerline_optimizer

namespace rosidl_generator_traits
{

[[deprecated("use static_centerline_optimizer::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const static_centerline_optimizer::srv::LoadMap_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  static_centerline_optimizer::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use static_centerline_optimizer::srv::to_yaml() instead")]]
inline std::string to_yaml(const static_centerline_optimizer::srv::LoadMap_Response & msg)
{
  return static_centerline_optimizer::srv::to_yaml(msg);
}

template<>
inline const char * data_type<static_centerline_optimizer::srv::LoadMap_Response>()
{
  return "static_centerline_optimizer::srv::LoadMap_Response";
}

template<>
inline const char * name<static_centerline_optimizer::srv::LoadMap_Response>()
{
  return "static_centerline_optimizer/srv/LoadMap_Response";
}

template<>
struct has_fixed_size<static_centerline_optimizer::srv::LoadMap_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<static_centerline_optimizer::srv::LoadMap_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<static_centerline_optimizer::srv::LoadMap_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<static_centerline_optimizer::srv::LoadMap>()
{
  return "static_centerline_optimizer::srv::LoadMap";
}

template<>
inline const char * name<static_centerline_optimizer::srv::LoadMap>()
{
  return "static_centerline_optimizer/srv/LoadMap";
}

template<>
struct has_fixed_size<static_centerline_optimizer::srv::LoadMap>
  : std::integral_constant<
    bool,
    has_fixed_size<static_centerline_optimizer::srv::LoadMap_Request>::value &&
    has_fixed_size<static_centerline_optimizer::srv::LoadMap_Response>::value
  >
{
};

template<>
struct has_bounded_size<static_centerline_optimizer::srv::LoadMap>
  : std::integral_constant<
    bool,
    has_bounded_size<static_centerline_optimizer::srv::LoadMap_Request>::value &&
    has_bounded_size<static_centerline_optimizer::srv::LoadMap_Response>::value
  >
{
};

template<>
struct is_service<static_centerline_optimizer::srv::LoadMap>
  : std::true_type
{
};

template<>
struct is_service_request<static_centerline_optimizer::srv::LoadMap_Request>
  : std::true_type
{
};

template<>
struct is_service_response<static_centerline_optimizer::srv::LoadMap_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // STATIC_CENTERLINE_OPTIMIZER__SRV__DETAIL__LOAD_MAP__TRAITS_HPP_
