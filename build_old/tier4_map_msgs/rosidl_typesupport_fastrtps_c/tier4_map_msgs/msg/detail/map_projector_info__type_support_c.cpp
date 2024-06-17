// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from tier4_map_msgs:msg/MapProjectorInfo.idl
// generated code does not contain a copyright notice
#include "tier4_map_msgs/msg/detail/map_projector_info__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "tier4_map_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "tier4_map_msgs/msg/detail/map_projector_info__struct.h"
#include "tier4_map_msgs/msg/detail/map_projector_info__functions.h"
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

#include "geographic_msgs/msg/detail/geo_point__functions.h"  // map_origin
#include "rosidl_runtime_c/string.h"  // mgrs_grid, projector_type, vertical_datum
#include "rosidl_runtime_c/string_functions.h"  // mgrs_grid, projector_type, vertical_datum

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_tier4_map_msgs
size_t get_serialized_size_geographic_msgs__msg__GeoPoint(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_tier4_map_msgs
size_t max_serialized_size_geographic_msgs__msg__GeoPoint(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_tier4_map_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geographic_msgs, msg, GeoPoint)();


using _MapProjectorInfo__ros_msg_type = tier4_map_msgs__msg__MapProjectorInfo;

static bool _MapProjectorInfo__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MapProjectorInfo__ros_msg_type * ros_message = static_cast<const _MapProjectorInfo__ros_msg_type *>(untyped_ros_message);
  // Field name: projector_type
  {
    const rosidl_runtime_c__String * str = &ros_message->projector_type;
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

  // Field name: vertical_datum
  {
    const rosidl_runtime_c__String * str = &ros_message->vertical_datum;
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

  // Field name: mgrs_grid
  {
    const rosidl_runtime_c__String * str = &ros_message->mgrs_grid;
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

  // Field name: map_origin
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geographic_msgs, msg, GeoPoint
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->map_origin, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _MapProjectorInfo__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MapProjectorInfo__ros_msg_type * ros_message = static_cast<_MapProjectorInfo__ros_msg_type *>(untyped_ros_message);
  // Field name: projector_type
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->projector_type.data) {
      rosidl_runtime_c__String__init(&ros_message->projector_type);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->projector_type,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'projector_type'\n");
      return false;
    }
  }

  // Field name: vertical_datum
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->vertical_datum.data) {
      rosidl_runtime_c__String__init(&ros_message->vertical_datum);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->vertical_datum,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'vertical_datum'\n");
      return false;
    }
  }

  // Field name: mgrs_grid
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->mgrs_grid.data) {
      rosidl_runtime_c__String__init(&ros_message->mgrs_grid);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->mgrs_grid,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'mgrs_grid'\n");
      return false;
    }
  }

  // Field name: map_origin
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geographic_msgs, msg, GeoPoint
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->map_origin))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tier4_map_msgs
size_t get_serialized_size_tier4_map_msgs__msg__MapProjectorInfo(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MapProjectorInfo__ros_msg_type * ros_message = static_cast<const _MapProjectorInfo__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name projector_type
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->projector_type.size + 1);
  // field.name vertical_datum
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->vertical_datum.size + 1);
  // field.name mgrs_grid
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->mgrs_grid.size + 1);
  // field.name map_origin

  current_alignment += get_serialized_size_geographic_msgs__msg__GeoPoint(
    &(ros_message->map_origin), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _MapProjectorInfo__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_tier4_map_msgs__msg__MapProjectorInfo(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tier4_map_msgs
size_t max_serialized_size_tier4_map_msgs__msg__MapProjectorInfo(
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

  // member: projector_type
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
  // member: vertical_datum
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
  // member: mgrs_grid
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
  // member: map_origin
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geographic_msgs__msg__GeoPoint(
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
    using DataType = tier4_map_msgs__msg__MapProjectorInfo;
    is_plain =
      (
      offsetof(DataType, map_origin) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _MapProjectorInfo__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_tier4_map_msgs__msg__MapProjectorInfo(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_MapProjectorInfo = {
  "tier4_map_msgs::msg",
  "MapProjectorInfo",
  _MapProjectorInfo__cdr_serialize,
  _MapProjectorInfo__cdr_deserialize,
  _MapProjectorInfo__get_serialized_size,
  _MapProjectorInfo__max_serialized_size
};

static rosidl_message_type_support_t _MapProjectorInfo__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MapProjectorInfo,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tier4_map_msgs, msg, MapProjectorInfo)() {
  return &_MapProjectorInfo__type_support;
}

#if defined(__cplusplus)
}
#endif
