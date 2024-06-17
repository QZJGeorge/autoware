// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from tier4_planning_msgs:msg/AvoidanceDebugMsg.idl
// generated code does not contain a copyright notice
#include "tier4_planning_msgs/msg/detail/avoidance_debug_msg__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "tier4_planning_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "tier4_planning_msgs/msg/detail/avoidance_debug_msg__struct.h"
#include "tier4_planning_msgs/msg/detail/avoidance_debug_msg__functions.h"
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

#include "rosidl_runtime_c/string.h"  // failed_reason, object_id
#include "rosidl_runtime_c/string_functions.h"  // failed_reason, object_id

// forward declare type support functions


using _AvoidanceDebugMsg__ros_msg_type = tier4_planning_msgs__msg__AvoidanceDebugMsg;

static bool _AvoidanceDebugMsg__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _AvoidanceDebugMsg__ros_msg_type * ros_message = static_cast<const _AvoidanceDebugMsg__ros_msg_type *>(untyped_ros_message);
  // Field name: object_id
  {
    const rosidl_runtime_c__String * str = &ros_message->object_id;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: allow_avoidance
  {
    cdr << (ros_message->allow_avoidance ? true : false);
  }

  // Field name: longitudinal_distance
  {
    cdr << ros_message->longitudinal_distance;
  }

  // Field name: lateral_distance_from_centerline
  {
    cdr << ros_message->lateral_distance_from_centerline;
  }

  // Field name: to_furthest_linestring_distance
  {
    cdr << ros_message->to_furthest_linestring_distance;
  }

  // Field name: max_shift_length
  {
    cdr << ros_message->max_shift_length;
  }

  // Field name: required_jerk
  {
    cdr << ros_message->required_jerk;
  }

  // Field name: maximum_jerk
  {
    cdr << ros_message->maximum_jerk;
  }

  // Field name: failed_reason
  {
    const rosidl_runtime_c__String * str = &ros_message->failed_reason;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _AvoidanceDebugMsg__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _AvoidanceDebugMsg__ros_msg_type * ros_message = static_cast<_AvoidanceDebugMsg__ros_msg_type *>(untyped_ros_message);
  // Field name: object_id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->object_id.data) {
      rosidl_runtime_c__String__init(&ros_message->object_id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->object_id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'object_id'\n");
      return false;
    }
  }

  // Field name: allow_avoidance
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->allow_avoidance = tmp ? true : false;
  }

  // Field name: longitudinal_distance
  {
    cdr >> ros_message->longitudinal_distance;
  }

  // Field name: lateral_distance_from_centerline
  {
    cdr >> ros_message->lateral_distance_from_centerline;
  }

  // Field name: to_furthest_linestring_distance
  {
    cdr >> ros_message->to_furthest_linestring_distance;
  }

  // Field name: max_shift_length
  {
    cdr >> ros_message->max_shift_length;
  }

  // Field name: required_jerk
  {
    cdr >> ros_message->required_jerk;
  }

  // Field name: maximum_jerk
  {
    cdr >> ros_message->maximum_jerk;
  }

  // Field name: failed_reason
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->failed_reason.data) {
      rosidl_runtime_c__String__init(&ros_message->failed_reason);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->failed_reason,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'failed_reason'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tier4_planning_msgs
size_t get_serialized_size_tier4_planning_msgs__msg__AvoidanceDebugMsg(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _AvoidanceDebugMsg__ros_msg_type * ros_message = static_cast<const _AvoidanceDebugMsg__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name object_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->object_id.size + 1);
  // field.name allow_avoidance
  {
    size_t item_size = sizeof(ros_message->allow_avoidance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name longitudinal_distance
  {
    size_t item_size = sizeof(ros_message->longitudinal_distance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lateral_distance_from_centerline
  {
    size_t item_size = sizeof(ros_message->lateral_distance_from_centerline);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name to_furthest_linestring_distance
  {
    size_t item_size = sizeof(ros_message->to_furthest_linestring_distance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name max_shift_length
  {
    size_t item_size = sizeof(ros_message->max_shift_length);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name required_jerk
  {
    size_t item_size = sizeof(ros_message->required_jerk);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name maximum_jerk
  {
    size_t item_size = sizeof(ros_message->maximum_jerk);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name failed_reason
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->failed_reason.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _AvoidanceDebugMsg__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_tier4_planning_msgs__msg__AvoidanceDebugMsg(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tier4_planning_msgs
size_t max_serialized_size_tier4_planning_msgs__msg__AvoidanceDebugMsg(
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

  // member: object_id
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: allow_avoidance
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: longitudinal_distance
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: lateral_distance_from_centerline
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: to_furthest_linestring_distance
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: max_shift_length
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: required_jerk
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: maximum_jerk
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: failed_reason
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = tier4_planning_msgs__msg__AvoidanceDebugMsg;
    is_plain =
      (
      offsetof(DataType, failed_reason) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _AvoidanceDebugMsg__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_tier4_planning_msgs__msg__AvoidanceDebugMsg(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_AvoidanceDebugMsg = {
  "tier4_planning_msgs::msg",
  "AvoidanceDebugMsg",
  _AvoidanceDebugMsg__cdr_serialize,
  _AvoidanceDebugMsg__cdr_deserialize,
  _AvoidanceDebugMsg__get_serialized_size,
  _AvoidanceDebugMsg__max_serialized_size
};

static rosidl_message_type_support_t _AvoidanceDebugMsg__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_AvoidanceDebugMsg,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tier4_planning_msgs, msg, AvoidanceDebugMsg)() {
  return &_AvoidanceDebugMsg__type_support;
}

#if defined(__cplusplus)
}
#endif
