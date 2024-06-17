// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tier4_external_api_msgs:msg/MetadataPackages.idl
// generated code does not contain a copyright notice

#ifndef TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__METADATA_PACKAGES__STRUCT_H_
#define TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__METADATA_PACKAGES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'format'
// Member 'json'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/MetadataPackages in the package tier4_external_api_msgs.
typedef struct tier4_external_api_msgs__msg__MetadataPackages
{
  rosidl_runtime_c__String format;
  rosidl_runtime_c__String json;
} tier4_external_api_msgs__msg__MetadataPackages;

// Struct for a sequence of tier4_external_api_msgs__msg__MetadataPackages.
typedef struct tier4_external_api_msgs__msg__MetadataPackages__Sequence
{
  tier4_external_api_msgs__msg__MetadataPackages * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tier4_external_api_msgs__msg__MetadataPackages__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__METADATA_PACKAGES__STRUCT_H_
