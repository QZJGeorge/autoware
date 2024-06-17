// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_adapi_v1_msgs:msg/CooperationDecision.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__COOPERATION_DECISION__STRUCT_H_
#define AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__COOPERATION_DECISION__STRUCT_H_

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
  autoware_adapi_v1_msgs__msg__CooperationDecision__UNKNOWN = 0
};

/// Constant 'DEACTIVATE'.
enum
{
  autoware_adapi_v1_msgs__msg__CooperationDecision__DEACTIVATE = 1
};

/// Constant 'ACTIVATE'.
enum
{
  autoware_adapi_v1_msgs__msg__CooperationDecision__ACTIVATE = 2
};

/// Constant 'AUTONOMOUS'.
enum
{
  autoware_adapi_v1_msgs__msg__CooperationDecision__AUTONOMOUS = 3
};

/// Constant 'UNDECIDED'.
enum
{
  autoware_adapi_v1_msgs__msg__CooperationDecision__UNDECIDED = 4
};

/// Struct defined in msg/CooperationDecision in the package autoware_adapi_v1_msgs.
typedef struct autoware_adapi_v1_msgs__msg__CooperationDecision
{
  uint8_t decision;
} autoware_adapi_v1_msgs__msg__CooperationDecision;

// Struct for a sequence of autoware_adapi_v1_msgs__msg__CooperationDecision.
typedef struct autoware_adapi_v1_msgs__msg__CooperationDecision__Sequence
{
  autoware_adapi_v1_msgs__msg__CooperationDecision * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_adapi_v1_msgs__msg__CooperationDecision__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__COOPERATION_DECISION__STRUCT_H_
