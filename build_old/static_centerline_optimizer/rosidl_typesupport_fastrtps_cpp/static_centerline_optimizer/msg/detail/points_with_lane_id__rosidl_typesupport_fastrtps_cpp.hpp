// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from static_centerline_optimizer:msg/PointsWithLaneId.idl
// generated code does not contain a copyright notice

#ifndef STATIC_CENTERLINE_OPTIMIZER__MSG__DETAIL__POINTS_WITH_LANE_ID__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define STATIC_CENTERLINE_OPTIMIZER__MSG__DETAIL__POINTS_WITH_LANE_ID__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "static_centerline_optimizer/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "static_centerline_optimizer/msg/detail/points_with_lane_id__struct.hpp"

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

namespace static_centerline_optimizer
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_static_centerline_optimizer
cdr_serialize(
  const static_centerline_optimizer::msg::PointsWithLaneId & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_static_centerline_optimizer
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  static_centerline_optimizer::msg::PointsWithLaneId & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_static_centerline_optimizer
get_serialized_size(
  const static_centerline_optimizer::msg::PointsWithLaneId & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_static_centerline_optimizer
max_serialized_size_PointsWithLaneId(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace static_centerline_optimizer

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_static_centerline_optimizer
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, static_centerline_optimizer, msg, PointsWithLaneId)();

#ifdef __cplusplus
}
#endif

#endif  // STATIC_CENTERLINE_OPTIMIZER__MSG__DETAIL__POINTS_WITH_LANE_ID__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
