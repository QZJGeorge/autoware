// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tier4_system_msgs:msg/DiagnosticLink.idl
// generated code does not contain a copyright notice

#ifndef TIER4_SYSTEM_MSGS__MSG__DETAIL__DIAGNOSTIC_LINK__STRUCT_H_
#define TIER4_SYSTEM_MSGS__MSG__DETAIL__DIAGNOSTIC_LINK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/DiagnosticLink in the package tier4_system_msgs.
typedef struct tier4_system_msgs__msg__DiagnosticLink
{
  /// The index of the nodes in the DiagnosticGraph message.
  uint32_t index;
  /// Whether the linked node is used if the dependency is conditional.
  bool used;
} tier4_system_msgs__msg__DiagnosticLink;

// Struct for a sequence of tier4_system_msgs__msg__DiagnosticLink.
typedef struct tier4_system_msgs__msg__DiagnosticLink__Sequence
{
  tier4_system_msgs__msg__DiagnosticLink * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tier4_system_msgs__msg__DiagnosticLink__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIER4_SYSTEM_MSGS__MSG__DETAIL__DIAGNOSTIC_LINK__STRUCT_H_
