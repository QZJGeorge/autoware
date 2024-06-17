// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_planning_msgs:msg/LaneletRoute.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_PLANNING_MSGS__MSG__DETAIL__LANELET_ROUTE__BUILDER_HPP_
#define AUTOWARE_PLANNING_MSGS__MSG__DETAIL__LANELET_ROUTE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_planning_msgs/msg/detail/lanelet_route__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_planning_msgs
{

namespace msg
{

namespace builder
{

class Init_LaneletRoute_allow_modification
{
public:
  explicit Init_LaneletRoute_allow_modification(::autoware_planning_msgs::msg::LaneletRoute & msg)
  : msg_(msg)
  {}
  ::autoware_planning_msgs::msg::LaneletRoute allow_modification(::autoware_planning_msgs::msg::LaneletRoute::_allow_modification_type arg)
  {
    msg_.allow_modification = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_planning_msgs::msg::LaneletRoute msg_;
};

class Init_LaneletRoute_uuid
{
public:
  explicit Init_LaneletRoute_uuid(::autoware_planning_msgs::msg::LaneletRoute & msg)
  : msg_(msg)
  {}
  Init_LaneletRoute_allow_modification uuid(::autoware_planning_msgs::msg::LaneletRoute::_uuid_type arg)
  {
    msg_.uuid = std::move(arg);
    return Init_LaneletRoute_allow_modification(msg_);
  }

private:
  ::autoware_planning_msgs::msg::LaneletRoute msg_;
};

class Init_LaneletRoute_segments
{
public:
  explicit Init_LaneletRoute_segments(::autoware_planning_msgs::msg::LaneletRoute & msg)
  : msg_(msg)
  {}
  Init_LaneletRoute_uuid segments(::autoware_planning_msgs::msg::LaneletRoute::_segments_type arg)
  {
    msg_.segments = std::move(arg);
    return Init_LaneletRoute_uuid(msg_);
  }

private:
  ::autoware_planning_msgs::msg::LaneletRoute msg_;
};

class Init_LaneletRoute_goal_pose
{
public:
  explicit Init_LaneletRoute_goal_pose(::autoware_planning_msgs::msg::LaneletRoute & msg)
  : msg_(msg)
  {}
  Init_LaneletRoute_segments goal_pose(::autoware_planning_msgs::msg::LaneletRoute::_goal_pose_type arg)
  {
    msg_.goal_pose = std::move(arg);
    return Init_LaneletRoute_segments(msg_);
  }

private:
  ::autoware_planning_msgs::msg::LaneletRoute msg_;
};

class Init_LaneletRoute_start_pose
{
public:
  explicit Init_LaneletRoute_start_pose(::autoware_planning_msgs::msg::LaneletRoute & msg)
  : msg_(msg)
  {}
  Init_LaneletRoute_goal_pose start_pose(::autoware_planning_msgs::msg::LaneletRoute::_start_pose_type arg)
  {
    msg_.start_pose = std::move(arg);
    return Init_LaneletRoute_goal_pose(msg_);
  }

private:
  ::autoware_planning_msgs::msg::LaneletRoute msg_;
};

class Init_LaneletRoute_header
{
public:
  Init_LaneletRoute_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LaneletRoute_start_pose header(::autoware_planning_msgs::msg::LaneletRoute::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_LaneletRoute_start_pose(msg_);
  }

private:
  ::autoware_planning_msgs::msg::LaneletRoute msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_planning_msgs::msg::LaneletRoute>()
{
  return autoware_planning_msgs::msg::builder::Init_LaneletRoute_header();
}

}  // namespace autoware_planning_msgs

#endif  // AUTOWARE_PLANNING_MSGS__MSG__DETAIL__LANELET_ROUTE__BUILDER_HPP_
