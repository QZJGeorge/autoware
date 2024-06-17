// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tier4_vehicle_msgs:msg/BatteryStatus.idl
// generated code does not contain a copyright notice

#ifndef TIER4_VEHICLE_MSGS__MSG__DETAIL__BATTERY_STATUS__STRUCT_H_
#define TIER4_VEHICLE_MSGS__MSG__DETAIL__BATTERY_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in msg/BatteryStatus in the package tier4_vehicle_msgs.
typedef struct tier4_vehicle_msgs__msg__BatteryStatus
{
  builtin_interfaces__msg__Time stamp;
  float energy_level;
} tier4_vehicle_msgs__msg__BatteryStatus;

// Struct for a sequence of tier4_vehicle_msgs__msg__BatteryStatus.
typedef struct tier4_vehicle_msgs__msg__BatteryStatus__Sequence
{
  tier4_vehicle_msgs__msg__BatteryStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tier4_vehicle_msgs__msg__BatteryStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIER4_VEHICLE_MSGS__MSG__DETAIL__BATTERY_STATUS__STRUCT_H_
