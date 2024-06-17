// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from control_performance_analysis:msg/ErrorStamped.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_PERFORMANCE_ANALYSIS__MSG__DETAIL__ERROR_STAMPED__STRUCT_H_
#define CONTROL_PERFORMANCE_ANALYSIS__MSG__DETAIL__ERROR_STAMPED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'error'
#include "control_performance_analysis/msg/detail/error__struct.h"

/// Struct defined in msg/ErrorStamped in the package control_performance_analysis.
typedef struct control_performance_analysis__msg__ErrorStamped
{
  std_msgs__msg__Header header;
  control_performance_analysis__msg__Error error;
} control_performance_analysis__msg__ErrorStamped;

// Struct for a sequence of control_performance_analysis__msg__ErrorStamped.
typedef struct control_performance_analysis__msg__ErrorStamped__Sequence
{
  control_performance_analysis__msg__ErrorStamped * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_performance_analysis__msg__ErrorStamped__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CONTROL_PERFORMANCE_ANALYSIS__MSG__DETAIL__ERROR_STAMPED__STRUCT_H_
