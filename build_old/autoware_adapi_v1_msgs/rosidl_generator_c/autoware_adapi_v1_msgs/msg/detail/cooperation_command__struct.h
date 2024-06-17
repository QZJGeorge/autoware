// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_adapi_v1_msgs:msg/CooperationCommand.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__COOPERATION_COMMAND__STRUCT_H_
#define AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__COOPERATION_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'uuid'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'cooperator'
#include "autoware_adapi_v1_msgs/msg/detail/cooperation_decision__struct.h"

/// Struct defined in msg/CooperationCommand in the package autoware_adapi_v1_msgs.
typedef struct autoware_adapi_v1_msgs__msg__CooperationCommand
{
  unique_identifier_msgs__msg__UUID uuid;
  autoware_adapi_v1_msgs__msg__CooperationDecision cooperator;
} autoware_adapi_v1_msgs__msg__CooperationCommand;

// Struct for a sequence of autoware_adapi_v1_msgs__msg__CooperationCommand.
typedef struct autoware_adapi_v1_msgs__msg__CooperationCommand__Sequence
{
  autoware_adapi_v1_msgs__msg__CooperationCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_adapi_v1_msgs__msg__CooperationCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__COOPERATION_COMMAND__STRUCT_H_
