// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from autoware_planning_msgs:msg/LaneletRoute.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "autoware_planning_msgs/msg/detail/lanelet_route__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace autoware_planning_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void LaneletRoute_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) autoware_planning_msgs::msg::LaneletRoute(_init);
}

void LaneletRoute_fini_function(void * message_memory)
{
  auto typed_message = static_cast<autoware_planning_msgs::msg::LaneletRoute *>(message_memory);
  typed_message->~LaneletRoute();
}

size_t size_function__LaneletRoute__segments(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<autoware_planning_msgs::msg::LaneletSegment> *>(untyped_member);
  return member->size();
}

const void * get_const_function__LaneletRoute__segments(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<autoware_planning_msgs::msg::LaneletSegment> *>(untyped_member);
  return &member[index];
}

void * get_function__LaneletRoute__segments(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<autoware_planning_msgs::msg::LaneletSegment> *>(untyped_member);
  return &member[index];
}

void fetch_function__LaneletRoute__segments(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const autoware_planning_msgs::msg::LaneletSegment *>(
    get_const_function__LaneletRoute__segments(untyped_member, index));
  auto & value = *reinterpret_cast<autoware_planning_msgs::msg::LaneletSegment *>(untyped_value);
  value = item;
}

void assign_function__LaneletRoute__segments(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<autoware_planning_msgs::msg::LaneletSegment *>(
    get_function__LaneletRoute__segments(untyped_member, index));
  const auto & value = *reinterpret_cast<const autoware_planning_msgs::msg::LaneletSegment *>(untyped_value);
  item = value;
}

void resize_function__LaneletRoute__segments(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<autoware_planning_msgs::msg::LaneletSegment> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember LaneletRoute_message_member_array[6] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_planning_msgs::msg::LaneletRoute, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "start_pose",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Pose>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_planning_msgs::msg::LaneletRoute, start_pose),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "goal_pose",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Pose>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_planning_msgs::msg::LaneletRoute, goal_pose),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "segments",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<autoware_planning_msgs::msg::LaneletSegment>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_planning_msgs::msg::LaneletRoute, segments),  // bytes offset in struct
    nullptr,  // default value
    size_function__LaneletRoute__segments,  // size() function pointer
    get_const_function__LaneletRoute__segments,  // get_const(index) function pointer
    get_function__LaneletRoute__segments,  // get(index) function pointer
    fetch_function__LaneletRoute__segments,  // fetch(index, &value) function pointer
    assign_function__LaneletRoute__segments,  // assign(index, value) function pointer
    resize_function__LaneletRoute__segments  // resize(index) function pointer
  },
  {
    "uuid",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_planning_msgs::msg::LaneletRoute, uuid),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "allow_modification",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_planning_msgs::msg::LaneletRoute, allow_modification),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers LaneletRoute_message_members = {
  "autoware_planning_msgs::msg",  // message namespace
  "LaneletRoute",  // message name
  6,  // number of fields
  sizeof(autoware_planning_msgs::msg::LaneletRoute),
  LaneletRoute_message_member_array,  // message members
  LaneletRoute_init_function,  // function to initialize message memory (memory has to be allocated)
  LaneletRoute_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t LaneletRoute_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &LaneletRoute_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace autoware_planning_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<autoware_planning_msgs::msg::LaneletRoute>()
{
  return &::autoware_planning_msgs::msg::rosidl_typesupport_introspection_cpp::LaneletRoute_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, autoware_planning_msgs, msg, LaneletRoute)() {
  return &::autoware_planning_msgs::msg::rosidl_typesupport_introspection_cpp::LaneletRoute_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
