// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_perception_msgs:msg/ObjectClassification.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_PERCEPTION_MSGS__MSG__DETAIL__OBJECT_CLASSIFICATION__STRUCT_H_
#define AUTOWARE_PERCEPTION_MSGS__MSG__DETAIL__OBJECT_CLASSIFICATION__STRUCT_H_

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
  autoware_perception_msgs__msg__ObjectClassification__UNKNOWN = 0
};

/// Constant 'CAR'.
enum
{
  autoware_perception_msgs__msg__ObjectClassification__CAR = 1
};

/// Constant 'TRUCK'.
enum
{
  autoware_perception_msgs__msg__ObjectClassification__TRUCK = 2
};

/// Constant 'BUS'.
enum
{
  autoware_perception_msgs__msg__ObjectClassification__BUS = 3
};

/// Constant 'TRAILER'.
enum
{
  autoware_perception_msgs__msg__ObjectClassification__TRAILER = 4
};

/// Constant 'MOTORCYCLE'.
enum
{
  autoware_perception_msgs__msg__ObjectClassification__MOTORCYCLE = 5
};

/// Constant 'BICYCLE'.
enum
{
  autoware_perception_msgs__msg__ObjectClassification__BICYCLE = 6
};

/// Constant 'PEDESTRIAN'.
enum
{
  autoware_perception_msgs__msg__ObjectClassification__PEDESTRIAN = 7
};

/// Struct defined in msg/ObjectClassification in the package autoware_perception_msgs.
typedef struct autoware_perception_msgs__msg__ObjectClassification
{
  uint8_t label;
  float probability;
} autoware_perception_msgs__msg__ObjectClassification;

// Struct for a sequence of autoware_perception_msgs__msg__ObjectClassification.
typedef struct autoware_perception_msgs__msg__ObjectClassification__Sequence
{
  autoware_perception_msgs__msg__ObjectClassification * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_perception_msgs__msg__ObjectClassification__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_PERCEPTION_MSGS__MSG__DETAIL__OBJECT_CLASSIFICATION__STRUCT_H_
