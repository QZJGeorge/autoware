// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from morai_msgs:msg/SensorPosControl.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__SENSOR_POS_CONTROL__TRAITS_HPP_
#define MORAI_MSGS__MSG__DETAIL__SENSOR_POS_CONTROL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "morai_msgs/msg/detail/sensor_pos_control__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace morai_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SensorPosControl & msg,
  std::ostream & out)
{
  out << "{";
  // member: sensor_index
  {
    if (msg.sensor_index.size() == 0) {
      out << "sensor_index: []";
    } else {
      out << "sensor_index: [";
      size_t pending_items = msg.sensor_index.size();
      for (auto item : msg.sensor_index) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: pose_x
  {
    if (msg.pose_x.size() == 0) {
      out << "pose_x: []";
    } else {
      out << "pose_x: [";
      size_t pending_items = msg.pose_x.size();
      for (auto item : msg.pose_x) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: pose_y
  {
    if (msg.pose_y.size() == 0) {
      out << "pose_y: []";
    } else {
      out << "pose_y: [";
      size_t pending_items = msg.pose_y.size();
      for (auto item : msg.pose_y) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: pose_z
  {
    if (msg.pose_z.size() == 0) {
      out << "pose_z: []";
    } else {
      out << "pose_z: [";
      size_t pending_items = msg.pose_z.size();
      for (auto item : msg.pose_z) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: roll
  {
    if (msg.roll.size() == 0) {
      out << "roll: []";
    } else {
      out << "roll: [";
      size_t pending_items = msg.roll.size();
      for (auto item : msg.roll) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: pitch
  {
    if (msg.pitch.size() == 0) {
      out << "pitch: []";
    } else {
      out << "pitch: [";
      size_t pending_items = msg.pitch.size();
      for (auto item : msg.pitch) {
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
  const SensorPosControl & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: sensor_index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.sensor_index.size() == 0) {
      out << "sensor_index: []\n";
    } else {
      out << "sensor_index:\n";
      for (auto item : msg.sensor_index) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: pose_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.pose_x.size() == 0) {
      out << "pose_x: []\n";
    } else {
      out << "pose_x:\n";
      for (auto item : msg.pose_x) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: pose_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.pose_y.size() == 0) {
      out << "pose_y: []\n";
    } else {
      out << "pose_y:\n";
      for (auto item : msg.pose_y) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: pose_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.pose_z.size() == 0) {
      out << "pose_z: []\n";
    } else {
      out << "pose_z:\n";
      for (auto item : msg.pose_z) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: roll
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.roll.size() == 0) {
      out << "roll: []\n";
    } else {
      out << "roll:\n";
      for (auto item : msg.roll) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: pitch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.pitch.size() == 0) {
      out << "pitch: []\n";
    } else {
      out << "pitch:\n";
      for (auto item : msg.pitch) {
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

inline std::string to_yaml(const SensorPosControl & msg, bool use_flow_style = false)
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

}  // namespace morai_msgs

namespace rosidl_generator_traits
{

[[deprecated("use morai_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const morai_msgs::msg::SensorPosControl & msg,
  std::ostream & out, size_t indentation = 0)
{
  morai_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use morai_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const morai_msgs::msg::SensorPosControl & msg)
{
  return morai_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<morai_msgs::msg::SensorPosControl>()
{
  return "morai_msgs::msg::SensorPosControl";
}

template<>
inline const char * name<morai_msgs::msg::SensorPosControl>()
{
  return "morai_msgs/msg/SensorPosControl";
}

template<>
struct has_fixed_size<morai_msgs::msg::SensorPosControl>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<morai_msgs::msg::SensorPosControl>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<morai_msgs::msg::SensorPosControl>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MORAI_MSGS__MSG__DETAIL__SENSOR_POS_CONTROL__TRAITS_HPP_
