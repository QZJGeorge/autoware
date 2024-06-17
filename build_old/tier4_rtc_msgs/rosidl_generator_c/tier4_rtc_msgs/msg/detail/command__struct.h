// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tier4_rtc_msgs:msg/Command.idl
// generated code does not contain a copyright notice

#ifndef TIER4_RTC_MSGS__MSG__DETAIL__COMMAND__STRUCT_H_
#define TIER4_RTC_MSGS__MSG__DETAIL__COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'DEACTIVATE'.
enum
{
  tier4_rtc_msgs__msg__Command__DEACTIVATE = 0
};

/// Constant 'ACTIVATE'.
enum
{
  tier4_rtc_msgs__msg__Command__ACTIVATE = 1
};

/// Struct defined in msg/Command in the package tier4_rtc_msgs.
typedef struct tier4_rtc_msgs__msg__Command
{
  uint8_t type;
} tier4_rtc_msgs__msg__Command;

// Struct for a sequence of tier4_rtc_msgs__msg__Command.
typedef struct tier4_rtc_msgs__msg__Command__Sequence
{
  tier4_rtc_msgs__msg__Command * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tier4_rtc_msgs__msg__Command__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIER4_RTC_MSGS__MSG__DETAIL__COMMAND__STRUCT_H_
