// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from autoware_map_msgs:msg/PointCloudMapCellWithID.idl
// generated code does not contain a copyright notice
#include "autoware_map_msgs/msg/detail/point_cloud_map_cell_with_id__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "autoware_map_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "autoware_map_msgs/msg/detail/point_cloud_map_cell_with_id__struct.h"
#include "autoware_map_msgs/msg/detail/point_cloud_map_cell_with_id__functions.h"
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

#include "autoware_map_msgs/msg/detail/point_cloud_map_cell_meta_data__functions.h"  // metadata
#include "rosidl_runtime_c/string.h"  // cell_id
#include "rosidl_runtime_c/string_functions.h"  // cell_id
#include "sensor_msgs/msg/detail/point_cloud2__functions.h"  // pointcloud

// forward declare type support functions
size_t get_serialized_size_autoware_map_msgs__msg__PointCloudMapCellMetaData(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_autoware_map_msgs__msg__PointCloudMapCellMetaData(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autoware_map_msgs, msg, PointCloudMapCellMetaData)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_autoware_map_msgs
size_t get_serialized_size_sensor_msgs__msg__PointCloud2(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_autoware_map_msgs
size_t max_serialized_size_sensor_msgs__msg__PointCloud2(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_autoware_map_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sensor_msgs, msg, PointCloud2)();


using _PointCloudMapCellWithID__ros_msg_type = autoware_map_msgs__msg__PointCloudMapCellWithID;

static bool _PointCloudMapCellWithID__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PointCloudMapCellWithID__ros_msg_type * ros_message = static_cast<const _PointCloudMapCellWithID__ros_msg_type *>(untyped_ros_message);
  // Field name: cell_id
  {
    const rosidl_runtime_c__String * str = &ros_message->cell_id;
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

  // Field name: pointcloud
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, sensor_msgs, msg, PointCloud2
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->pointcloud, cdr))
    {
      return false;
    }
  }

  // Field name: metadata
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, autoware_map_msgs, msg, PointCloudMapCellMetaData
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->metadata, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _PointCloudMapCellWithID__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PointCloudMapCellWithID__ros_msg_type * ros_message = static_cast<_PointCloudMapCellWithID__ros_msg_type *>(untyped_ros_message);
  // Field name: cell_id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->cell_id.data) {
      rosidl_runtime_c__String__init(&ros_message->cell_id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->cell_id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'cell_id'\n");
      return false;
    }
  }

  // Field name: pointcloud
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, sensor_msgs, msg, PointCloud2
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->pointcloud))
    {
      return false;
    }
  }

  // Field name: metadata
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, autoware_map_msgs, msg, PointCloudMapCellMetaData
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->metadata))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autoware_map_msgs
size_t get_serialized_size_autoware_map_msgs__msg__PointCloudMapCellWithID(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PointCloudMapCellWithID__ros_msg_type * ros_message = static_cast<const _PointCloudMapCellWithID__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name cell_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->cell_id.size + 1);
  // field.name pointcloud

  current_alignment += get_serialized_size_sensor_msgs__msg__PointCloud2(
    &(ros_message->pointcloud), current_alignment);
  // field.name metadata

  current_alignment += get_serialized_size_autoware_map_msgs__msg__PointCloudMapCellMetaData(
    &(ros_message->metadata), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _PointCloudMapCellWithID__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_autoware_map_msgs__msg__PointCloudMapCellWithID(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autoware_map_msgs
size_t max_serialized_size_autoware_map_msgs__msg__PointCloudMapCellWithID(
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

  // member: cell_id
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
  // member: pointcloud
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_sensor_msgs__msg__PointCloud2(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: metadata
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_autoware_map_msgs__msg__PointCloudMapCellMetaData(
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
    using DataType = autoware_map_msgs__msg__PointCloudMapCellWithID;
    is_plain =
      (
      offsetof(DataType, metadata) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _PointCloudMapCellWithID__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_autoware_map_msgs__msg__PointCloudMapCellWithID(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_PointCloudMapCellWithID = {
  "autoware_map_msgs::msg",
  "PointCloudMapCellWithID",
  _PointCloudMapCellWithID__cdr_serialize,
  _PointCloudMapCellWithID__cdr_deserialize,
  _PointCloudMapCellWithID__get_serialized_size,
  _PointCloudMapCellWithID__max_serialized_size
};

static rosidl_message_type_support_t _PointCloudMapCellWithID__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PointCloudMapCellWithID,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autoware_map_msgs, msg, PointCloudMapCellWithID)() {
  return &_PointCloudMapCellWithID__type_support;
}

#if defined(__cplusplus)
}
#endif
