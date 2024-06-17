// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from behavior_velocity_planner:srv/LoadPlugin.idl
// generated code does not contain a copyright notice

#ifndef BEHAVIOR_VELOCITY_PLANNER__SRV__DETAIL__LOAD_PLUGIN__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define BEHAVIOR_VELOCITY_PLANNER__SRV__DETAIL__LOAD_PLUGIN__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "behavior_velocity_planner/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "behavior_velocity_planner/srv/detail/load_plugin__struct.hpp"

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

namespace behavior_velocity_planner
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_behavior_velocity_planner
cdr_serialize(
  const behavior_velocity_planner::srv::LoadPlugin_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_behavior_velocity_planner
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  behavior_velocity_planner::srv::LoadPlugin_Request & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_behavior_velocity_planner
get_serialized_size(
  const behavior_velocity_planner::srv::LoadPlugin_Request & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_behavior_velocity_planner
max_serialized_size_LoadPlugin_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace behavior_velocity_planner

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_behavior_velocity_planner
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, behavior_velocity_planner, srv, LoadPlugin_Request)();

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "behavior_velocity_planner/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
// already included above
// #include "behavior_velocity_planner/srv/detail/load_plugin__struct.hpp"

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

// already included above
// #include "fastcdr/Cdr.h"

namespace behavior_velocity_planner
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_behavior_velocity_planner
cdr_serialize(
  const behavior_velocity_planner::srv::LoadPlugin_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_behavior_velocity_planner
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  behavior_velocity_planner::srv::LoadPlugin_Response & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_behavior_velocity_planner
get_serialized_size(
  const behavior_velocity_planner::srv::LoadPlugin_Response & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_behavior_velocity_planner
max_serialized_size_LoadPlugin_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace behavior_velocity_planner

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_behavior_velocity_planner
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, behavior_velocity_planner, srv, LoadPlugin_Response)();

#ifdef __cplusplus
}
#endif

#include "rmw/types.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "behavior_velocity_planner/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_behavior_velocity_planner
const rosidl_service_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, behavior_velocity_planner, srv, LoadPlugin)();

#ifdef __cplusplus
}
#endif

#endif  // BEHAVIOR_VELOCITY_PLANNER__SRV__DETAIL__LOAD_PLUGIN__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
