// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from morai_msgs:msg/ScenarioLoad.idl
// generated code does not contain a copyright notice
#include "morai_msgs/msg/detail/scenario_load__rosidl_typesupport_fastrtps_cpp.hpp"
#include "morai_msgs/msg/detail/scenario_load__struct.hpp"

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

namespace morai_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_morai_msgs
cdr_serialize(
  const morai_msgs::msg::ScenarioLoad & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: file_name
  cdr << ros_message.file_name;
  // Member: load_network_connection_data
  cdr << (ros_message.load_network_connection_data ? true : false);
  // Member: delete_all
  cdr << (ros_message.delete_all ? true : false);
  // Member: load_ego_vehicle_data
  cdr << (ros_message.load_ego_vehicle_data ? true : false);
  // Member: load_surrounding_vehicle_data
  cdr << (ros_message.load_surrounding_vehicle_data ? true : false);
  // Member: load_pedestrian_data
  cdr << (ros_message.load_pedestrian_data ? true : false);
  // Member: load_obstacle_data
  cdr << (ros_message.load_obstacle_data ? true : false);
  // Member: set_pause
  cdr << (ros_message.set_pause ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_morai_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  morai_msgs::msg::ScenarioLoad & ros_message)
{
  // Member: file_name
  cdr >> ros_message.file_name;

  // Member: load_network_connection_data
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.load_network_connection_data = tmp ? true : false;
  }

  // Member: delete_all
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.delete_all = tmp ? true : false;
  }

  // Member: load_ego_vehicle_data
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.load_ego_vehicle_data = tmp ? true : false;
  }

  // Member: load_surrounding_vehicle_data
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.load_surrounding_vehicle_data = tmp ? true : false;
  }

  // Member: load_pedestrian_data
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.load_pedestrian_data = tmp ? true : false;
  }

  // Member: load_obstacle_data
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.load_obstacle_data = tmp ? true : false;
  }

  // Member: set_pause
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.set_pause = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_morai_msgs
get_serialized_size(
  const morai_msgs::msg::ScenarioLoad & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: file_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.file_name.size() + 1);
  // Member: load_network_connection_data
  {
    size_t item_size = sizeof(ros_message.load_network_connection_data);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: delete_all
  {
    size_t item_size = sizeof(ros_message.delete_all);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: load_ego_vehicle_data
  {
    size_t item_size = sizeof(ros_message.load_ego_vehicle_data);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: load_surrounding_vehicle_data
  {
    size_t item_size = sizeof(ros_message.load_surrounding_vehicle_data);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: load_pedestrian_data
  {
    size_t item_size = sizeof(ros_message.load_pedestrian_data);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: load_obstacle_data
  {
    size_t item_size = sizeof(ros_message.load_obstacle_data);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: set_pause
  {
    size_t item_size = sizeof(ros_message.set_pause);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_morai_msgs
max_serialized_size_ScenarioLoad(
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


  // Member: file_name
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

  // Member: load_network_connection_data
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: delete_all
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: load_ego_vehicle_data
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: load_surrounding_vehicle_data
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: load_pedestrian_data
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: load_obstacle_data
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: set_pause
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
    using DataType = morai_msgs::msg::ScenarioLoad;
    is_plain =
      (
      offsetof(DataType, set_pause) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _ScenarioLoad__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const morai_msgs::msg::ScenarioLoad *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ScenarioLoad__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<morai_msgs::msg::ScenarioLoad *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ScenarioLoad__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const morai_msgs::msg::ScenarioLoad *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ScenarioLoad__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ScenarioLoad(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _ScenarioLoad__callbacks = {
  "morai_msgs::msg",
  "ScenarioLoad",
  _ScenarioLoad__cdr_serialize,
  _ScenarioLoad__cdr_deserialize,
  _ScenarioLoad__get_serialized_size,
  _ScenarioLoad__max_serialized_size
};

static rosidl_message_type_support_t _ScenarioLoad__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ScenarioLoad__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace morai_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_morai_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<morai_msgs::msg::ScenarioLoad>()
{
  return &morai_msgs::msg::typesupport_fastrtps_cpp::_ScenarioLoad__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, morai_msgs, msg, ScenarioLoad)() {
  return &morai_msgs::msg::typesupport_fastrtps_cpp::_ScenarioLoad__handle;
}

#ifdef __cplusplus
}
#endif
