// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tier4_external_api_msgs:msg/GearShift.idl
// generated code does not contain a copyright notice

#ifndef TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__GEAR_SHIFT__STRUCT_H_
#define TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__GEAR_SHIFT__STRUCT_H_

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
  tier4_external_api_msgs__msg__GearShift__NONE = 0
};

/// Constant 'PARKING'.
enum
{
  tier4_external_api_msgs__msg__GearShift__PARKING = 1
};

/// Constant 'REVERSE'.
enum
{
  tier4_external_api_msgs__msg__GearShift__REVERSE = 2
};

/// Constant 'NEUTRAL'.
enum
{
  tier4_external_api_msgs__msg__GearShift__NEUTRAL = 3
};

/// Constant 'DRIVE'.
enum
{
  tier4_external_api_msgs__msg__GearShift__DRIVE = 4
};

/// Constant 'LOW'.
enum
{
  tier4_external_api_msgs__msg__GearShift__LOW = 5
};

/// Struct defined in msg/GearShift in the package tier4_external_api_msgs.
/**
  * constants
 */
typedef struct tier4_external_api_msgs__msg__GearShift
{
  /// fields
  uint8_t data;
} tier4_external_api_msgs__msg__GearShift;

// Struct for a sequence of tier4_external_api_msgs__msg__GearShift.
typedef struct tier4_external_api_msgs__msg__GearShift__Sequence
{
  tier4_external_api_msgs__msg__GearShift * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tier4_external_api_msgs__msg__GearShift__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__GEAR_SHIFT__STRUCT_H_
