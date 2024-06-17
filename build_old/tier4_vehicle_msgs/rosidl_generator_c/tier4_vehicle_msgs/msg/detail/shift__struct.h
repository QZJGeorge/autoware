// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tier4_vehicle_msgs:msg/Shift.idl
// generated code does not contain a copyright notice

#ifndef TIER4_VEHICLE_MSGS__MSG__DETAIL__SHIFT__STRUCT_H_
#define TIER4_VEHICLE_MSGS__MSG__DETAIL__SHIFT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'NONE'.
enum
{
  tier4_vehicle_msgs__msg__Shift__NONE = 0
};

/// Constant 'PARKING'.
enum
{
  tier4_vehicle_msgs__msg__Shift__PARKING = 1
};

/// Constant 'REVERSE'.
enum
{
  tier4_vehicle_msgs__msg__Shift__REVERSE = 2
};

/// Constant 'NEUTRAL'.
enum
{
  tier4_vehicle_msgs__msg__Shift__NEUTRAL = 3
};

/// Constant 'DRIVE'.
enum
{
  tier4_vehicle_msgs__msg__Shift__DRIVE = 4
};

/// Constant 'LOW'.
enum
{
  tier4_vehicle_msgs__msg__Shift__LOW = 5
};

/// Struct defined in msg/Shift in the package tier4_vehicle_msgs.
typedef struct tier4_vehicle_msgs__msg__Shift
{
  int32_t data;
} tier4_vehicle_msgs__msg__Shift;

// Struct for a sequence of tier4_vehicle_msgs__msg__Shift.
typedef struct tier4_vehicle_msgs__msg__Shift__Sequence
{
  tier4_vehicle_msgs__msg__Shift * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tier4_vehicle_msgs__msg__Shift__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIER4_VEHICLE_MSGS__MSG__DETAIL__SHIFT__STRUCT_H_
