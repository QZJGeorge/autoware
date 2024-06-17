// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from control_performance_analysis:msg/DrivingMonitorStamped.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_PERFORMANCE_ANALYSIS__MSG__DETAIL__DRIVING_MONITOR_STAMPED__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define CONTROL_PERFORMANCE_ANALYSIS__MSG__DETAIL__DRIVING_MONITOR_STAMPED__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "control_performance_analysis/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "control_performance_analysis/msg/detail/driving_monitor_stamped__struct.hpp"

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

namespace control_performance_analysis
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_control_performance_analysis
cdr_serialize(
  const control_performance_analysis::msg::DrivingMonitorStamped & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_control_performance_analysis
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  control_performance_analysis::msg::DrivingMonitorStamped & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_control_performance_analysis
get_serialized_size(
  const control_performance_analysis::msg::DrivingMonitorStamped & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_control_performance_analysis
max_serialized_size_DrivingMonitorStamped(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace control_performance_analysis

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_control_performance_analysis
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, control_performance_analysis, msg, DrivingMonitorStamped)();

#ifdef __cplusplus
}
#endif

#endif  // CONTROL_PERFORMANCE_ANALYSIS__MSG__DETAIL__DRIVING_MONITOR_STAMPED__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
