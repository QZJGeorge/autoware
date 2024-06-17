// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mcity_msgs:msg/PlannedPath.idl
// generated code does not contain a copyright notice

#ifndef MCITY_MSGS__MSG__DETAIL__PLANNED_PATH__TRAITS_HPP_
#define MCITY_MSGS__MSG__DETAIL__PLANNED_PATH__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mcity_msgs/msg/detail/planned_path__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace mcity_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PlannedPath & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: time_resolution
  {
    out << "time_resolution: ";
    rosidl_generator_traits::value_to_yaml(msg.time_resolution, out);
    out << ", ";
  }

  // member: go
  {
    out << "go: ";
    rosidl_generator_traits::value_to_yaml(msg.go, out);
    out << ", ";
  }

  // member: estop
  {
    out << "estop: ";
    rosidl_generator_traits::value_to_yaml(msg.estop, out);
    out << ", ";
  }

  // member: x_vector
  {
    if (msg.x_vector.size() == 0) {
      out << "x_vector: []";
    } else {
      out << "x_vector: [";
      size_t pending_items = msg.x_vector.size();
      for (auto item : msg.x_vector) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: y_vector
  {
    if (msg.y_vector.size() == 0) {
      out << "y_vector: []";
    } else {
      out << "y_vector: [";
      size_t pending_items = msg.y_vector.size();
      for (auto item : msg.y_vector) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: vd_vector
  {
    if (msg.vd_vector.size() == 0) {
      out << "vd_vector: []";
    } else {
      out << "vd_vector: [";
      size_t pending_items = msg.vd_vector.size();
      for (auto item : msg.vd_vector) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: ori_vector
  {
    if (msg.ori_vector.size() == 0) {
      out << "ori_vector: []";
    } else {
      out << "ori_vector: [";
      size_t pending_items = msg.ori_vector.size();
      for (auto item : msg.ori_vector) {
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
  const PlannedPath & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << "\n";
  }

  // member: time_resolution
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_resolution: ";
    rosidl_generator_traits::value_to_yaml(msg.time_resolution, out);
    out << "\n";
  }

  // member: go
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "go: ";
    rosidl_generator_traits::value_to_yaml(msg.go, out);
    out << "\n";
  }

  // member: estop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "estop: ";
    rosidl_generator_traits::value_to_yaml(msg.estop, out);
    out << "\n";
  }

  // member: x_vector
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.x_vector.size() == 0) {
      out << "x_vector: []\n";
    } else {
      out << "x_vector:\n";
      for (auto item : msg.x_vector) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: y_vector
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.y_vector.size() == 0) {
      out << "y_vector: []\n";
    } else {
      out << "y_vector:\n";
      for (auto item : msg.y_vector) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: vd_vector
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.vd_vector.size() == 0) {
      out << "vd_vector: []\n";
    } else {
      out << "vd_vector:\n";
      for (auto item : msg.vd_vector) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: ori_vector
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.ori_vector.size() == 0) {
      out << "ori_vector: []\n";
    } else {
      out << "ori_vector:\n";
      for (auto item : msg.ori_vector) {
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

inline std::string to_yaml(const PlannedPath & msg, bool use_flow_style = false)
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

}  // namespace mcity_msgs

namespace rosidl_generator_traits
{

[[deprecated("use mcity_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mcity_msgs::msg::PlannedPath & msg,
  std::ostream & out, size_t indentation = 0)
{
  mcity_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mcity_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mcity_msgs::msg::PlannedPath & msg)
{
  return mcity_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mcity_msgs::msg::PlannedPath>()
{
  return "mcity_msgs::msg::PlannedPath";
}

template<>
inline const char * name<mcity_msgs::msg::PlannedPath>()
{
  return "mcity_msgs/msg/PlannedPath";
}

template<>
struct has_fixed_size<mcity_msgs::msg::PlannedPath>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mcity_msgs::msg::PlannedPath>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mcity_msgs::msg::PlannedPath>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MCITY_MSGS__MSG__DETAIL__PLANNED_PATH__TRAITS_HPP_
