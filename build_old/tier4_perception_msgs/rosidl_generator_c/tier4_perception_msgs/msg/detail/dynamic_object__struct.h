// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tier4_perception_msgs:msg/DynamicObject.idl
// generated code does not contain a copyright notice

#ifndef TIER4_PERCEPTION_MSGS__MSG__DETAIL__DYNAMIC_OBJECT__STRUCT_H_
#define TIER4_PERCEPTION_MSGS__MSG__DETAIL__DYNAMIC_OBJECT__STRUCT_H_

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
// Member 'semantic'
#include "tier4_perception_msgs/msg/detail/semantic__struct.h"
// Member 'state'
#include "tier4_perception_msgs/msg/detail/state__struct.h"
// Member 'shape'
#include "tier4_perception_msgs/msg/detail/shape__struct.h"

/// Struct defined in msg/DynamicObject in the package tier4_perception_msgs.
typedef struct tier4_perception_msgs__msg__DynamicObject
{
  unique_identifier_msgs__msg__UUID id;
  tier4_perception_msgs__msg__Semantic semantic;
  tier4_perception_msgs__msg__State state;
  tier4_perception_msgs__msg__Shape shape;
} tier4_perception_msgs__msg__DynamicObject;

// Struct for a sequence of tier4_perception_msgs__msg__DynamicObject.
typedef struct tier4_perception_msgs__msg__DynamicObject__Sequence
{
  tier4_perception_msgs__msg__DynamicObject * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tier4_perception_msgs__msg__DynamicObject__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIER4_PERCEPTION_MSGS__MSG__DETAIL__DYNAMIC_OBJECT__STRUCT_H_
