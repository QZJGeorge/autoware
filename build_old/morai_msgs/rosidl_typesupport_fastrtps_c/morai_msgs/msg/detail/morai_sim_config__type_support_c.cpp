// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from morai_msgs:msg/MoraiSimConfig.idl
// generated code does not contain a copyright notice
#include "morai_msgs/msg/detail/morai_sim_config__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "morai_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "morai_msgs/msg/detail/morai_sim_config__struct.h"
#include "morai_msgs/msg/detail/morai_sim_config__functions.h"
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

#include "rosidl_runtime_c/string.h"  // camera_list, gps_list, imu_list, lidar_list, publisher_list, radar_list, sensor_config_file_name, service_list, subscriber_list
#include "rosidl_runtime_c/string_functions.h"  // camera_list, gps_list, imu_list, lidar_list, publisher_list, radar_list, sensor_config_file_name, service_list, subscriber_list

// forward declare type support functions


using _MoraiSimConfig__ros_msg_type = morai_msgs__msg__MoraiSimConfig;

static bool _MoraiSimConfig__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MoraiSimConfig__ros_msg_type * ros_message = static_cast<const _MoraiSimConfig__ros_msg_type *>(untyped_ros_message);
  // Field name: sensor_config_file_name
  {
    const rosidl_runtime_c__String * str = &ros_message->sensor_config_file_name;
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

  // Field name: publisher_list
  {
    const rosidl_runtime_c__String * str = &ros_message->publisher_list;
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

  // Field name: subscriber_list
  {
    const rosidl_runtime_c__String * str = &ros_message->subscriber_list;
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

  // Field name: service_list
  {
    const rosidl_runtime_c__String * str = &ros_message->service_list;
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

  // Field name: camera_list
  {
    const rosidl_runtime_c__String * str = &ros_message->camera_list;
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

  // Field name: gps_list
  {
    const rosidl_runtime_c__String * str = &ros_message->gps_list;
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

  // Field name: imu_list
  {
    const rosidl_runtime_c__String * str = &ros_message->imu_list;
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

  // Field name: lidar_list
  {
    const rosidl_runtime_c__String * str = &ros_message->lidar_list;
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

  // Field name: radar_list
  {
    const rosidl_runtime_c__String * str = &ros_message->radar_list;
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

static bool _MoraiSimConfig__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MoraiSimConfig__ros_msg_type * ros_message = static_cast<_MoraiSimConfig__ros_msg_type *>(untyped_ros_message);
  // Field name: sensor_config_file_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->sensor_config_file_name.data) {
      rosidl_runtime_c__String__init(&ros_message->sensor_config_file_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->sensor_config_file_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'sensor_config_file_name'\n");
      return false;
    }
  }

  // Field name: publisher_list
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->publisher_list.data) {
      rosidl_runtime_c__String__init(&ros_message->publisher_list);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->publisher_list,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'publisher_list'\n");
      return false;
    }
  }

  // Field name: subscriber_list
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->subscriber_list.data) {
      rosidl_runtime_c__String__init(&ros_message->subscriber_list);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->subscriber_list,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'subscriber_list'\n");
      return false;
    }
  }

  // Field name: service_list
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->service_list.data) {
      rosidl_runtime_c__String__init(&ros_message->service_list);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->service_list,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'service_list'\n");
      return false;
    }
  }

  // Field name: camera_list
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->camera_list.data) {
      rosidl_runtime_c__String__init(&ros_message->camera_list);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->camera_list,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'camera_list'\n");
      return false;
    }
  }

  // Field name: gps_list
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->gps_list.data) {
      rosidl_runtime_c__String__init(&ros_message->gps_list);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->gps_list,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'gps_list'\n");
      return false;
    }
  }

  // Field name: imu_list
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->imu_list.data) {
      rosidl_runtime_c__String__init(&ros_message->imu_list);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->imu_list,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'imu_list'\n");
      return false;
    }
  }

  // Field name: lidar_list
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->lidar_list.data) {
      rosidl_runtime_c__String__init(&ros_message->lidar_list);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->lidar_list,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'lidar_list'\n");
      return false;
    }
  }

  // Field name: radar_list
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->radar_list.data) {
      rosidl_runtime_c__String__init(&ros_message->radar_list);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->radar_list,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'radar_list'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_morai_msgs
size_t get_serialized_size_morai_msgs__msg__MoraiSimConfig(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MoraiSimConfig__ros_msg_type * ros_message = static_cast<const _MoraiSimConfig__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name sensor_config_file_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->sensor_config_file_name.size + 1);
  // field.name publisher_list
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->publisher_list.size + 1);
  // field.name subscriber_list
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->subscriber_list.size + 1);
  // field.name service_list
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->service_list.size + 1);
  // field.name camera_list
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->camera_list.size + 1);
  // field.name gps_list
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->gps_list.size + 1);
  // field.name imu_list
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->imu_list.size + 1);
  // field.name lidar_list
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->lidar_list.size + 1);
  // field.name radar_list
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->radar_list.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _MoraiSimConfig__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_morai_msgs__msg__MoraiSimConfig(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_morai_msgs
size_t max_serialized_size_morai_msgs__msg__MoraiSimConfig(
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

  // member: sensor_config_file_name
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
  // member: publisher_list
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
  // member: subscriber_list
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
  // member: service_list
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
  // member: camera_list
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
  // member: gps_list
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
  // member: imu_list
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
  // member: lidar_list
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
  // member: radar_list
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
    using DataType = morai_msgs__msg__MoraiSimConfig;
    is_plain =
      (
      offsetof(DataType, radar_list) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _MoraiSimConfig__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_morai_msgs__msg__MoraiSimConfig(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_MoraiSimConfig = {
  "morai_msgs::msg",
  "MoraiSimConfig",
  _MoraiSimConfig__cdr_serialize,
  _MoraiSimConfig__cdr_deserialize,
  _MoraiSimConfig__get_serialized_size,
  _MoraiSimConfig__max_serialized_size
};

static rosidl_message_type_support_t _MoraiSimConfig__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MoraiSimConfig,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, morai_msgs, msg, MoraiSimConfig)() {
  return &_MoraiSimConfig__type_support;
}

#if defined(__cplusplus)
}
#endif
