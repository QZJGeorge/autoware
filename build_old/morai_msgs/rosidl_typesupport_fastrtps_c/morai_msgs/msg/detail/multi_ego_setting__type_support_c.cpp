// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from morai_msgs:msg/MultiEgoSetting.idl
// generated code does not contain a copyright notice
#include "morai_msgs/msg/detail/multi_ego_setting__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "morai_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "morai_msgs/msg/detail/multi_ego_setting__struct.h"
#include "morai_msgs/msg/detail/multi_ego_setting__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // ctrl_mode, ego_index, gear, global_pitch, global_position_x, global_position_y, global_position_z, global_roll, global_yaw, velocity
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // ctrl_mode, ego_index, gear, global_pitch, global_position_x, global_position_y, global_position_z, global_roll, global_yaw, velocity

// forward declare type support functions


using _MultiEgoSetting__ros_msg_type = morai_msgs__msg__MultiEgoSetting;

static bool _MultiEgoSetting__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MultiEgoSetting__ros_msg_type * ros_message = static_cast<const _MultiEgoSetting__ros_msg_type *>(untyped_ros_message);
  // Field name: number_of_ego_vehicle
  {
    cdr << ros_message->number_of_ego_vehicle;
  }

  // Field name: camera_index
  {
    cdr << ros_message->camera_index;
  }

  // Field name: ego_index
  {
    size_t size = ros_message->ego_index.size;
    auto array_ptr = ros_message->ego_index.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: global_position_x
  {
    size_t size = ros_message->global_position_x.size;
    auto array_ptr = ros_message->global_position_x.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: global_position_y
  {
    size_t size = ros_message->global_position_y.size;
    auto array_ptr = ros_message->global_position_y.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: global_position_z
  {
    size_t size = ros_message->global_position_z.size;
    auto array_ptr = ros_message->global_position_z.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: global_roll
  {
    size_t size = ros_message->global_roll.size;
    auto array_ptr = ros_message->global_roll.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: global_pitch
  {
    size_t size = ros_message->global_pitch.size;
    auto array_ptr = ros_message->global_pitch.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: global_yaw
  {
    size_t size = ros_message->global_yaw.size;
    auto array_ptr = ros_message->global_yaw.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: velocity
  {
    size_t size = ros_message->velocity.size;
    auto array_ptr = ros_message->velocity.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: gear
  {
    size_t size = ros_message->gear.size;
    auto array_ptr = ros_message->gear.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: ctrl_mode
  {
    size_t size = ros_message->ctrl_mode.size;
    auto array_ptr = ros_message->ctrl_mode.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _MultiEgoSetting__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MultiEgoSetting__ros_msg_type * ros_message = static_cast<_MultiEgoSetting__ros_msg_type *>(untyped_ros_message);
  // Field name: number_of_ego_vehicle
  {
    cdr >> ros_message->number_of_ego_vehicle;
  }

  // Field name: camera_index
  {
    cdr >> ros_message->camera_index;
  }

  // Field name: ego_index
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->ego_index.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->ego_index);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->ego_index, size)) {
      fprintf(stderr, "failed to create array for field 'ego_index'");
      return false;
    }
    auto array_ptr = ros_message->ego_index.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: global_position_x
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->global_position_x.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->global_position_x);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->global_position_x, size)) {
      fprintf(stderr, "failed to create array for field 'global_position_x'");
      return false;
    }
    auto array_ptr = ros_message->global_position_x.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: global_position_y
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->global_position_y.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->global_position_y);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->global_position_y, size)) {
      fprintf(stderr, "failed to create array for field 'global_position_y'");
      return false;
    }
    auto array_ptr = ros_message->global_position_y.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: global_position_z
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->global_position_z.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->global_position_z);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->global_position_z, size)) {
      fprintf(stderr, "failed to create array for field 'global_position_z'");
      return false;
    }
    auto array_ptr = ros_message->global_position_z.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: global_roll
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->global_roll.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->global_roll);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->global_roll, size)) {
      fprintf(stderr, "failed to create array for field 'global_roll'");
      return false;
    }
    auto array_ptr = ros_message->global_roll.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: global_pitch
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->global_pitch.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->global_pitch);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->global_pitch, size)) {
      fprintf(stderr, "failed to create array for field 'global_pitch'");
      return false;
    }
    auto array_ptr = ros_message->global_pitch.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: global_yaw
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->global_yaw.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->global_yaw);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->global_yaw, size)) {
      fprintf(stderr, "failed to create array for field 'global_yaw'");
      return false;
    }
    auto array_ptr = ros_message->global_yaw.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: velocity
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->velocity.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->velocity);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->velocity, size)) {
      fprintf(stderr, "failed to create array for field 'velocity'");
      return false;
    }
    auto array_ptr = ros_message->velocity.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: gear
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->gear.data) {
      rosidl_runtime_c__int8__Sequence__fini(&ros_message->gear);
    }
    if (!rosidl_runtime_c__int8__Sequence__init(&ros_message->gear, size)) {
      fprintf(stderr, "failed to create array for field 'gear'");
      return false;
    }
    auto array_ptr = ros_message->gear.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: ctrl_mode
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->ctrl_mode.data) {
      rosidl_runtime_c__int8__Sequence__fini(&ros_message->ctrl_mode);
    }
    if (!rosidl_runtime_c__int8__Sequence__init(&ros_message->ctrl_mode, size)) {
      fprintf(stderr, "failed to create array for field 'ctrl_mode'");
      return false;
    }
    auto array_ptr = ros_message->ctrl_mode.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_morai_msgs
size_t get_serialized_size_morai_msgs__msg__MultiEgoSetting(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MultiEgoSetting__ros_msg_type * ros_message = static_cast<const _MultiEgoSetting__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name number_of_ego_vehicle
  {
    size_t item_size = sizeof(ros_message->number_of_ego_vehicle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name camera_index
  {
    size_t item_size = sizeof(ros_message->camera_index);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ego_index
  {
    size_t array_size = ros_message->ego_index.size;
    auto array_ptr = ros_message->ego_index.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name global_position_x
  {
    size_t array_size = ros_message->global_position_x.size;
    auto array_ptr = ros_message->global_position_x.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name global_position_y
  {
    size_t array_size = ros_message->global_position_y.size;
    auto array_ptr = ros_message->global_position_y.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name global_position_z
  {
    size_t array_size = ros_message->global_position_z.size;
    auto array_ptr = ros_message->global_position_z.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name global_roll
  {
    size_t array_size = ros_message->global_roll.size;
    auto array_ptr = ros_message->global_roll.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name global_pitch
  {
    size_t array_size = ros_message->global_pitch.size;
    auto array_ptr = ros_message->global_pitch.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name global_yaw
  {
    size_t array_size = ros_message->global_yaw.size;
    auto array_ptr = ros_message->global_yaw.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name velocity
  {
    size_t array_size = ros_message->velocity.size;
    auto array_ptr = ros_message->velocity.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gear
  {
    size_t array_size = ros_message->gear.size;
    auto array_ptr = ros_message->gear.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ctrl_mode
  {
    size_t array_size = ros_message->ctrl_mode.size;
    auto array_ptr = ros_message->ctrl_mode.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _MultiEgoSetting__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_morai_msgs__msg__MultiEgoSetting(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_morai_msgs
size_t max_serialized_size_morai_msgs__msg__MultiEgoSetting(
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

  // member: number_of_ego_vehicle
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: camera_index
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: ego_index
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
  // member: global_position_x
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
  // member: global_position_y
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
  // member: global_position_z
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
  // member: global_roll
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
  // member: global_pitch
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
  // member: global_yaw
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
  // member: velocity
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
  // member: gear
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ctrl_mode
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = morai_msgs__msg__MultiEgoSetting;
    is_plain =
      (
      offsetof(DataType, ctrl_mode) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _MultiEgoSetting__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_morai_msgs__msg__MultiEgoSetting(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_MultiEgoSetting = {
  "morai_msgs::msg",
  "MultiEgoSetting",
  _MultiEgoSetting__cdr_serialize,
  _MultiEgoSetting__cdr_deserialize,
  _MultiEgoSetting__get_serialized_size,
  _MultiEgoSetting__max_serialized_size
};

static rosidl_message_type_support_t _MultiEgoSetting__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MultiEgoSetting,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, morai_msgs, msg, MultiEgoSetting)() {
  return &_MultiEgoSetting__type_support;
}

#if defined(__cplusplus)
}
#endif
