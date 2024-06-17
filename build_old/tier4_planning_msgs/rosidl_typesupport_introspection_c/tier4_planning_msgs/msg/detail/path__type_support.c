// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tier4_planning_msgs:msg/Path.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tier4_planning_msgs/msg/detail/path__rosidl_typesupport_introspection_c.h"
#include "tier4_planning_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tier4_planning_msgs/msg/detail/path__functions.h"
#include "tier4_planning_msgs/msg/detail/path__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `points`
#include "tier4_planning_msgs/msg/path_point.h"
// Member `points`
#include "tier4_planning_msgs/msg/detail/path_point__rosidl_typesupport_introspection_c.h"
// Member `drivable_area`
#include "nav_msgs/msg/occupancy_grid.h"
// Member `drivable_area`
#include "nav_msgs/msg/detail/occupancy_grid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void tier4_planning_msgs__msg__Path__rosidl_typesupport_introspection_c__Path_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tier4_planning_msgs__msg__Path__init(message_memory);
}

void tier4_planning_msgs__msg__Path__rosidl_typesupport_introspection_c__Path_fini_function(void * message_memory)
{
  tier4_planning_msgs__msg__Path__fini(message_memory);
}

size_t tier4_planning_msgs__msg__Path__rosidl_typesupport_introspection_c__size_function__Path__points(
  const void * untyped_member)
{
  const tier4_planning_msgs__msg__PathPoint__Sequence * member =
    (const tier4_planning_msgs__msg__PathPoint__Sequence *)(untyped_member);
  return member->size;
}

const void * tier4_planning_msgs__msg__Path__rosidl_typesupport_introspection_c__get_const_function__Path__points(
  const void * untyped_member, size_t index)
{
  const tier4_planning_msgs__msg__PathPoint__Sequence * member =
    (const tier4_planning_msgs__msg__PathPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void * tier4_planning_msgs__msg__Path__rosidl_typesupport_introspection_c__get_function__Path__points(
  void * untyped_member, size_t index)
{
  tier4_planning_msgs__msg__PathPoint__Sequence * member =
    (tier4_planning_msgs__msg__PathPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void tier4_planning_msgs__msg__Path__rosidl_typesupport_introspection_c__fetch_function__Path__points(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const tier4_planning_msgs__msg__PathPoint * item =
    ((const tier4_planning_msgs__msg__PathPoint *)
    tier4_planning_msgs__msg__Path__rosidl_typesupport_introspection_c__get_const_function__Path__points(untyped_member, index));
  tier4_planning_msgs__msg__PathPoint * value =
    (tier4_planning_msgs__msg__PathPoint *)(untyped_value);
  *value = *item;
}

void tier4_planning_msgs__msg__Path__rosidl_typesupport_introspection_c__assign_function__Path__points(
  void * untyped_member, size_t index, const void * untyped_value)
{
  tier4_planning_msgs__msg__PathPoint * item =
    ((tier4_planning_msgs__msg__PathPoint *)
    tier4_planning_msgs__msg__Path__rosidl_typesupport_introspection_c__get_function__Path__points(untyped_member, index));
  const tier4_planning_msgs__msg__PathPoint * value =
    (const tier4_planning_msgs__msg__PathPoint *)(untyped_value);
  *item = *value;
}

bool tier4_planning_msgs__msg__Path__rosidl_typesupport_introspection_c__resize_function__Path__points(
  void * untyped_member, size_t size)
{
  tier4_planning_msgs__msg__PathPoint__Sequence * member =
    (tier4_planning_msgs__msg__PathPoint__Sequence *)(untyped_member);
  tier4_planning_msgs__msg__PathPoint__Sequence__fini(member);
  return tier4_planning_msgs__msg__PathPoint__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember tier4_planning_msgs__msg__Path__rosidl_typesupport_introspection_c__Path_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_planning_msgs__msg__Path, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "points",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_planning_msgs__msg__Path, points),  // bytes offset in struct
    NULL,  // default value
    tier4_planning_msgs__msg__Path__rosidl_typesupport_introspection_c__size_function__Path__points,  // size() function pointer
    tier4_planning_msgs__msg__Path__rosidl_typesupport_introspection_c__get_const_function__Path__points,  // get_const(index) function pointer
    tier4_planning_msgs__msg__Path__rosidl_typesupport_introspection_c__get_function__Path__points,  // get(index) function pointer
    tier4_planning_msgs__msg__Path__rosidl_typesupport_introspection_c__fetch_function__Path__points,  // fetch(index, &value) function pointer
    tier4_planning_msgs__msg__Path__rosidl_typesupport_introspection_c__assign_function__Path__points,  // assign(index, value) function pointer
    tier4_planning_msgs__msg__Path__rosidl_typesupport_introspection_c__resize_function__Path__points  // resize(index) function pointer
  },
  {
    "drivable_area",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_planning_msgs__msg__Path, drivable_area),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers tier4_planning_msgs__msg__Path__rosidl_typesupport_introspection_c__Path_message_members = {
  "tier4_planning_msgs__msg",  // message namespace
  "Path",  // message name
  3,  // number of fields
  sizeof(tier4_planning_msgs__msg__Path),
  tier4_planning_msgs__msg__Path__rosidl_typesupport_introspection_c__Path_message_member_array,  // message members
  tier4_planning_msgs__msg__Path__rosidl_typesupport_introspection_c__Path_init_function,  // function to initialize message memory (memory has to be allocated)
  tier4_planning_msgs__msg__Path__rosidl_typesupport_introspection_c__Path_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tier4_planning_msgs__msg__Path__rosidl_typesupport_introspection_c__Path_message_type_support_handle = {
  0,
  &tier4_planning_msgs__msg__Path__rosidl_typesupport_introspection_c__Path_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tier4_planning_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_planning_msgs, msg, Path)() {
  tier4_planning_msgs__msg__Path__rosidl_typesupport_introspection_c__Path_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  tier4_planning_msgs__msg__Path__rosidl_typesupport_introspection_c__Path_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_planning_msgs, msg, PathPoint)();
  tier4_planning_msgs__msg__Path__rosidl_typesupport_introspection_c__Path_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav_msgs, msg, OccupancyGrid)();
  if (!tier4_planning_msgs__msg__Path__rosidl_typesupport_introspection_c__Path_message_type_support_handle.typesupport_identifier) {
    tier4_planning_msgs__msg__Path__rosidl_typesupport_introspection_c__Path_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tier4_planning_msgs__msg__Path__rosidl_typesupport_introspection_c__Path_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
