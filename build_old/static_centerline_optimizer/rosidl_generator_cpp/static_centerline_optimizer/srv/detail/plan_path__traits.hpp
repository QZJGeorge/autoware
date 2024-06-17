// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from static_centerline_optimizer:srv/PlanPath.idl
// generated code does not contain a copyright notice

#ifndef STATIC_CENTERLINE_OPTIMIZER__SRV__DETAIL__PLAN_PATH__TRAITS_HPP_
#define STATIC_CENTERLINE_OPTIMIZER__SRV__DETAIL__PLAN_PATH__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "static_centerline_optimizer/srv/detail/plan_path__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace static_centerline_optimizer
{

namespace srv
{

inline void to_flow_style_yaml(
  const PlanPath_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: map_id
  {
    out << "map_id: ";
    rosidl_generator_traits::value_to_yaml(msg.map_id, out);
    out << ", ";
  }

  // member: route
  {
    if (msg.route.size() == 0) {
      out << "route: []";
    } else {
      out << "route: [";
      size_t pending_items = msg.route.size();
      for (auto item : msg.route) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PlanPath_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: map_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "map_id: ";
    rosidl_generator_traits::value_to_yaml(msg.map_id, out);
    out << "\n";
  }

  // member: route
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.route.size() == 0) {
      out << "route: []\n";
    } else {
      out << "route:\n";
      for (auto item : msg.route) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PlanPath_Request & msg, bool use_flow_style = false)
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
  const static_centerline_optimizer::srv::PlanPath_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  static_centerline_optimizer::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use static_centerline_optimizer::srv::to_yaml() instead")]]
inline std::string to_yaml(const static_centerline_optimizer::srv::PlanPath_Request & msg)
{
  return static_centerline_optimizer::srv::to_yaml(msg);
}

template<>
inline const char * data_type<static_centerline_optimizer::srv::PlanPath_Request>()
{
  return "static_centerline_optimizer::srv::PlanPath_Request";
}

template<>
inline const char * name<static_centerline_optimizer::srv::PlanPath_Request>()
{
  return "static_centerline_optimizer/srv/PlanPath_Request";
}

template<>
struct has_fixed_size<static_centerline_optimizer::srv::PlanPath_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<static_centerline_optimizer::srv::PlanPath_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<static_centerline_optimizer::srv::PlanPath_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'points_with_lane_ids'
#include "static_centerline_optimizer/msg/detail/points_with_lane_id__traits.hpp"

namespace static_centerline_optimizer
{

namespace srv
{

inline void to_flow_style_yaml(
  const PlanPath_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: points_with_lane_ids
  {
    if (msg.points_with_lane_ids.size() == 0) {
      out << "points_with_lane_ids: []";
    } else {
      out << "points_with_lane_ids: [";
      size_t pending_items = msg.points_with_lane_ids.size();
      for (auto item : msg.points_with_lane_ids) {
        to_flow_style_yaml(item, out);
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
    out << ", ";
  }

  // member: unconnected_lane_ids
  {
    if (msg.unconnected_lane_ids.size() == 0) {
      out << "unconnected_lane_ids: []";
    } else {
      out << "unconnected_lane_ids: [";
      size_t pending_items = msg.unconnected_lane_ids.size();
      for (auto item : msg.unconnected_lane_ids) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PlanPath_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: points_with_lane_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.points_with_lane_ids.size() == 0) {
      out << "points_with_lane_ids: []\n";
    } else {
      out << "points_with_lane_ids:\n";
      for (auto item : msg.points_with_lane_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
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

  // member: unconnected_lane_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.unconnected_lane_ids.size() == 0) {
      out << "unconnected_lane_ids: []\n";
    } else {
      out << "unconnected_lane_ids:\n";
      for (auto item : msg.unconnected_lane_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PlanPath_Response & msg, bool use_flow_style = false)
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
  const static_centerline_optimizer::srv::PlanPath_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  static_centerline_optimizer::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use static_centerline_optimizer::srv::to_yaml() instead")]]
inline std::string to_yaml(const static_centerline_optimizer::srv::PlanPath_Response & msg)
{
  return static_centerline_optimizer::srv::to_yaml(msg);
}

template<>
inline const char * data_type<static_centerline_optimizer::srv::PlanPath_Response>()
{
  return "static_centerline_optimizer::srv::PlanPath_Response";
}

template<>
inline const char * name<static_centerline_optimizer::srv::PlanPath_Response>()
{
  return "static_centerline_optimizer/srv/PlanPath_Response";
}

template<>
struct has_fixed_size<static_centerline_optimizer::srv::PlanPath_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<static_centerline_optimizer::srv::PlanPath_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<static_centerline_optimizer::srv::PlanPath_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<static_centerline_optimizer::srv::PlanPath>()
{
  return "static_centerline_optimizer::srv::PlanPath";
}

template<>
inline const char * name<static_centerline_optimizer::srv::PlanPath>()
{
  return "static_centerline_optimizer/srv/PlanPath";
}

template<>
struct has_fixed_size<static_centerline_optimizer::srv::PlanPath>
  : std::integral_constant<
    bool,
    has_fixed_size<static_centerline_optimizer::srv::PlanPath_Request>::value &&
    has_fixed_size<static_centerline_optimizer::srv::PlanPath_Response>::value
  >
{
};

template<>
struct has_bounded_size<static_centerline_optimizer::srv::PlanPath>
  : std::integral_constant<
    bool,
    has_bounded_size<static_centerline_optimizer::srv::PlanPath_Request>::value &&
    has_bounded_size<static_centerline_optimizer::srv::PlanPath_Response>::value
  >
{
};

template<>
struct is_service<static_centerline_optimizer::srv::PlanPath>
  : std::true_type
{
};

template<>
struct is_service_request<static_centerline_optimizer::srv::PlanPath_Request>
  : std::true_type
{
};

template<>
struct is_service_response<static_centerline_optimizer::srv::PlanPath_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // STATIC_CENTERLINE_OPTIMIZER__SRV__DETAIL__PLAN_PATH__TRAITS_HPP_
