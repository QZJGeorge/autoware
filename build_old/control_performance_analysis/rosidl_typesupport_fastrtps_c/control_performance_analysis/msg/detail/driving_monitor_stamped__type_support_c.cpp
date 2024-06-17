// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from control_performance_analysis:msg/DrivingMonitorStamped.idl
// generated code does not contain a copyright notice
#include "control_performance_analysis/msg/detail/driving_monitor_stamped__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "control_performance_analysis/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "control_performance_analysis/msg/detail/driving_monitor_stamped__struct.h"
#include "control_performance_analysis/msg/detail/driving_monitor_stamped__functions.h"
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

#include "control_performance_analysis/msg/detail/float_stamped__functions.h"  // controller_processing_time, desired_steering_angle, lateral_acceleration, lateral_jerk, longitudinal_acceleration, longitudinal_jerk

// forward declare type support functions
size_t get_serialized_size_control_performance_analysis__msg__FloatStamped(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_control_performance_analysis__msg__FloatStamped(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, control_performance_analysis, msg, FloatStamped)();


using _DrivingMonitorStamped__ros_msg_type = control_performance_analysis__msg__DrivingMonitorStamped;

static bool _DrivingMonitorStamped__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _DrivingMonitorStamped__ros_msg_type * ros_message = static_cast<const _DrivingMonitorStamped__ros_msg_type *>(untyped_ros_message);
  // Field name: longitudinal_acceleration
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, control_performance_analysis, msg, FloatStamped
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->longitudinal_acceleration, cdr))
    {
      return false;
    }
  }

  // Field name: longitudinal_jerk
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, control_performance_analysis, msg, FloatStamped
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->longitudinal_jerk, cdr))
    {
      return false;
    }
  }

  // Field name: lateral_acceleration
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, control_performance_analysis, msg, FloatStamped
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->lateral_acceleration, cdr))
    {
      return false;
    }
  }

  // Field name: lateral_jerk
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, control_performance_analysis, msg, FloatStamped
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->lateral_jerk, cdr))
    {
      return false;
    }
  }

  // Field name: desired_steering_angle
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, control_performance_analysis, msg, FloatStamped
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->desired_steering_angle, cdr))
    {
      return false;
    }
  }

  // Field name: controller_processing_time
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, control_performance_analysis, msg, FloatStamped
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->controller_processing_time, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _DrivingMonitorStamped__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _DrivingMonitorStamped__ros_msg_type * ros_message = static_cast<_DrivingMonitorStamped__ros_msg_type *>(untyped_ros_message);
  // Field name: longitudinal_acceleration
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, control_performance_analysis, msg, FloatStamped
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->longitudinal_acceleration))
    {
      return false;
    }
  }

  // Field name: longitudinal_jerk
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, control_performance_analysis, msg, FloatStamped
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->longitudinal_jerk))
    {
      return false;
    }
  }

  // Field name: lateral_acceleration
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, control_performance_analysis, msg, FloatStamped
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->lateral_acceleration))
    {
      return false;
    }
  }

  // Field name: lateral_jerk
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, control_performance_analysis, msg, FloatStamped
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->lateral_jerk))
    {
      return false;
    }
  }

  // Field name: desired_steering_angle
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, control_performance_analysis, msg, FloatStamped
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->desired_steering_angle))
    {
      return false;
    }
  }

  // Field name: controller_processing_time
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, control_performance_analysis, msg, FloatStamped
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->controller_processing_time))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_control_performance_analysis
size_t get_serialized_size_control_performance_analysis__msg__DrivingMonitorStamped(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DrivingMonitorStamped__ros_msg_type * ros_message = static_cast<const _DrivingMonitorStamped__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name longitudinal_acceleration

  current_alignment += get_serialized_size_control_performance_analysis__msg__FloatStamped(
    &(ros_message->longitudinal_acceleration), current_alignment);
  // field.name longitudinal_jerk

  current_alignment += get_serialized_size_control_performance_analysis__msg__FloatStamped(
    &(ros_message->longitudinal_jerk), current_alignment);
  // field.name lateral_acceleration

  current_alignment += get_serialized_size_control_performance_analysis__msg__FloatStamped(
    &(ros_message->lateral_acceleration), current_alignment);
  // field.name lateral_jerk

  current_alignment += get_serialized_size_control_performance_analysis__msg__FloatStamped(
    &(ros_message->lateral_jerk), current_alignment);
  // field.name desired_steering_angle

  current_alignment += get_serialized_size_control_performance_analysis__msg__FloatStamped(
    &(ros_message->desired_steering_angle), current_alignment);
  // field.name controller_processing_time

  current_alignment += get_serialized_size_control_performance_analysis__msg__FloatStamped(
    &(ros_message->controller_processing_time), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _DrivingMonitorStamped__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_control_performance_analysis__msg__DrivingMonitorStamped(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_control_performance_analysis
size_t max_serialized_size_control_performance_analysis__msg__DrivingMonitorStamped(
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

  // member: longitudinal_acceleration
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_control_performance_analysis__msg__FloatStamped(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: longitudinal_jerk
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_control_performance_analysis__msg__FloatStamped(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: lateral_acceleration
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_control_performance_analysis__msg__FloatStamped(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: lateral_jerk
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_control_performance_analysis__msg__FloatStamped(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: desired_steering_angle
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_control_performance_analysis__msg__FloatStamped(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: controller_processing_time
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_control_performance_analysis__msg__FloatStamped(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = control_performance_analysis__msg__DrivingMonitorStamped;
    is_plain =
      (
      offsetof(DataType, controller_processing_time) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _DrivingMonitorStamped__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_control_performance_analysis__msg__DrivingMonitorStamped(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_DrivingMonitorStamped = {
  "control_performance_analysis::msg",
  "DrivingMonitorStamped",
  _DrivingMonitorStamped__cdr_serialize,
  _DrivingMonitorStamped__cdr_deserialize,
  _DrivingMonitorStamped__get_serialized_size,
  _DrivingMonitorStamped__max_serialized_size
};

static rosidl_message_type_support_t _DrivingMonitorStamped__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_DrivingMonitorStamped,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, control_performance_analysis, msg, DrivingMonitorStamped)() {
  return &_DrivingMonitorStamped__type_support;
}

#if defined(__cplusplus)
}
#endif
