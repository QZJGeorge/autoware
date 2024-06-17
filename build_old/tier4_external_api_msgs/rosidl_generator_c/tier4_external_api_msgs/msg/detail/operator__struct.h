// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tier4_external_api_msgs:msg/Operator.idl
// generated code does not contain a copyright notice

#ifndef TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__OPERATOR__STRUCT_H_
#define TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__OPERATOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'DRIVER'.
enum
{
  tier4_external_api_msgs__msg__Operator__DRIVER = 1
};

/// Constant 'AUTONOMOUS'.
enum
{
  tier4_external_api_msgs__msg__Operator__AUTONOMOUS = 2
};

/// Constant 'OBSERVER'.
enum
{
  tier4_external_api_msgs__msg__Operator__OBSERVER = 3
};

/// Struct defined in msg/Operator in the package tier4_external_api_msgs.
/**
  * constants
 */
typedef struct tier4_external_api_msgs__msg__Operator
{
  /// fields
  uint8_t mode;
} tier4_external_api_msgs__msg__Operator;

// Struct for a sequence of tier4_external_api_msgs__msg__Operator.
typedef struct tier4_external_api_msgs__msg__Operator__Sequence
{
  tier4_external_api_msgs__msg__Operator * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tier4_external_api_msgs__msg__Operator__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__OPERATOR__STRUCT_H_
