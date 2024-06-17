// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from morai_msgs:msg/ReplayInfo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "morai_msgs/msg/detail/replay_info__rosidl_typesupport_introspection_c.h"
#include "morai_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "morai_msgs/msg/detail/replay_info__functions.h"
#include "morai_msgs/msg/detail/replay_info__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `orientation`
#include "geometry_msgs/msg/quaternion.h"
// Member `orientation`
#include "geometry_msgs/msg/detail/quaternion__rosidl_typesupport_introspection_c.h"
// Member `linear_acceleration`
// Member `angular_velocity`
#include "geometry_msgs/msg/vector3.h"
// Member `linear_acceleration`
// Member `angular_velocity`
#include "geometry_msgs/msg/detail/vector3__rosidl_typesupport_introspection_c.h"
// Member `npc_list`
// Member `pedestrian_list`
// Member `obstacle_list`
#include "morai_msgs/msg/object_status.h"
// Member `npc_list`
// Member `pedestrian_list`
// Member `obstacle_list`
#include "morai_msgs/msg/detail/object_status__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void morai_msgs__msg__ReplayInfo__rosidl_typesupport_introspection_c__ReplayInfo_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  morai_msgs__msg__ReplayInfo__init(message_memory);
}

void morai_msgs__msg__ReplayInfo__rosidl_typesupport_introspection_c__ReplayInfo_fini_function(void * message_memory)
{
  morai_msgs__msg__ReplayInfo__fini(message_memory);
}

size_t morai_msgs__msg__ReplayInfo__rosidl_typesupport_introspection_c__size_function__ReplayInfo__npc_list(
  const void * untyped_member)
{
  const morai_msgs__msg__ObjectStatus__Sequence * member =
    (const morai_msgs__msg__ObjectStatus__Sequence *)(untyped_member);
  return member->size;
}

const void * morai_msgs__msg__ReplayInfo__rosidl_typesupport_introspection_c__get_const_function__ReplayInfo__npc_list(
  const void * untyped_member, size_t index)
{
  const morai_msgs__msg__ObjectStatus__Sequence * member =
    (const morai_msgs__msg__ObjectStatus__Sequence *)(untyped_member);
  return &member->data[index];
}

void * morai_msgs__msg__ReplayInfo__rosidl_typesupport_introspection_c__get_function__ReplayInfo__npc_list(
  void * untyped_member, size_t index)
{
  morai_msgs__msg__ObjectStatus__Sequence * member =
    (morai_msgs__msg__ObjectStatus__Sequence *)(untyped_member);
  return &member->data[index];
}

void morai_msgs__msg__ReplayInfo__rosidl_typesupport_introspection_c__fetch_function__ReplayInfo__npc_list(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const morai_msgs__msg__ObjectStatus * item =
    ((const morai_msgs__msg__ObjectStatus *)
    morai_msgs__msg__ReplayInfo__rosidl_typesupport_introspection_c__get_const_function__ReplayInfo__npc_list(untyped_member, index));
  morai_msgs__msg__ObjectStatus * value =
    (morai_msgs__msg__ObjectStatus *)(untyped_value);
  *value = *item;
}

void morai_msgs__msg__ReplayInfo__rosidl_typesupport_introspection_c__assign_function__ReplayInfo__npc_list(
  void * untyped_member, size_t index, const void * untyped_value)
{
  morai_msgs__msg__ObjectStatus * item =
    ((morai_msgs__msg__ObjectStatus *)
    morai_msgs__msg__ReplayInfo__rosidl_typesupport_introspection_c__get_function__ReplayInfo__npc_list(untyped_member, index));
  const morai_msgs__msg__ObjectStatus * value =
    (const morai_msgs__msg__ObjectStatus *)(untyped_value);
  *item = *value;
}

bool morai_msgs__msg__ReplayInfo__rosidl_typesupport_introspection_c__resize_function__ReplayInfo__npc_list(
  void * untyped_member, size_t size)
{
  morai_msgs__msg__ObjectStatus__Sequence * member =
    (morai_msgs__msg__ObjectStatus__Sequence *)(untyped_member);
  morai_msgs__msg__ObjectStatus__Sequence__fini(member);
  return morai_msgs__msg__ObjectStatus__Sequence__init(member, size);
}

size_t morai_msgs__msg__ReplayInfo__rosidl_typesupport_introspection_c__size_function__ReplayInfo__pedestrian_list(
  const void * untyped_member)
{
  const morai_msgs__msg__ObjectStatus__Sequence * member =
    (const morai_msgs__msg__ObjectStatus__Sequence *)(untyped_member);
  return member->size;
}

const void * morai_msgs__msg__ReplayInfo__rosidl_typesupport_introspection_c__get_const_function__ReplayInfo__pedestrian_list(
  const void * untyped_member, size_t index)
{
  const morai_msgs__msg__ObjectStatus__Sequence * member =
    (const morai_msgs__msg__ObjectStatus__Sequence *)(untyped_member);
  return &member->data[index];
}

void * morai_msgs__msg__ReplayInfo__rosidl_typesupport_introspection_c__get_function__ReplayInfo__pedestrian_list(
  void * untyped_member, size_t index)
{
  morai_msgs__msg__ObjectStatus__Sequence * member =
    (morai_msgs__msg__ObjectStatus__Sequence *)(untyped_member);
  return &member->data[index];
}

void morai_msgs__msg__ReplayInfo__rosidl_typesupport_introspection_c__fetch_function__ReplayInfo__pedestrian_list(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const morai_msgs__msg__ObjectStatus * item =
    ((const morai_msgs__msg__ObjectStatus *)
    morai_msgs__msg__ReplayInfo__rosidl_typesupport_introspection_c__get_const_function__ReplayInfo__pedestrian_list(untyped_member, index));
  morai_msgs__msg__ObjectStatus * value =
    (morai_msgs__msg__ObjectStatus *)(untyped_value);
  *value = *item;
}

void morai_msgs__msg__ReplayInfo__rosidl_typesupport_introspection_c__assign_function__ReplayInfo__pedestrian_list(
  void * untyped_member, size_t index, const void * untyped_value)
{
  morai_msgs__msg__ObjectStatus * item =
    ((morai_msgs__msg__ObjectStatus *)
    morai_msgs__msg__ReplayInfo__rosidl_typesupport_introspection_c__get_function__ReplayInfo__pedestrian_list(untyped_member, index));
  const morai_msgs__msg__ObjectStatus * value =
    (const morai_msgs__msg__ObjectStatus *)(untyped_value);
  *item = *value;
}

bool morai_msgs__msg__ReplayInfo__rosidl_typesupport_introspection_c__resize_function__ReplayInfo__pedestrian_list(
  void * untyped_member, size_t size)
{
  morai_msgs__msg__ObjectStatus__Sequence * member =
    (morai_msgs__msg__ObjectStatus__Sequence *)(untyped_member);
  morai_msgs__msg__ObjectStatus__Sequence__fini(member);
  return morai_msgs__msg__ObjectStatus__Sequence__init(member, size);
}

size_t morai_msgs__msg__ReplayInfo__rosidl_typesupport_introspection_c__size_function__ReplayInfo__obstacle_list(
  const void * untyped_member)
{
  const morai_msgs__msg__ObjectStatus__Sequence * member =
    (const morai_msgs__msg__ObjectStatus__Sequence *)(untyped_member);
  return member->size;
}

const void * morai_msgs__msg__ReplayInfo__rosidl_typesupport_introspection_c__get_const_function__ReplayInfo__obstacle_list(
  const void * untyped_member, size_t index)
{
  const morai_msgs__msg__ObjectStatus__Sequence * member =
    (const morai_msgs__msg__ObjectStatus__Sequence *)(untyped_member);
  return &member->data[index];
}

void * morai_msgs__msg__ReplayInfo__rosidl_typesupport_introspection_c__get_function__ReplayInfo__obstacle_list(
  void * untyped_member, size_t index)
{
  morai_msgs__msg__ObjectStatus__Sequence * member =
    (morai_msgs__msg__ObjectStatus__Sequence *)(untyped_member);
  return &member->data[index];
}

void morai_msgs__msg__ReplayInfo__rosidl_typesupport_introspection_c__fetch_function__ReplayInfo__obstacle_list(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const morai_msgs__msg__ObjectStatus * item =
    ((const morai_msgs__msg__ObjectStatus *)
    morai_msgs__msg__ReplayInfo__rosidl_typesupport_introspection_c__get_const_function__ReplayInfo__obstacle_list(untyped_member, index));
  morai_msgs__msg__ObjectStatus * value =
    (morai_msgs__msg__ObjectStatus *)(untyped_value);
  *value = *item;
}

void morai_msgs__msg__ReplayInfo__rosidl_typesupport_introspection_c__assign_function__ReplayInfo__obstacle_list(
  void * untyped_member, size_t index, const void * untyped_value)
{
  morai_msgs__msg__ObjectStatus * item =
    ((morai_msgs__msg__ObjectStatus *)
    morai_msgs__msg__ReplayInfo__rosidl_typesupport_introspection_c__get_function__ReplayInfo__obstacle_list(untyped_member, index));
  const morai_msgs__msg__ObjectStatus * value =
    (const morai_msgs__msg__ObjectStatus *)(untyped_value);
  *item = *value;
}

bool morai_msgs__msg__ReplayInfo__rosidl_typesupport_introspection_c__resize_function__ReplayInfo__obstacle_list(
  void * untyped_member, size_t size)
{
  morai_msgs__msg__ObjectStatus__Sequence * member =
    (morai_msgs__msg__ObjectStatus__Sequence *)(untyped_member);
  morai_msgs__msg__ObjectStatus__Sequence__fini(member);
  return morai_msgs__msg__ObjectStatus__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember morai_msgs__msg__ReplayInfo__rosidl_typesupport_introspection_c__ReplayInfo_message_member_array[13] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs__msg__ReplayInfo, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ego_acc",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs__msg__ReplayInfo, ego_acc),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ego_brake",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs__msg__ReplayInfo, ego_brake),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ego_steer",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs__msg__ReplayInfo, ego_steer),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "orientation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs__msg__ReplayInfo, orientation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "linear_acceleration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs__msg__ReplayInfo, linear_acceleration),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "angular_velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs__msg__ReplayInfo, angular_velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "num_of_npcs",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs__msg__ReplayInfo, num_of_npcs),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "num_of_pedestrian",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs__msg__ReplayInfo, num_of_pedestrian),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "num_of_obstacle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs__msg__ReplayInfo, num_of_obstacle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "npc_list",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs__msg__ReplayInfo, npc_list),  // bytes offset in struct
    NULL,  // default value
    morai_msgs__msg__ReplayInfo__rosidl_typesupport_introspection_c__size_function__ReplayInfo__npc_list,  // size() function pointer
    morai_msgs__msg__ReplayInfo__rosidl_typesupport_introspection_c__get_const_function__ReplayInfo__npc_list,  // get_const(index) function pointer
    morai_msgs__msg__ReplayInfo__rosidl_typesupport_introspection_c__get_function__ReplayInfo__npc_list,  // get(index) function pointer
    morai_msgs__msg__ReplayInfo__rosidl_typesupport_introspection_c__fetch_function__ReplayInfo__npc_list,  // fetch(index, &value) function pointer
    morai_msgs__msg__ReplayInfo__rosidl_typesupport_introspection_c__assign_function__ReplayInfo__npc_list,  // assign(index, value) function pointer
    morai_msgs__msg__ReplayInfo__rosidl_typesupport_introspection_c__resize_function__ReplayInfo__npc_list  // resize(index) function pointer
  },
  {
    "pedestrian_list",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs__msg__ReplayInfo, pedestrian_list),  // bytes offset in struct
    NULL,  // default value
    morai_msgs__msg__ReplayInfo__rosidl_typesupport_introspection_c__size_function__ReplayInfo__pedestrian_list,  // size() function pointer
    morai_msgs__msg__ReplayInfo__rosidl_typesupport_introspection_c__get_const_function__ReplayInfo__pedestrian_list,  // get_const(index) function pointer
    morai_msgs__msg__ReplayInfo__rosidl_typesupport_introspection_c__get_function__ReplayInfo__pedestrian_list,  // get(index) function pointer
    morai_msgs__msg__ReplayInfo__rosidl_typesupport_introspection_c__fetch_function__ReplayInfo__pedestrian_list,  // fetch(index, &value) function pointer
    morai_msgs__msg__ReplayInfo__rosidl_typesupport_introspection_c__assign_function__ReplayInfo__pedestrian_list,  // assign(index, value) function pointer
    morai_msgs__msg__ReplayInfo__rosidl_typesupport_introspection_c__resize_function__ReplayInfo__pedestrian_list  // resize(index) function pointer
  },
  {
    "obstacle_list",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs__msg__ReplayInfo, obstacle_list),  // bytes offset in struct
    NULL,  // default value
    morai_msgs__msg__ReplayInfo__rosidl_typesupport_introspection_c__size_function__ReplayInfo__obstacle_list,  // size() function pointer
    morai_msgs__msg__ReplayInfo__rosidl_typesupport_introspection_c__get_const_function__ReplayInfo__obstacle_list,  // get_const(index) function pointer
    morai_msgs__msg__ReplayInfo__rosidl_typesupport_introspection_c__get_function__ReplayInfo__obstacle_list,  // get(index) function pointer
    morai_msgs__msg__ReplayInfo__rosidl_typesupport_introspection_c__fetch_function__ReplayInfo__obstacle_list,  // fetch(index, &value) function pointer
    morai_msgs__msg__ReplayInfo__rosidl_typesupport_introspection_c__assign_function__ReplayInfo__obstacle_list,  // assign(index, value) function pointer
    morai_msgs__msg__ReplayInfo__rosidl_typesupport_introspection_c__resize_function__ReplayInfo__obstacle_list  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers morai_msgs__msg__ReplayInfo__rosidl_typesupport_introspection_c__ReplayInfo_message_members = {
  "morai_msgs__msg",  // message namespace
  "ReplayInfo",  // message name
  13,  // number of fields
  sizeof(morai_msgs__msg__ReplayInfo),
  morai_msgs__msg__ReplayInfo__rosidl_typesupport_introspection_c__ReplayInfo_message_member_array,  // message members
  morai_msgs__msg__ReplayInfo__rosidl_typesupport_introspection_c__ReplayInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  morai_msgs__msg__ReplayInfo__rosidl_typesupport_introspection_c__ReplayInfo_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t morai_msgs__msg__ReplayInfo__rosidl_typesupport_introspection_c__ReplayInfo_message_type_support_handle = {
  0,
  &morai_msgs__msg__ReplayInfo__rosidl_typesupport_introspection_c__ReplayInfo_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_morai_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, morai_msgs, msg, ReplayInfo)() {
  morai_msgs__msg__ReplayInfo__rosidl_typesupport_introspection_c__ReplayInfo_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  morai_msgs__msg__ReplayInfo__rosidl_typesupport_introspection_c__ReplayInfo_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Quaternion)();
  morai_msgs__msg__ReplayInfo__rosidl_typesupport_introspection_c__ReplayInfo_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  morai_msgs__msg__ReplayInfo__rosidl_typesupport_introspection_c__ReplayInfo_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  morai_msgs__msg__ReplayInfo__rosidl_typesupport_introspection_c__ReplayInfo_message_member_array[10].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, morai_msgs, msg, ObjectStatus)();
  morai_msgs__msg__ReplayInfo__rosidl_typesupport_introspection_c__ReplayInfo_message_member_array[11].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, morai_msgs, msg, ObjectStatus)();
  morai_msgs__msg__ReplayInfo__rosidl_typesupport_introspection_c__ReplayInfo_message_member_array[12].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, morai_msgs, msg, ObjectStatus)();
  if (!morai_msgs__msg__ReplayInfo__rosidl_typesupport_introspection_c__ReplayInfo_message_type_support_handle.typesupport_identifier) {
    morai_msgs__msg__ReplayInfo__rosidl_typesupport_introspection_c__ReplayInfo_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &morai_msgs__msg__ReplayInfo__rosidl_typesupport_introspection_c__ReplayInfo_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
