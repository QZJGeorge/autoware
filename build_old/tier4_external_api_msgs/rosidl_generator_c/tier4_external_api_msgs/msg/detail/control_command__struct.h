// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tier4_external_api_msgs:msg/ControlCommand.idl
// generated code does not contain a copyright notice

#ifndef TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__CONTROL_COMMAND__STRUCT_H_
#define TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__CONTROL_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/ControlCommand in the package tier4_external_api_msgs.
typedef struct tier4_external_api_msgs__msg__ControlCommand
{
  double steering_angle;
  double steering_angle_velocity;
  double throttle;
  double brake;
} tier4_external_api_msgs__msg__ControlCommand;

// Struct for a sequence of tier4_external_api_msgs__msg__ControlCommand.
typedef struct tier4_external_api_msgs__msg__ControlCommand__Sequence
{
  tier4_external_api_msgs__msg__ControlCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tier4_external_api_msgs__msg__ControlCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__CONTROL_COMMAND__STRUCT_H_
