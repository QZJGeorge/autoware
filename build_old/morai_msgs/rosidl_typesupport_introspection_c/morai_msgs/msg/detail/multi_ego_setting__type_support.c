// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from morai_msgs:msg/MultiEgoSetting.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "morai_msgs/msg/detail/multi_ego_setting__rosidl_typesupport_introspection_c.h"
#include "morai_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "morai_msgs/msg/detail/multi_ego_setting__functions.h"
#include "morai_msgs/msg/detail/multi_ego_setting__struct.h"


// Include directives for member types
// Member `ego_index`
// Member `global_position_x`
// Member `global_position_y`
// Member `global_position_z`
// Member `global_roll`
// Member `global_pitch`
// Member `global_yaw`
// Member `velocity`
// Member `gear`
// Member `ctrl_mode`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__MultiEgoSetting_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  morai_msgs__msg__MultiEgoSetting__init(message_memory);
}

void morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__MultiEgoSetting_fini_function(void * message_memory)
{
  morai_msgs__msg__MultiEgoSetting__fini(message_memory);
}

size_t morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__size_function__MultiEgoSetting__ego_index(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__get_const_function__MultiEgoSetting__ego_index(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__get_function__MultiEgoSetting__ego_index(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__fetch_function__MultiEgoSetting__ego_index(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__get_const_function__MultiEgoSetting__ego_index(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__assign_function__MultiEgoSetting__ego_index(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__get_function__MultiEgoSetting__ego_index(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__resize_function__MultiEgoSetting__ego_index(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

size_t morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__size_function__MultiEgoSetting__global_position_x(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__get_const_function__MultiEgoSetting__global_position_x(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__get_function__MultiEgoSetting__global_position_x(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__fetch_function__MultiEgoSetting__global_position_x(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__get_const_function__MultiEgoSetting__global_position_x(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__assign_function__MultiEgoSetting__global_position_x(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__get_function__MultiEgoSetting__global_position_x(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__resize_function__MultiEgoSetting__global_position_x(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__size_function__MultiEgoSetting__global_position_y(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__get_const_function__MultiEgoSetting__global_position_y(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__get_function__MultiEgoSetting__global_position_y(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__fetch_function__MultiEgoSetting__global_position_y(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__get_const_function__MultiEgoSetting__global_position_y(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__assign_function__MultiEgoSetting__global_position_y(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__get_function__MultiEgoSetting__global_position_y(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__resize_function__MultiEgoSetting__global_position_y(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__size_function__MultiEgoSetting__global_position_z(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__get_const_function__MultiEgoSetting__global_position_z(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__get_function__MultiEgoSetting__global_position_z(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__fetch_function__MultiEgoSetting__global_position_z(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__get_const_function__MultiEgoSetting__global_position_z(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__assign_function__MultiEgoSetting__global_position_z(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__get_function__MultiEgoSetting__global_position_z(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__resize_function__MultiEgoSetting__global_position_z(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__size_function__MultiEgoSetting__global_roll(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__get_const_function__MultiEgoSetting__global_roll(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__get_function__MultiEgoSetting__global_roll(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__fetch_function__MultiEgoSetting__global_roll(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__get_const_function__MultiEgoSetting__global_roll(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__assign_function__MultiEgoSetting__global_roll(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__get_function__MultiEgoSetting__global_roll(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__resize_function__MultiEgoSetting__global_roll(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__size_function__MultiEgoSetting__global_pitch(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__get_const_function__MultiEgoSetting__global_pitch(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__get_function__MultiEgoSetting__global_pitch(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__fetch_function__MultiEgoSetting__global_pitch(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__get_const_function__MultiEgoSetting__global_pitch(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__assign_function__MultiEgoSetting__global_pitch(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__get_function__MultiEgoSetting__global_pitch(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__resize_function__MultiEgoSetting__global_pitch(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__size_function__MultiEgoSetting__global_yaw(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__get_const_function__MultiEgoSetting__global_yaw(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__get_function__MultiEgoSetting__global_yaw(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__fetch_function__MultiEgoSetting__global_yaw(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__get_const_function__MultiEgoSetting__global_yaw(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__assign_function__MultiEgoSetting__global_yaw(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__get_function__MultiEgoSetting__global_yaw(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__resize_function__MultiEgoSetting__global_yaw(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__size_function__MultiEgoSetting__velocity(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__get_const_function__MultiEgoSetting__velocity(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__get_function__MultiEgoSetting__velocity(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__fetch_function__MultiEgoSetting__velocity(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__get_const_function__MultiEgoSetting__velocity(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__assign_function__MultiEgoSetting__velocity(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__get_function__MultiEgoSetting__velocity(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__resize_function__MultiEgoSetting__velocity(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__size_function__MultiEgoSetting__gear(
  const void * untyped_member)
{
  const rosidl_runtime_c__int8__Sequence * member =
    (const rosidl_runtime_c__int8__Sequence *)(untyped_member);
  return member->size;
}

const void * morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__get_const_function__MultiEgoSetting__gear(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int8__Sequence * member =
    (const rosidl_runtime_c__int8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__get_function__MultiEgoSetting__gear(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int8__Sequence * member =
    (rosidl_runtime_c__int8__Sequence *)(untyped_member);
  return &member->data[index];
}

void morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__fetch_function__MultiEgoSetting__gear(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int8_t * item =
    ((const int8_t *)
    morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__get_const_function__MultiEgoSetting__gear(untyped_member, index));
  int8_t * value =
    (int8_t *)(untyped_value);
  *value = *item;
}

void morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__assign_function__MultiEgoSetting__gear(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int8_t * item =
    ((int8_t *)
    morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__get_function__MultiEgoSetting__gear(untyped_member, index));
  const int8_t * value =
    (const int8_t *)(untyped_value);
  *item = *value;
}

bool morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__resize_function__MultiEgoSetting__gear(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int8__Sequence * member =
    (rosidl_runtime_c__int8__Sequence *)(untyped_member);
  rosidl_runtime_c__int8__Sequence__fini(member);
  return rosidl_runtime_c__int8__Sequence__init(member, size);
}

size_t morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__size_function__MultiEgoSetting__ctrl_mode(
  const void * untyped_member)
{
  const rosidl_runtime_c__int8__Sequence * member =
    (const rosidl_runtime_c__int8__Sequence *)(untyped_member);
  return member->size;
}

const void * morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__get_const_function__MultiEgoSetting__ctrl_mode(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int8__Sequence * member =
    (const rosidl_runtime_c__int8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__get_function__MultiEgoSetting__ctrl_mode(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int8__Sequence * member =
    (rosidl_runtime_c__int8__Sequence *)(untyped_member);
  return &member->data[index];
}

void morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__fetch_function__MultiEgoSetting__ctrl_mode(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int8_t * item =
    ((const int8_t *)
    morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__get_const_function__MultiEgoSetting__ctrl_mode(untyped_member, index));
  int8_t * value =
    (int8_t *)(untyped_value);
  *value = *item;
}

void morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__assign_function__MultiEgoSetting__ctrl_mode(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int8_t * item =
    ((int8_t *)
    morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__get_function__MultiEgoSetting__ctrl_mode(untyped_member, index));
  const int8_t * value =
    (const int8_t *)(untyped_value);
  *item = *value;
}

bool morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__resize_function__MultiEgoSetting__ctrl_mode(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int8__Sequence * member =
    (rosidl_runtime_c__int8__Sequence *)(untyped_member);
  rosidl_runtime_c__int8__Sequence__fini(member);
  return rosidl_runtime_c__int8__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__MultiEgoSetting_message_member_array[12] = {
  {
    "number_of_ego_vehicle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs__msg__MultiEgoSetting, number_of_ego_vehicle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "camera_index",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs__msg__MultiEgoSetting, camera_index),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ego_index",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs__msg__MultiEgoSetting, ego_index),  // bytes offset in struct
    NULL,  // default value
    morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__size_function__MultiEgoSetting__ego_index,  // size() function pointer
    morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__get_const_function__MultiEgoSetting__ego_index,  // get_const(index) function pointer
    morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__get_function__MultiEgoSetting__ego_index,  // get(index) function pointer
    morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__fetch_function__MultiEgoSetting__ego_index,  // fetch(index, &value) function pointer
    morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__assign_function__MultiEgoSetting__ego_index,  // assign(index, value) function pointer
    morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__resize_function__MultiEgoSetting__ego_index  // resize(index) function pointer
  },
  {
    "global_position_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs__msg__MultiEgoSetting, global_position_x),  // bytes offset in struct
    NULL,  // default value
    morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__size_function__MultiEgoSetting__global_position_x,  // size() function pointer
    morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__get_const_function__MultiEgoSetting__global_position_x,  // get_const(index) function pointer
    morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__get_function__MultiEgoSetting__global_position_x,  // get(index) function pointer
    morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__fetch_function__MultiEgoSetting__global_position_x,  // fetch(index, &value) function pointer
    morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__assign_function__MultiEgoSetting__global_position_x,  // assign(index, value) function pointer
    morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__resize_function__MultiEgoSetting__global_position_x  // resize(index) function pointer
  },
  {
    "global_position_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs__msg__MultiEgoSetting, global_position_y),  // bytes offset in struct
    NULL,  // default value
    morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__size_function__MultiEgoSetting__global_position_y,  // size() function pointer
    morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__get_const_function__MultiEgoSetting__global_position_y,  // get_const(index) function pointer
    morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__get_function__MultiEgoSetting__global_position_y,  // get(index) function pointer
    morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__fetch_function__MultiEgoSetting__global_position_y,  // fetch(index, &value) function pointer
    morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__assign_function__MultiEgoSetting__global_position_y,  // assign(index, value) function pointer
    morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__resize_function__MultiEgoSetting__global_position_y  // resize(index) function pointer
  },
  {
    "global_position_z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs__msg__MultiEgoSetting, global_position_z),  // bytes offset in struct
    NULL,  // default value
    morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__size_function__MultiEgoSetting__global_position_z,  // size() function pointer
    morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__get_const_function__MultiEgoSetting__global_position_z,  // get_const(index) function pointer
    morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__get_function__MultiEgoSetting__global_position_z,  // get(index) function pointer
    morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__fetch_function__MultiEgoSetting__global_position_z,  // fetch(index, &value) function pointer
    morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__assign_function__MultiEgoSetting__global_position_z,  // assign(index, value) function pointer
    morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__resize_function__MultiEgoSetting__global_position_z  // resize(index) function pointer
  },
  {
    "global_roll",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs__msg__MultiEgoSetting, global_roll),  // bytes offset in struct
    NULL,  // default value
    morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__size_function__MultiEgoSetting__global_roll,  // size() function pointer
    morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__get_const_function__MultiEgoSetting__global_roll,  // get_const(index) function pointer
    morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__get_function__MultiEgoSetting__global_roll,  // get(index) function pointer
    morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__fetch_function__MultiEgoSetting__global_roll,  // fetch(index, &value) function pointer
    morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__assign_function__MultiEgoSetting__global_roll,  // assign(index, value) function pointer
    morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__resize_function__MultiEgoSetting__global_roll  // resize(index) function pointer
  },
  {
    "global_pitch",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs__msg__MultiEgoSetting, global_pitch),  // bytes offset in struct
    NULL,  // default value
    morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__size_function__MultiEgoSetting__global_pitch,  // size() function pointer
    morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__get_const_function__MultiEgoSetting__global_pitch,  // get_const(index) function pointer
    morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__get_function__MultiEgoSetting__global_pitch,  // get(index) function pointer
    morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__fetch_function__MultiEgoSetting__global_pitch,  // fetch(index, &value) function pointer
    morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__assign_function__MultiEgoSetting__global_pitch,  // assign(index, value) function pointer
    morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__resize_function__MultiEgoSetting__global_pitch  // resize(index) function pointer
  },
  {
    "global_yaw",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs__msg__MultiEgoSetting, global_yaw),  // bytes offset in struct
    NULL,  // default value
    morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__size_function__MultiEgoSetting__global_yaw,  // size() function pointer
    morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__get_const_function__MultiEgoSetting__global_yaw,  // get_const(index) function pointer
    morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__get_function__MultiEgoSetting__global_yaw,  // get(index) function pointer
    morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__fetch_function__MultiEgoSetting__global_yaw,  // fetch(index, &value) function pointer
    morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__assign_function__MultiEgoSetting__global_yaw,  // assign(index, value) function pointer
    morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__resize_function__MultiEgoSetting__global_yaw  // resize(index) function pointer
  },
  {
    "velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs__msg__MultiEgoSetting, velocity),  // bytes offset in struct
    NULL,  // default value
    morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__size_function__MultiEgoSetting__velocity,  // size() function pointer
    morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__get_const_function__MultiEgoSetting__velocity,  // get_const(index) function pointer
    morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__get_function__MultiEgoSetting__velocity,  // get(index) function pointer
    morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__fetch_function__MultiEgoSetting__velocity,  // fetch(index, &value) function pointer
    morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__assign_function__MultiEgoSetting__velocity,  // assign(index, value) function pointer
    morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__resize_function__MultiEgoSetting__velocity  // resize(index) function pointer
  },
  {
    "gear",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs__msg__MultiEgoSetting, gear),  // bytes offset in struct
    NULL,  // default value
    morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__size_function__MultiEgoSetting__gear,  // size() function pointer
    morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__get_const_function__MultiEgoSetting__gear,  // get_const(index) function pointer
    morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__get_function__MultiEgoSetting__gear,  // get(index) function pointer
    morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__fetch_function__MultiEgoSetting__gear,  // fetch(index, &value) function pointer
    morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__assign_function__MultiEgoSetting__gear,  // assign(index, value) function pointer
    morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__resize_function__MultiEgoSetting__gear  // resize(index) function pointer
  },
  {
    "ctrl_mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs__msg__MultiEgoSetting, ctrl_mode),  // bytes offset in struct
    NULL,  // default value
    morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__size_function__MultiEgoSetting__ctrl_mode,  // size() function pointer
    morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__get_const_function__MultiEgoSetting__ctrl_mode,  // get_const(index) function pointer
    morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__get_function__MultiEgoSetting__ctrl_mode,  // get(index) function pointer
    morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__fetch_function__MultiEgoSetting__ctrl_mode,  // fetch(index, &value) function pointer
    morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__assign_function__MultiEgoSetting__ctrl_mode,  // assign(index, value) function pointer
    morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__resize_function__MultiEgoSetting__ctrl_mode  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__MultiEgoSetting_message_members = {
  "morai_msgs__msg",  // message namespace
  "MultiEgoSetting",  // message name
  12,  // number of fields
  sizeof(morai_msgs__msg__MultiEgoSetting),
  morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__MultiEgoSetting_message_member_array,  // message members
  morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__MultiEgoSetting_init_function,  // function to initialize message memory (memory has to be allocated)
  morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__MultiEgoSetting_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__MultiEgoSetting_message_type_support_handle = {
  0,
  &morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__MultiEgoSetting_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_morai_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, morai_msgs, msg, MultiEgoSetting)() {
  if (!morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__MultiEgoSetting_message_type_support_handle.typesupport_identifier) {
    morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__MultiEgoSetting_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &morai_msgs__msg__MultiEgoSetting__rosidl_typesupport_introspection_c__MultiEgoSetting_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
