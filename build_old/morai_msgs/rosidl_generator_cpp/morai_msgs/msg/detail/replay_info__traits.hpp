// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from morai_msgs:msg/ReplayInfo.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__REPLAY_INFO__TRAITS_HPP_
#define MORAI_MSGS__MSG__DETAIL__REPLAY_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "morai_msgs/msg/detail/replay_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'orientation'
#include "geometry_msgs/msg/detail/quaternion__traits.hpp"
// Member 'linear_acceleration'
// Member 'angular_velocity'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"
// Member 'npc_list'
// Member 'pedestrian_list'
// Member 'obstacle_list'
#include "morai_msgs/msg/detail/object_status__traits.hpp"

namespace morai_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ReplayInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: ego_acc
  {
    out << "ego_acc: ";
    rosidl_generator_traits::value_to_yaml(msg.ego_acc, out);
    out << ", ";
  }

  // member: ego_brake
  {
    out << "ego_brake: ";
    rosidl_generator_traits::value_to_yaml(msg.ego_brake, out);
    out << ", ";
  }

  // member: ego_steer
  {
    out << "ego_steer: ";
    rosidl_generator_traits::value_to_yaml(msg.ego_steer, out);
    out << ", ";
  }

  // member: orientation
  {
    out << "orientation: ";
    to_flow_style_yaml(msg.orientation, out);
    out << ", ";
  }

  // member: linear_acceleration
  {
    out << "linear_acceleration: ";
    to_flow_style_yaml(msg.linear_acceleration, out);
    out << ", ";
  }

  // member: angular_velocity
  {
    out << "angular_velocity: ";
    to_flow_style_yaml(msg.angular_velocity, out);
    out << ", ";
  }

  // member: num_of_npcs
  {
    out << "num_of_npcs: ";
    rosidl_generator_traits::value_to_yaml(msg.num_of_npcs, out);
    out << ", ";
  }

  // member: num_of_pedestrian
  {
    out << "num_of_pedestrian: ";
    rosidl_generator_traits::value_to_yaml(msg.num_of_pedestrian, out);
    out << ", ";
  }

  // member: num_of_obstacle
  {
    out << "num_of_obstacle: ";
    rosidl_generator_traits::value_to_yaml(msg.num_of_obstacle, out);
    out << ", ";
  }

  // member: npc_list
  {
    if (msg.npc_list.size() == 0) {
      out << "npc_list: []";
    } else {
      out << "npc_list: [";
      size_t pending_items = msg.npc_list.size();
      for (auto item : msg.npc_list) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: pedestrian_list
  {
    if (msg.pedestrian_list.size() == 0) {
      out << "pedestrian_list: []";
    } else {
      out << "pedestrian_list: [";
      size_t pending_items = msg.pedestrian_list.size();
      for (auto item : msg.pedestrian_list) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: obstacle_list
  {
    if (msg.obstacle_list.size() == 0) {
      out << "obstacle_list: []";
    } else {
      out << "obstacle_list: [";
      size_t pending_items = msg.obstacle_list.size();
      for (auto item : msg.obstacle_list) {
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
  const ReplayInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: ego_acc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ego_acc: ";
    rosidl_generator_traits::value_to_yaml(msg.ego_acc, out);
    out << "\n";
  }

  // member: ego_brake
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ego_brake: ";
    rosidl_generator_traits::value_to_yaml(msg.ego_brake, out);
    out << "\n";
  }

  // member: ego_steer
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ego_steer: ";
    rosidl_generator_traits::value_to_yaml(msg.ego_steer, out);
    out << "\n";
  }

  // member: orientation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "orientation:\n";
    to_block_style_yaml(msg.orientation, out, indentation + 2);
  }

  // member: linear_acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "linear_acceleration:\n";
    to_block_style_yaml(msg.linear_acceleration, out, indentation + 2);
  }

  // member: angular_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angular_velocity:\n";
    to_block_style_yaml(msg.angular_velocity, out, indentation + 2);
  }

  // member: num_of_npcs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_of_npcs: ";
    rosidl_generator_traits::value_to_yaml(msg.num_of_npcs, out);
    out << "\n";
  }

  // member: num_of_pedestrian
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_of_pedestrian: ";
    rosidl_generator_traits::value_to_yaml(msg.num_of_pedestrian, out);
    out << "\n";
  }

  // member: num_of_obstacle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_of_obstacle: ";
    rosidl_generator_traits::value_to_yaml(msg.num_of_obstacle, out);
    out << "\n";
  }

  // member: npc_list
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.npc_list.size() == 0) {
      out << "npc_list: []\n";
    } else {
      out << "npc_list:\n";
      for (auto item : msg.npc_list) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: pedestrian_list
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.pedestrian_list.size() == 0) {
      out << "pedestrian_list: []\n";
    } else {
      out << "pedestrian_list:\n";
      for (auto item : msg.pedestrian_list) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: obstacle_list
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.obstacle_list.size() == 0) {
      out << "obstacle_list: []\n";
    } else {
      out << "obstacle_list:\n";
      for (auto item : msg.obstacle_list) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ReplayInfo & msg, bool use_flow_style = false)
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
  const morai_msgs::msg::ReplayInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  morai_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use morai_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const morai_msgs::msg::ReplayInfo & msg)
{
  return morai_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<morai_msgs::msg::ReplayInfo>()
{
  return "morai_msgs::msg::ReplayInfo";
}

template<>
inline const char * name<morai_msgs::msg::ReplayInfo>()
{
  return "morai_msgs/msg/ReplayInfo";
}

template<>
struct has_fixed_size<morai_msgs::msg::ReplayInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<morai_msgs::msg::ReplayInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<morai_msgs::msg::ReplayInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MORAI_MSGS__MSG__DETAIL__REPLAY_INFO__TRAITS_HPP_
