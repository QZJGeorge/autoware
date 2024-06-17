// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from morai_msgs:msg/NpcGhostCmd.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__NPC_GHOST_CMD__BUILDER_HPP_
#define MORAI_MSGS__MSG__DETAIL__NPC_GHOST_CMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "morai_msgs/msg/detail/npc_ghost_cmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace morai_msgs
{

namespace msg
{

namespace builder
{

class Init_NpcGhostCmd_npc_list
{
public:
  explicit Init_NpcGhostCmd_npc_list(::morai_msgs::msg::NpcGhostCmd & msg)
  : msg_(msg)
  {}
  ::morai_msgs::msg::NpcGhostCmd npc_list(::morai_msgs::msg::NpcGhostCmd::_npc_list_type arg)
  {
    msg_.npc_list = std::move(arg);
    return std::move(msg_);
  }

private:
  ::morai_msgs::msg::NpcGhostCmd msg_;
};

class Init_NpcGhostCmd_header
{
public:
  Init_NpcGhostCmd_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NpcGhostCmd_npc_list header(::morai_msgs::msg::NpcGhostCmd::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_NpcGhostCmd_npc_list(msg_);
  }

private:
  ::morai_msgs::msg::NpcGhostCmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::morai_msgs::msg::NpcGhostCmd>()
{
  return morai_msgs::msg::builder::Init_NpcGhostCmd_header();
}

}  // namespace morai_msgs

#endif  // MORAI_MSGS__MSG__DETAIL__NPC_GHOST_CMD__BUILDER_HPP_
