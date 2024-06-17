// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from morai_msgs:msg/ReplayInfo.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "morai_msgs/msg/detail/replay_info__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace morai_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void ReplayInfo_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) morai_msgs::msg::ReplayInfo(_init);
}

void ReplayInfo_fini_function(void * message_memory)
{
  auto typed_message = static_cast<morai_msgs::msg::ReplayInfo *>(message_memory);
  typed_message->~ReplayInfo();
}

size_t size_function__ReplayInfo__npc_list(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<morai_msgs::msg::ObjectStatus> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ReplayInfo__npc_list(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<morai_msgs::msg::ObjectStatus> *>(untyped_member);
  return &member[index];
}

void * get_function__ReplayInfo__npc_list(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<morai_msgs::msg::ObjectStatus> *>(untyped_member);
  return &member[index];
}

void fetch_function__ReplayInfo__npc_list(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const morai_msgs::msg::ObjectStatus *>(
    get_const_function__ReplayInfo__npc_list(untyped_member, index));
  auto & value = *reinterpret_cast<morai_msgs::msg::ObjectStatus *>(untyped_value);
  value = item;
}

void assign_function__ReplayInfo__npc_list(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<morai_msgs::msg::ObjectStatus *>(
    get_function__ReplayInfo__npc_list(untyped_member, index));
  const auto & value = *reinterpret_cast<const morai_msgs::msg::ObjectStatus *>(untyped_value);
  item = value;
}

void resize_function__ReplayInfo__npc_list(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<morai_msgs::msg::ObjectStatus> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ReplayInfo__pedestrian_list(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<morai_msgs::msg::ObjectStatus> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ReplayInfo__pedestrian_list(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<morai_msgs::msg::ObjectStatus> *>(untyped_member);
  return &member[index];
}

void * get_function__ReplayInfo__pedestrian_list(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<morai_msgs::msg::ObjectStatus> *>(untyped_member);
  return &member[index];
}

void fetch_function__ReplayInfo__pedestrian_list(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const morai_msgs::msg::ObjectStatus *>(
    get_const_function__ReplayInfo__pedestrian_list(untyped_member, index));
  auto & value = *reinterpret_cast<morai_msgs::msg::ObjectStatus *>(untyped_value);
  value = item;
}

void assign_function__ReplayInfo__pedestrian_list(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<morai_msgs::msg::ObjectStatus *>(
    get_function__ReplayInfo__pedestrian_list(untyped_member, index));
  const auto & value = *reinterpret_cast<const morai_msgs::msg::ObjectStatus *>(untyped_value);
  item = value;
}

void resize_function__ReplayInfo__pedestrian_list(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<morai_msgs::msg::ObjectStatus> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ReplayInfo__obstacle_list(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<morai_msgs::msg::ObjectStatus> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ReplayInfo__obstacle_list(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<morai_msgs::msg::ObjectStatus> *>(untyped_member);
  return &member[index];
}

void * get_function__ReplayInfo__obstacle_list(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<morai_msgs::msg::ObjectStatus> *>(untyped_member);
  return &member[index];
}

void fetch_function__ReplayInfo__obstacle_list(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const morai_msgs::msg::ObjectStatus *>(
    get_const_function__ReplayInfo__obstacle_list(untyped_member, index));
  auto & value = *reinterpret_cast<morai_msgs::msg::ObjectStatus *>(untyped_value);
  value = item;
}

void assign_function__ReplayInfo__obstacle_list(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<morai_msgs::msg::ObjectStatus *>(
    get_function__ReplayInfo__obstacle_list(untyped_member, index));
  const auto & value = *reinterpret_cast<const morai_msgs::msg::ObjectStatus *>(untyped_value);
  item = value;
}

void resize_function__ReplayInfo__obstacle_list(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<morai_msgs::msg::ObjectStatus> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ReplayInfo_message_member_array[13] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs::msg::ReplayInfo, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "ego_acc",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs::msg::ReplayInfo, ego_acc),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "ego_brake",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs::msg::ReplayInfo, ego_brake),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "ego_steer",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs::msg::ReplayInfo, ego_steer),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "orientation",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Quaternion>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs::msg::ReplayInfo, orientation),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "linear_acceleration",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Vector3>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs::msg::ReplayInfo, linear_acceleration),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "angular_velocity",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Vector3>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs::msg::ReplayInfo, angular_velocity),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "num_of_npcs",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs::msg::ReplayInfo, num_of_npcs),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "num_of_pedestrian",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs::msg::ReplayInfo, num_of_pedestrian),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "num_of_obstacle",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs::msg::ReplayInfo, num_of_obstacle),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "npc_list",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<morai_msgs::msg::ObjectStatus>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs::msg::ReplayInfo, npc_list),  // bytes offset in struct
    nullptr,  // default value
    size_function__ReplayInfo__npc_list,  // size() function pointer
    get_const_function__ReplayInfo__npc_list,  // get_const(index) function pointer
    get_function__ReplayInfo__npc_list,  // get(index) function pointer
    fetch_function__ReplayInfo__npc_list,  // fetch(index, &value) function pointer
    assign_function__ReplayInfo__npc_list,  // assign(index, value) function pointer
    resize_function__ReplayInfo__npc_list  // resize(index) function pointer
  },
  {
    "pedestrian_list",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<morai_msgs::msg::ObjectStatus>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs::msg::ReplayInfo, pedestrian_list),  // bytes offset in struct
    nullptr,  // default value
    size_function__ReplayInfo__pedestrian_list,  // size() function pointer
    get_const_function__ReplayInfo__pedestrian_list,  // get_const(index) function pointer
    get_function__ReplayInfo__pedestrian_list,  // get(index) function pointer
    fetch_function__ReplayInfo__pedestrian_list,  // fetch(index, &value) function pointer
    assign_function__ReplayInfo__pedestrian_list,  // assign(index, value) function pointer
    resize_function__ReplayInfo__pedestrian_list  // resize(index) function pointer
  },
  {
    "obstacle_list",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<morai_msgs::msg::ObjectStatus>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs::msg::ReplayInfo, obstacle_list),  // bytes offset in struct
    nullptr,  // default value
    size_function__ReplayInfo__obstacle_list,  // size() function pointer
    get_const_function__ReplayInfo__obstacle_list,  // get_const(index) function pointer
    get_function__ReplayInfo__obstacle_list,  // get(index) function pointer
    fetch_function__ReplayInfo__obstacle_list,  // fetch(index, &value) function pointer
    assign_function__ReplayInfo__obstacle_list,  // assign(index, value) function pointer
    resize_function__ReplayInfo__obstacle_list  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ReplayInfo_message_members = {
  "morai_msgs::msg",  // message namespace
  "ReplayInfo",  // message name
  13,  // number of fields
  sizeof(morai_msgs::msg::ReplayInfo),
  ReplayInfo_message_member_array,  // message members
  ReplayInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  ReplayInfo_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ReplayInfo_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ReplayInfo_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace morai_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<morai_msgs::msg::ReplayInfo>()
{
  return &::morai_msgs::msg::rosidl_typesupport_introspection_cpp::ReplayInfo_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, morai_msgs, msg, ReplayInfo)() {
  return &::morai_msgs::msg::rosidl_typesupport_introspection_cpp::ReplayInfo_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
