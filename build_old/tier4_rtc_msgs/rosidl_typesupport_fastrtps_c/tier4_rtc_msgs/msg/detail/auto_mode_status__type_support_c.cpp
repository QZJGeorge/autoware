// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from tier4_rtc_msgs:msg/AutoModeStatus.idl
// generated code does not contain a copyright notice
#include "tier4_rtc_msgs/msg/detail/auto_mode_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "tier4_rtc_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "tier4_rtc_msgs/msg/detail/auto_mode_status__struct.h"
#include "tier4_rtc_msgs/msg/detail/auto_mode_status__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "tier4_rtc_msgs/msg/detail/module__functions.h"  // module

// forward declare type support functions
size_t get_serialized_size_tier4_rtc_msgs__msg__Module(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_tier4_rtc_msgs__msg__Module(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tier4_rtc_msgs, msg, Module)();


using _AutoModeStatus__ros_msg_type = tier4_rtc_msgs__msg__AutoModeStatus;

static bool _AutoModeStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _AutoModeStatus__ros_msg_type * ros_message = static_cast<const _AutoModeStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: module
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tier4_rtc_msgs, msg, Module
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->module, cdr))
    {
      return false;
    }
  }

  // Field name: is_auto_mode
  {
    cdr << (ros_message->is_auto_mode ? true : false);
  }

  return true;
}

static bool _AutoModeStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _AutoModeStatus__ros_msg_type * ros_message = static_cast<_AutoModeStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: module
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tier4_rtc_msgs, msg, Module
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->module))
    {
      return false;
    }
  }

  // Field name: is_auto_mode
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_auto_mode = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tier4_rtc_msgs
size_t get_serialized_size_tier4_rtc_msgs__msg__AutoModeStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _AutoModeStatus__ros_msg_type * ros_message = static_cast<const _AutoModeStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name module

  current_alignment += get_serialized_size_tier4_rtc_msgs__msg__Module(
    &(ros_message->module), current_alignment);
  // field.name is_auto_mode
  {
    size_t item_size = sizeof(ros_message->is_auto_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _AutoModeStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_tier4_rtc_msgs__msg__AutoModeStatus(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tier4_rtc_msgs
size_t max_serialized_size_tier4_rtc_msgs__msg__AutoModeStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: module
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_tier4_rtc_msgs__msg__Module(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: is_auto_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = tier4_rtc_msgs__msg__AutoModeStatus;
    is_plain =
      (
      offsetof(DataType, is_auto_mode) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _AutoModeStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_tier4_rtc_msgs__msg__AutoModeStatus(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_AutoModeStatus = {
  "tier4_rtc_msgs::msg",
  "AutoModeStatus",
  _AutoModeStatus__cdr_serialize,
  _AutoModeStatus__cdr_deserialize,
  _AutoModeStatus__get_serialized_size,
  _AutoModeStatus__max_serialized_size
};

static rosidl_message_type_support_t _AutoModeStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_AutoModeStatus,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tier4_rtc_msgs, msg, AutoModeStatus)() {
  return &_AutoModeStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
