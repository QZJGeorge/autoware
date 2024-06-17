// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tier4_planning_msgs:msg/StopFactor.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tier4_planning_msgs/msg/detail/stop_factor__rosidl_typesupport_introspection_c.h"
#include "tier4_planning_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tier4_planning_msgs/msg/detail/stop_factor__functions.h"
#include "tier4_planning_msgs/msg/detail/stop_factor__struct.h"


// Include directives for member types
// Member `stop_pose`
#include "geometry_msgs/msg/pose.h"
// Member `stop_pose`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"
// Member `stop_factor_points`
#include "geometry_msgs/msg/point.h"
// Member `stop_factor_points`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void tier4_planning_msgs__msg__StopFactor__rosidl_typesupport_introspection_c__StopFactor_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tier4_planning_msgs__msg__StopFactor__init(message_memory);
}

void tier4_planning_msgs__msg__StopFactor__rosidl_typesupport_introspection_c__StopFactor_fini_function(void * message_memory)
{
  tier4_planning_msgs__msg__StopFactor__fini(message_memory);
}

size_t tier4_planning_msgs__msg__StopFactor__rosidl_typesupport_introspection_c__size_function__StopFactor__stop_factor_points(
  const void * untyped_member)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return member->size;
}

const void * tier4_planning_msgs__msg__StopFactor__rosidl_typesupport_introspection_c__get_const_function__StopFactor__stop_factor_points(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void * tier4_planning_msgs__msg__StopFactor__rosidl_typesupport_introspection_c__get_function__StopFactor__stop_factor_points(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void tier4_planning_msgs__msg__StopFactor__rosidl_typesupport_introspection_c__fetch_function__StopFactor__stop_factor_points(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Point * item =
    ((const geometry_msgs__msg__Point *)
    tier4_planning_msgs__msg__StopFactor__rosidl_typesupport_introspection_c__get_const_function__StopFactor__stop_factor_points(untyped_member, index));
  geometry_msgs__msg__Point * value =
    (geometry_msgs__msg__Point *)(untyped_value);
  *value = *item;
}

void tier4_planning_msgs__msg__StopFactor__rosidl_typesupport_introspection_c__assign_function__StopFactor__stop_factor_points(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Point * item =
    ((geometry_msgs__msg__Point *)
    tier4_planning_msgs__msg__StopFactor__rosidl_typesupport_introspection_c__get_function__StopFactor__stop_factor_points(untyped_member, index));
  const geometry_msgs__msg__Point * value =
    (const geometry_msgs__msg__Point *)(untyped_value);
  *item = *value;
}

bool tier4_planning_msgs__msg__StopFactor__rosidl_typesupport_introspection_c__resize_function__StopFactor__stop_factor_points(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  geometry_msgs__msg__Point__Sequence__fini(member);
  return geometry_msgs__msg__Point__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember tier4_planning_msgs__msg__StopFactor__rosidl_typesupport_introspection_c__StopFactor_message_member_array[3] = {
  {
    "stop_pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_planning_msgs__msg__StopFactor, stop_pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "dist_to_stop_pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_planning_msgs__msg__StopFactor, dist_to_stop_pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stop_factor_points",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_planning_msgs__msg__StopFactor, stop_factor_points),  // bytes offset in struct
    NULL,  // default value
    tier4_planning_msgs__msg__StopFactor__rosidl_typesupport_introspection_c__size_function__StopFactor__stop_factor_points,  // size() function pointer
    tier4_planning_msgs__msg__StopFactor__rosidl_typesupport_introspection_c__get_const_function__StopFactor__stop_factor_points,  // get_const(index) function pointer
    tier4_planning_msgs__msg__StopFactor__rosidl_typesupport_introspection_c__get_function__StopFactor__stop_factor_points,  // get(index) function pointer
    tier4_planning_msgs__msg__StopFactor__rosidl_typesupport_introspection_c__fetch_function__StopFactor__stop_factor_points,  // fetch(index, &value) function pointer
    tier4_planning_msgs__msg__StopFactor__rosidl_typesupport_introspection_c__assign_function__StopFactor__stop_factor_points,  // assign(index, value) function pointer
    tier4_planning_msgs__msg__StopFactor__rosidl_typesupport_introspection_c__resize_function__StopFactor__stop_factor_points  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers tier4_planning_msgs__msg__StopFactor__rosidl_typesupport_introspection_c__StopFactor_message_members = {
  "tier4_planning_msgs__msg",  // message namespace
  "StopFactor",  // message name
  3,  // number of fields
  sizeof(tier4_planning_msgs__msg__StopFactor),
  tier4_planning_msgs__msg__StopFactor__rosidl_typesupport_introspection_c__StopFactor_message_member_array,  // message members
  tier4_planning_msgs__msg__StopFactor__rosidl_typesupport_introspection_c__StopFactor_init_function,  // function to initialize message memory (memory has to be allocated)
  tier4_planning_msgs__msg__StopFactor__rosidl_typesupport_introspection_c__StopFactor_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tier4_planning_msgs__msg__StopFactor__rosidl_typesupport_introspection_c__StopFactor_message_type_support_handle = {
  0,
  &tier4_planning_msgs__msg__StopFactor__rosidl_typesupport_introspection_c__StopFactor_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tier4_planning_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_planning_msgs, msg, StopFactor)() {
  tier4_planning_msgs__msg__StopFactor__rosidl_typesupport_introspection_c__StopFactor_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  tier4_planning_msgs__msg__StopFactor__rosidl_typesupport_introspection_c__StopFactor_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  if (!tier4_planning_msgs__msg__StopFactor__rosidl_typesupport_introspection_c__StopFactor_message_type_support_handle.typesupport_identifier) {
    tier4_planning_msgs__msg__StopFactor__rosidl_typesupport_introspection_c__StopFactor_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tier4_planning_msgs__msg__StopFactor__rosidl_typesupport_introspection_c__StopFactor_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
