// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from morai_msgs:msg/ERP42Info.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__ERP42_INFO__STRUCT_H_
#define MORAI_MSGS__MSG__DETAIL__ERP42_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/ERP42Info in the package morai_msgs.
typedef struct morai_msgs__msg__ERP42Info
{
  int32_t longl_cmd_type;
  float position_x;
  float position_y;
  float position_z;
  float roll;
  float pitch;
  float yaw;
  float velocity;
  float steering;
} morai_msgs__msg__ERP42Info;

// Struct for a sequence of morai_msgs__msg__ERP42Info.
typedef struct morai_msgs__msg__ERP42Info__Sequence
{
  morai_msgs__msg__ERP42Info * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} morai_msgs__msg__ERP42Info__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MORAI_MSGS__MSG__DETAIL__ERP42_INFO__STRUCT_H_
