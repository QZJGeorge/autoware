// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_perception_msgs:msg/TrafficSignalElement.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_SIGNAL_ELEMENT__BUILDER_HPP_
#define AUTOWARE_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_SIGNAL_ELEMENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_perception_msgs/msg/detail/traffic_signal_element__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_TrafficSignalElement_confidence
{
public:
  explicit Init_TrafficSignalElement_confidence(::autoware_perception_msgs::msg::TrafficSignalElement & msg)
  : msg_(msg)
  {}
  ::autoware_perception_msgs::msg::TrafficSignalElement confidence(::autoware_perception_msgs::msg::TrafficSignalElement::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_perception_msgs::msg::TrafficSignalElement msg_;
};

class Init_TrafficSignalElement_status
{
public:
  explicit Init_TrafficSignalElement_status(::autoware_perception_msgs::msg::TrafficSignalElement & msg)
  : msg_(msg)
  {}
  Init_TrafficSignalElement_confidence status(::autoware_perception_msgs::msg::TrafficSignalElement::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_TrafficSignalElement_confidence(msg_);
  }

private:
  ::autoware_perception_msgs::msg::TrafficSignalElement msg_;
};

class Init_TrafficSignalElement_shape
{
public:
  explicit Init_TrafficSignalElement_shape(::autoware_perception_msgs::msg::TrafficSignalElement & msg)
  : msg_(msg)
  {}
  Init_TrafficSignalElement_status shape(::autoware_perception_msgs::msg::TrafficSignalElement::_shape_type arg)
  {
    msg_.shape = std::move(arg);
    return Init_TrafficSignalElement_status(msg_);
  }

private:
  ::autoware_perception_msgs::msg::TrafficSignalElement msg_;
};

class Init_TrafficSignalElement_color
{
public:
  Init_TrafficSignalElement_color()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrafficSignalElement_shape color(::autoware_perception_msgs::msg::TrafficSignalElement::_color_type arg)
  {
    msg_.color = std::move(arg);
    return Init_TrafficSignalElement_shape(msg_);
  }

private:
  ::autoware_perception_msgs::msg::TrafficSignalElement msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_perception_msgs::msg::TrafficSignalElement>()
{
  return autoware_perception_msgs::msg::builder::Init_TrafficSignalElement_color();
}

}  // namespace autoware_perception_msgs

#endif  // AUTOWARE_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_SIGNAL_ELEMENT__BUILDER_HPP_
