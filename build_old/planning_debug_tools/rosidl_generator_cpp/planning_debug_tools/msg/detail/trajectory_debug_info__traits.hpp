// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from planning_debug_tools:msg/TrajectoryDebugInfo.idl
// generated code does not contain a copyright notice

#ifndef PLANNING_DEBUG_TOOLS__MSG__DETAIL__TRAJECTORY_DEBUG_INFO__TRAITS_HPP_
#define PLANNING_DEBUG_TOOLS__MSG__DETAIL__TRAJECTORY_DEBUG_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "planning_debug_tools/msg/detail/trajectory_debug_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace planning_debug_tools
{

namespace msg
{

inline void to_flow_style_yaml(
  const TrajectoryDebugInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
    out << ", ";
  }

  // member: size
  {
    out << "size: ";
    rosidl_generator_traits::value_to_yaml(msg.size, out);
    out << ", ";
  }

  // member: arclength
  {
    if (msg.arclength.size() == 0) {
      out << "arclength: []";
    } else {
      out << "arclength: [";
      size_t pending_items = msg.arclength.size();
      for (auto item : msg.arclength) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: curvature
  {
    if (msg.curvature.size() == 0) {
      out << "curvature: []";
    } else {
      out << "curvature: [";
      size_t pending_items = msg.curvature.size();
      for (auto item : msg.curvature) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: velocity
  {
    if (msg.velocity.size() == 0) {
      out << "velocity: []";
    } else {
      out << "velocity: [";
      size_t pending_items = msg.velocity.size();
      for (auto item : msg.velocity) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: acceleration
  {
    if (msg.acceleration.size() == 0) {
      out << "acceleration: []";
    } else {
      out << "acceleration: [";
      size_t pending_items = msg.acceleration.size();
      for (auto item : msg.acceleration) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: yaw
  {
    if (msg.yaw.size() == 0) {
      out << "yaw: []";
    } else {
      out << "yaw: [";
      size_t pending_items = msg.yaw.size();
      for (auto item : msg.yaw) {
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
  const TrajectoryDebugInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }

  // member: size
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "size: ";
    rosidl_generator_traits::value_to_yaml(msg.size, out);
    out << "\n";
  }

  // member: arclength
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.arclength.size() == 0) {
      out << "arclength: []\n";
    } else {
      out << "arclength:\n";
      for (auto item : msg.arclength) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: curvature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.curvature.size() == 0) {
      out << "curvature: []\n";
    } else {
      out << "curvature:\n";
      for (auto item : msg.curvature) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.velocity.size() == 0) {
      out << "velocity: []\n";
    } else {
      out << "velocity:\n";
      for (auto item : msg.velocity) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.acceleration.size() == 0) {
      out << "acceleration: []\n";
    } else {
      out << "acceleration:\n";
      for (auto item : msg.acceleration) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.yaw.size() == 0) {
      out << "yaw: []\n";
    } else {
      out << "yaw:\n";
      for (auto item : msg.yaw) {
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

inline std::string to_yaml(const TrajectoryDebugInfo & msg, bool use_flow_style = false)
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

}  // namespace planning_debug_tools

namespace rosidl_generator_traits
{

[[deprecated("use planning_debug_tools::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const planning_debug_tools::msg::TrajectoryDebugInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  planning_debug_tools::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use planning_debug_tools::msg::to_yaml() instead")]]
inline std::string to_yaml(const planning_debug_tools::msg::TrajectoryDebugInfo & msg)
{
  return planning_debug_tools::msg::to_yaml(msg);
}

template<>
inline const char * data_type<planning_debug_tools::msg::TrajectoryDebugInfo>()
{
  return "planning_debug_tools::msg::TrajectoryDebugInfo";
}

template<>
inline const char * name<planning_debug_tools::msg::TrajectoryDebugInfo>()
{
  return "planning_debug_tools/msg/TrajectoryDebugInfo";
}

template<>
struct has_fixed_size<planning_debug_tools::msg::TrajectoryDebugInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<planning_debug_tools::msg::TrajectoryDebugInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<planning_debug_tools::msg::TrajectoryDebugInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PLANNING_DEBUG_TOOLS__MSG__DETAIL__TRAJECTORY_DEBUG_INFO__TRAITS_HPP_
