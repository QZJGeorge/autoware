// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from morai_msgs:msg/NpcGhostCmd.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__NPC_GHOST_CMD__TRAITS_HPP_
#define MORAI_MSGS__MSG__DETAIL__NPC_GHOST_CMD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "morai_msgs/msg/detail/npc_ghost_cmd__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'npc_list'
#include "morai_msgs/msg/detail/npc_ghost_info__traits.hpp"

namespace morai_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const NpcGhostCmd & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
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
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NpcGhostCmd & msg,
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NpcGhostCmd & msg, bool use_flow_style = false)
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
  const morai_msgs::msg::NpcGhostCmd & msg,
  std::ostream & out, size_t indentation = 0)
{
  morai_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use morai_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const morai_msgs::msg::NpcGhostCmd & msg)
{
  return morai_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<morai_msgs::msg::NpcGhostCmd>()
{
  return "morai_msgs::msg::NpcGhostCmd";
}

template<>
inline const char * name<morai_msgs::msg::NpcGhostCmd>()
{
  return "morai_msgs/msg/NpcGhostCmd";
}

template<>
struct has_fixed_size<morai_msgs::msg::NpcGhostCmd>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<morai_msgs::msg::NpcGhostCmd>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<morai_msgs::msg::NpcGhostCmd>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MORAI_MSGS__MSG__DETAIL__NPC_GHOST_CMD__TRAITS_HPP_
