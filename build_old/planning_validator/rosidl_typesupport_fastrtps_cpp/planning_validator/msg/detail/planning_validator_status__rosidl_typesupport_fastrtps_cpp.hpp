// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from planning_validator:msg/PlanningValidatorStatus.idl
// generated code does not contain a copyright notice

#ifndef PLANNING_VALIDATOR__MSG__DETAIL__PLANNING_VALIDATOR_STATUS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define PLANNING_VALIDATOR__MSG__DETAIL__PLANNING_VALIDATOR_STATUS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "planning_validator/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "planning_validator/msg/detail/planning_validator_status__struct.hpp"

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

namespace planning_validator
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_planning_validator
cdr_serialize(
  const planning_validator::msg::PlanningValidatorStatus & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_planning_validator
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  planning_validator::msg::PlanningValidatorStatus & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_planning_validator
get_serialized_size(
  const planning_validator::msg::PlanningValidatorStatus & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_planning_validator
max_serialized_size_PlanningValidatorStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace planning_validator

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_planning_validator
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, planning_validator, msg, PlanningValidatorStatus)();

#ifdef __cplusplus
}
#endif

#endif  // PLANNING_VALIDATOR__MSG__DETAIL__PLANNING_VALIDATOR_STATUS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
