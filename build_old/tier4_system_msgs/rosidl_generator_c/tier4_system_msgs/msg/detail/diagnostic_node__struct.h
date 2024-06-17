// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tier4_system_msgs:msg/DiagnosticNode.idl
// generated code does not contain a copyright notice

#ifndef TIER4_SYSTEM_MSGS__MSG__DETAIL__DIAGNOSTIC_NODE__STRUCT_H_
#define TIER4_SYSTEM_MSGS__MSG__DETAIL__DIAGNOSTIC_NODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'status'
#include "diagnostic_msgs/msg/detail/diagnostic_status__struct.h"
// Member 'links'
#include "tier4_system_msgs/msg/detail/diagnostic_link__struct.h"

/// Struct defined in msg/DiagnosticNode in the package tier4_system_msgs.
typedef struct tier4_system_msgs__msg__DiagnosticNode
{
  diagnostic_msgs__msg__DiagnosticStatus status;
  tier4_system_msgs__msg__DiagnosticLink__Sequence links;
} tier4_system_msgs__msg__DiagnosticNode;

// Struct for a sequence of tier4_system_msgs__msg__DiagnosticNode.
typedef struct tier4_system_msgs__msg__DiagnosticNode__Sequence
{
  tier4_system_msgs__msg__DiagnosticNode * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tier4_system_msgs__msg__DiagnosticNode__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIER4_SYSTEM_MSGS__MSG__DETAIL__DIAGNOSTIC_NODE__STRUCT_H_
