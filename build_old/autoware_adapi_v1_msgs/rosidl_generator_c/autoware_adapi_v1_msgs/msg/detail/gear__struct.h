// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_adapi_v1_msgs:msg/Gear.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__GEAR__STRUCT_H_
#define AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__GEAR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'UNKNOWN'.
enum
{
  autoware_adapi_v1_msgs__msg__Gear__UNKNOWN = 0
};

/// Constant 'NEUTRAL'.
enum
{
  autoware_adapi_v1_msgs__msg__Gear__NEUTRAL = 1
};

/// Constant 'DRIVE'.
enum
{
  autoware_adapi_v1_msgs__msg__Gear__DRIVE = 2
};

/// Constant 'REVERSE'.
enum
{
  autoware_adapi_v1_msgs__msg__Gear__REVERSE = 3
};

/// Constant 'PARK'.
enum
{
  autoware_adapi_v1_msgs__msg__Gear__PARK = 4
};

/// Constant 'LOW'.
enum
{
  autoware_adapi_v1_msgs__msg__Gear__LOW = 5
};

/// Struct defined in msg/Gear in the package autoware_adapi_v1_msgs.
/**
  * constants
 */
typedef struct autoware_adapi_v1_msgs__msg__Gear
{
  uint8_t status;
} autoware_adapi_v1_msgs__msg__Gear;

// Struct for a sequence of autoware_adapi_v1_msgs__msg__Gear.
typedef struct autoware_adapi_v1_msgs__msg__Gear__Sequence
{
  autoware_adapi_v1_msgs__msg__Gear * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_adapi_v1_msgs__msg__Gear__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__GEAR__STRUCT_H_
