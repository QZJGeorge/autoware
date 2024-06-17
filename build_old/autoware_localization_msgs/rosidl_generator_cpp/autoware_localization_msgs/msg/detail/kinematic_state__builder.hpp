// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_localization_msgs:msg/KinematicState.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_LOCALIZATION_MSGS__MSG__DETAIL__KINEMATIC_STATE__BUILDER_HPP_
#define AUTOWARE_LOCALIZATION_MSGS__MSG__DETAIL__KINEMATIC_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_localization_msgs/msg/detail/kinematic_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_localization_msgs
{

namespace msg
{

namespace builder
{

class Init_KinematicState_accel_with_covariance
{
public:
  explicit Init_KinematicState_accel_with_covariance(::autoware_localization_msgs::msg::KinematicState & msg)
  : msg_(msg)
  {}
  ::autoware_localization_msgs::msg::KinematicState accel_with_covariance(::autoware_localization_msgs::msg::KinematicState::_accel_with_covariance_type arg)
  {
    msg_.accel_with_covariance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_localization_msgs::msg::KinematicState msg_;
};

class Init_KinematicState_twist_with_covariance
{
public:
  explicit Init_KinematicState_twist_with_covariance(::autoware_localization_msgs::msg::KinematicState & msg)
  : msg_(msg)
  {}
  Init_KinematicState_accel_with_covariance twist_with_covariance(::autoware_localization_msgs::msg::KinematicState::_twist_with_covariance_type arg)
  {
    msg_.twist_with_covariance = std::move(arg);
    return Init_KinematicState_accel_with_covariance(msg_);
  }

private:
  ::autoware_localization_msgs::msg::KinematicState msg_;
};

class Init_KinematicState_pose_with_covariance
{
public:
  explicit Init_KinematicState_pose_with_covariance(::autoware_localization_msgs::msg::KinematicState & msg)
  : msg_(msg)
  {}
  Init_KinematicState_twist_with_covariance pose_with_covariance(::autoware_localization_msgs::msg::KinematicState::_pose_with_covariance_type arg)
  {
    msg_.pose_with_covariance = std::move(arg);
    return Init_KinematicState_twist_with_covariance(msg_);
  }

private:
  ::autoware_localization_msgs::msg::KinematicState msg_;
};

class Init_KinematicState_child_frame_id
{
public:
  explicit Init_KinematicState_child_frame_id(::autoware_localization_msgs::msg::KinematicState & msg)
  : msg_(msg)
  {}
  Init_KinematicState_pose_with_covariance child_frame_id(::autoware_localization_msgs::msg::KinematicState::_child_frame_id_type arg)
  {
    msg_.child_frame_id = std::move(arg);
    return Init_KinematicState_pose_with_covariance(msg_);
  }

private:
  ::autoware_localization_msgs::msg::KinematicState msg_;
};

class Init_KinematicState_header
{
public:
  Init_KinematicState_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_KinematicState_child_frame_id header(::autoware_localization_msgs::msg::KinematicState::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_KinematicState_child_frame_id(msg_);
  }

private:
  ::autoware_localization_msgs::msg::KinematicState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_localization_msgs::msg::KinematicState>()
{
  return autoware_localization_msgs::msg::builder::Init_KinematicState_header();
}

}  // namespace autoware_localization_msgs

#endif  // AUTOWARE_LOCALIZATION_MSGS__MSG__DETAIL__KINEMATIC_STATE__BUILDER_HPP_
