// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_adapi_v1_msgs:msg/DynamicObject.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__DYNAMIC_OBJECT__STRUCT_H_
#define AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__DYNAMIC_OBJECT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'classification'
#include "autoware_adapi_v1_msgs/msg/detail/object_classification__struct.h"
// Member 'kinematics'
#include "autoware_adapi_v1_msgs/msg/detail/dynamic_object_kinematics__struct.h"
// Member 'shape'
#include "shape_msgs/msg/detail/solid_primitive__struct.h"

/// Struct defined in msg/DynamicObject in the package autoware_adapi_v1_msgs.
typedef struct autoware_adapi_v1_msgs__msg__DynamicObject
{
  unique_identifier_msgs__msg__UUID id;
  double existence_probability;
  autoware_adapi_v1_msgs__msg__ObjectClassification__Sequence classification;
  autoware_adapi_v1_msgs__msg__DynamicObjectKinematics kinematics;
  shape_msgs__msg__SolidPrimitive shape;
} autoware_adapi_v1_msgs__msg__DynamicObject;

// Struct for a sequence of autoware_adapi_v1_msgs__msg__DynamicObject.
typedef struct autoware_adapi_v1_msgs__msg__DynamicObject__Sequence
{
  autoware_adapi_v1_msgs__msg__DynamicObject * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_adapi_v1_msgs__msg__DynamicObject__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__DYNAMIC_OBJECT__STRUCT_H_
