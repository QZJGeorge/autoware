// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from tier4_system_msgs:msg/HazardStatus.idl
// generated code does not contain a copyright notice
#include "tier4_system_msgs/msg/detail/hazard_status__rosidl_typesupport_fastrtps_cpp.hpp"
#include "tier4_system_msgs/msg/detail/hazard_status__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace diagnostic_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const diagnostic_msgs::msg::DiagnosticStatus &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  diagnostic_msgs::msg::DiagnosticStatus &);
size_t get_serialized_size(
  const diagnostic_msgs::msg::DiagnosticStatus &,
  size_t current_alignment);
size_t
max_serialized_size_DiagnosticStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace diagnostic_msgs

// functions for diagnostic_msgs::msg::DiagnosticStatus already declared above

// functions for diagnostic_msgs::msg::DiagnosticStatus already declared above

// functions for diagnostic_msgs::msg::DiagnosticStatus already declared above


namespace tier4_system_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tier4_system_msgs
cdr_serialize(
  const tier4_system_msgs::msg::HazardStatus & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: level
  cdr << ros_message.level;
  // Member: emergency
  cdr << (ros_message.emergency ? true : false);
  // Member: emergency_holding
  cdr << (ros_message.emergency_holding ? true : false);
  // Member: diagnostics_nf
  {
    size_t size = ros_message.diagnostics_nf.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      diagnostic_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.diagnostics_nf[i],
        cdr);
    }
  }
  // Member: diagnostics_sf
  {
    size_t size = ros_message.diagnostics_sf.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      diagnostic_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.diagnostics_sf[i],
        cdr);
    }
  }
  // Member: diagnostics_lf
  {
    size_t size = ros_message.diagnostics_lf.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      diagnostic_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.diagnostics_lf[i],
        cdr);
    }
  }
  // Member: diagnostics_spf
  {
    size_t size = ros_message.diagnostics_spf.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      diagnostic_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.diagnostics_spf[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tier4_system_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  tier4_system_msgs::msg::HazardStatus & ros_message)
{
  // Member: level
  cdr >> ros_message.level;

  // Member: emergency
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.emergency = tmp ? true : false;
  }

  // Member: emergency_holding
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.emergency_holding = tmp ? true : false;
  }

  // Member: diagnostics_nf
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.diagnostics_nf.resize(size);
    for (size_t i = 0; i < size; i++) {
      diagnostic_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.diagnostics_nf[i]);
    }
  }

  // Member: diagnostics_sf
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.diagnostics_sf.resize(size);
    for (size_t i = 0; i < size; i++) {
      diagnostic_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.diagnostics_sf[i]);
    }
  }

  // Member: diagnostics_lf
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.diagnostics_lf.resize(size);
    for (size_t i = 0; i < size; i++) {
      diagnostic_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.diagnostics_lf[i]);
    }
  }

  // Member: diagnostics_spf
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.diagnostics_spf.resize(size);
    for (size_t i = 0; i < size; i++) {
      diagnostic_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.diagnostics_spf[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tier4_system_msgs
get_serialized_size(
  const tier4_system_msgs::msg::HazardStatus & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: level
  {
    size_t item_size = sizeof(ros_message.level);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: emergency
  {
    size_t item_size = sizeof(ros_message.emergency);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: emergency_holding
  {
    size_t item_size = sizeof(ros_message.emergency_holding);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: diagnostics_nf
  {
    size_t array_size = ros_message.diagnostics_nf.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        diagnostic_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.diagnostics_nf[index], current_alignment);
    }
  }
  // Member: diagnostics_sf
  {
    size_t array_size = ros_message.diagnostics_sf.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        diagnostic_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.diagnostics_sf[index], current_alignment);
    }
  }
  // Member: diagnostics_lf
  {
    size_t array_size = ros_message.diagnostics_lf.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        diagnostic_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.diagnostics_lf[index], current_alignment);
    }
  }
  // Member: diagnostics_spf
  {
    size_t array_size = ros_message.diagnostics_spf.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        diagnostic_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.diagnostics_spf[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tier4_system_msgs
max_serialized_size_HazardStatus(
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


  // Member: level
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: emergency
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: emergency_holding
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: diagnostics_nf
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
      size_t inner_size =
        diagnostic_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_DiagnosticStatus(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: diagnostics_sf
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
      size_t inner_size =
        diagnostic_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_DiagnosticStatus(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: diagnostics_lf
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
      size_t inner_size =
        diagnostic_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_DiagnosticStatus(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: diagnostics_spf
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
      size_t inner_size =
        diagnostic_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_DiagnosticStatus(
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
    using DataType = tier4_system_msgs::msg::HazardStatus;
    is_plain =
      (
      offsetof(DataType, diagnostics_spf) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _HazardStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const tier4_system_msgs::msg::HazardStatus *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _HazardStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<tier4_system_msgs::msg::HazardStatus *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _HazardStatus__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const tier4_system_msgs::msg::HazardStatus *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _HazardStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_HazardStatus(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _HazardStatus__callbacks = {
  "tier4_system_msgs::msg",
  "HazardStatus",
  _HazardStatus__cdr_serialize,
  _HazardStatus__cdr_deserialize,
  _HazardStatus__get_serialized_size,
  _HazardStatus__max_serialized_size
};

static rosidl_message_type_support_t _HazardStatus__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_HazardStatus__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace tier4_system_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_tier4_system_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<tier4_system_msgs::msg::HazardStatus>()
{
  return &tier4_system_msgs::msg::typesupport_fastrtps_cpp::_HazardStatus__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tier4_system_msgs, msg, HazardStatus)() {
  return &tier4_system_msgs::msg::typesupport_fastrtps_cpp::_HazardStatus__handle;
}

#ifdef __cplusplus
}
#endif
