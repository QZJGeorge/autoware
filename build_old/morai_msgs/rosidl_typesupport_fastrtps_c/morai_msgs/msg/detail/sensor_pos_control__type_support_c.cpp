// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from morai_msgs:msg/SensorPosControl.idl
// generated code does not contain a copyright notice
#include "morai_msgs/msg/detail/sensor_pos_control__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "morai_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "morai_msgs/msg/detail/sensor_pos_control__struct.h"
#include "morai_msgs/msg/detail/sensor_pos_control__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // pitch, pose_x, pose_y, pose_z, roll, sensor_index, yaw
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // pitch, pose_x, pose_y, pose_z, roll, sensor_index, yaw

// forward declare type support functions


using _SensorPosControl__ros_msg_type = morai_msgs__msg__SensorPosControl;

static bool _SensorPosControl__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SensorPosControl__ros_msg_type * ros_message = static_cast<const _SensorPosControl__ros_msg_type *>(untyped_ros_message);
  // Field name: sensor_index
  {
    size_t size = ros_message->sensor_index.size;
    auto array_ptr = ros_message->sensor_index.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: pose_x
  {
    size_t size = ros_message->pose_x.size;
    auto array_ptr = ros_message->pose_x.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: pose_y
  {
    size_t size = ros_message->pose_y.size;
    auto array_ptr = ros_message->pose_y.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: pose_z
  {
    size_t size = ros_message->pose_z.size;
    auto array_ptr = ros_message->pose_z.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: roll
  {
    size_t size = ros_message->roll.size;
    auto array_ptr = ros_message->roll.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: pitch
  {
    size_t size = ros_message->pitch.size;
    auto array_ptr = ros_message->pitch.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: yaw
  {
    size_t size = ros_message->yaw.size;
    auto array_ptr = ros_message->yaw.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _SensorPosControl__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SensorPosControl__ros_msg_type * ros_message = static_cast<_SensorPosControl__ros_msg_type *>(untyped_ros_message);
  // Field name: sensor_index
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->sensor_index.data) {
      rosidl_runtime_c__int16__Sequence__fini(&ros_message->sensor_index);
    }
    if (!rosidl_runtime_c__int16__Sequence__init(&ros_message->sensor_index, size)) {
      fprintf(stderr, "failed to create array for field 'sensor_index'");
      return false;
    }
    auto array_ptr = ros_message->sensor_index.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: pose_x
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->pose_x.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->pose_x);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->pose_x, size)) {
      fprintf(stderr, "failed to create array for field 'pose_x'");
      return false;
    }
    auto array_ptr = ros_message->pose_x.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: pose_y
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->pose_y.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->pose_y);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->pose_y, size)) {
      fprintf(stderr, "failed to create array for field 'pose_y'");
      return false;
    }
    auto array_ptr = ros_message->pose_y.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: pose_z
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->pose_z.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->pose_z);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->pose_z, size)) {
      fprintf(stderr, "failed to create array for field 'pose_z'");
      return false;
    }
    auto array_ptr = ros_message->pose_z.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: roll
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->roll.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->roll);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->roll, size)) {
      fprintf(stderr, "failed to create array for field 'roll'");
      return false;
    }
    auto array_ptr = ros_message->roll.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: pitch
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->pitch.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->pitch);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->pitch, size)) {
      fprintf(stderr, "failed to create array for field 'pitch'");
      return false;
    }
    auto array_ptr = ros_message->pitch.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: yaw
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->yaw.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->yaw);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->yaw, size)) {
      fprintf(stderr, "failed to create array for field 'yaw'");
      return false;
    }
    auto array_ptr = ros_message->yaw.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_morai_msgs
size_t get_serialized_size_morai_msgs__msg__SensorPosControl(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SensorPosControl__ros_msg_type * ros_message = static_cast<const _SensorPosControl__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name sensor_index
  {
    size_t array_size = ros_message->sensor_index.size;
    auto array_ptr = ros_message->sensor_index.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pose_x
  {
    size_t array_size = ros_message->pose_x.size;
    auto array_ptr = ros_message->pose_x.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pose_y
  {
    size_t array_size = ros_message->pose_y.size;
    auto array_ptr = ros_message->pose_y.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pose_z
  {
    size_t array_size = ros_message->pose_z.size;
    auto array_ptr = ros_message->pose_z.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name roll
  {
    size_t array_size = ros_message->roll.size;
    auto array_ptr = ros_message->roll.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pitch
  {
    size_t array_size = ros_message->pitch.size;
    auto array_ptr = ros_message->pitch.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name yaw
  {
    size_t array_size = ros_message->yaw.size;
    auto array_ptr = ros_message->yaw.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SensorPosControl__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_morai_msgs__msg__SensorPosControl(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_morai_msgs
size_t max_serialized_size_morai_msgs__msg__SensorPosControl(
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

  // member: sensor_index
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: pose_x
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: pose_y
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: pose_z
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: roll
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: pitch
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: yaw
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = morai_msgs__msg__SensorPosControl;
    is_plain =
      (
      offsetof(DataType, yaw) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SensorPosControl__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_morai_msgs__msg__SensorPosControl(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SensorPosControl = {
  "morai_msgs::msg",
  "SensorPosControl",
  _SensorPosControl__cdr_serialize,
  _SensorPosControl__cdr_deserialize,
  _SensorPosControl__get_serialized_size,
  _SensorPosControl__max_serialized_size
};

static rosidl_message_type_support_t _SensorPosControl__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SensorPosControl,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, morai_msgs, msg, SensorPosControl)() {
  return &_SensorPosControl__type_support;
}

#if defined(__cplusplus)
}
#endif
