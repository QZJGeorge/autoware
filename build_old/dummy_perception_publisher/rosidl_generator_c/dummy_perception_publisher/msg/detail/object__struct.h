// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dummy_perception_publisher:msg/Object.idl
// generated code does not contain a copyright notice

#ifndef DUMMY_PERCEPTION_PUBLISHER__MSG__DETAIL__OBJECT__STRUCT_H_
#define DUMMY_PERCEPTION_PUBLISHER__MSG__DETAIL__OBJECT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ADD'.
enum
{
  dummy_perception_publisher__msg__Object__ADD = 0
};

/// Constant 'MODIFY'.
enum
{
  dummy_perception_publisher__msg__Object__MODIFY = 1
};

/// Constant 'DELETE'.
enum
{
  dummy_perception_publisher__msg__Object__DELETE = 2
};

/// Constant 'DELETEALL'.
enum
{
  dummy_perception_publisher__msg__Object__DELETEALL = 3
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'initial_state'
#include "dummy_perception_publisher/msg/detail/initial_state__struct.h"
// Member 'classification'
#include "autoware_auto_perception_msgs/msg/detail/object_classification__struct.h"
// Member 'shape'
#include "autoware_auto_perception_msgs/msg/detail/shape__struct.h"

/// Struct defined in msg/Object in the package dummy_perception_publisher.
typedef struct dummy_perception_publisher__msg__Object
{
  std_msgs__msg__Header header;
  unique_identifier_msgs__msg__UUID id;
  dummy_perception_publisher__msg__InitialState initial_state;
  autoware_auto_perception_msgs__msg__ObjectClassification classification;
  autoware_auto_perception_msgs__msg__Shape shape;
  float max_velocity;
  float min_velocity;
  int32_t action;
} dummy_perception_publisher__msg__Object;

// Struct for a sequence of dummy_perception_publisher__msg__Object.
typedef struct dummy_perception_publisher__msg__Object__Sequence
{
  dummy_perception_publisher__msg__Object * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dummy_perception_publisher__msg__Object__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DUMMY_PERCEPTION_PUBLISHER__MSG__DETAIL__OBJECT__STRUCT_H_
