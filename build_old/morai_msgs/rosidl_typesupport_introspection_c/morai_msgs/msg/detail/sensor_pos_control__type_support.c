// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from morai_msgs:msg/SensorPosControl.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "morai_msgs/msg/detail/sensor_pos_control__rosidl_typesupport_introspection_c.h"
#include "morai_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "morai_msgs/msg/detail/sensor_pos_control__functions.h"
#include "morai_msgs/msg/detail/sensor_pos_control__struct.h"


// Include directives for member types
// Member `sensor_index`
// Member `pose_x`
// Member `pose_y`
// Member `pose_z`
// Member `roll`
// Member `pitch`
// Member `yaw`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void morai_msgs__msg__SensorPosControl__rosidl_typesupport_introspection_c__SensorPosControl_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  morai_msgs__msg__SensorPosControl__init(message_memory);
}

void morai_msgs__msg__SensorPosControl__rosidl_typesupport_introspection_c__SensorPosControl_fini_function(void * message_memory)
{
  morai_msgs__msg__SensorPosControl__fini(message_memory);
}

size_t morai_msgs__msg__SensorPosControl__rosidl_typesupport_introspection_c__size_function__SensorPosControl__sensor_index(
  const void * untyped_member)
{
  const rosidl_runtime_c__int16__Sequence * member =
    (const rosidl_runtime_c__int16__Sequence *)(untyped_member);
  return member->size;
}

const void * morai_msgs__msg__SensorPosControl__rosidl_typesupport_introspection_c__get_const_function__SensorPosControl__sensor_index(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int16__Sequence * member =
    (const rosidl_runtime_c__int16__Sequence *)(untyped_member);
  return &member->data[index];
}

void * morai_msgs__msg__SensorPosControl__rosidl_typesupport_introspection_c__get_function__SensorPosControl__sensor_index(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int16__Sequence * member =
    (rosidl_runtime_c__int16__Sequence *)(untyped_member);
  return &member->data[index];
}

void morai_msgs__msg__SensorPosControl__rosidl_typesupport_introspection_c__fetch_function__SensorPosControl__sensor_index(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int16_t * item =
    ((const int16_t *)
    morai_msgs__msg__SensorPosControl__rosidl_typesupport_introspection_c__get_const_function__SensorPosControl__sensor_index(untyped_member, index));
  int16_t * value =
    (int16_t *)(untyped_value);
  *value = *item;
}

void morai_msgs__msg__SensorPosControl__rosidl_typesupport_introspection_c__assign_function__SensorPosControl__sensor_index(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int16_t * item =
    ((int16_t *)
    morai_msgs__msg__SensorPosControl__rosidl_typesupport_introspection_c__get_function__SensorPosControl__sensor_index(untyped_member, index));
  const int16_t * value =
    (const int16_t *)(untyped_value);
  *item = *value;
}

bool morai_msgs__msg__SensorPosControl__rosidl_typesupport_introspection_c__resize_function__SensorPosControl__sensor_index(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int16__Sequence * member =
    (rosidl_runtime_c__int16__Sequence *)(untyped_member);
  rosidl_runtime_c__int16__Sequence__fini(member);
  return rosidl_runtime_c__int16__Sequence__init(member, size);
}

size_t morai_msgs__msg__SensorPosControl__rosidl_typesupport_introspection_c__size_function__SensorPosControl__pose_x(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * morai_msgs__msg__SensorPosControl__rosidl_typesupport_introspection_c__get_const_function__SensorPosControl__pose_x(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * morai_msgs__msg__SensorPosControl__rosidl_typesupport_introspection_c__get_function__SensorPosControl__pose_x(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void morai_msgs__msg__SensorPosControl__rosidl_typesupport_introspection_c__fetch_function__SensorPosControl__pose_x(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    morai_msgs__msg__SensorPosControl__rosidl_typesupport_introspection_c__get_const_function__SensorPosControl__pose_x(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void morai_msgs__msg__SensorPosControl__rosidl_typesupport_introspection_c__assign_function__SensorPosControl__pose_x(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    morai_msgs__msg__SensorPosControl__rosidl_typesupport_introspection_c__get_function__SensorPosControl__pose_x(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool morai_msgs__msg__SensorPosControl__rosidl_typesupport_introspection_c__resize_function__SensorPosControl__pose_x(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t morai_msgs__msg__SensorPosControl__rosidl_typesupport_introspection_c__size_function__SensorPosControl__pose_y(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * morai_msgs__msg__SensorPosControl__rosidl_typesupport_introspection_c__get_const_function__SensorPosControl__pose_y(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * morai_msgs__msg__SensorPosControl__rosidl_typesupport_introspection_c__get_function__SensorPosControl__pose_y(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void morai_msgs__msg__SensorPosControl__rosidl_typesupport_introspection_c__fetch_function__SensorPosControl__pose_y(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    morai_msgs__msg__SensorPosControl__rosidl_typesupport_introspection_c__get_const_function__SensorPosControl__pose_y(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void morai_msgs__msg__SensorPosControl__rosidl_typesupport_introspection_c__assign_function__SensorPosControl__pose_y(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    morai_msgs__msg__SensorPosControl__rosidl_typesupport_introspection_c__get_function__SensorPosControl__pose_y(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool morai_msgs__msg__SensorPosControl__rosidl_typesupport_introspection_c__resize_function__SensorPosControl__pose_y(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t morai_msgs__msg__SensorPosControl__rosidl_typesupport_introspection_c__size_function__SensorPosControl__pose_z(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * morai_msgs__msg__SensorPosControl__rosidl_typesupport_introspection_c__get_const_function__SensorPosControl__pose_z(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * morai_msgs__msg__SensorPosControl__rosidl_typesupport_introspection_c__get_function__SensorPosControl__pose_z(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void morai_msgs__msg__SensorPosControl__rosidl_typesupport_introspection_c__fetch_function__SensorPosControl__pose_z(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    morai_msgs__msg__SensorPosControl__rosidl_typesupport_introspection_c__get_const_function__SensorPosControl__pose_z(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void morai_msgs__msg__SensorPosControl__rosidl_typesupport_introspection_c__assign_function__SensorPosControl__pose_z(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    morai_msgs__msg__SensorPosControl__rosidl_typesupport_introspection_c__get_function__SensorPosControl__pose_z(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool morai_msgs__msg__SensorPosControl__rosidl_typesupport_introspection_c__resize_function__SensorPosControl__pose_z(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t morai_msgs__msg__SensorPosControl__rosidl_typesupport_introspection_c__size_function__SensorPosControl__roll(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * morai_msgs__msg__SensorPosControl__rosidl_typesupport_introspection_c__get_const_function__SensorPosControl__roll(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * morai_msgs__msg__SensorPosControl__rosidl_typesupport_introspection_c__get_function__SensorPosControl__roll(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void morai_msgs__msg__SensorPosControl__rosidl_typesupport_introspection_c__fetch_function__SensorPosControl__roll(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    morai_msgs__msg__SensorPosControl__rosidl_typesupport_introspection_c__get_const_function__SensorPosControl__roll(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void morai_msgs__msg__SensorPosControl__rosidl_typesupport_introspection_c__assign_function__SensorPosControl__roll(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    morai_msgs__msg__SensorPosControl__rosidl_typesupport_introspection_c__get_function__SensorPosControl__roll(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool morai_msgs__msg__SensorPosControl__rosidl_typesupport_introspection_c__resize_function__SensorPosControl__roll(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t morai_msgs__msg__SensorPosControl__rosidl_typesupport_introspection_c__size_function__SensorPosControl__pitch(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * morai_msgs__msg__SensorPosControl__rosidl_typesupport_introspection_c__get_const_function__SensorPosControl__pitch(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * morai_msgs__msg__SensorPosControl__rosidl_typesupport_introspection_c__get_function__SensorPosControl__pitch(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void morai_msgs__msg__SensorPosControl__rosidl_typesupport_introspection_c__fetch_function__SensorPosControl__pitch(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    morai_msgs__msg__SensorPosControl__rosidl_typesupport_introspection_c__get_const_function__SensorPosControl__pitch(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void morai_msgs__msg__SensorPosControl__rosidl_typesupport_introspection_c__assign_function__SensorPosControl__pitch(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    morai_msgs__msg__SensorPosControl__rosidl_typesupport_introspection_c__get_function__SensorPosControl__pitch(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool morai_msgs__msg__SensorPosControl__rosidl_typesupport_introspection_c__resize_function__SensorPosControl__pitch(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t morai_msgs__msg__SensorPosControl__rosidl_typesupport_introspection_c__size_function__SensorPosControl__yaw(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * morai_msgs__msg__SensorPosControl__rosidl_typesupport_introspection_c__get_const_function__SensorPosControl__yaw(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * morai_msgs__msg__SensorPosControl__rosidl_typesupport_introspection_c__get_function__SensorPosControl__yaw(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void morai_msgs__msg__SensorPosControl__rosidl_typesupport_introspection_c__fetch_function__SensorPosControl__yaw(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    morai_msgs__msg__SensorPosControl__rosidl_typesupport_introspection_c__get_const_function__SensorPosControl__yaw(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void morai_msgs__msg__SensorPosControl__rosidl_typesupport_introspection_c__assign_function__SensorPosControl__yaw(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    morai_msgs__msg__SensorPosControl__rosidl_typesupport_introspection_c__get_function__SensorPosControl__yaw(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool morai_msgs__msg__SensorPosControl__rosidl_typesupport_introspection_c__resize_function__SensorPosControl__yaw(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember morai_msgs__msg__SensorPosControl__rosidl_typesupport_introspection_c__SensorPosControl_message_member_array[7] = {
  {
    "sensor_index",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs__msg__SensorPosControl, sensor_index),  // bytes offset in struct
    NULL,  // default value
    morai_msgs__msg__SensorPosControl__rosidl_typesupport_introspection_c__size_function__SensorPosControl__sensor_index,  // size() function pointer
    morai_msgs__msg__SensorPosControl__rosidl_typesupport_introspection_c__get_const_function__SensorPosControl__sensor_index,  // get_const(index) function pointer
    morai_msgs__msg__SensorPosControl__rosidl_typesupport_introspection_c__get_function__SensorPosControl__sensor_index,  // get(index) function pointer
    morai_msgs__msg__SensorPosControl__rosidl_typesupport_introspection_c__fetch_function__SensorPosControl__sensor_index,  // fetch(index, &value) function pointer
    morai_msgs__msg__SensorPosControl__rosidl_typesupport_introspection_c__assign_function__SensorPosControl__sensor_index,  // assign(index, value) function pointer
    morai_msgs__msg__SensorPosControl__rosidl_typesupport_introspection_c__resize_function__SensorPosControl__sensor_index  // resize(index) function pointer
  },
  {
    "pose_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs__msg__SensorPosControl, pose_x),  // bytes offset in struct
    NULL,  // default value
    morai_msgs__msg__SensorPosControl__rosidl_typesupport_introspection_c__size_function__SensorPosControl__pose_x,  // size() function pointer
    morai_msgs__msg__SensorPosControl__rosidl_typesupport_introspection_c__get_const_function__SensorPosControl__pose_x,  // get_const(index) function pointer
    morai_msgs__msg__SensorPosControl__rosidl_typesupport_introspection_c__get_function__SensorPosControl__pose_x,  // get(index) function pointer
    morai_msgs__msg__SensorPosControl__rosidl_typesupport_introspection_c__fetch_function__SensorPosControl__pose_x,  // fetch(index, &value) function pointer
    morai_msgs__msg__SensorPosControl__rosidl_typesupport_introspection_c__assign_function__SensorPosControl__pose_x,  // assign(index, value) function pointer
    morai_msgs__msg__SensorPosControl__rosidl_typesupport_introspection_c__resize_function__SensorPosControl__pose_x  // resize(index) function pointer
  },
  {
    "pose_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs__msg__SensorPosControl, pose_y),  // bytes offset in struct
    NULL,  // default value
    morai_msgs__msg__SensorPosControl__rosidl_typesupport_introspection_c__size_function__SensorPosControl__pose_y,  // size() function pointer
    morai_msgs__msg__SensorPosControl__rosidl_typesupport_introspection_c__get_const_function__SensorPosControl__pose_y,  // get_const(index) function pointer
    morai_msgs__msg__SensorPosControl__rosidl_typesupport_introspection_c__get_function__SensorPosControl__pose_y,  // get(index) function pointer
    morai_msgs__msg__SensorPosControl__rosidl_typesupport_introspection_c__fetch_function__SensorPosControl__pose_y,  // fetch(index, &value) function pointer
    morai_msgs__msg__SensorPosControl__rosidl_typesupport_introspection_c__assign_function__SensorPosControl__pose_y,  // assign(index, value) function pointer
    morai_msgs__msg__SensorPosControl__rosidl_typesupport_introspection_c__resize_function__SensorPosControl__pose_y  // resize(index) function pointer
  },
  {
    "pose_z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs__msg__SensorPosControl, pose_z),  // bytes offset in struct
    NULL,  // default value
    morai_msgs__msg__SensorPosControl__rosidl_typesupport_introspection_c__size_function__SensorPosControl__pose_z,  // size() function pointer
    morai_msgs__msg__SensorPosControl__rosidl_typesupport_introspection_c__get_const_function__SensorPosControl__pose_z,  // get_const(index) function pointer
    morai_msgs__msg__SensorPosControl__rosidl_typesupport_introspection_c__get_function__SensorPosControl__pose_z,  // get(index) function pointer
    morai_msgs__msg__SensorPosControl__rosidl_typesupport_introspection_c__fetch_function__SensorPosControl__pose_z,  // fetch(index, &value) function pointer
    morai_msgs__msg__SensorPosControl__rosidl_typesupport_introspection_c__assign_function__SensorPosControl__pose_z,  // assign(index, value) function pointer
    morai_msgs__msg__SensorPosControl__rosidl_typesupport_introspection_c__resize_function__SensorPosControl__pose_z  // resize(index) function pointer
  },
  {
    "roll",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs__msg__SensorPosControl, roll),  // bytes offset in struct
    NULL,  // default value
    morai_msgs__msg__SensorPosControl__rosidl_typesupport_introspection_c__size_function__SensorPosControl__roll,  // size() function pointer
    morai_msgs__msg__SensorPosControl__rosidl_typesupport_introspection_c__get_const_function__SensorPosControl__roll,  // get_const(index) function pointer
    morai_msgs__msg__SensorPosControl__rosidl_typesupport_introspection_c__get_function__SensorPosControl__roll,  // get(index) function pointer
    morai_msgs__msg__SensorPosControl__rosidl_typesupport_introspection_c__fetch_function__SensorPosControl__roll,  // fetch(index, &value) function pointer
    morai_msgs__msg__SensorPosControl__rosidl_typesupport_introspection_c__assign_function__SensorPosControl__roll,  // assign(index, value) function pointer
    morai_msgs__msg__SensorPosControl__rosidl_typesupport_introspection_c__resize_function__SensorPosControl__roll  // resize(index) function pointer
  },
  {
    "pitch",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs__msg__SensorPosControl, pitch),  // bytes offset in struct
    NULL,  // default value
    morai_msgs__msg__SensorPosControl__rosidl_typesupport_introspection_c__size_function__SensorPosControl__pitch,  // size() function pointer
    morai_msgs__msg__SensorPosControl__rosidl_typesupport_introspection_c__get_const_function__SensorPosControl__pitch,  // get_const(index) function pointer
    morai_msgs__msg__SensorPosControl__rosidl_typesupport_introspection_c__get_function__SensorPosControl__pitch,  // get(index) function pointer
    morai_msgs__msg__SensorPosControl__rosidl_typesupport_introspection_c__fetch_function__SensorPosControl__pitch,  // fetch(index, &value) function pointer
    morai_msgs__msg__SensorPosControl__rosidl_typesupport_introspection_c__assign_function__SensorPosControl__pitch,  // assign(index, value) function pointer
    morai_msgs__msg__SensorPosControl__rosidl_typesupport_introspection_c__resize_function__SensorPosControl__pitch  // resize(index) function pointer
  },
  {
    "yaw",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs__msg__SensorPosControl, yaw),  // bytes offset in struct
    NULL,  // default value
    morai_msgs__msg__SensorPosControl__rosidl_typesupport_introspection_c__size_function__SensorPosControl__yaw,  // size() function pointer
    morai_msgs__msg__SensorPosControl__rosidl_typesupport_introspection_c__get_const_function__SensorPosControl__yaw,  // get_const(index) function pointer
    morai_msgs__msg__SensorPosControl__rosidl_typesupport_introspection_c__get_function__SensorPosControl__yaw,  // get(index) function pointer
    morai_msgs__msg__SensorPosControl__rosidl_typesupport_introspection_c__fetch_function__SensorPosControl__yaw,  // fetch(index, &value) function pointer
    morai_msgs__msg__SensorPosControl__rosidl_typesupport_introspection_c__assign_function__SensorPosControl__yaw,  // assign(index, value) function pointer
    morai_msgs__msg__SensorPosControl__rosidl_typesupport_introspection_c__resize_function__SensorPosControl__yaw  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers morai_msgs__msg__SensorPosControl__rosidl_typesupport_introspection_c__SensorPosControl_message_members = {
  "morai_msgs__msg",  // message namespace
  "SensorPosControl",  // message name
  7,  // number of fields
  sizeof(morai_msgs__msg__SensorPosControl),
  morai_msgs__msg__SensorPosControl__rosidl_typesupport_introspection_c__SensorPosControl_message_member_array,  // message members
  morai_msgs__msg__SensorPosControl__rosidl_typesupport_introspection_c__SensorPosControl_init_function,  // function to initialize message memory (memory has to be allocated)
  morai_msgs__msg__SensorPosControl__rosidl_typesupport_introspection_c__SensorPosControl_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t morai_msgs__msg__SensorPosControl__rosidl_typesupport_introspection_c__SensorPosControl_message_type_support_handle = {
  0,
  &morai_msgs__msg__SensorPosControl__rosidl_typesupport_introspection_c__SensorPosControl_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_morai_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, morai_msgs, msg, SensorPosControl)() {
  if (!morai_msgs__msg__SensorPosControl__rosidl_typesupport_introspection_c__SensorPosControl_message_type_support_handle.typesupport_identifier) {
    morai_msgs__msg__SensorPosControl__rosidl_typesupport_introspection_c__SensorPosControl_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &morai_msgs__msg__SensorPosControl__rosidl_typesupport_introspection_c__SensorPosControl_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
