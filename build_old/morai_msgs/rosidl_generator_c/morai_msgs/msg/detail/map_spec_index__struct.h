// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from morai_msgs:msg/MapSpecIndex.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__MAP_SPEC_INDEX__STRUCT_H_
#define MORAI_MSGS__MSG__DETAIL__MAP_SPEC_INDEX__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/MapSpecIndex in the package morai_msgs.
typedef struct morai_msgs__msg__MapSpecIndex
{
  bool load_map_data;
} morai_msgs__msg__MapSpecIndex;

// Struct for a sequence of morai_msgs__msg__MapSpecIndex.
typedef struct morai_msgs__msg__MapSpecIndex__Sequence
{
  morai_msgs__msg__MapSpecIndex * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} morai_msgs__msg__MapSpecIndex__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MORAI_MSGS__MSG__DETAIL__MAP_SPEC_INDEX__STRUCT_H_
