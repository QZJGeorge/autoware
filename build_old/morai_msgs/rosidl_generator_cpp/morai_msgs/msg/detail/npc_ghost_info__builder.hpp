// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from morai_msgs:msg/NpcGhostInfo.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__NPC_GHOST_INFO__BUILDER_HPP_
#define MORAI_MSGS__MSG__DETAIL__NPC_GHOST_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "morai_msgs/msg/detail/npc_ghost_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace morai_msgs
{

namespace msg
{

namespace builder
{

class Init_NpcGhostInfo_rpy
{
public:
  explicit Init_NpcGhostInfo_rpy(::morai_msgs::msg::NpcGhostInfo & msg)
  : msg_(msg)
  {}
  ::morai_msgs::msg::NpcGhostInfo rpy(::morai_msgs::msg::NpcGhostInfo::_rpy_type arg)
  {
    msg_.rpy = std::move(arg);
    return std::move(msg_);
  }

private:
  ::morai_msgs::msg::NpcGhostInfo msg_;
};

class Init_NpcGhostInfo_position
{
public:
  explicit Init_NpcGhostInfo_position(::morai_msgs::msg::NpcGhostInfo & msg)
  : msg_(msg)
  {}
  Init_NpcGhostInfo_rpy position(::morai_msgs::msg::NpcGhostInfo::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_NpcGhostInfo_rpy(msg_);
  }

private:
  ::morai_msgs::msg::NpcGhostInfo msg_;
};

class Init_NpcGhostInfo_name
{
public:
  explicit Init_NpcGhostInfo_name(::morai_msgs::msg::NpcGhostInfo & msg)
  : msg_(msg)
  {}
  Init_NpcGhostInfo_position name(::morai_msgs::msg::NpcGhostInfo::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_NpcGhostInfo_position(msg_);
  }

private:
  ::morai_msgs::msg::NpcGhostInfo msg_;
};

class Init_NpcGhostInfo_unique_id
{
public:
  Init_NpcGhostInfo_unique_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NpcGhostInfo_name unique_id(::morai_msgs::msg::NpcGhostInfo::_unique_id_type arg)
  {
    msg_.unique_id = std::move(arg);
    return Init_NpcGhostInfo_name(msg_);
  }

private:
  ::morai_msgs::msg::NpcGhostInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::morai_msgs::msg::NpcGhostInfo>()
{
  return morai_msgs::msg::builder::Init_NpcGhostInfo_unique_id();
}

}  // namespace morai_msgs

#endif  // MORAI_MSGS__MSG__DETAIL__NPC_GHOST_INFO__BUILDER_HPP_
