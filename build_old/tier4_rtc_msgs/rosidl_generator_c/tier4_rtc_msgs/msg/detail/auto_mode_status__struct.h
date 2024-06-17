// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tier4_rtc_msgs:msg/AutoModeStatus.idl
// generated code does not contain a copyright notice

#ifndef TIER4_RTC_MSGS__MSG__DETAIL__AUTO_MODE_STATUS__STRUCT_H_
#define TIER4_RTC_MSGS__MSG__DETAIL__AUTO_MODE_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'module'
#include "tier4_rtc_msgs/msg/detail/module__struct.h"

/// Struct defined in msg/AutoModeStatus in the package tier4_rtc_msgs.
typedef struct tier4_rtc_msgs__msg__AutoModeStatus
{
  tier4_rtc_msgs__msg__Module module;
  bool is_auto_mode;
} tier4_rtc_msgs__msg__AutoModeStatus;

// Struct for a sequence of tier4_rtc_msgs__msg__AutoModeStatus.
typedef struct tier4_rtc_msgs__msg__AutoModeStatus__Sequence
{
  tier4_rtc_msgs__msg__AutoModeStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tier4_rtc_msgs__msg__AutoModeStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIER4_RTC_MSGS__MSG__DETAIL__AUTO_MODE_STATUS__STRUCT_H_
