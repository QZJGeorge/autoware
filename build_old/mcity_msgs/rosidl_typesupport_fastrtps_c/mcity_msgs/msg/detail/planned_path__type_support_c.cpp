// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from mcity_msgs:msg/PlannedPath.idl
// generated code does not contain a copyright notice
#include "mcity_msgs/msg/detail/planned_path__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "mcity_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mcity_msgs/msg/detail/planned_path__struct.h"
#include "mcity_msgs/msg/detail/planned_path__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // ori_vector, vd_vector, x_vector, y_vector
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // ori_vector, vd_vector, x_vector, y_vector

// forward declare type support functions


using _PlannedPath__ros_msg_type = mcity_msgs__msg__PlannedPath;

static bool _PlannedPath__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PlannedPath__ros_msg_type * ros_message = static_cast<const _PlannedPath__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: time_resolution
  {
    cdr << ros_message->time_resolution;
  }

  // Field name: go
  {
    cdr << ros_message->go;
  }

  // Field name: estop
  {
    cdr << ros_message->estop;
  }

  // Field name: x_vector
  {
    size_t size = ros_message->x_vector.size;
    auto array_ptr = ros_message->x_vector.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: y_vector
  {
    size_t size = ros_message->y_vector.size;
    auto array_ptr = ros_message->y_vector.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: vd_vector
  {
    size_t size = ros_message->vd_vector.size;
    auto array_ptr = ros_message->vd_vector.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: ori_vector
  {
    size_t size = ros_message->ori_vector.size;
    auto array_ptr = ros_message->ori_vector.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _PlannedPath__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PlannedPath__ros_msg_type * ros_message = static_cast<_PlannedPath__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  // Field name: time_resolution
  {
    cdr >> ros_message->time_resolution;
  }

  // Field name: go
  {
    cdr >> ros_message->go;
  }

  // Field name: estop
  {
    cdr >> ros_message->estop;
  }

  // Field name: x_vector
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->x_vector.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->x_vector);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->x_vector, size)) {
      fprintf(stderr, "failed to create array for field 'x_vector'");
      return false;
    }
    auto array_ptr = ros_message->x_vector.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: y_vector
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->y_vector.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->y_vector);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->y_vector, size)) {
      fprintf(stderr, "failed to create array for field 'y_vector'");
      return false;
    }
    auto array_ptr = ros_message->y_vector.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: vd_vector
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->vd_vector.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->vd_vector);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->vd_vector, size)) {
      fprintf(stderr, "failed to create array for field 'vd_vector'");
      return false;
    }
    auto array_ptr = ros_message->vd_vector.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: ori_vector
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->ori_vector.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->ori_vector);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->ori_vector, size)) {
      fprintf(stderr, "failed to create array for field 'ori_vector'");
      return false;
    }
    auto array_ptr = ros_message->ori_vector.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mcity_msgs
size_t get_serialized_size_mcity_msgs__msg__PlannedPath(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PlannedPath__ros_msg_type * ros_message = static_cast<const _PlannedPath__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name timestamp
  {
    size_t item_size = sizeof(ros_message->timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name time_resolution
  {
    size_t item_size = sizeof(ros_message->time_resolution);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name go
  {
    size_t item_size = sizeof(ros_message->go);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name estop
  {
    size_t item_size = sizeof(ros_message->estop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name x_vector
  {
    size_t array_size = ros_message->x_vector.size;
    auto array_ptr = ros_message->x_vector.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name y_vector
  {
    size_t array_size = ros_message->y_vector.size;
    auto array_ptr = ros_message->y_vector.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vd_vector
  {
    size_t array_size = ros_message->vd_vector.size;
    auto array_ptr = ros_message->vd_vector.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ori_vector
  {
    size_t array_size = ros_message->ori_vector.size;
    auto array_ptr = ros_message->ori_vector.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _PlannedPath__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_mcity_msgs__msg__PlannedPath(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mcity_msgs
size_t max_serialized_size_mcity_msgs__msg__PlannedPath(
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

  // member: timestamp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: time_resolution
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: go
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: estop
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: x_vector
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: y_vector
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: vd_vector
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: ori_vector
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = mcity_msgs__msg__PlannedPath;
    is_plain =
      (
      offsetof(DataType, ori_vector) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _PlannedPath__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_mcity_msgs__msg__PlannedPath(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_PlannedPath = {
  "mcity_msgs::msg",
  "PlannedPath",
  _PlannedPath__cdr_serialize,
  _PlannedPath__cdr_deserialize,
  _PlannedPath__get_serialized_size,
  _PlannedPath__max_serialized_size
};

static rosidl_message_type_support_t _PlannedPath__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PlannedPath,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mcity_msgs, msg, PlannedPath)() {
  return &_PlannedPath__type_support;
}

#if defined(__cplusplus)
}
#endif
