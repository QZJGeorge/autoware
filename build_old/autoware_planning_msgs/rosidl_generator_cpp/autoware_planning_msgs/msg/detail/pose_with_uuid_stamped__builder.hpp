// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_planning_msgs:msg/PoseWithUuidStamped.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_PLANNING_MSGS__MSG__DETAIL__POSE_WITH_UUID_STAMPED__BUILDER_HPP_
#define AUTOWARE_PLANNING_MSGS__MSG__DETAIL__POSE_WITH_UUID_STAMPED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_planning_msgs/msg/detail/pose_with_uuid_stamped__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_planning_msgs
{

namespace msg
{

namespace builder
{

class Init_PoseWithUuidStamped_uuid
{
public:
  explicit Init_PoseWithUuidStamped_uuid(::autoware_planning_msgs::msg::PoseWithUuidStamped & msg)
  : msg_(msg)
  {}
  ::autoware_planning_msgs::msg::PoseWithUuidStamped uuid(::autoware_planning_msgs::msg::PoseWithUuidStamped::_uuid_type arg)
  {
    msg_.uuid = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_planning_msgs::msg::PoseWithUuidStamped msg_;
};

class Init_PoseWithUuidStamped_pose
{
public:
  explicit Init_PoseWithUuidStamped_pose(::autoware_planning_msgs::msg::PoseWithUuidStamped & msg)
  : msg_(msg)
  {}
  Init_PoseWithUuidStamped_uuid pose(::autoware_planning_msgs::msg::PoseWithUuidStamped::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_PoseWithUuidStamped_uuid(msg_);
  }

private:
  ::autoware_planning_msgs::msg::PoseWithUuidStamped msg_;
};

class Init_PoseWithUuidStamped_header
{
public:
  Init_PoseWithUuidStamped_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PoseWithUuidStamped_pose header(::autoware_planning_msgs::msg::PoseWithUuidStamped::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PoseWithUuidStamped_pose(msg_);
  }

private:
  ::autoware_planning_msgs::msg::PoseWithUuidStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_planning_msgs::msg::PoseWithUuidStamped>()
{
  return autoware_planning_msgs::msg::builder::Init_PoseWithUuidStamped_header();
}

}  // namespace autoware_planning_msgs

#endif  // AUTOWARE_PLANNING_MSGS__MSG__DETAIL__POSE_WITH_UUID_STAMPED__BUILDER_HPP_
