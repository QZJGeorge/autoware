// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from planning_debug_tools:msg/TrajectoryDebugInfo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "planning_debug_tools/msg/detail/trajectory_debug_info__rosidl_typesupport_introspection_c.h"
#include "planning_debug_tools/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "planning_debug_tools/msg/detail/trajectory_debug_info__functions.h"
#include "planning_debug_tools/msg/detail/trajectory_debug_info__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `arclength`
// Member `curvature`
// Member `velocity`
// Member `acceleration`
// Member `yaw`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void planning_debug_tools__msg__TrajectoryDebugInfo__rosidl_typesupport_introspection_c__TrajectoryDebugInfo_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  planning_debug_tools__msg__TrajectoryDebugInfo__init(message_memory);
}

void planning_debug_tools__msg__TrajectoryDebugInfo__rosidl_typesupport_introspection_c__TrajectoryDebugInfo_fini_function(void * message_memory)
{
  planning_debug_tools__msg__TrajectoryDebugInfo__fini(message_memory);
}

size_t planning_debug_tools__msg__TrajectoryDebugInfo__rosidl_typesupport_introspection_c__size_function__TrajectoryDebugInfo__arclength(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * planning_debug_tools__msg__TrajectoryDebugInfo__rosidl_typesupport_introspection_c__get_const_function__TrajectoryDebugInfo__arclength(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * planning_debug_tools__msg__TrajectoryDebugInfo__rosidl_typesupport_introspection_c__get_function__TrajectoryDebugInfo__arclength(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void planning_debug_tools__msg__TrajectoryDebugInfo__rosidl_typesupport_introspection_c__fetch_function__TrajectoryDebugInfo__arclength(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    planning_debug_tools__msg__TrajectoryDebugInfo__rosidl_typesupport_introspection_c__get_const_function__TrajectoryDebugInfo__arclength(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void planning_debug_tools__msg__TrajectoryDebugInfo__rosidl_typesupport_introspection_c__assign_function__TrajectoryDebugInfo__arclength(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    planning_debug_tools__msg__TrajectoryDebugInfo__rosidl_typesupport_introspection_c__get_function__TrajectoryDebugInfo__arclength(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool planning_debug_tools__msg__TrajectoryDebugInfo__rosidl_typesupport_introspection_c__resize_function__TrajectoryDebugInfo__arclength(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t planning_debug_tools__msg__TrajectoryDebugInfo__rosidl_typesupport_introspection_c__size_function__TrajectoryDebugInfo__curvature(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * planning_debug_tools__msg__TrajectoryDebugInfo__rosidl_typesupport_introspection_c__get_const_function__TrajectoryDebugInfo__curvature(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * planning_debug_tools__msg__TrajectoryDebugInfo__rosidl_typesupport_introspection_c__get_function__TrajectoryDebugInfo__curvature(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void planning_debug_tools__msg__TrajectoryDebugInfo__rosidl_typesupport_introspection_c__fetch_function__TrajectoryDebugInfo__curvature(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    planning_debug_tools__msg__TrajectoryDebugInfo__rosidl_typesupport_introspection_c__get_const_function__TrajectoryDebugInfo__curvature(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void planning_debug_tools__msg__TrajectoryDebugInfo__rosidl_typesupport_introspection_c__assign_function__TrajectoryDebugInfo__curvature(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    planning_debug_tools__msg__TrajectoryDebugInfo__rosidl_typesupport_introspection_c__get_function__TrajectoryDebugInfo__curvature(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool planning_debug_tools__msg__TrajectoryDebugInfo__rosidl_typesupport_introspection_c__resize_function__TrajectoryDebugInfo__curvature(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t planning_debug_tools__msg__TrajectoryDebugInfo__rosidl_typesupport_introspection_c__size_function__TrajectoryDebugInfo__velocity(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * planning_debug_tools__msg__TrajectoryDebugInfo__rosidl_typesupport_introspection_c__get_const_function__TrajectoryDebugInfo__velocity(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * planning_debug_tools__msg__TrajectoryDebugInfo__rosidl_typesupport_introspection_c__get_function__TrajectoryDebugInfo__velocity(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void planning_debug_tools__msg__TrajectoryDebugInfo__rosidl_typesupport_introspection_c__fetch_function__TrajectoryDebugInfo__velocity(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    planning_debug_tools__msg__TrajectoryDebugInfo__rosidl_typesupport_introspection_c__get_const_function__TrajectoryDebugInfo__velocity(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void planning_debug_tools__msg__TrajectoryDebugInfo__rosidl_typesupport_introspection_c__assign_function__TrajectoryDebugInfo__velocity(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    planning_debug_tools__msg__TrajectoryDebugInfo__rosidl_typesupport_introspection_c__get_function__TrajectoryDebugInfo__velocity(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool planning_debug_tools__msg__TrajectoryDebugInfo__rosidl_typesupport_introspection_c__resize_function__TrajectoryDebugInfo__velocity(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t planning_debug_tools__msg__TrajectoryDebugInfo__rosidl_typesupport_introspection_c__size_function__TrajectoryDebugInfo__acceleration(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * planning_debug_tools__msg__TrajectoryDebugInfo__rosidl_typesupport_introspection_c__get_const_function__TrajectoryDebugInfo__acceleration(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * planning_debug_tools__msg__TrajectoryDebugInfo__rosidl_typesupport_introspection_c__get_function__TrajectoryDebugInfo__acceleration(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void planning_debug_tools__msg__TrajectoryDebugInfo__rosidl_typesupport_introspection_c__fetch_function__TrajectoryDebugInfo__acceleration(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    planning_debug_tools__msg__TrajectoryDebugInfo__rosidl_typesupport_introspection_c__get_const_function__TrajectoryDebugInfo__acceleration(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void planning_debug_tools__msg__TrajectoryDebugInfo__rosidl_typesupport_introspection_c__assign_function__TrajectoryDebugInfo__acceleration(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    planning_debug_tools__msg__TrajectoryDebugInfo__rosidl_typesupport_introspection_c__get_function__TrajectoryDebugInfo__acceleration(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool planning_debug_tools__msg__TrajectoryDebugInfo__rosidl_typesupport_introspection_c__resize_function__TrajectoryDebugInfo__acceleration(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t planning_debug_tools__msg__TrajectoryDebugInfo__rosidl_typesupport_introspection_c__size_function__TrajectoryDebugInfo__yaw(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * planning_debug_tools__msg__TrajectoryDebugInfo__rosidl_typesupport_introspection_c__get_const_function__TrajectoryDebugInfo__yaw(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * planning_debug_tools__msg__TrajectoryDebugInfo__rosidl_typesupport_introspection_c__get_function__TrajectoryDebugInfo__yaw(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void planning_debug_tools__msg__TrajectoryDebugInfo__rosidl_typesupport_introspection_c__fetch_function__TrajectoryDebugInfo__yaw(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    planning_debug_tools__msg__TrajectoryDebugInfo__rosidl_typesupport_introspection_c__get_const_function__TrajectoryDebugInfo__yaw(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void planning_debug_tools__msg__TrajectoryDebugInfo__rosidl_typesupport_introspection_c__assign_function__TrajectoryDebugInfo__yaw(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    planning_debug_tools__msg__TrajectoryDebugInfo__rosidl_typesupport_introspection_c__get_function__TrajectoryDebugInfo__yaw(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool planning_debug_tools__msg__TrajectoryDebugInfo__rosidl_typesupport_introspection_c__resize_function__TrajectoryDebugInfo__yaw(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember planning_debug_tools__msg__TrajectoryDebugInfo__rosidl_typesupport_introspection_c__TrajectoryDebugInfo_message_member_array[7] = {
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(planning_debug_tools__msg__TrajectoryDebugInfo, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "size",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(planning_debug_tools__msg__TrajectoryDebugInfo, size),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "arclength",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(planning_debug_tools__msg__TrajectoryDebugInfo, arclength),  // bytes offset in struct
    NULL,  // default value
    planning_debug_tools__msg__TrajectoryDebugInfo__rosidl_typesupport_introspection_c__size_function__TrajectoryDebugInfo__arclength,  // size() function pointer
    planning_debug_tools__msg__TrajectoryDebugInfo__rosidl_typesupport_introspection_c__get_const_function__TrajectoryDebugInfo__arclength,  // get_const(index) function pointer
    planning_debug_tools__msg__TrajectoryDebugInfo__rosidl_typesupport_introspection_c__get_function__TrajectoryDebugInfo__arclength,  // get(index) function pointer
    planning_debug_tools__msg__TrajectoryDebugInfo__rosidl_typesupport_introspection_c__fetch_function__TrajectoryDebugInfo__arclength,  // fetch(index, &value) function pointer
    planning_debug_tools__msg__TrajectoryDebugInfo__rosidl_typesupport_introspection_c__assign_function__TrajectoryDebugInfo__arclength,  // assign(index, value) function pointer
    planning_debug_tools__msg__TrajectoryDebugInfo__rosidl_typesupport_introspection_c__resize_function__TrajectoryDebugInfo__arclength  // resize(index) function pointer
  },
  {
    "curvature",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(planning_debug_tools__msg__TrajectoryDebugInfo, curvature),  // bytes offset in struct
    NULL,  // default value
    planning_debug_tools__msg__TrajectoryDebugInfo__rosidl_typesupport_introspection_c__size_function__TrajectoryDebugInfo__curvature,  // size() function pointer
    planning_debug_tools__msg__TrajectoryDebugInfo__rosidl_typesupport_introspection_c__get_const_function__TrajectoryDebugInfo__curvature,  // get_const(index) function pointer
    planning_debug_tools__msg__TrajectoryDebugInfo__rosidl_typesupport_introspection_c__get_function__TrajectoryDebugInfo__curvature,  // get(index) function pointer
    planning_debug_tools__msg__TrajectoryDebugInfo__rosidl_typesupport_introspection_c__fetch_function__TrajectoryDebugInfo__curvature,  // fetch(index, &value) function pointer
    planning_debug_tools__msg__TrajectoryDebugInfo__rosidl_typesupport_introspection_c__assign_function__TrajectoryDebugInfo__curvature,  // assign(index, value) function pointer
    planning_debug_tools__msg__TrajectoryDebugInfo__rosidl_typesupport_introspection_c__resize_function__TrajectoryDebugInfo__curvature  // resize(index) function pointer
  },
  {
    "velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(planning_debug_tools__msg__TrajectoryDebugInfo, velocity),  // bytes offset in struct
    NULL,  // default value
    planning_debug_tools__msg__TrajectoryDebugInfo__rosidl_typesupport_introspection_c__size_function__TrajectoryDebugInfo__velocity,  // size() function pointer
    planning_debug_tools__msg__TrajectoryDebugInfo__rosidl_typesupport_introspection_c__get_const_function__TrajectoryDebugInfo__velocity,  // get_const(index) function pointer
    planning_debug_tools__msg__TrajectoryDebugInfo__rosidl_typesupport_introspection_c__get_function__TrajectoryDebugInfo__velocity,  // get(index) function pointer
    planning_debug_tools__msg__TrajectoryDebugInfo__rosidl_typesupport_introspection_c__fetch_function__TrajectoryDebugInfo__velocity,  // fetch(index, &value) function pointer
    planning_debug_tools__msg__TrajectoryDebugInfo__rosidl_typesupport_introspection_c__assign_function__TrajectoryDebugInfo__velocity,  // assign(index, value) function pointer
    planning_debug_tools__msg__TrajectoryDebugInfo__rosidl_typesupport_introspection_c__resize_function__TrajectoryDebugInfo__velocity  // resize(index) function pointer
  },
  {
    "acceleration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(planning_debug_tools__msg__TrajectoryDebugInfo, acceleration),  // bytes offset in struct
    NULL,  // default value
    planning_debug_tools__msg__TrajectoryDebugInfo__rosidl_typesupport_introspection_c__size_function__TrajectoryDebugInfo__acceleration,  // size() function pointer
    planning_debug_tools__msg__TrajectoryDebugInfo__rosidl_typesupport_introspection_c__get_const_function__TrajectoryDebugInfo__acceleration,  // get_const(index) function pointer
    planning_debug_tools__msg__TrajectoryDebugInfo__rosidl_typesupport_introspection_c__get_function__TrajectoryDebugInfo__acceleration,  // get(index) function pointer
    planning_debug_tools__msg__TrajectoryDebugInfo__rosidl_typesupport_introspection_c__fetch_function__TrajectoryDebugInfo__acceleration,  // fetch(index, &value) function pointer
    planning_debug_tools__msg__TrajectoryDebugInfo__rosidl_typesupport_introspection_c__assign_function__TrajectoryDebugInfo__acceleration,  // assign(index, value) function pointer
    planning_debug_tools__msg__TrajectoryDebugInfo__rosidl_typesupport_introspection_c__resize_function__TrajectoryDebugInfo__acceleration  // resize(index) function pointer
  },
  {
    "yaw",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(planning_debug_tools__msg__TrajectoryDebugInfo, yaw),  // bytes offset in struct
    NULL,  // default value
    planning_debug_tools__msg__TrajectoryDebugInfo__rosidl_typesupport_introspection_c__size_function__TrajectoryDebugInfo__yaw,  // size() function pointer
    planning_debug_tools__msg__TrajectoryDebugInfo__rosidl_typesupport_introspection_c__get_const_function__TrajectoryDebugInfo__yaw,  // get_const(index) function pointer
    planning_debug_tools__msg__TrajectoryDebugInfo__rosidl_typesupport_introspection_c__get_function__TrajectoryDebugInfo__yaw,  // get(index) function pointer
    planning_debug_tools__msg__TrajectoryDebugInfo__rosidl_typesupport_introspection_c__fetch_function__TrajectoryDebugInfo__yaw,  // fetch(index, &value) function pointer
    planning_debug_tools__msg__TrajectoryDebugInfo__rosidl_typesupport_introspection_c__assign_function__TrajectoryDebugInfo__yaw,  // assign(index, value) function pointer
    planning_debug_tools__msg__TrajectoryDebugInfo__rosidl_typesupport_introspection_c__resize_function__TrajectoryDebugInfo__yaw  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers planning_debug_tools__msg__TrajectoryDebugInfo__rosidl_typesupport_introspection_c__TrajectoryDebugInfo_message_members = {
  "planning_debug_tools__msg",  // message namespace
  "TrajectoryDebugInfo",  // message name
  7,  // number of fields
  sizeof(planning_debug_tools__msg__TrajectoryDebugInfo),
  planning_debug_tools__msg__TrajectoryDebugInfo__rosidl_typesupport_introspection_c__TrajectoryDebugInfo_message_member_array,  // message members
  planning_debug_tools__msg__TrajectoryDebugInfo__rosidl_typesupport_introspection_c__TrajectoryDebugInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  planning_debug_tools__msg__TrajectoryDebugInfo__rosidl_typesupport_introspection_c__TrajectoryDebugInfo_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t planning_debug_tools__msg__TrajectoryDebugInfo__rosidl_typesupport_introspection_c__TrajectoryDebugInfo_message_type_support_handle = {
  0,
  &planning_debug_tools__msg__TrajectoryDebugInfo__rosidl_typesupport_introspection_c__TrajectoryDebugInfo_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_planning_debug_tools
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, planning_debug_tools, msg, TrajectoryDebugInfo)() {
  planning_debug_tools__msg__TrajectoryDebugInfo__rosidl_typesupport_introspection_c__TrajectoryDebugInfo_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!planning_debug_tools__msg__TrajectoryDebugInfo__rosidl_typesupport_introspection_c__TrajectoryDebugInfo_message_type_support_handle.typesupport_identifier) {
    planning_debug_tools__msg__TrajectoryDebugInfo__rosidl_typesupport_introspection_c__TrajectoryDebugInfo_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &planning_debug_tools__msg__TrajectoryDebugInfo__rosidl_typesupport_introspection_c__TrajectoryDebugInfo_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
