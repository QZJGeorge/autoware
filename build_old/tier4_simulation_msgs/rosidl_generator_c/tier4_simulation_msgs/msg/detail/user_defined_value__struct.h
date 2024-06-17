// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tier4_simulation_msgs:msg/UserDefinedValue.idl
// generated code does not contain a copyright notice

#ifndef TIER4_SIMULATION_MSGS__MSG__DETAIL__USER_DEFINED_VALUE__STRUCT_H_
#define TIER4_SIMULATION_MSGS__MSG__DETAIL__USER_DEFINED_VALUE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'type'
#include "tier4_simulation_msgs/msg/detail/user_defined_value_type__struct.h"
// Member 'value'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/UserDefinedValue in the package tier4_simulation_msgs.
typedef struct tier4_simulation_msgs__msg__UserDefinedValue
{
  tier4_simulation_msgs__msg__UserDefinedValueType type;
  rosidl_runtime_c__String value;
} tier4_simulation_msgs__msg__UserDefinedValue;

// Struct for a sequence of tier4_simulation_msgs__msg__UserDefinedValue.
typedef struct tier4_simulation_msgs__msg__UserDefinedValue__Sequence
{
  tier4_simulation_msgs__msg__UserDefinedValue * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tier4_simulation_msgs__msg__UserDefinedValue__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIER4_SIMULATION_MSGS__MSG__DETAIL__USER_DEFINED_VALUE__STRUCT_H_
