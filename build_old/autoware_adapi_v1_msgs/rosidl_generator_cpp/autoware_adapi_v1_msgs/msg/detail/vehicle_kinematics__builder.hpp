// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_adapi_v1_msgs:msg/VehicleKinematics.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__VEHICLE_KINEMATICS__BUILDER_HPP_
#define AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__VEHICLE_KINEMATICS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_adapi_v1_msgs/msg/detail/vehicle_kinematics__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_adapi_v1_msgs
{

namespace msg
{

namespace builder
{

class Init_VehicleKinematics_accel
{
public:
  explicit Init_VehicleKinematics_accel(::autoware_adapi_v1_msgs::msg::VehicleKinematics & msg)
  : msg_(msg)
  {}
  ::autoware_adapi_v1_msgs::msg::VehicleKinematics accel(::autoware_adapi_v1_msgs::msg::VehicleKinematics::_accel_type arg)
  {
    msg_.accel = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_adapi_v1_msgs::msg::VehicleKinematics msg_;
};

class Init_VehicleKinematics_twist
{
public:
  explicit Init_VehicleKinematics_twist(::autoware_adapi_v1_msgs::msg::VehicleKinematics & msg)
  : msg_(msg)
  {}
  Init_VehicleKinematics_accel twist(::autoware_adapi_v1_msgs::msg::VehicleKinematics::_twist_type arg)
  {
    msg_.twist = std::move(arg);
    return Init_VehicleKinematics_accel(msg_);
  }

private:
  ::autoware_adapi_v1_msgs::msg::VehicleKinematics msg_;
};

class Init_VehicleKinematics_pose
{
public:
  explicit Init_VehicleKinematics_pose(::autoware_adapi_v1_msgs::msg::VehicleKinematics & msg)
  : msg_(msg)
  {}
  Init_VehicleKinematics_twist pose(::autoware_adapi_v1_msgs::msg::VehicleKinematics::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_VehicleKinematics_twist(msg_);
  }

private:
  ::autoware_adapi_v1_msgs::msg::VehicleKinematics msg_;
};

class Init_VehicleKinematics_geographic_pose
{
public:
  Init_VehicleKinematics_geographic_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VehicleKinematics_pose geographic_pose(::autoware_adapi_v1_msgs::msg::VehicleKinematics::_geographic_pose_type arg)
  {
    msg_.geographic_pose = std::move(arg);
    return Init_VehicleKinematics_pose(msg_);
  }

private:
  ::autoware_adapi_v1_msgs::msg::VehicleKinematics msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_adapi_v1_msgs::msg::VehicleKinematics>()
{
  return autoware_adapi_v1_msgs::msg::builder::Init_VehicleKinematics_geographic_pose();
}

}  // namespace autoware_adapi_v1_msgs

#endif  // AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__VEHICLE_KINEMATICS__BUILDER_HPP_
