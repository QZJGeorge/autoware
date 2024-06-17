// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_sensing_msgs:msg/GnssInsOrientationStamped.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_SENSING_MSGS__MSG__DETAIL__GNSS_INS_ORIENTATION_STAMPED__BUILDER_HPP_
#define AUTOWARE_SENSING_MSGS__MSG__DETAIL__GNSS_INS_ORIENTATION_STAMPED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_sensing_msgs/msg/detail/gnss_ins_orientation_stamped__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_sensing_msgs
{

namespace msg
{

namespace builder
{

class Init_GnssInsOrientationStamped_orientation
{
public:
  explicit Init_GnssInsOrientationStamped_orientation(::autoware_sensing_msgs::msg::GnssInsOrientationStamped & msg)
  : msg_(msg)
  {}
  ::autoware_sensing_msgs::msg::GnssInsOrientationStamped orientation(::autoware_sensing_msgs::msg::GnssInsOrientationStamped::_orientation_type arg)
  {
    msg_.orientation = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_sensing_msgs::msg::GnssInsOrientationStamped msg_;
};

class Init_GnssInsOrientationStamped_header
{
public:
  Init_GnssInsOrientationStamped_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GnssInsOrientationStamped_orientation header(::autoware_sensing_msgs::msg::GnssInsOrientationStamped::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GnssInsOrientationStamped_orientation(msg_);
  }

private:
  ::autoware_sensing_msgs::msg::GnssInsOrientationStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_sensing_msgs::msg::GnssInsOrientationStamped>()
{
  return autoware_sensing_msgs::msg::builder::Init_GnssInsOrientationStamped_header();
}

}  // namespace autoware_sensing_msgs

#endif  // AUTOWARE_SENSING_MSGS__MSG__DETAIL__GNSS_INS_ORIENTATION_STAMPED__BUILDER_HPP_
