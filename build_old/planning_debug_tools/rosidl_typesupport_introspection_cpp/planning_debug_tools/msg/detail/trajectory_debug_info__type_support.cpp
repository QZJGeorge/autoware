// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from planning_debug_tools:msg/TrajectoryDebugInfo.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "planning_debug_tools/msg/detail/trajectory_debug_info__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace planning_debug_tools
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void TrajectoryDebugInfo_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) planning_debug_tools::msg::TrajectoryDebugInfo(_init);
}

void TrajectoryDebugInfo_fini_function(void * message_memory)
{
  auto typed_message = static_cast<planning_debug_tools::msg::TrajectoryDebugInfo *>(message_memory);
  typed_message->~TrajectoryDebugInfo();
}

size_t size_function__TrajectoryDebugInfo__arclength(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TrajectoryDebugInfo__arclength(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__TrajectoryDebugInfo__arclength(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__TrajectoryDebugInfo__arclength(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__TrajectoryDebugInfo__arclength(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__TrajectoryDebugInfo__arclength(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__TrajectoryDebugInfo__arclength(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__TrajectoryDebugInfo__arclength(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__TrajectoryDebugInfo__curvature(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TrajectoryDebugInfo__curvature(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__TrajectoryDebugInfo__curvature(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__TrajectoryDebugInfo__curvature(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__TrajectoryDebugInfo__curvature(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__TrajectoryDebugInfo__curvature(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__TrajectoryDebugInfo__curvature(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__TrajectoryDebugInfo__curvature(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__TrajectoryDebugInfo__velocity(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TrajectoryDebugInfo__velocity(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__TrajectoryDebugInfo__velocity(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__TrajectoryDebugInfo__velocity(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__TrajectoryDebugInfo__velocity(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__TrajectoryDebugInfo__velocity(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__TrajectoryDebugInfo__velocity(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__TrajectoryDebugInfo__velocity(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__TrajectoryDebugInfo__acceleration(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TrajectoryDebugInfo__acceleration(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__TrajectoryDebugInfo__acceleration(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__TrajectoryDebugInfo__acceleration(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__TrajectoryDebugInfo__acceleration(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__TrajectoryDebugInfo__acceleration(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__TrajectoryDebugInfo__acceleration(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__TrajectoryDebugInfo__acceleration(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__TrajectoryDebugInfo__yaw(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TrajectoryDebugInfo__yaw(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__TrajectoryDebugInfo__yaw(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__TrajectoryDebugInfo__yaw(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__TrajectoryDebugInfo__yaw(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__TrajectoryDebugInfo__yaw(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__TrajectoryDebugInfo__yaw(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__TrajectoryDebugInfo__yaw(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TrajectoryDebugInfo_message_member_array[7] = {
  {
    "stamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Time>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(planning_debug_tools::msg::TrajectoryDebugInfo, stamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "size",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(planning_debug_tools::msg::TrajectoryDebugInfo, size),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "arclength",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(planning_debug_tools::msg::TrajectoryDebugInfo, arclength),  // bytes offset in struct
    nullptr,  // default value
    size_function__TrajectoryDebugInfo__arclength,  // size() function pointer
    get_const_function__TrajectoryDebugInfo__arclength,  // get_const(index) function pointer
    get_function__TrajectoryDebugInfo__arclength,  // get(index) function pointer
    fetch_function__TrajectoryDebugInfo__arclength,  // fetch(index, &value) function pointer
    assign_function__TrajectoryDebugInfo__arclength,  // assign(index, value) function pointer
    resize_function__TrajectoryDebugInfo__arclength  // resize(index) function pointer
  },
  {
    "curvature",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(planning_debug_tools::msg::TrajectoryDebugInfo, curvature),  // bytes offset in struct
    nullptr,  // default value
    size_function__TrajectoryDebugInfo__curvature,  // size() function pointer
    get_const_function__TrajectoryDebugInfo__curvature,  // get_const(index) function pointer
    get_function__TrajectoryDebugInfo__curvature,  // get(index) function pointer
    fetch_function__TrajectoryDebugInfo__curvature,  // fetch(index, &value) function pointer
    assign_function__TrajectoryDebugInfo__curvature,  // assign(index, value) function pointer
    resize_function__TrajectoryDebugInfo__curvature  // resize(index) function pointer
  },
  {
    "velocity",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(planning_debug_tools::msg::TrajectoryDebugInfo, velocity),  // bytes offset in struct
    nullptr,  // default value
    size_function__TrajectoryDebugInfo__velocity,  // size() function pointer
    get_const_function__TrajectoryDebugInfo__velocity,  // get_const(index) function pointer
    get_function__TrajectoryDebugInfo__velocity,  // get(index) function pointer
    fetch_function__TrajectoryDebugInfo__velocity,  // fetch(index, &value) function pointer
    assign_function__TrajectoryDebugInfo__velocity,  // assign(index, value) function pointer
    resize_function__TrajectoryDebugInfo__velocity  // resize(index) function pointer
  },
  {
    "acceleration",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(planning_debug_tools::msg::TrajectoryDebugInfo, acceleration),  // bytes offset in struct
    nullptr,  // default value
    size_function__TrajectoryDebugInfo__acceleration,  // size() function pointer
    get_const_function__TrajectoryDebugInfo__acceleration,  // get_const(index) function pointer
    get_function__TrajectoryDebugInfo__acceleration,  // get(index) function pointer
    fetch_function__TrajectoryDebugInfo__acceleration,  // fetch(index, &value) function pointer
    assign_function__TrajectoryDebugInfo__acceleration,  // assign(index, value) function pointer
    resize_function__TrajectoryDebugInfo__acceleration  // resize(index) function pointer
  },
  {
    "yaw",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(planning_debug_tools::msg::TrajectoryDebugInfo, yaw),  // bytes offset in struct
    nullptr,  // default value
    size_function__TrajectoryDebugInfo__yaw,  // size() function pointer
    get_const_function__TrajectoryDebugInfo__yaw,  // get_const(index) function pointer
    get_function__TrajectoryDebugInfo__yaw,  // get(index) function pointer
    fetch_function__TrajectoryDebugInfo__yaw,  // fetch(index, &value) function pointer
    assign_function__TrajectoryDebugInfo__yaw,  // assign(index, value) function pointer
    resize_function__TrajectoryDebugInfo__yaw  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TrajectoryDebugInfo_message_members = {
  "planning_debug_tools::msg",  // message namespace
  "TrajectoryDebugInfo",  // message name
  7,  // number of fields
  sizeof(planning_debug_tools::msg::TrajectoryDebugInfo),
  TrajectoryDebugInfo_message_member_array,  // message members
  TrajectoryDebugInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  TrajectoryDebugInfo_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TrajectoryDebugInfo_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TrajectoryDebugInfo_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace planning_debug_tools


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<planning_debug_tools::msg::TrajectoryDebugInfo>()
{
  return &::planning_debug_tools::msg::rosidl_typesupport_introspection_cpp::TrajectoryDebugInfo_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, planning_debug_tools, msg, TrajectoryDebugInfo)() {
  return &::planning_debug_tools::msg::rosidl_typesupport_introspection_cpp::TrajectoryDebugInfo_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
