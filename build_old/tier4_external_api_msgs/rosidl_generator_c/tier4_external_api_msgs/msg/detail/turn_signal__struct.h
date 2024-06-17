// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tier4_external_api_msgs:msg/TurnSignal.idl
// generated code does not contain a copyright notice

#ifndef TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__TURN_SIGNAL__STRUCT_H_
#define TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__TURN_SIGNAL__STRUCT_H_

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
  tier4_external_api_msgs__msg__TurnSignal__NONE = 0
};

/// Constant 'LEFT'.
enum
{
  tier4_external_api_msgs__msg__TurnSignal__LEFT = 1
};

/// Constant 'RIGHT'.
enum
{
  tier4_external_api_msgs__msg__TurnSignal__RIGHT = 2
};

/// Constant 'HAZARD'.
enum
{
  tier4_external_api_msgs__msg__TurnSignal__HAZARD = 3
};

/// Struct defined in msg/TurnSignal in the package tier4_external_api_msgs.
/**
  * constants
 */
typedef struct tier4_external_api_msgs__msg__TurnSignal
{
  /// fields
  uint8_t data;
} tier4_external_api_msgs__msg__TurnSignal;

// Struct for a sequence of tier4_external_api_msgs__msg__TurnSignal.
typedef struct tier4_external_api_msgs__msg__TurnSignal__Sequence
{
  tier4_external_api_msgs__msg__TurnSignal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tier4_external_api_msgs__msg__TurnSignal__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__TURN_SIGNAL__STRUCT_H_
