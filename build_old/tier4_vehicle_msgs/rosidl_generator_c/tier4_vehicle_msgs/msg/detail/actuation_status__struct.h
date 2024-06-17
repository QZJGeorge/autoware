// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tier4_vehicle_msgs:msg/ActuationStatus.idl
// generated code does not contain a copyright notice

#ifndef TIER4_VEHICLE_MSGS__MSG__DETAIL__ACTUATION_STATUS__STRUCT_H_
#define TIER4_VEHICLE_MSGS__MSG__DETAIL__ACTUATION_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/ActuationStatus in the package tier4_vehicle_msgs.
typedef struct tier4_vehicle_msgs__msg__ActuationStatus
{
  double accel_status;
  double brake_status;
  double steer_status;
} tier4_vehicle_msgs__msg__ActuationStatus;

// Struct for a sequence of tier4_vehicle_msgs__msg__ActuationStatus.
typedef struct tier4_vehicle_msgs__msg__ActuationStatus__Sequence
{
  tier4_vehicle_msgs__msg__ActuationStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tier4_vehicle_msgs__msg__ActuationStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIER4_VEHICLE_MSGS__MSG__DETAIL__ACTUATION_STATUS__STRUCT_H_
