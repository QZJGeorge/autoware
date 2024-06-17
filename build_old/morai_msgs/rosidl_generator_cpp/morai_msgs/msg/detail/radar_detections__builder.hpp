// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from morai_msgs:msg/RadarDetections.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__RADAR_DETECTIONS__BUILDER_HPP_
#define MORAI_MSGS__MSG__DETAIL__RADAR_DETECTIONS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "morai_msgs/msg/detail/radar_detections__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace morai_msgs
{

namespace msg
{

namespace builder
{

class Init_RadarDetections_detections
{
public:
  explicit Init_RadarDetections_detections(::morai_msgs::msg::RadarDetections & msg)
  : msg_(msg)
  {}
  ::morai_msgs::msg::RadarDetections detections(::morai_msgs::msg::RadarDetections::_detections_type arg)
  {
    msg_.detections = std::move(arg);
    return std::move(msg_);
  }

private:
  ::morai_msgs::msg::RadarDetections msg_;
};

class Init_RadarDetections_header
{
public:
  Init_RadarDetections_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RadarDetections_detections header(::morai_msgs::msg::RadarDetections::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RadarDetections_detections(msg_);
  }

private:
  ::morai_msgs::msg::RadarDetections msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::morai_msgs::msg::RadarDetections>()
{
  return morai_msgs::msg::builder::Init_RadarDetections_header();
}

}  // namespace morai_msgs

#endif  // MORAI_MSGS__MSG__DETAIL__RADAR_DETECTIONS__BUILDER_HPP_
