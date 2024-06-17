// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tier4_control_msgs:msg/GateMode.idl
// generated code does not contain a copyright notice

#ifndef TIER4_CONTROL_MSGS__MSG__DETAIL__GATE_MODE__STRUCT_H_
#define TIER4_CONTROL_MSGS__MSG__DETAIL__GATE_MODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'AUTO'.
enum
{
  tier4_control_msgs__msg__GateMode__AUTO = 0
};

/// Constant 'EXTERNAL'.
enum
{
  tier4_control_msgs__msg__GateMode__EXTERNAL = 1
};

/// Struct defined in msg/GateMode in the package tier4_control_msgs.
typedef struct tier4_control_msgs__msg__GateMode
{
  uint8_t data;
} tier4_control_msgs__msg__GateMode;

// Struct for a sequence of tier4_control_msgs__msg__GateMode.
typedef struct tier4_control_msgs__msg__GateMode__Sequence
{
  tier4_control_msgs__msg__GateMode * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tier4_control_msgs__msg__GateMode__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIER4_CONTROL_MSGS__MSG__DETAIL__GATE_MODE__STRUCT_H_
