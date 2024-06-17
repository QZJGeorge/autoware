// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from tier4_perception_msgs:msg/TrafficSignal.idl
// generated code does not contain a copyright notice
#include "tier4_perception_msgs/msg/detail/traffic_signal__rosidl_typesupport_fastrtps_cpp.hpp"
#include "tier4_perception_msgs/msg/detail/traffic_signal__struct.hpp"

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
namespace tier4_perception_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const tier4_perception_msgs::msg::TrafficLightElement &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  tier4_perception_msgs::msg::TrafficLightElement &);
size_t get_serialized_size(
  const tier4_perception_msgs::msg::TrafficLightElement &,
  size_t current_alignment);
size_t
max_serialized_size_TrafficLightElement(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace tier4_perception_msgs


namespace tier4_perception_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tier4_perception_msgs
cdr_serialize(
  const tier4_perception_msgs::msg::TrafficSignal & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: traffic_light_id
  cdr << ros_message.traffic_light_id;
  // Member: elements
  {
    size_t size = ros_message.elements.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      tier4_perception_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.elements[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tier4_perception_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  tier4_perception_msgs::msg::TrafficSignal & ros_message)
{
  // Member: traffic_light_id
  cdr >> ros_message.traffic_light_id;

  // Member: elements
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.elements.resize(size);
    for (size_t i = 0; i < size; i++) {
      tier4_perception_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.elements[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tier4_perception_msgs
get_serialized_size(
  const tier4_perception_msgs::msg::TrafficSignal & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: traffic_light_id
  {
    size_t item_size = sizeof(ros_message.traffic_light_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: elements
  {
    size_t array_size = ros_message.elements.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        tier4_perception_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.elements[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tier4_perception_msgs
max_serialized_size_TrafficSignal(
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


  // Member: traffic_light_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: elements
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
        tier4_perception_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_TrafficLightElement(
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
    using DataType = tier4_perception_msgs::msg::TrafficSignal;
    is_plain =
      (
      offsetof(DataType, elements) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _TrafficSignal__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const tier4_perception_msgs::msg::TrafficSignal *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _TrafficSignal__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<tier4_perception_msgs::msg::TrafficSignal *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _TrafficSignal__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const tier4_perception_msgs::msg::TrafficSignal *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _TrafficSignal__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_TrafficSignal(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _TrafficSignal__callbacks = {
  "tier4_perception_msgs::msg",
  "TrafficSignal",
  _TrafficSignal__cdr_serialize,
  _TrafficSignal__cdr_deserialize,
  _TrafficSignal__get_serialized_size,
  _TrafficSignal__max_serialized_size
};

static rosidl_message_type_support_t _TrafficSignal__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_TrafficSignal__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace tier4_perception_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_tier4_perception_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<tier4_perception_msgs::msg::TrafficSignal>()
{
  return &tier4_perception_msgs::msg::typesupport_fastrtps_cpp::_TrafficSignal__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tier4_perception_msgs, msg, TrafficSignal)() {
  return &tier4_perception_msgs::msg::typesupport_fastrtps_cpp::_TrafficSignal__handle;
}

#ifdef __cplusplus
}
#endif
