// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from morai_msgs:msg/RadarTrack.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "morai_msgs/msg/detail/radar_track__rosidl_typesupport_introspection_c.h"
#include "morai_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "morai_msgs/msg/detail/radar_track__functions.h"
#include "morai_msgs/msg/detail/radar_track__struct.h"


// Include directives for member types
// Member `position`
#include "geometry_msgs/msg/point.h"
// Member `position`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"
// Member `velocity`
// Member `acceleration`
// Member `size`
#include "geometry_msgs/msg/vector3.h"
// Member `velocity`
// Member `acceleration`
// Member `size`
#include "geometry_msgs/msg/detail/vector3__rosidl_typesupport_introspection_c.h"
// Member `position_covariance`
// Member `velocity_covariance`
// Member `acceleration_covariance`
// Member `size_covariance`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void morai_msgs__msg__RadarTrack__rosidl_typesupport_introspection_c__RadarTrack_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  morai_msgs__msg__RadarTrack__init(message_memory);
}

void morai_msgs__msg__RadarTrack__rosidl_typesupport_introspection_c__RadarTrack_fini_function(void * message_memory)
{
  morai_msgs__msg__RadarTrack__fini(message_memory);
}

size_t morai_msgs__msg__RadarTrack__rosidl_typesupport_introspection_c__size_function__RadarTrack__position_covariance(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * morai_msgs__msg__RadarTrack__rosidl_typesupport_introspection_c__get_const_function__RadarTrack__position_covariance(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * morai_msgs__msg__RadarTrack__rosidl_typesupport_introspection_c__get_function__RadarTrack__position_covariance(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void morai_msgs__msg__RadarTrack__rosidl_typesupport_introspection_c__fetch_function__RadarTrack__position_covariance(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    morai_msgs__msg__RadarTrack__rosidl_typesupport_introspection_c__get_const_function__RadarTrack__position_covariance(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void morai_msgs__msg__RadarTrack__rosidl_typesupport_introspection_c__assign_function__RadarTrack__position_covariance(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    morai_msgs__msg__RadarTrack__rosidl_typesupport_introspection_c__get_function__RadarTrack__position_covariance(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool morai_msgs__msg__RadarTrack__rosidl_typesupport_introspection_c__resize_function__RadarTrack__position_covariance(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t morai_msgs__msg__RadarTrack__rosidl_typesupport_introspection_c__size_function__RadarTrack__velocity_covariance(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * morai_msgs__msg__RadarTrack__rosidl_typesupport_introspection_c__get_const_function__RadarTrack__velocity_covariance(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * morai_msgs__msg__RadarTrack__rosidl_typesupport_introspection_c__get_function__RadarTrack__velocity_covariance(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void morai_msgs__msg__RadarTrack__rosidl_typesupport_introspection_c__fetch_function__RadarTrack__velocity_covariance(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    morai_msgs__msg__RadarTrack__rosidl_typesupport_introspection_c__get_const_function__RadarTrack__velocity_covariance(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void morai_msgs__msg__RadarTrack__rosidl_typesupport_introspection_c__assign_function__RadarTrack__velocity_covariance(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    morai_msgs__msg__RadarTrack__rosidl_typesupport_introspection_c__get_function__RadarTrack__velocity_covariance(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool morai_msgs__msg__RadarTrack__rosidl_typesupport_introspection_c__resize_function__RadarTrack__velocity_covariance(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t morai_msgs__msg__RadarTrack__rosidl_typesupport_introspection_c__size_function__RadarTrack__acceleration_covariance(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * morai_msgs__msg__RadarTrack__rosidl_typesupport_introspection_c__get_const_function__RadarTrack__acceleration_covariance(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * morai_msgs__msg__RadarTrack__rosidl_typesupport_introspection_c__get_function__RadarTrack__acceleration_covariance(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void morai_msgs__msg__RadarTrack__rosidl_typesupport_introspection_c__fetch_function__RadarTrack__acceleration_covariance(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    morai_msgs__msg__RadarTrack__rosidl_typesupport_introspection_c__get_const_function__RadarTrack__acceleration_covariance(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void morai_msgs__msg__RadarTrack__rosidl_typesupport_introspection_c__assign_function__RadarTrack__acceleration_covariance(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    morai_msgs__msg__RadarTrack__rosidl_typesupport_introspection_c__get_function__RadarTrack__acceleration_covariance(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool morai_msgs__msg__RadarTrack__rosidl_typesupport_introspection_c__resize_function__RadarTrack__acceleration_covariance(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t morai_msgs__msg__RadarTrack__rosidl_typesupport_introspection_c__size_function__RadarTrack__size_covariance(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * morai_msgs__msg__RadarTrack__rosidl_typesupport_introspection_c__get_const_function__RadarTrack__size_covariance(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * morai_msgs__msg__RadarTrack__rosidl_typesupport_introspection_c__get_function__RadarTrack__size_covariance(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void morai_msgs__msg__RadarTrack__rosidl_typesupport_introspection_c__fetch_function__RadarTrack__size_covariance(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    morai_msgs__msg__RadarTrack__rosidl_typesupport_introspection_c__get_const_function__RadarTrack__size_covariance(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void morai_msgs__msg__RadarTrack__rosidl_typesupport_introspection_c__assign_function__RadarTrack__size_covariance(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    morai_msgs__msg__RadarTrack__rosidl_typesupport_introspection_c__get_function__RadarTrack__size_covariance(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool morai_msgs__msg__RadarTrack__rosidl_typesupport_introspection_c__resize_function__RadarTrack__size_covariance(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember morai_msgs__msg__RadarTrack__rosidl_typesupport_introspection_c__RadarTrack_message_member_array[11] = {
  {
    "uuid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs__msg__RadarTrack, uuid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs__msg__RadarTrack, position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs__msg__RadarTrack, velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "acceleration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs__msg__RadarTrack, acceleration),  // bytes offset in struct
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
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs__msg__RadarTrack, size),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "classification",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs__msg__RadarTrack, classification),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "position_covariance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs__msg__RadarTrack, position_covariance),  // bytes offset in struct
    NULL,  // default value
    morai_msgs__msg__RadarTrack__rosidl_typesupport_introspection_c__size_function__RadarTrack__position_covariance,  // size() function pointer
    morai_msgs__msg__RadarTrack__rosidl_typesupport_introspection_c__get_const_function__RadarTrack__position_covariance,  // get_const(index) function pointer
    morai_msgs__msg__RadarTrack__rosidl_typesupport_introspection_c__get_function__RadarTrack__position_covariance,  // get(index) function pointer
    morai_msgs__msg__RadarTrack__rosidl_typesupport_introspection_c__fetch_function__RadarTrack__position_covariance,  // fetch(index, &value) function pointer
    morai_msgs__msg__RadarTrack__rosidl_typesupport_introspection_c__assign_function__RadarTrack__position_covariance,  // assign(index, value) function pointer
    morai_msgs__msg__RadarTrack__rosidl_typesupport_introspection_c__resize_function__RadarTrack__position_covariance  // resize(index) function pointer
  },
  {
    "velocity_covariance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs__msg__RadarTrack, velocity_covariance),  // bytes offset in struct
    NULL,  // default value
    morai_msgs__msg__RadarTrack__rosidl_typesupport_introspection_c__size_function__RadarTrack__velocity_covariance,  // size() function pointer
    morai_msgs__msg__RadarTrack__rosidl_typesupport_introspection_c__get_const_function__RadarTrack__velocity_covariance,  // get_const(index) function pointer
    morai_msgs__msg__RadarTrack__rosidl_typesupport_introspection_c__get_function__RadarTrack__velocity_covariance,  // get(index) function pointer
    morai_msgs__msg__RadarTrack__rosidl_typesupport_introspection_c__fetch_function__RadarTrack__velocity_covariance,  // fetch(index, &value) function pointer
    morai_msgs__msg__RadarTrack__rosidl_typesupport_introspection_c__assign_function__RadarTrack__velocity_covariance,  // assign(index, value) function pointer
    morai_msgs__msg__RadarTrack__rosidl_typesupport_introspection_c__resize_function__RadarTrack__velocity_covariance  // resize(index) function pointer
  },
  {
    "acceleration_covariance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs__msg__RadarTrack, acceleration_covariance),  // bytes offset in struct
    NULL,  // default value
    morai_msgs__msg__RadarTrack__rosidl_typesupport_introspection_c__size_function__RadarTrack__acceleration_covariance,  // size() function pointer
    morai_msgs__msg__RadarTrack__rosidl_typesupport_introspection_c__get_const_function__RadarTrack__acceleration_covariance,  // get_const(index) function pointer
    morai_msgs__msg__RadarTrack__rosidl_typesupport_introspection_c__get_function__RadarTrack__acceleration_covariance,  // get(index) function pointer
    morai_msgs__msg__RadarTrack__rosidl_typesupport_introspection_c__fetch_function__RadarTrack__acceleration_covariance,  // fetch(index, &value) function pointer
    morai_msgs__msg__RadarTrack__rosidl_typesupport_introspection_c__assign_function__RadarTrack__acceleration_covariance,  // assign(index, value) function pointer
    morai_msgs__msg__RadarTrack__rosidl_typesupport_introspection_c__resize_function__RadarTrack__acceleration_covariance  // resize(index) function pointer
  },
  {
    "size_covariance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs__msg__RadarTrack, size_covariance),  // bytes offset in struct
    NULL,  // default value
    morai_msgs__msg__RadarTrack__rosidl_typesupport_introspection_c__size_function__RadarTrack__size_covariance,  // size() function pointer
    morai_msgs__msg__RadarTrack__rosidl_typesupport_introspection_c__get_const_function__RadarTrack__size_covariance,  // get_const(index) function pointer
    morai_msgs__msg__RadarTrack__rosidl_typesupport_introspection_c__get_function__RadarTrack__size_covariance,  // get(index) function pointer
    morai_msgs__msg__RadarTrack__rosidl_typesupport_introspection_c__fetch_function__RadarTrack__size_covariance,  // fetch(index, &value) function pointer
    morai_msgs__msg__RadarTrack__rosidl_typesupport_introspection_c__assign_function__RadarTrack__size_covariance,  // assign(index, value) function pointer
    morai_msgs__msg__RadarTrack__rosidl_typesupport_introspection_c__resize_function__RadarTrack__size_covariance  // resize(index) function pointer
  },
  {
    "amplitude",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs__msg__RadarTrack, amplitude),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers morai_msgs__msg__RadarTrack__rosidl_typesupport_introspection_c__RadarTrack_message_members = {
  "morai_msgs__msg",  // message namespace
  "RadarTrack",  // message name
  11,  // number of fields
  sizeof(morai_msgs__msg__RadarTrack),
  morai_msgs__msg__RadarTrack__rosidl_typesupport_introspection_c__RadarTrack_message_member_array,  // message members
  morai_msgs__msg__RadarTrack__rosidl_typesupport_introspection_c__RadarTrack_init_function,  // function to initialize message memory (memory has to be allocated)
  morai_msgs__msg__RadarTrack__rosidl_typesupport_introspection_c__RadarTrack_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t morai_msgs__msg__RadarTrack__rosidl_typesupport_introspection_c__RadarTrack_message_type_support_handle = {
  0,
  &morai_msgs__msg__RadarTrack__rosidl_typesupport_introspection_c__RadarTrack_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_morai_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, morai_msgs, msg, RadarTrack)() {
  morai_msgs__msg__RadarTrack__rosidl_typesupport_introspection_c__RadarTrack_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  morai_msgs__msg__RadarTrack__rosidl_typesupport_introspection_c__RadarTrack_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  morai_msgs__msg__RadarTrack__rosidl_typesupport_introspection_c__RadarTrack_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  morai_msgs__msg__RadarTrack__rosidl_typesupport_introspection_c__RadarTrack_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  if (!morai_msgs__msg__RadarTrack__rosidl_typesupport_introspection_c__RadarTrack_message_type_support_handle.typesupport_identifier) {
    morai_msgs__msg__RadarTrack__rosidl_typesupport_introspection_c__RadarTrack_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &morai_msgs__msg__RadarTrack__rosidl_typesupport_introspection_c__RadarTrack_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
