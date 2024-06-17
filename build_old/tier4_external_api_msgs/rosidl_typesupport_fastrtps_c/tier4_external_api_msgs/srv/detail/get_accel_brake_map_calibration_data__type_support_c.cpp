// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from tier4_external_api_msgs:srv/GetAccelBrakeMapCalibrationData.idl
// generated code does not contain a copyright notice
#include "tier4_external_api_msgs/srv/detail/get_accel_brake_map_calibration_data__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "tier4_external_api_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "tier4_external_api_msgs/srv/detail/get_accel_brake_map_calibration_data__struct.h"
#include "tier4_external_api_msgs/srv/detail/get_accel_brake_map_calibration_data__functions.h"
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


// forward declare type support functions


using _GetAccelBrakeMapCalibrationData_Request__ros_msg_type = tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Request;

static bool _GetAccelBrakeMapCalibrationData_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetAccelBrakeMapCalibrationData_Request__ros_msg_type * ros_message = static_cast<const _GetAccelBrakeMapCalibrationData_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr << ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

static bool _GetAccelBrakeMapCalibrationData_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetAccelBrakeMapCalibrationData_Request__ros_msg_type * ros_message = static_cast<_GetAccelBrakeMapCalibrationData_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr >> ros_message->structure_needs_at_least_one_member;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tier4_external_api_msgs
size_t get_serialized_size_tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetAccelBrakeMapCalibrationData_Request__ros_msg_type * ros_message = static_cast<const _GetAccelBrakeMapCalibrationData_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name structure_needs_at_least_one_member
  {
    size_t item_size = sizeof(ros_message->structure_needs_at_least_one_member);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GetAccelBrakeMapCalibrationData_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tier4_external_api_msgs
size_t max_serialized_size_tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Request(
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

  // member: structure_needs_at_least_one_member
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
    using DataType = tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Request;
    is_plain =
      (
      offsetof(DataType, structure_needs_at_least_one_member) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _GetAccelBrakeMapCalibrationData_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GetAccelBrakeMapCalibrationData_Request = {
  "tier4_external_api_msgs::srv",
  "GetAccelBrakeMapCalibrationData_Request",
  _GetAccelBrakeMapCalibrationData_Request__cdr_serialize,
  _GetAccelBrakeMapCalibrationData_Request__cdr_deserialize,
  _GetAccelBrakeMapCalibrationData_Request__get_serialized_size,
  _GetAccelBrakeMapCalibrationData_Request__max_serialized_size
};

static rosidl_message_type_support_t _GetAccelBrakeMapCalibrationData_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetAccelBrakeMapCalibrationData_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tier4_external_api_msgs, srv, GetAccelBrakeMapCalibrationData_Request)() {
  return &_GetAccelBrakeMapCalibrationData_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "tier4_external_api_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "tier4_external_api_msgs/srv/detail/get_accel_brake_map_calibration_data__struct.h"
// already included above
// #include "tier4_external_api_msgs/srv/detail/get_accel_brake_map_calibration_data__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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

#include "rosidl_runtime_c/primitives_sequence.h"  // graph_image
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // graph_image
#include "rosidl_runtime_c/string.h"  // accel_map, brake_map
#include "rosidl_runtime_c/string_functions.h"  // accel_map, brake_map

// forward declare type support functions


using _GetAccelBrakeMapCalibrationData_Response__ros_msg_type = tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Response;

static bool _GetAccelBrakeMapCalibrationData_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetAccelBrakeMapCalibrationData_Response__ros_msg_type * ros_message = static_cast<const _GetAccelBrakeMapCalibrationData_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: graph_image
  {
    size_t size = ros_message->graph_image.size;
    auto array_ptr = ros_message->graph_image.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: accel_map
  {
    const rosidl_runtime_c__String * str = &ros_message->accel_map;
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

  // Field name: brake_map
  {
    const rosidl_runtime_c__String * str = &ros_message->brake_map;
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

static bool _GetAccelBrakeMapCalibrationData_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetAccelBrakeMapCalibrationData_Response__ros_msg_type * ros_message = static_cast<_GetAccelBrakeMapCalibrationData_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: graph_image
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->graph_image.data) {
      rosidl_runtime_c__uint8__Sequence__fini(&ros_message->graph_image);
    }
    if (!rosidl_runtime_c__uint8__Sequence__init(&ros_message->graph_image, size)) {
      fprintf(stderr, "failed to create array for field 'graph_image'");
      return false;
    }
    auto array_ptr = ros_message->graph_image.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: accel_map
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->accel_map.data) {
      rosidl_runtime_c__String__init(&ros_message->accel_map);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->accel_map,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'accel_map'\n");
      return false;
    }
  }

  // Field name: brake_map
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->brake_map.data) {
      rosidl_runtime_c__String__init(&ros_message->brake_map);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->brake_map,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'brake_map'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tier4_external_api_msgs
size_t get_serialized_size_tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetAccelBrakeMapCalibrationData_Response__ros_msg_type * ros_message = static_cast<const _GetAccelBrakeMapCalibrationData_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name graph_image
  {
    size_t array_size = ros_message->graph_image.size;
    auto array_ptr = ros_message->graph_image.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name accel_map
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->accel_map.size + 1);
  // field.name brake_map
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->brake_map.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _GetAccelBrakeMapCalibrationData_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tier4_external_api_msgs
size_t max_serialized_size_tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Response(
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

  // member: graph_image
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: accel_map
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
  // member: brake_map
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
    using DataType = tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Response;
    is_plain =
      (
      offsetof(DataType, brake_map) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _GetAccelBrakeMapCalibrationData_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GetAccelBrakeMapCalibrationData_Response = {
  "tier4_external_api_msgs::srv",
  "GetAccelBrakeMapCalibrationData_Response",
  _GetAccelBrakeMapCalibrationData_Response__cdr_serialize,
  _GetAccelBrakeMapCalibrationData_Response__cdr_deserialize,
  _GetAccelBrakeMapCalibrationData_Response__get_serialized_size,
  _GetAccelBrakeMapCalibrationData_Response__max_serialized_size
};

static rosidl_message_type_support_t _GetAccelBrakeMapCalibrationData_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetAccelBrakeMapCalibrationData_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tier4_external_api_msgs, srv, GetAccelBrakeMapCalibrationData_Response)() {
  return &_GetAccelBrakeMapCalibrationData_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "tier4_external_api_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "tier4_external_api_msgs/srv/get_accel_brake_map_calibration_data.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t GetAccelBrakeMapCalibrationData__callbacks = {
  "tier4_external_api_msgs::srv",
  "GetAccelBrakeMapCalibrationData",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tier4_external_api_msgs, srv, GetAccelBrakeMapCalibrationData_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tier4_external_api_msgs, srv, GetAccelBrakeMapCalibrationData_Response)(),
};

static rosidl_service_type_support_t GetAccelBrakeMapCalibrationData__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &GetAccelBrakeMapCalibrationData__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tier4_external_api_msgs, srv, GetAccelBrakeMapCalibrationData)() {
  return &GetAccelBrakeMapCalibrationData__handle;
}

#if defined(__cplusplus)
}
#endif
