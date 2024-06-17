// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mcity_msgs:msg/Control.idl
// generated code does not contain a copyright notice

#ifndef MCITY_MSGS__MSG__DETAIL__CONTROL__STRUCT_H_
#define MCITY_MSGS__MSG__DETAIL__CONTROL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Control in the package mcity_msgs.
typedef struct mcity_msgs__msg__Control
{
  /// ros time
  double timestamp;
  int32_t count;
  /// brake pedal opening
  double brake_cmd;
  /// throttle pedal openning
  double throttle_cmd;
  /// (-2.5pi to 2.5pi)
  double steering_cmd;
  int16_t gear_cmd;
  int16_t turn_signal_cmd;
} mcity_msgs__msg__Control;

// Struct for a sequence of mcity_msgs__msg__Control.
typedef struct mcity_msgs__msg__Control__Sequence
{
  mcity_msgs__msg__Control * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mcity_msgs__msg__Control__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MCITY_MSGS__MSG__DETAIL__CONTROL__STRUCT_H_
