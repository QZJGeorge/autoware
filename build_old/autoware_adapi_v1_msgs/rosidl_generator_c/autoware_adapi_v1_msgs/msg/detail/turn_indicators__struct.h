// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_adapi_v1_msgs:msg/TurnIndicators.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__TURN_INDICATORS__STRUCT_H_
#define AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__TURN_INDICATORS__STRUCT_H_

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
  autoware_adapi_v1_msgs__msg__TurnIndicators__UNKNOWN = 0
};

/// Constant 'DISABLE'.
enum
{
  autoware_adapi_v1_msgs__msg__TurnIndicators__DISABLE = 1
};

/// Constant 'LEFT'.
enum
{
  autoware_adapi_v1_msgs__msg__TurnIndicators__LEFT = 2
};

/// Constant 'RIGHT'.
enum
{
  autoware_adapi_v1_msgs__msg__TurnIndicators__RIGHT = 3
};

/// Struct defined in msg/TurnIndicators in the package autoware_adapi_v1_msgs.
/**
  * constants
 */
typedef struct autoware_adapi_v1_msgs__msg__TurnIndicators
{
  uint8_t status;
} autoware_adapi_v1_msgs__msg__TurnIndicators;

// Struct for a sequence of autoware_adapi_v1_msgs__msg__TurnIndicators.
typedef struct autoware_adapi_v1_msgs__msg__TurnIndicators__Sequence
{
  autoware_adapi_v1_msgs__msg__TurnIndicators * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_adapi_v1_msgs__msg__TurnIndicators__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__TURN_INDICATORS__STRUCT_H_
