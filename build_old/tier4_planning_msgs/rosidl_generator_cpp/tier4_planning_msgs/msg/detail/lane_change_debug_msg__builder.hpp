// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_planning_msgs:msg/LaneChangeDebugMsg.idl
// generated code does not contain a copyright notice

#ifndef TIER4_PLANNING_MSGS__MSG__DETAIL__LANE_CHANGE_DEBUG_MSG__BUILDER_HPP_
#define TIER4_PLANNING_MSGS__MSG__DETAIL__LANE_CHANGE_DEBUG_MSG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_planning_msgs/msg/detail/lane_change_debug_msg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_planning_msgs
{

namespace msg
{

namespace builder
{

class Init_LaneChangeDebugMsg_failed_reason
{
public:
  explicit Init_LaneChangeDebugMsg_failed_reason(::tier4_planning_msgs::msg::LaneChangeDebugMsg & msg)
  : msg_(msg)
  {}
  ::tier4_planning_msgs::msg::LaneChangeDebugMsg failed_reason(::tier4_planning_msgs::msg::LaneChangeDebugMsg::_failed_reason_type arg)
  {
    msg_.failed_reason = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_planning_msgs::msg::LaneChangeDebugMsg msg_;
};

class Init_LaneChangeDebugMsg_velocity
{
public:
  explicit Init_LaneChangeDebugMsg_velocity(::tier4_planning_msgs::msg::LaneChangeDebugMsg & msg)
  : msg_(msg)
  {}
  Init_LaneChangeDebugMsg_failed_reason velocity(::tier4_planning_msgs::msg::LaneChangeDebugMsg::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_LaneChangeDebugMsg_failed_reason(msg_);
  }

private:
  ::tier4_planning_msgs::msg::LaneChangeDebugMsg msg_;
};

class Init_LaneChangeDebugMsg_relative_distance
{
public:
  explicit Init_LaneChangeDebugMsg_relative_distance(::tier4_planning_msgs::msg::LaneChangeDebugMsg & msg)
  : msg_(msg)
  {}
  Init_LaneChangeDebugMsg_velocity relative_distance(::tier4_planning_msgs::msg::LaneChangeDebugMsg::_relative_distance_type arg)
  {
    msg_.relative_distance = std::move(arg);
    return Init_LaneChangeDebugMsg_velocity(msg_);
  }

private:
  ::tier4_planning_msgs::msg::LaneChangeDebugMsg msg_;
};

class Init_LaneChangeDebugMsg_is_front
{
public:
  explicit Init_LaneChangeDebugMsg_is_front(::tier4_planning_msgs::msg::LaneChangeDebugMsg & msg)
  : msg_(msg)
  {}
  Init_LaneChangeDebugMsg_relative_distance is_front(::tier4_planning_msgs::msg::LaneChangeDebugMsg::_is_front_type arg)
  {
    msg_.is_front = std::move(arg);
    return Init_LaneChangeDebugMsg_relative_distance(msg_);
  }

private:
  ::tier4_planning_msgs::msg::LaneChangeDebugMsg msg_;
};

class Init_LaneChangeDebugMsg_allow_lane_change
{
public:
  explicit Init_LaneChangeDebugMsg_allow_lane_change(::tier4_planning_msgs::msg::LaneChangeDebugMsg & msg)
  : msg_(msg)
  {}
  Init_LaneChangeDebugMsg_is_front allow_lane_change(::tier4_planning_msgs::msg::LaneChangeDebugMsg::_allow_lane_change_type arg)
  {
    msg_.allow_lane_change = std::move(arg);
    return Init_LaneChangeDebugMsg_is_front(msg_);
  }

private:
  ::tier4_planning_msgs::msg::LaneChangeDebugMsg msg_;
};

class Init_LaneChangeDebugMsg_object_id
{
public:
  Init_LaneChangeDebugMsg_object_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LaneChangeDebugMsg_allow_lane_change object_id(::tier4_planning_msgs::msg::LaneChangeDebugMsg::_object_id_type arg)
  {
    msg_.object_id = std::move(arg);
    return Init_LaneChangeDebugMsg_allow_lane_change(msg_);
  }

private:
  ::tier4_planning_msgs::msg::LaneChangeDebugMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_planning_msgs::msg::LaneChangeDebugMsg>()
{
  return tier4_planning_msgs::msg::builder::Init_LaneChangeDebugMsg_object_id();
}

}  // namespace tier4_planning_msgs

#endif  // TIER4_PLANNING_MSGS__MSG__DETAIL__LANE_CHANGE_DEBUG_MSG__BUILDER_HPP_
