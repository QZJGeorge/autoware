// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from tier4_simulation_msgs:msg/FaultInjectionEvent.idl
// generated code does not contain a copyright notice

#ifndef TIER4_SIMULATION_MSGS__MSG__DETAIL__FAULT_INJECTION_EVENT__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define TIER4_SIMULATION_MSGS__MSG__DETAIL__FAULT_INJECTION_EVENT__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "tier4_simulation_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "tier4_simulation_msgs/msg/detail/fault_injection_event__struct.hpp"

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

#include "fastcdr/Cdr.h"

namespace tier4_simulation_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tier4_simulation_msgs
cdr_serialize(
  const tier4_simulation_msgs::msg::FaultInjectionEvent & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tier4_simulation_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  tier4_simulation_msgs::msg::FaultInjectionEvent & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tier4_simulation_msgs
get_serialized_size(
  const tier4_simulation_msgs::msg::FaultInjectionEvent & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tier4_simulation_msgs
max_serialized_size_FaultInjectionEvent(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace tier4_simulation_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tier4_simulation_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tier4_simulation_msgs, msg, FaultInjectionEvent)();

#ifdef __cplusplus
}
#endif

#endif  // TIER4_SIMULATION_MSGS__MSG__DETAIL__FAULT_INJECTION_EVENT__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
