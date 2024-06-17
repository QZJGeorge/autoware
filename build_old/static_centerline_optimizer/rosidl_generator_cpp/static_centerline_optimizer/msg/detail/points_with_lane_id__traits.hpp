// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from static_centerline_optimizer:msg/PointsWithLaneId.idl
// generated code does not contain a copyright notice

#ifndef STATIC_CENTERLINE_OPTIMIZER__MSG__DETAIL__POINTS_WITH_LANE_ID__TRAITS_HPP_
#define STATIC_CENTERLINE_OPTIMIZER__MSG__DETAIL__POINTS_WITH_LANE_ID__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "static_centerline_optimizer/msg/detail/points_with_lane_id__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'points'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace static_centerline_optimizer
{

namespace msg
{

inline void to_flow_style_yaml(
  const PointsWithLaneId & msg,
  std::ostream & out)
{
  out << "{";
  // member: lane_id
  {
    out << "lane_id: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_id, out);
    out << ", ";
  }

  // member: points
  {
    if (msg.points.size() == 0) {
      out << "points: []";
    } else {
      out << "points: [";
      size_t pending_items = msg.points.size();
      for (auto item : msg.points) {
        to_flow_style_yaml(item, out);
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
  const PointsWithLaneId & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: lane_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_id: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_id, out);
    out << "\n";
  }

  // member: points
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.points.size() == 0) {
      out << "points: []\n";
    } else {
      out << "points:\n";
      for (auto item : msg.points) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PointsWithLaneId & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace static_centerline_optimizer

namespace rosidl_generator_traits
{

[[deprecated("use static_centerline_optimizer::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const static_centerline_optimizer::msg::PointsWithLaneId & msg,
  std::ostream & out, size_t indentation = 0)
{
  static_centerline_optimizer::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use static_centerline_optimizer::msg::to_yaml() instead")]]
inline std::string to_yaml(const static_centerline_optimizer::msg::PointsWithLaneId & msg)
{
  return static_centerline_optimizer::msg::to_yaml(msg);
}

template<>
inline const char * data_type<static_centerline_optimizer::msg::PointsWithLaneId>()
{
  return "static_centerline_optimizer::msg::PointsWithLaneId";
}

template<>
inline const char * name<static_centerline_optimizer::msg::PointsWithLaneId>()
{
  return "static_centerline_optimizer/msg/PointsWithLaneId";
}

template<>
struct has_fixed_size<static_centerline_optimizer::msg::PointsWithLaneId>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<static_centerline_optimizer::msg::PointsWithLaneId>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<static_centerline_optimizer::msg::PointsWithLaneId>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // STATIC_CENTERLINE_OPTIMIZER__MSG__DETAIL__POINTS_WITH_LANE_ID__TRAITS_HPP_
