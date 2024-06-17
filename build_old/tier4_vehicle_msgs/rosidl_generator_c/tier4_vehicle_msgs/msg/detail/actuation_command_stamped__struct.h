// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tier4_vehicle_msgs:msg/ActuationCommandStamped.idl
// generated code does not contain a copyright notice

#ifndef TIER4_VEHICLE_MSGS__MSG__DETAIL__ACTUATION_COMMAND_STAMPED__STRUCT_H_
#define TIER4_VEHICLE_MSGS__MSG__DETAIL__ACTUATION_COMMAND_STAMPED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'actuation'
#include "tier4_vehicle_msgs/msg/detail/actuation_command__struct.h"

/// Struct defined in msg/ActuationCommandStamped in the package tier4_vehicle_msgs.
typedef struct tier4_vehicle_msgs__msg__ActuationCommandStamped
{
  std_msgs__msg__Header header;
  tier4_vehicle_msgs__msg__ActuationCommand actuation;
} tier4_vehicle_msgs__msg__ActuationCommandStamped;

// Struct for a sequence of tier4_vehicle_msgs__msg__ActuationCommandStamped.
typedef struct tier4_vehicle_msgs__msg__ActuationCommandStamped__Sequence
{
  tier4_vehicle_msgs__msg__ActuationCommandStamped * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tier4_vehicle_msgs__msg__ActuationCommandStamped__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIER4_VEHICLE_MSGS__MSG__DETAIL__ACTUATION_COMMAND_STAMPED__STRUCT_H_
