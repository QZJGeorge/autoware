// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tier4_external_api_msgs:msg/LocalizationScoreArray.idl
// generated code does not contain a copyright notice

#ifndef TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__LOCALIZATION_SCORE_ARRAY__STRUCT_H_
#define TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__LOCALIZATION_SCORE_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'values'
#include "tier4_external_api_msgs/msg/detail/localization_score__struct.h"

/// Struct defined in msg/LocalizationScoreArray in the package tier4_external_api_msgs.
typedef struct tier4_external_api_msgs__msg__LocalizationScoreArray
{
  tier4_external_api_msgs__msg__LocalizationScore__Sequence values;
} tier4_external_api_msgs__msg__LocalizationScoreArray;

// Struct for a sequence of tier4_external_api_msgs__msg__LocalizationScoreArray.
typedef struct tier4_external_api_msgs__msg__LocalizationScoreArray__Sequence
{
  tier4_external_api_msgs__msg__LocalizationScoreArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tier4_external_api_msgs__msg__LocalizationScoreArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__LOCALIZATION_SCORE_ARRAY__STRUCT_H_
