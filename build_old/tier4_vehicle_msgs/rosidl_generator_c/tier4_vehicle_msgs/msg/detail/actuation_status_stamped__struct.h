// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tier4_vehicle_msgs:msg/ActuationStatusStamped.idl
// generated code does not contain a copyright notice

#ifndef TIER4_VEHICLE_MSGS__MSG__DETAIL__ACTUATION_STATUS_STAMPED__STRUCT_H_
#define TIER4_VEHICLE_MSGS__MSG__DETAIL__ACTUATION_STATUS_STAMPED__STRUCT_H_

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
// Member 'status'
#include "tier4_vehicle_msgs/msg/detail/actuation_status__struct.h"

/// Struct defined in msg/ActuationStatusStamped in the package tier4_vehicle_msgs.
typedef struct tier4_vehicle_msgs__msg__ActuationStatusStamped
{
  std_msgs__msg__Header header;
  tier4_vehicle_msgs__msg__ActuationStatus status;
} tier4_vehicle_msgs__msg__ActuationStatusStamped;

// Struct for a sequence of tier4_vehicle_msgs__msg__ActuationStatusStamped.
typedef struct tier4_vehicle_msgs__msg__ActuationStatusStamped__Sequence
{
  tier4_vehicle_msgs__msg__ActuationStatusStamped * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tier4_vehicle_msgs__msg__ActuationStatusStamped__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIER4_VEHICLE_MSGS__MSG__DETAIL__ACTUATION_STATUS_STAMPED__STRUCT_H_
