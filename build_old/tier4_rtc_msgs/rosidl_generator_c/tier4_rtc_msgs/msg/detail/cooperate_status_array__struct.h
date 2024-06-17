// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tier4_rtc_msgs:msg/CooperateStatusArray.idl
// generated code does not contain a copyright notice

#ifndef TIER4_RTC_MSGS__MSG__DETAIL__COOPERATE_STATUS_ARRAY__STRUCT_H_
#define TIER4_RTC_MSGS__MSG__DETAIL__COOPERATE_STATUS_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'statuses'
#include "tier4_rtc_msgs/msg/detail/cooperate_status__struct.h"

/// Struct defined in msg/CooperateStatusArray in the package tier4_rtc_msgs.
typedef struct tier4_rtc_msgs__msg__CooperateStatusArray
{
  builtin_interfaces__msg__Time stamp;
  tier4_rtc_msgs__msg__CooperateStatus__Sequence statuses;
} tier4_rtc_msgs__msg__CooperateStatusArray;

// Struct for a sequence of tier4_rtc_msgs__msg__CooperateStatusArray.
typedef struct tier4_rtc_msgs__msg__CooperateStatusArray__Sequence
{
  tier4_rtc_msgs__msg__CooperateStatusArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tier4_rtc_msgs__msg__CooperateStatusArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIER4_RTC_MSGS__MSG__DETAIL__COOPERATE_STATUS_ARRAY__STRUCT_H_
