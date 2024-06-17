// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from autoware_planning_msgs:msg/LaneletRoute.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "autoware_planning_msgs/msg/detail/lanelet_route__rosidl_typesupport_introspection_c.h"
#include "autoware_planning_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "autoware_planning_msgs/msg/detail/lanelet_route__functions.h"
#include "autoware_planning_msgs/msg/detail/lanelet_route__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `start_pose`
// Member `goal_pose`
#include "geometry_msgs/msg/pose.h"
// Member `start_pose`
// Member `goal_pose`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"
// Member `segments`
#include "autoware_planning_msgs/msg/lanelet_segment.h"
// Member `segments`
#include "autoware_planning_msgs/msg/detail/lanelet_segment__rosidl_typesupport_introspection_c.h"
// Member `uuid`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `uuid`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void autoware_planning_msgs__msg__LaneletRoute__rosidl_typesupport_introspection_c__LaneletRoute_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  autoware_planning_msgs__msg__LaneletRoute__init(message_memory);
}

void autoware_planning_msgs__msg__LaneletRoute__rosidl_typesupport_introspection_c__LaneletRoute_fini_function(void * message_memory)
{
  autoware_planning_msgs__msg__LaneletRoute__fini(message_memory);
}

size_t autoware_planning_msgs__msg__LaneletRoute__rosidl_typesupport_introspection_c__size_function__LaneletRoute__segments(
  const void * untyped_member)
{
  const autoware_planning_msgs__msg__LaneletSegment__Sequence * member =
    (const autoware_planning_msgs__msg__LaneletSegment__Sequence *)(untyped_member);
  return member->size;
}

const void * autoware_planning_msgs__msg__LaneletRoute__rosidl_typesupport_introspection_c__get_const_function__LaneletRoute__segments(
  const void * untyped_member, size_t index)
{
  const autoware_planning_msgs__msg__LaneletSegment__Sequence * member =
    (const autoware_planning_msgs__msg__LaneletSegment__Sequence *)(untyped_member);
  return &member->data[index];
}

void * autoware_planning_msgs__msg__LaneletRoute__rosidl_typesupport_introspection_c__get_function__LaneletRoute__segments(
  void * untyped_member, size_t index)
{
  autoware_planning_msgs__msg__LaneletSegment__Sequence * member =
    (autoware_planning_msgs__msg__LaneletSegment__Sequence *)(untyped_member);
  return &member->data[index];
}

void autoware_planning_msgs__msg__LaneletRoute__rosidl_typesupport_introspection_c__fetch_function__LaneletRoute__segments(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const autoware_planning_msgs__msg__LaneletSegment * item =
    ((const autoware_planning_msgs__msg__LaneletSegment *)
    autoware_planning_msgs__msg__LaneletRoute__rosidl_typesupport_introspection_c__get_const_function__LaneletRoute__segments(untyped_member, index));
  autoware_planning_msgs__msg__LaneletSegment * value =
    (autoware_planning_msgs__msg__LaneletSegment *)(untyped_value);
  *value = *item;
}

void autoware_planning_msgs__msg__LaneletRoute__rosidl_typesupport_introspection_c__assign_function__LaneletRoute__segments(
  void * untyped_member, size_t index, const void * untyped_value)
{
  autoware_planning_msgs__msg__LaneletSegment * item =
    ((autoware_planning_msgs__msg__LaneletSegment *)
    autoware_planning_msgs__msg__LaneletRoute__rosidl_typesupport_introspection_c__get_function__LaneletRoute__segments(untyped_member, index));
  const autoware_planning_msgs__msg__LaneletSegment * value =
    (const autoware_planning_msgs__msg__LaneletSegment *)(untyped_value);
  *item = *value;
}

bool autoware_planning_msgs__msg__LaneletRoute__rosidl_typesupport_introspection_c__resize_function__LaneletRoute__segments(
  void * untyped_member, size_t size)
{
  autoware_planning_msgs__msg__LaneletSegment__Sequence * member =
    (autoware_planning_msgs__msg__LaneletSegment__Sequence *)(untyped_member);
  autoware_planning_msgs__msg__LaneletSegment__Sequence__fini(member);
  return autoware_planning_msgs__msg__LaneletSegment__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember autoware_planning_msgs__msg__LaneletRoute__rosidl_typesupport_introspection_c__LaneletRoute_message_member_array[6] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_planning_msgs__msg__LaneletRoute, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "start_pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_planning_msgs__msg__LaneletRoute, start_pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal_pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_planning_msgs__msg__LaneletRoute, goal_pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "segments",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_planning_msgs__msg__LaneletRoute, segments),  // bytes offset in struct
    NULL,  // default value
    autoware_planning_msgs__msg__LaneletRoute__rosidl_typesupport_introspection_c__size_function__LaneletRoute__segments,  // size() function pointer
    autoware_planning_msgs__msg__LaneletRoute__rosidl_typesupport_introspection_c__get_const_function__LaneletRoute__segments,  // get_const(index) function pointer
    autoware_planning_msgs__msg__LaneletRoute__rosidl_typesupport_introspection_c__get_function__LaneletRoute__segments,  // get(index) function pointer
    autoware_planning_msgs__msg__LaneletRoute__rosidl_typesupport_introspection_c__fetch_function__LaneletRoute__segments,  // fetch(index, &value) function pointer
    autoware_planning_msgs__msg__LaneletRoute__rosidl_typesupport_introspection_c__assign_function__LaneletRoute__segments,  // assign(index, value) function pointer
    autoware_planning_msgs__msg__LaneletRoute__rosidl_typesupport_introspection_c__resize_function__LaneletRoute__segments  // resize(index) function pointer
  },
  {
    "uuid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_planning_msgs__msg__LaneletRoute, uuid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "allow_modification",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_planning_msgs__msg__LaneletRoute, allow_modification),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers autoware_planning_msgs__msg__LaneletRoute__rosidl_typesupport_introspection_c__LaneletRoute_message_members = {
  "autoware_planning_msgs__msg",  // message namespace
  "LaneletRoute",  // message name
  6,  // number of fields
  sizeof(autoware_planning_msgs__msg__LaneletRoute),
  autoware_planning_msgs__msg__LaneletRoute__rosidl_typesupport_introspection_c__LaneletRoute_message_member_array,  // message members
  autoware_planning_msgs__msg__LaneletRoute__rosidl_typesupport_introspection_c__LaneletRoute_init_function,  // function to initialize message memory (memory has to be allocated)
  autoware_planning_msgs__msg__LaneletRoute__rosidl_typesupport_introspection_c__LaneletRoute_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t autoware_planning_msgs__msg__LaneletRoute__rosidl_typesupport_introspection_c__LaneletRoute_message_type_support_handle = {
  0,
  &autoware_planning_msgs__msg__LaneletRoute__rosidl_typesupport_introspection_c__LaneletRoute_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autoware_planning_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_planning_msgs, msg, LaneletRoute)() {
  autoware_planning_msgs__msg__LaneletRoute__rosidl_typesupport_introspection_c__LaneletRoute_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  autoware_planning_msgs__msg__LaneletRoute__rosidl_typesupport_introspection_c__LaneletRoute_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  autoware_planning_msgs__msg__LaneletRoute__rosidl_typesupport_introspection_c__LaneletRoute_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  autoware_planning_msgs__msg__LaneletRoute__rosidl_typesupport_introspection_c__LaneletRoute_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_planning_msgs, msg, LaneletSegment)();
  autoware_planning_msgs__msg__LaneletRoute__rosidl_typesupport_introspection_c__LaneletRoute_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!autoware_planning_msgs__msg__LaneletRoute__rosidl_typesupport_introspection_c__LaneletRoute_message_type_support_handle.typesupport_identifier) {
    autoware_planning_msgs__msg__LaneletRoute__rosidl_typesupport_introspection_c__LaneletRoute_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &autoware_planning_msgs__msg__LaneletRoute__rosidl_typesupport_introspection_c__LaneletRoute_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
