// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from morai_msgs:msg/MultiEgoSetting.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__MULTI_EGO_SETTING__TRAITS_HPP_
#define MORAI_MSGS__MSG__DETAIL__MULTI_EGO_SETTING__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "morai_msgs/msg/detail/multi_ego_setting__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace morai_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MultiEgoSetting & msg,
  std::ostream & out)
{
  out << "{";
  // member: number_of_ego_vehicle
  {
    out << "number_of_ego_vehicle: ";
    rosidl_generator_traits::value_to_yaml(msg.number_of_ego_vehicle, out);
    out << ", ";
  }

  // member: camera_index
  {
    out << "camera_index: ";
    rosidl_generator_traits::value_to_yaml(msg.camera_index, out);
    out << ", ";
  }

  // member: ego_index
  {
    if (msg.ego_index.size() == 0) {
      out << "ego_index: []";
    } else {
      out << "ego_index: [";
      size_t pending_items = msg.ego_index.size();
      for (auto item : msg.ego_index) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: global_position_x
  {
    if (msg.global_position_x.size() == 0) {
      out << "global_position_x: []";
    } else {
      out << "global_position_x: [";
      size_t pending_items = msg.global_position_x.size();
      for (auto item : msg.global_position_x) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: global_position_y
  {
    if (msg.global_position_y.size() == 0) {
      out << "global_position_y: []";
    } else {
      out << "global_position_y: [";
      size_t pending_items = msg.global_position_y.size();
      for (auto item : msg.global_position_y) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: global_position_z
  {
    if (msg.global_position_z.size() == 0) {
      out << "global_position_z: []";
    } else {
      out << "global_position_z: [";
      size_t pending_items = msg.global_position_z.size();
      for (auto item : msg.global_position_z) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: global_roll
  {
    if (msg.global_roll.size() == 0) {
      out << "global_roll: []";
    } else {
      out << "global_roll: [";
      size_t pending_items = msg.global_roll.size();
      for (auto item : msg.global_roll) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: global_pitch
  {
    if (msg.global_pitch.size() == 0) {
      out << "global_pitch: []";
    } else {
      out << "global_pitch: [";
      size_t pending_items = msg.global_pitch.size();
      for (auto item : msg.global_pitch) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: global_yaw
  {
    if (msg.global_yaw.size() == 0) {
      out << "global_yaw: []";
    } else {
      out << "global_yaw: [";
      size_t pending_items = msg.global_yaw.size();
      for (auto item : msg.global_yaw) {
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

  // member: gear
  {
    if (msg.gear.size() == 0) {
      out << "gear: []";
    } else {
      out << "gear: [";
      size_t pending_items = msg.gear.size();
      for (auto item : msg.gear) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: ctrl_mode
  {
    if (msg.ctrl_mode.size() == 0) {
      out << "ctrl_mode: []";
    } else {
      out << "ctrl_mode: [";
      size_t pending_items = msg.ctrl_mode.size();
      for (auto item : msg.ctrl_mode) {
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
  const MultiEgoSetting & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: number_of_ego_vehicle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "number_of_ego_vehicle: ";
    rosidl_generator_traits::value_to_yaml(msg.number_of_ego_vehicle, out);
    out << "\n";
  }

  // member: camera_index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "camera_index: ";
    rosidl_generator_traits::value_to_yaml(msg.camera_index, out);
    out << "\n";
  }

  // member: ego_index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.ego_index.size() == 0) {
      out << "ego_index: []\n";
    } else {
      out << "ego_index:\n";
      for (auto item : msg.ego_index) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: global_position_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.global_position_x.size() == 0) {
      out << "global_position_x: []\n";
    } else {
      out << "global_position_x:\n";
      for (auto item : msg.global_position_x) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: global_position_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.global_position_y.size() == 0) {
      out << "global_position_y: []\n";
    } else {
      out << "global_position_y:\n";
      for (auto item : msg.global_position_y) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: global_position_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.global_position_z.size() == 0) {
      out << "global_position_z: []\n";
    } else {
      out << "global_position_z:\n";
      for (auto item : msg.global_position_z) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: global_roll
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.global_roll.size() == 0) {
      out << "global_roll: []\n";
    } else {
      out << "global_roll:\n";
      for (auto item : msg.global_roll) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: global_pitch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.global_pitch.size() == 0) {
      out << "global_pitch: []\n";
    } else {
      out << "global_pitch:\n";
      for (auto item : msg.global_pitch) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: global_yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.global_yaw.size() == 0) {
      out << "global_yaw: []\n";
    } else {
      out << "global_yaw:\n";
      for (auto item : msg.global_yaw) {
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

  // member: gear
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.gear.size() == 0) {
      out << "gear: []\n";
    } else {
      out << "gear:\n";
      for (auto item : msg.gear) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: ctrl_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.ctrl_mode.size() == 0) {
      out << "ctrl_mode: []\n";
    } else {
      out << "ctrl_mode:\n";
      for (auto item : msg.ctrl_mode) {
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

inline std::string to_yaml(const MultiEgoSetting & msg, bool use_flow_style = false)
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
  const morai_msgs::msg::MultiEgoSetting & msg,
  std::ostream & out, size_t indentation = 0)
{
  morai_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use morai_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const morai_msgs::msg::MultiEgoSetting & msg)
{
  return morai_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<morai_msgs::msg::MultiEgoSetting>()
{
  return "morai_msgs::msg::MultiEgoSetting";
}

template<>
inline const char * name<morai_msgs::msg::MultiEgoSetting>()
{
  return "morai_msgs/msg/MultiEgoSetting";
}

template<>
struct has_fixed_size<morai_msgs::msg::MultiEgoSetting>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<morai_msgs::msg::MultiEgoSetting>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<morai_msgs::msg::MultiEgoSetting>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MORAI_MSGS__MSG__DETAIL__MULTI_EGO_SETTING__TRAITS_HPP_
