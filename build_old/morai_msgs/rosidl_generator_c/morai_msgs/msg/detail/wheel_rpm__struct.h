// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from morai_msgs:msg/WheelRpm.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__WHEEL_RPM__STRUCT_H_
#define MORAI_MSGS__MSG__DETAIL__WHEEL_RPM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/WheelRpm in the package morai_msgs.
typedef struct morai_msgs__msg__WheelRpm
{
  float left_front_wheel_rpm;
  float left_rear_wheel_rpm;
  float right_front_wheel_rpm;
  float right_rear_wheel_rpm;
} morai_msgs__msg__WheelRpm;

// Struct for a sequence of morai_msgs__msg__WheelRpm.
typedef struct morai_msgs__msg__WheelRpm__Sequence
{
  morai_msgs__msg__WheelRpm * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} morai_msgs__msg__WheelRpm__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MORAI_MSGS__MSG__DETAIL__WHEEL_RPM__STRUCT_H_
