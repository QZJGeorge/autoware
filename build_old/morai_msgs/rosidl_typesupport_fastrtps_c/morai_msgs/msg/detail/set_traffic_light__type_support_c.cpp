// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from morai_msgs:msg/SetTrafficLight.idl
// generated code does not contain a copyright notice
#include "morai_msgs/msg/detail/set_traffic_light__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "morai_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "morai_msgs/msg/detail/set_traffic_light__struct.h"
#include "morai_msgs/msg/detail/set_traffic_light__functions.h"
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

#include "rosidl_runtime_c/string.h"  // traffic_light_index
#include "rosidl_runtime_c/string_functions.h"  // traffic_light_index

// forward declare type support functions


using _SetTrafficLight__ros_msg_type = morai_msgs__msg__SetTrafficLight;

static bool _SetTrafficLight__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SetTrafficLight__ros_msg_type * ros_message = static_cast<const _SetTrafficLight__ros_msg_type *>(untyped_ros_message);
  // Field name: traffic_light_index
  {
    const rosidl_runtime_c__String * str = &ros_message->traffic_light_index;
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

  // Field name: traffic_light_status
  {
    cdr << ros_message->traffic_light_status;
  }

  return true;
}

static bool _SetTrafficLight__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SetTrafficLight__ros_msg_type * ros_message = static_cast<_SetTrafficLight__ros_msg_type *>(untyped_ros_message);
  // Field name: traffic_light_index
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->traffic_light_index.data) {
      rosidl_runtime_c__String__init(&ros_message->traffic_light_index);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->traffic_light_index,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'traffic_light_index'\n");
      return false;
    }
  }

  // Field name: traffic_light_status
  {
    cdr >> ros_message->traffic_light_status;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_morai_msgs
size_t get_serialized_size_morai_msgs__msg__SetTrafficLight(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetTrafficLight__ros_msg_type * ros_message = static_cast<const _SetTrafficLight__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name traffic_light_index
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->traffic_light_index.size + 1);
  // field.name traffic_light_status
  {
    size_t item_size = sizeof(ros_message->traffic_light_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SetTrafficLight__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_morai_msgs__msg__SetTrafficLight(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_morai_msgs
size_t max_serialized_size_morai_msgs__msg__SetTrafficLight(
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

  // member: traffic_light_index
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
  // member: traffic_light_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = morai_msgs__msg__SetTrafficLight;
    is_plain =
      (
      offsetof(DataType, traffic_light_status) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SetTrafficLight__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_morai_msgs__msg__SetTrafficLight(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SetTrafficLight = {
  "morai_msgs::msg",
  "SetTrafficLight",
  _SetTrafficLight__cdr_serialize,
  _SetTrafficLight__cdr_deserialize,
  _SetTrafficLight__get_serialized_size,
  _SetTrafficLight__max_serialized_size
};

static rosidl_message_type_support_t _SetTrafficLight__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SetTrafficLight,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, morai_msgs, msg, SetTrafficLight)() {
  return &_SetTrafficLight__type_support;
}

#if defined(__cplusplus)
}
#endif
