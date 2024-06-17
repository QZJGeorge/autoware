// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from tier4_api_msgs:msg/AwapiAutowareStatus.idl
// generated code does not contain a copyright notice
#include "tier4_api_msgs/msg/detail/awapi_autoware_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "tier4_api_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "tier4_api_msgs/msg/detail/awapi_autoware_status__struct.h"
#include "tier4_api_msgs/msg/detail/awapi_autoware_status__functions.h"
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

#include "diagnostic_msgs/msg/detail/diagnostic_status__functions.h"  // diagnostics, error_diagnostics
#include "rosidl_runtime_c/string.h"  // autoware_state
#include "rosidl_runtime_c/string_functions.h"  // autoware_state
#include "std_msgs/msg/detail/header__functions.h"  // header
#include "tier4_planning_msgs/msg/detail/stop_reason_array__functions.h"  // stop_reason
#include "tier4_system_msgs/msg/detail/hazard_status_stamped__functions.h"  // hazard_status

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_tier4_api_msgs
size_t get_serialized_size_diagnostic_msgs__msg__DiagnosticStatus(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_tier4_api_msgs
size_t max_serialized_size_diagnostic_msgs__msg__DiagnosticStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_tier4_api_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, diagnostic_msgs, msg, DiagnosticStatus)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_tier4_api_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_tier4_api_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_tier4_api_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_tier4_api_msgs
size_t get_serialized_size_tier4_planning_msgs__msg__StopReasonArray(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_tier4_api_msgs
size_t max_serialized_size_tier4_planning_msgs__msg__StopReasonArray(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_tier4_api_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tier4_planning_msgs, msg, StopReasonArray)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_tier4_api_msgs
size_t get_serialized_size_tier4_system_msgs__msg__HazardStatusStamped(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_tier4_api_msgs
size_t max_serialized_size_tier4_system_msgs__msg__HazardStatusStamped(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_tier4_api_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tier4_system_msgs, msg, HazardStatusStamped)();


using _AwapiAutowareStatus__ros_msg_type = tier4_api_msgs__msg__AwapiAutowareStatus;

static bool _AwapiAutowareStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _AwapiAutowareStatus__ros_msg_type * ros_message = static_cast<const _AwapiAutowareStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: autoware_state
  {
    const rosidl_runtime_c__String * str = &ros_message->autoware_state;
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

  // Field name: control_mode
  {
    cdr << ros_message->control_mode;
  }

  // Field name: gate_mode
  {
    cdr << ros_message->gate_mode;
  }

  // Field name: emergency_stopped
  {
    cdr << (ros_message->emergency_stopped ? true : false);
  }

  // Field name: current_max_velocity
  {
    cdr << ros_message->current_max_velocity;
  }

  // Field name: hazard_status
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tier4_system_msgs, msg, HazardStatusStamped
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->hazard_status, cdr))
    {
      return false;
    }
  }

  // Field name: stop_reason
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tier4_planning_msgs, msg, StopReasonArray
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->stop_reason, cdr))
    {
      return false;
    }
  }

  // Field name: diagnostics
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, diagnostic_msgs, msg, DiagnosticStatus
      )()->data);
    size_t size = ros_message->diagnostics.size;
    auto array_ptr = ros_message->diagnostics.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: error_diagnostics
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, diagnostic_msgs, msg, DiagnosticStatus
      )()->data);
    size_t size = ros_message->error_diagnostics.size;
    auto array_ptr = ros_message->error_diagnostics.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: autonomous_overridden
  {
    cdr << (ros_message->autonomous_overridden ? true : false);
  }

  // Field name: arrived_goal
  {
    cdr << (ros_message->arrived_goal ? true : false);
  }

  return true;
}

static bool _AwapiAutowareStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _AwapiAutowareStatus__ros_msg_type * ros_message = static_cast<_AwapiAutowareStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: autoware_state
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->autoware_state.data) {
      rosidl_runtime_c__String__init(&ros_message->autoware_state);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->autoware_state,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'autoware_state'\n");
      return false;
    }
  }

  // Field name: control_mode
  {
    cdr >> ros_message->control_mode;
  }

  // Field name: gate_mode
  {
    cdr >> ros_message->gate_mode;
  }

  // Field name: emergency_stopped
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->emergency_stopped = tmp ? true : false;
  }

  // Field name: current_max_velocity
  {
    cdr >> ros_message->current_max_velocity;
  }

  // Field name: hazard_status
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tier4_system_msgs, msg, HazardStatusStamped
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->hazard_status))
    {
      return false;
    }
  }

  // Field name: stop_reason
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tier4_planning_msgs, msg, StopReasonArray
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->stop_reason))
    {
      return false;
    }
  }

  // Field name: diagnostics
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, diagnostic_msgs, msg, DiagnosticStatus
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->diagnostics.data) {
      diagnostic_msgs__msg__DiagnosticStatus__Sequence__fini(&ros_message->diagnostics);
    }
    if (!diagnostic_msgs__msg__DiagnosticStatus__Sequence__init(&ros_message->diagnostics, size)) {
      fprintf(stderr, "failed to create array for field 'diagnostics'");
      return false;
    }
    auto array_ptr = ros_message->diagnostics.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: error_diagnostics
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, diagnostic_msgs, msg, DiagnosticStatus
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->error_diagnostics.data) {
      diagnostic_msgs__msg__DiagnosticStatus__Sequence__fini(&ros_message->error_diagnostics);
    }
    if (!diagnostic_msgs__msg__DiagnosticStatus__Sequence__init(&ros_message->error_diagnostics, size)) {
      fprintf(stderr, "failed to create array for field 'error_diagnostics'");
      return false;
    }
    auto array_ptr = ros_message->error_diagnostics.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: autonomous_overridden
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->autonomous_overridden = tmp ? true : false;
  }

  // Field name: arrived_goal
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->arrived_goal = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tier4_api_msgs
size_t get_serialized_size_tier4_api_msgs__msg__AwapiAutowareStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _AwapiAutowareStatus__ros_msg_type * ros_message = static_cast<const _AwapiAutowareStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name autoware_state
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->autoware_state.size + 1);
  // field.name control_mode
  {
    size_t item_size = sizeof(ros_message->control_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gate_mode
  {
    size_t item_size = sizeof(ros_message->gate_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name emergency_stopped
  {
    size_t item_size = sizeof(ros_message->emergency_stopped);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name current_max_velocity
  {
    size_t item_size = sizeof(ros_message->current_max_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hazard_status

  current_alignment += get_serialized_size_tier4_system_msgs__msg__HazardStatusStamped(
    &(ros_message->hazard_status), current_alignment);
  // field.name stop_reason

  current_alignment += get_serialized_size_tier4_planning_msgs__msg__StopReasonArray(
    &(ros_message->stop_reason), current_alignment);
  // field.name diagnostics
  {
    size_t array_size = ros_message->diagnostics.size;
    auto array_ptr = ros_message->diagnostics.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_diagnostic_msgs__msg__DiagnosticStatus(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name error_diagnostics
  {
    size_t array_size = ros_message->error_diagnostics.size;
    auto array_ptr = ros_message->error_diagnostics.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_diagnostic_msgs__msg__DiagnosticStatus(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name autonomous_overridden
  {
    size_t item_size = sizeof(ros_message->autonomous_overridden);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name arrived_goal
  {
    size_t item_size = sizeof(ros_message->arrived_goal);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _AwapiAutowareStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_tier4_api_msgs__msg__AwapiAutowareStatus(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tier4_api_msgs
size_t max_serialized_size_tier4_api_msgs__msg__AwapiAutowareStatus(
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

  // member: header
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: autoware_state
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
  // member: control_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: gate_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: emergency_stopped
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: current_max_velocity
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: hazard_status
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_tier4_system_msgs__msg__HazardStatusStamped(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: stop_reason
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_tier4_planning_msgs__msg__StopReasonArray(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: diagnostics
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
        max_serialized_size_diagnostic_msgs__msg__DiagnosticStatus(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: error_diagnostics
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
        max_serialized_size_diagnostic_msgs__msg__DiagnosticStatus(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: autonomous_overridden
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: arrived_goal
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
    using DataType = tier4_api_msgs__msg__AwapiAutowareStatus;
    is_plain =
      (
      offsetof(DataType, arrived_goal) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _AwapiAutowareStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_tier4_api_msgs__msg__AwapiAutowareStatus(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_AwapiAutowareStatus = {
  "tier4_api_msgs::msg",
  "AwapiAutowareStatus",
  _AwapiAutowareStatus__cdr_serialize,
  _AwapiAutowareStatus__cdr_deserialize,
  _AwapiAutowareStatus__get_serialized_size,
  _AwapiAutowareStatus__max_serialized_size
};

static rosidl_message_type_support_t _AwapiAutowareStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_AwapiAutowareStatus,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tier4_api_msgs, msg, AwapiAutowareStatus)() {
  return &_AwapiAutowareStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
