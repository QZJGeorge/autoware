// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_planning_msgs:msg/AvoidanceDebugMsg.idl
// generated code does not contain a copyright notice

#ifndef TIER4_PLANNING_MSGS__MSG__DETAIL__AVOIDANCE_DEBUG_MSG__BUILDER_HPP_
#define TIER4_PLANNING_MSGS__MSG__DETAIL__AVOIDANCE_DEBUG_MSG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_planning_msgs/msg/detail/avoidance_debug_msg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_planning_msgs
{

namespace msg
{

namespace builder
{

class Init_AvoidanceDebugMsg_failed_reason
{
public:
  explicit Init_AvoidanceDebugMsg_failed_reason(::tier4_planning_msgs::msg::AvoidanceDebugMsg & msg)
  : msg_(msg)
  {}
  ::tier4_planning_msgs::msg::AvoidanceDebugMsg failed_reason(::tier4_planning_msgs::msg::AvoidanceDebugMsg::_failed_reason_type arg)
  {
    msg_.failed_reason = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_planning_msgs::msg::AvoidanceDebugMsg msg_;
};

class Init_AvoidanceDebugMsg_maximum_jerk
{
public:
  explicit Init_AvoidanceDebugMsg_maximum_jerk(::tier4_planning_msgs::msg::AvoidanceDebugMsg & msg)
  : msg_(msg)
  {}
  Init_AvoidanceDebugMsg_failed_reason maximum_jerk(::tier4_planning_msgs::msg::AvoidanceDebugMsg::_maximum_jerk_type arg)
  {
    msg_.maximum_jerk = std::move(arg);
    return Init_AvoidanceDebugMsg_failed_reason(msg_);
  }

private:
  ::tier4_planning_msgs::msg::AvoidanceDebugMsg msg_;
};

class Init_AvoidanceDebugMsg_required_jerk
{
public:
  explicit Init_AvoidanceDebugMsg_required_jerk(::tier4_planning_msgs::msg::AvoidanceDebugMsg & msg)
  : msg_(msg)
  {}
  Init_AvoidanceDebugMsg_maximum_jerk required_jerk(::tier4_planning_msgs::msg::AvoidanceDebugMsg::_required_jerk_type arg)
  {
    msg_.required_jerk = std::move(arg);
    return Init_AvoidanceDebugMsg_maximum_jerk(msg_);
  }

private:
  ::tier4_planning_msgs::msg::AvoidanceDebugMsg msg_;
};

class Init_AvoidanceDebugMsg_max_shift_length
{
public:
  explicit Init_AvoidanceDebugMsg_max_shift_length(::tier4_planning_msgs::msg::AvoidanceDebugMsg & msg)
  : msg_(msg)
  {}
  Init_AvoidanceDebugMsg_required_jerk max_shift_length(::tier4_planning_msgs::msg::AvoidanceDebugMsg::_max_shift_length_type arg)
  {
    msg_.max_shift_length = std::move(arg);
    return Init_AvoidanceDebugMsg_required_jerk(msg_);
  }

private:
  ::tier4_planning_msgs::msg::AvoidanceDebugMsg msg_;
};

class Init_AvoidanceDebugMsg_to_furthest_linestring_distance
{
public:
  explicit Init_AvoidanceDebugMsg_to_furthest_linestring_distance(::tier4_planning_msgs::msg::AvoidanceDebugMsg & msg)
  : msg_(msg)
  {}
  Init_AvoidanceDebugMsg_max_shift_length to_furthest_linestring_distance(::tier4_planning_msgs::msg::AvoidanceDebugMsg::_to_furthest_linestring_distance_type arg)
  {
    msg_.to_furthest_linestring_distance = std::move(arg);
    return Init_AvoidanceDebugMsg_max_shift_length(msg_);
  }

private:
  ::tier4_planning_msgs::msg::AvoidanceDebugMsg msg_;
};

class Init_AvoidanceDebugMsg_lateral_distance_from_centerline
{
public:
  explicit Init_AvoidanceDebugMsg_lateral_distance_from_centerline(::tier4_planning_msgs::msg::AvoidanceDebugMsg & msg)
  : msg_(msg)
  {}
  Init_AvoidanceDebugMsg_to_furthest_linestring_distance lateral_distance_from_centerline(::tier4_planning_msgs::msg::AvoidanceDebugMsg::_lateral_distance_from_centerline_type arg)
  {
    msg_.lateral_distance_from_centerline = std::move(arg);
    return Init_AvoidanceDebugMsg_to_furthest_linestring_distance(msg_);
  }

private:
  ::tier4_planning_msgs::msg::AvoidanceDebugMsg msg_;
};

class Init_AvoidanceDebugMsg_longitudinal_distance
{
public:
  explicit Init_AvoidanceDebugMsg_longitudinal_distance(::tier4_planning_msgs::msg::AvoidanceDebugMsg & msg)
  : msg_(msg)
  {}
  Init_AvoidanceDebugMsg_lateral_distance_from_centerline longitudinal_distance(::tier4_planning_msgs::msg::AvoidanceDebugMsg::_longitudinal_distance_type arg)
  {
    msg_.longitudinal_distance = std::move(arg);
    return Init_AvoidanceDebugMsg_lateral_distance_from_centerline(msg_);
  }

private:
  ::tier4_planning_msgs::msg::AvoidanceDebugMsg msg_;
};

class Init_AvoidanceDebugMsg_allow_avoidance
{
public:
  explicit Init_AvoidanceDebugMsg_allow_avoidance(::tier4_planning_msgs::msg::AvoidanceDebugMsg & msg)
  : msg_(msg)
  {}
  Init_AvoidanceDebugMsg_longitudinal_distance allow_avoidance(::tier4_planning_msgs::msg::AvoidanceDebugMsg::_allow_avoidance_type arg)
  {
    msg_.allow_avoidance = std::move(arg);
    return Init_AvoidanceDebugMsg_longitudinal_distance(msg_);
  }

private:
  ::tier4_planning_msgs::msg::AvoidanceDebugMsg msg_;
};

class Init_AvoidanceDebugMsg_object_id
{
public:
  Init_AvoidanceDebugMsg_object_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AvoidanceDebugMsg_allow_avoidance object_id(::tier4_planning_msgs::msg::AvoidanceDebugMsg::_object_id_type arg)
  {
    msg_.object_id = std::move(arg);
    return Init_AvoidanceDebugMsg_allow_avoidance(msg_);
  }

private:
  ::tier4_planning_msgs::msg::AvoidanceDebugMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_planning_msgs::msg::AvoidanceDebugMsg>()
{
  return tier4_planning_msgs::msg::builder::Init_AvoidanceDebugMsg_object_id();
}

}  // namespace tier4_planning_msgs

#endif  // TIER4_PLANNING_MSGS__MSG__DETAIL__AVOIDANCE_DEBUG_MSG__BUILDER_HPP_
