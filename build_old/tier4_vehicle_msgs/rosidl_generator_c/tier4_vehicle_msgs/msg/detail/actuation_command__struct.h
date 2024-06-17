// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tier4_vehicle_msgs:msg/ActuationCommand.idl
// generated code does not contain a copyright notice

#ifndef TIER4_VEHICLE_MSGS__MSG__DETAIL__ACTUATION_COMMAND__STRUCT_H_
#define TIER4_VEHICLE_MSGS__MSG__DETAIL__ACTUATION_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/ActuationCommand in the package tier4_vehicle_msgs.
typedef struct tier4_vehicle_msgs__msg__ActuationCommand
{
  double accel_cmd;
  double brake_cmd;
  double steer_cmd;
} tier4_vehicle_msgs__msg__ActuationCommand;

// Struct for a sequence of tier4_vehicle_msgs__msg__ActuationCommand.
typedef struct tier4_vehicle_msgs__msg__ActuationCommand__Sequence
{
  tier4_vehicle_msgs__msg__ActuationCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tier4_vehicle_msgs__msg__ActuationCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIER4_VEHICLE_MSGS__MSG__DETAIL__ACTUATION_COMMAND__STRUCT_H_
