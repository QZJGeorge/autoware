// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tier4_simulation_msgs:msg/UserDefinedValueType.idl
// generated code does not contain a copyright notice

#ifndef TIER4_SIMULATION_MSGS__MSG__DETAIL__USER_DEFINED_VALUE_TYPE__STRUCT_H_
#define TIER4_SIMULATION_MSGS__MSG__DETAIL__USER_DEFINED_VALUE_TYPE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'BOOLEAN'.
enum
{
  tier4_simulation_msgs__msg__UserDefinedValueType__BOOLEAN = 0
};

/// Constant 'DATE_TIME'.
enum
{
  tier4_simulation_msgs__msg__UserDefinedValueType__DATE_TIME = 1
};

/// Constant 'DOUBLE'.
enum
{
  tier4_simulation_msgs__msg__UserDefinedValueType__DOUBLE = 2
};

/// Constant 'INTEGER'.
enum
{
  tier4_simulation_msgs__msg__UserDefinedValueType__INTEGER = 3
};

/// Constant 'STRING'.
enum
{
  tier4_simulation_msgs__msg__UserDefinedValueType__STRING = 4
};

/// Constant 'UNSIGNED_INT'.
enum
{
  tier4_simulation_msgs__msg__UserDefinedValueType__UNSIGNED_INT = 5
};

/// Constant 'UNSIGNED_SHORT'.
enum
{
  tier4_simulation_msgs__msg__UserDefinedValueType__UNSIGNED_SHORT = 6
};

/// Struct defined in msg/UserDefinedValueType in the package tier4_simulation_msgs.
typedef struct tier4_simulation_msgs__msg__UserDefinedValueType
{
  uint8_t data;
} tier4_simulation_msgs__msg__UserDefinedValueType;

// Struct for a sequence of tier4_simulation_msgs__msg__UserDefinedValueType.
typedef struct tier4_simulation_msgs__msg__UserDefinedValueType__Sequence
{
  tier4_simulation_msgs__msg__UserDefinedValueType * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tier4_simulation_msgs__msg__UserDefinedValueType__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIER4_SIMULATION_MSGS__MSG__DETAIL__USER_DEFINED_VALUE_TYPE__STRUCT_H_
