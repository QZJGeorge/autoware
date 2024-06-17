// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tier4_rtc_msgs:srv/AutoMode.idl
// generated code does not contain a copyright notice

#ifndef TIER4_RTC_MSGS__SRV__DETAIL__AUTO_MODE__STRUCT_H_
#define TIER4_RTC_MSGS__SRV__DETAIL__AUTO_MODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/AutoMode in the package tier4_rtc_msgs.
typedef struct tier4_rtc_msgs__srv__AutoMode_Request
{
  bool enable;
} tier4_rtc_msgs__srv__AutoMode_Request;

// Struct for a sequence of tier4_rtc_msgs__srv__AutoMode_Request.
typedef struct tier4_rtc_msgs__srv__AutoMode_Request__Sequence
{
  tier4_rtc_msgs__srv__AutoMode_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tier4_rtc_msgs__srv__AutoMode_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/AutoMode in the package tier4_rtc_msgs.
typedef struct tier4_rtc_msgs__srv__AutoMode_Response
{
  bool success;
} tier4_rtc_msgs__srv__AutoMode_Response;

// Struct for a sequence of tier4_rtc_msgs__srv__AutoMode_Response.
typedef struct tier4_rtc_msgs__srv__AutoMode_Response__Sequence
{
  tier4_rtc_msgs__srv__AutoMode_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tier4_rtc_msgs__srv__AutoMode_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIER4_RTC_MSGS__SRV__DETAIL__AUTO_MODE__STRUCT_H_
