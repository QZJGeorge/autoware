// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_adapi_v1_msgs:msg/DynamicObjectKinematics.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__DYNAMIC_OBJECT_KINEMATICS__BUILDER_HPP_
#define AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__DYNAMIC_OBJECT_KINEMATICS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_adapi_v1_msgs/msg/detail/dynamic_object_kinematics__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_adapi_v1_msgs
{

namespace msg
{

namespace builder
{

class Init_DynamicObjectKinematics_predicted_paths
{
public:
  explicit Init_DynamicObjectKinematics_predicted_paths(::autoware_adapi_v1_msgs::msg::DynamicObjectKinematics & msg)
  : msg_(msg)
  {}
  ::autoware_adapi_v1_msgs::msg::DynamicObjectKinematics predicted_paths(::autoware_adapi_v1_msgs::msg::DynamicObjectKinematics::_predicted_paths_type arg)
  {
    msg_.predicted_paths = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_adapi_v1_msgs::msg::DynamicObjectKinematics msg_;
};

class Init_DynamicObjectKinematics_accel
{
public:
  explicit Init_DynamicObjectKinematics_accel(::autoware_adapi_v1_msgs::msg::DynamicObjectKinematics & msg)
  : msg_(msg)
  {}
  Init_DynamicObjectKinematics_predicted_paths accel(::autoware_adapi_v1_msgs::msg::DynamicObjectKinematics::_accel_type arg)
  {
    msg_.accel = std::move(arg);
    return Init_DynamicObjectKinematics_predicted_paths(msg_);
  }

private:
  ::autoware_adapi_v1_msgs::msg::DynamicObjectKinematics msg_;
};

class Init_DynamicObjectKinematics_twist
{
public:
  explicit Init_DynamicObjectKinematics_twist(::autoware_adapi_v1_msgs::msg::DynamicObjectKinematics & msg)
  : msg_(msg)
  {}
  Init_DynamicObjectKinematics_accel twist(::autoware_adapi_v1_msgs::msg::DynamicObjectKinematics::_twist_type arg)
  {
    msg_.twist = std::move(arg);
    return Init_DynamicObjectKinematics_accel(msg_);
  }

private:
  ::autoware_adapi_v1_msgs::msg::DynamicObjectKinematics msg_;
};

class Init_DynamicObjectKinematics_pose
{
public:
  Init_DynamicObjectKinematics_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DynamicObjectKinematics_twist pose(::autoware_adapi_v1_msgs::msg::DynamicObjectKinematics::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_DynamicObjectKinematics_twist(msg_);
  }

private:
  ::autoware_adapi_v1_msgs::msg::DynamicObjectKinematics msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_adapi_v1_msgs::msg::DynamicObjectKinematics>()
{
  return autoware_adapi_v1_msgs::msg::builder::Init_DynamicObjectKinematics_pose();
}

}  // namespace autoware_adapi_v1_msgs

#endif  // AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__DYNAMIC_OBJECT_KINEMATICS__BUILDER_HPP_
