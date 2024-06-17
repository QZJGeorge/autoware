// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_sensing_msgs:msg/GnssInsOrientation.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_SENSING_MSGS__MSG__DETAIL__GNSS_INS_ORIENTATION__BUILDER_HPP_
#define AUTOWARE_SENSING_MSGS__MSG__DETAIL__GNSS_INS_ORIENTATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_sensing_msgs/msg/detail/gnss_ins_orientation__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_sensing_msgs
{

namespace msg
{

namespace builder
{

class Init_GnssInsOrientation_rmse_rotation_z
{
public:
  explicit Init_GnssInsOrientation_rmse_rotation_z(::autoware_sensing_msgs::msg::GnssInsOrientation & msg)
  : msg_(msg)
  {}
  ::autoware_sensing_msgs::msg::GnssInsOrientation rmse_rotation_z(::autoware_sensing_msgs::msg::GnssInsOrientation::_rmse_rotation_z_type arg)
  {
    msg_.rmse_rotation_z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_sensing_msgs::msg::GnssInsOrientation msg_;
};

class Init_GnssInsOrientation_rmse_rotation_y
{
public:
  explicit Init_GnssInsOrientation_rmse_rotation_y(::autoware_sensing_msgs::msg::GnssInsOrientation & msg)
  : msg_(msg)
  {}
  Init_GnssInsOrientation_rmse_rotation_z rmse_rotation_y(::autoware_sensing_msgs::msg::GnssInsOrientation::_rmse_rotation_y_type arg)
  {
    msg_.rmse_rotation_y = std::move(arg);
    return Init_GnssInsOrientation_rmse_rotation_z(msg_);
  }

private:
  ::autoware_sensing_msgs::msg::GnssInsOrientation msg_;
};

class Init_GnssInsOrientation_rmse_rotation_x
{
public:
  explicit Init_GnssInsOrientation_rmse_rotation_x(::autoware_sensing_msgs::msg::GnssInsOrientation & msg)
  : msg_(msg)
  {}
  Init_GnssInsOrientation_rmse_rotation_y rmse_rotation_x(::autoware_sensing_msgs::msg::GnssInsOrientation::_rmse_rotation_x_type arg)
  {
    msg_.rmse_rotation_x = std::move(arg);
    return Init_GnssInsOrientation_rmse_rotation_y(msg_);
  }

private:
  ::autoware_sensing_msgs::msg::GnssInsOrientation msg_;
};

class Init_GnssInsOrientation_orientation
{
public:
  Init_GnssInsOrientation_orientation()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GnssInsOrientation_rmse_rotation_x orientation(::autoware_sensing_msgs::msg::GnssInsOrientation::_orientation_type arg)
  {
    msg_.orientation = std::move(arg);
    return Init_GnssInsOrientation_rmse_rotation_x(msg_);
  }

private:
  ::autoware_sensing_msgs::msg::GnssInsOrientation msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_sensing_msgs::msg::GnssInsOrientation>()
{
  return autoware_sensing_msgs::msg::builder::Init_GnssInsOrientation_orientation();
}

}  // namespace autoware_sensing_msgs

#endif  // AUTOWARE_SENSING_MSGS__MSG__DETAIL__GNSS_INS_ORIENTATION__BUILDER_HPP_
