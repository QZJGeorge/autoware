// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from static_centerline_optimizer:srv/PlanRoute.idl
// generated code does not contain a copyright notice

#ifndef STATIC_CENTERLINE_OPTIMIZER__SRV__DETAIL__PLAN_ROUTE__TRAITS_HPP_
#define STATIC_CENTERLINE_OPTIMIZER__SRV__DETAIL__PLAN_ROUTE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "static_centerline_optimizer/srv/detail/plan_route__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace static_centerline_optimizer
{

namespace srv
{

inline void to_flow_style_yaml(
  const PlanRoute_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: start_lane_id
  {
    out << "start_lane_id: ";
    rosidl_generator_traits::value_to_yaml(msg.start_lane_id, out);
    out << ", ";
  }

  // member: end_lane_id
  {
    out << "end_lane_id: ";
    rosidl_generator_traits::value_to_yaml(msg.end_lane_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PlanRoute_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: start_lane_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start_lane_id: ";
    rosidl_generator_traits::value_to_yaml(msg.start_lane_id, out);
    out << "\n";
  }

  // member: end_lane_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "end_lane_id: ";
    rosidl_generator_traits::value_to_yaml(msg.end_lane_id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PlanRoute_Request & msg, bool use_flow_style = false)
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
  const static_centerline_optimizer::srv::PlanRoute_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  static_centerline_optimizer::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use static_centerline_optimizer::srv::to_yaml() instead")]]
inline std::string to_yaml(const static_centerline_optimizer::srv::PlanRoute_Request & msg)
{
  return static_centerline_optimizer::srv::to_yaml(msg);
}

template<>
inline const char * data_type<static_centerline_optimizer::srv::PlanRoute_Request>()
{
  return "static_centerline_optimizer::srv::PlanRoute_Request";
}

template<>
inline const char * name<static_centerline_optimizer::srv::PlanRoute_Request>()
{
  return "static_centerline_optimizer/srv/PlanRoute_Request";
}

template<>
struct has_fixed_size<static_centerline_optimizer::srv::PlanRoute_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<static_centerline_optimizer::srv::PlanRoute_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<static_centerline_optimizer::srv::PlanRoute_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace static_centerline_optimizer
{

namespace srv
{

inline void to_flow_style_yaml(
  const PlanRoute_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: lane_ids
  {
    if (msg.lane_ids.size() == 0) {
      out << "lane_ids: []";
    } else {
      out << "lane_ids: [";
      size_t pending_items = msg.lane_ids.size();
      for (auto item : msg.lane_ids) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
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
  const PlanRoute_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: lane_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.lane_ids.size() == 0) {
      out << "lane_ids: []\n";
    } else {
      out << "lane_ids:\n";
      for (auto item : msg.lane_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
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

inline std::string to_yaml(const PlanRoute_Response & msg, bool use_flow_style = false)
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
  const static_centerline_optimizer::srv::PlanRoute_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  static_centerline_optimizer::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use static_centerline_optimizer::srv::to_yaml() instead")]]
inline std::string to_yaml(const static_centerline_optimizer::srv::PlanRoute_Response & msg)
{
  return static_centerline_optimizer::srv::to_yaml(msg);
}

template<>
inline const char * data_type<static_centerline_optimizer::srv::PlanRoute_Response>()
{
  return "static_centerline_optimizer::srv::PlanRoute_Response";
}

template<>
inline const char * name<static_centerline_optimizer::srv::PlanRoute_Response>()
{
  return "static_centerline_optimizer/srv/PlanRoute_Response";
}

template<>
struct has_fixed_size<static_centerline_optimizer::srv::PlanRoute_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<static_centerline_optimizer::srv::PlanRoute_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<static_centerline_optimizer::srv::PlanRoute_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<static_centerline_optimizer::srv::PlanRoute>()
{
  return "static_centerline_optimizer::srv::PlanRoute";
}

template<>
inline const char * name<static_centerline_optimizer::srv::PlanRoute>()
{
  return "static_centerline_optimizer/srv/PlanRoute";
}

template<>
struct has_fixed_size<static_centerline_optimizer::srv::PlanRoute>
  : std::integral_constant<
    bool,
    has_fixed_size<static_centerline_optimizer::srv::PlanRoute_Request>::value &&
    has_fixed_size<static_centerline_optimizer::srv::PlanRoute_Response>::value
  >
{
};

template<>
struct has_bounded_size<static_centerline_optimizer::srv::PlanRoute>
  : std::integral_constant<
    bool,
    has_bounded_size<static_centerline_optimizer::srv::PlanRoute_Request>::value &&
    has_bounded_size<static_centerline_optimizer::srv::PlanRoute_Response>::value
  >
{
};

template<>
struct is_service<static_centerline_optimizer::srv::PlanRoute>
  : std::true_type
{
};

template<>
struct is_service_request<static_centerline_optimizer::srv::PlanRoute_Request>
  : std::true_type
{
};

template<>
struct is_service_response<static_centerline_optimizer::srv::PlanRoute_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // STATIC_CENTERLINE_OPTIMIZER__SRV__DETAIL__PLAN_ROUTE__TRAITS_HPP_
