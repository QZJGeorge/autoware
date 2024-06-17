// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from static_centerline_optimizer:srv/PlanPath.idl
// generated code does not contain a copyright notice
#include "static_centerline_optimizer/srv/detail/plan_path__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "static_centerline_optimizer/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "static_centerline_optimizer/srv/detail/plan_path__struct.h"
#include "static_centerline_optimizer/srv/detail/plan_path__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // route
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // route

// forward declare type support functions


using _PlanPath_Request__ros_msg_type = static_centerline_optimizer__srv__PlanPath_Request;

static bool _PlanPath_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PlanPath_Request__ros_msg_type * ros_message = static_cast<const _PlanPath_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: map_id
  {
    cdr << ros_message->map_id;
  }

  // Field name: route
  {
    size_t size = ros_message->route.size;
    auto array_ptr = ros_message->route.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _PlanPath_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PlanPath_Request__ros_msg_type * ros_message = static_cast<_PlanPath_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: map_id
  {
    cdr >> ros_message->map_id;
  }

  // Field name: route
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->route.data) {
      rosidl_runtime_c__uint32__Sequence__fini(&ros_message->route);
    }
    if (!rosidl_runtime_c__uint32__Sequence__init(&ros_message->route, size)) {
      fprintf(stderr, "failed to create array for field 'route'");
      return false;
    }
    auto array_ptr = ros_message->route.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_static_centerline_optimizer
size_t get_serialized_size_static_centerline_optimizer__srv__PlanPath_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PlanPath_Request__ros_msg_type * ros_message = static_cast<const _PlanPath_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name map_id
  {
    size_t item_size = sizeof(ros_message->map_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name route
  {
    size_t array_size = ros_message->route.size;
    auto array_ptr = ros_message->route.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _PlanPath_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_static_centerline_optimizer__srv__PlanPath_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_static_centerline_optimizer
size_t max_serialized_size_static_centerline_optimizer__srv__PlanPath_Request(
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

  // member: map_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: route
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
    using DataType = static_centerline_optimizer__srv__PlanPath_Request;
    is_plain =
      (
      offsetof(DataType, route) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _PlanPath_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_static_centerline_optimizer__srv__PlanPath_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_PlanPath_Request = {
  "static_centerline_optimizer::srv",
  "PlanPath_Request",
  _PlanPath_Request__cdr_serialize,
  _PlanPath_Request__cdr_deserialize,
  _PlanPath_Request__get_serialized_size,
  _PlanPath_Request__max_serialized_size
};

static rosidl_message_type_support_t _PlanPath_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PlanPath_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, static_centerline_optimizer, srv, PlanPath_Request)() {
  return &_PlanPath_Request__type_support;
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
// #include "static_centerline_optimizer/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "static_centerline_optimizer/srv/detail/plan_path__struct.h"
// already included above
// #include "static_centerline_optimizer/srv/detail/plan_path__functions.h"
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

// already included above
// #include "rosidl_runtime_c/primitives_sequence.h"  // unconnected_lane_ids
// already included above
// #include "rosidl_runtime_c/primitives_sequence_functions.h"  // unconnected_lane_ids
#include "rosidl_runtime_c/string.h"  // message
#include "rosidl_runtime_c/string_functions.h"  // message
#include "static_centerline_optimizer/msg/detail/points_with_lane_id__functions.h"  // points_with_lane_ids

// forward declare type support functions
size_t get_serialized_size_static_centerline_optimizer__msg__PointsWithLaneId(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_static_centerline_optimizer__msg__PointsWithLaneId(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, static_centerline_optimizer, msg, PointsWithLaneId)();


using _PlanPath_Response__ros_msg_type = static_centerline_optimizer__srv__PlanPath_Response;

static bool _PlanPath_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PlanPath_Response__ros_msg_type * ros_message = static_cast<const _PlanPath_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: points_with_lane_ids
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, static_centerline_optimizer, msg, PointsWithLaneId
      )()->data);
    size_t size = ros_message->points_with_lane_ids.size;
    auto array_ptr = ros_message->points_with_lane_ids.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: message
  {
    const rosidl_runtime_c__String * str = &ros_message->message;
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

  // Field name: unconnected_lane_ids
  {
    size_t size = ros_message->unconnected_lane_ids.size;
    auto array_ptr = ros_message->unconnected_lane_ids.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _PlanPath_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PlanPath_Response__ros_msg_type * ros_message = static_cast<_PlanPath_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: points_with_lane_ids
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, static_centerline_optimizer, msg, PointsWithLaneId
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->points_with_lane_ids.data) {
      static_centerline_optimizer__msg__PointsWithLaneId__Sequence__fini(&ros_message->points_with_lane_ids);
    }
    if (!static_centerline_optimizer__msg__PointsWithLaneId__Sequence__init(&ros_message->points_with_lane_ids, size)) {
      fprintf(stderr, "failed to create array for field 'points_with_lane_ids'");
      return false;
    }
    auto array_ptr = ros_message->points_with_lane_ids.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: message
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->message.data) {
      rosidl_runtime_c__String__init(&ros_message->message);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->message,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'message'\n");
      return false;
    }
  }

  // Field name: unconnected_lane_ids
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->unconnected_lane_ids.data) {
      rosidl_runtime_c__uint32__Sequence__fini(&ros_message->unconnected_lane_ids);
    }
    if (!rosidl_runtime_c__uint32__Sequence__init(&ros_message->unconnected_lane_ids, size)) {
      fprintf(stderr, "failed to create array for field 'unconnected_lane_ids'");
      return false;
    }
    auto array_ptr = ros_message->unconnected_lane_ids.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_static_centerline_optimizer
size_t get_serialized_size_static_centerline_optimizer__srv__PlanPath_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PlanPath_Response__ros_msg_type * ros_message = static_cast<const _PlanPath_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name points_with_lane_ids
  {
    size_t array_size = ros_message->points_with_lane_ids.size;
    auto array_ptr = ros_message->points_with_lane_ids.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_static_centerline_optimizer__msg__PointsWithLaneId(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name message
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->message.size + 1);
  // field.name unconnected_lane_ids
  {
    size_t array_size = ros_message->unconnected_lane_ids.size;
    auto array_ptr = ros_message->unconnected_lane_ids.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _PlanPath_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_static_centerline_optimizer__srv__PlanPath_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_static_centerline_optimizer
size_t max_serialized_size_static_centerline_optimizer__srv__PlanPath_Response(
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

  // member: points_with_lane_ids
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_static_centerline_optimizer__msg__PointsWithLaneId(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: message
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
  // member: unconnected_lane_ids
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
    using DataType = static_centerline_optimizer__srv__PlanPath_Response;
    is_plain =
      (
      offsetof(DataType, unconnected_lane_ids) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _PlanPath_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_static_centerline_optimizer__srv__PlanPath_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_PlanPath_Response = {
  "static_centerline_optimizer::srv",
  "PlanPath_Response",
  _PlanPath_Response__cdr_serialize,
  _PlanPath_Response__cdr_deserialize,
  _PlanPath_Response__get_serialized_size,
  _PlanPath_Response__max_serialized_size
};

static rosidl_message_type_support_t _PlanPath_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PlanPath_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, static_centerline_optimizer, srv, PlanPath_Response)() {
  return &_PlanPath_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "static_centerline_optimizer/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "static_centerline_optimizer/srv/plan_path.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t PlanPath__callbacks = {
  "static_centerline_optimizer::srv",
  "PlanPath",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, static_centerline_optimizer, srv, PlanPath_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, static_centerline_optimizer, srv, PlanPath_Response)(),
};

static rosidl_service_type_support_t PlanPath__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &PlanPath__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, static_centerline_optimizer, srv, PlanPath)() {
  return &PlanPath__handle;
}

#if defined(__cplusplus)
}
#endif
