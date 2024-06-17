// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from planning_debug_tools:msg/TrajectoryDebugInfo.idl
// generated code does not contain a copyright notice

#ifndef PLANNING_DEBUG_TOOLS__MSG__DETAIL__TRAJECTORY_DEBUG_INFO__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define PLANNING_DEBUG_TOOLS__MSG__DETAIL__TRAJECTORY_DEBUG_INFO__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "planning_debug_tools/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "planning_debug_tools/msg/detail/trajectory_debug_info__struct.hpp"

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

namespace planning_debug_tools
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_planning_debug_tools
cdr_serialize(
  const planning_debug_tools::msg::TrajectoryDebugInfo & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_planning_debug_tools
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  planning_debug_tools::msg::TrajectoryDebugInfo & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_planning_debug_tools
get_serialized_size(
  const planning_debug_tools::msg::TrajectoryDebugInfo & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_planning_debug_tools
max_serialized_size_TrajectoryDebugInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace planning_debug_tools

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_planning_debug_tools
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, planning_debug_tools, msg, TrajectoryDebugInfo)();

#ifdef __cplusplus
}
#endif

#endif  // PLANNING_DEBUG_TOOLS__MSG__DETAIL__TRAJECTORY_DEBUG_INFO__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
