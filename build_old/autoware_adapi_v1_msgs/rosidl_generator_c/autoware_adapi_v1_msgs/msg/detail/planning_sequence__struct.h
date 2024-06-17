// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_adapi_v1_msgs:msg/PlanningSequence.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__PLANNING_SEQUENCE__STRUCT_H_
#define AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__PLANNING_SEQUENCE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'CHANGE'.
/**
  * for avoidance behavior
 */
static const char * const autoware_adapi_v1_msgs__msg__PlanningSequence__CHANGE = "change";

/// Constant 'RETURN'.
static const char * const autoware_adapi_v1_msgs__msg__PlanningSequence__RETURN = "return";

/// Struct defined in msg/PlanningSequence in the package autoware_adapi_v1_msgs.
/**
  * These constants are used in the sequence field of the SteeringFactor/VelocityFactor.
 */
typedef struct autoware_adapi_v1_msgs__msg__PlanningSequence
{
  uint8_t structure_needs_at_least_one_member;
} autoware_adapi_v1_msgs__msg__PlanningSequence;

// Struct for a sequence of autoware_adapi_v1_msgs__msg__PlanningSequence.
typedef struct autoware_adapi_v1_msgs__msg__PlanningSequence__Sequence
{
  autoware_adapi_v1_msgs__msg__PlanningSequence * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_adapi_v1_msgs__msg__PlanningSequence__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__PLANNING_SEQUENCE__STRUCT_H_
