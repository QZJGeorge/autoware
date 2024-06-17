// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_perception_msgs:msg/TrafficSignal.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_SIGNAL__BUILDER_HPP_
#define AUTOWARE_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_SIGNAL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_perception_msgs/msg/detail/traffic_signal__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_TrafficSignal_elements
{
public:
  explicit Init_TrafficSignal_elements(::autoware_perception_msgs::msg::TrafficSignal & msg)
  : msg_(msg)
  {}
  ::autoware_perception_msgs::msg::TrafficSignal elements(::autoware_perception_msgs::msg::TrafficSignal::_elements_type arg)
  {
    msg_.elements = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_perception_msgs::msg::TrafficSignal msg_;
};

class Init_TrafficSignal_traffic_signal_id
{
public:
  Init_TrafficSignal_traffic_signal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrafficSignal_elements traffic_signal_id(::autoware_perception_msgs::msg::TrafficSignal::_traffic_signal_id_type arg)
  {
    msg_.traffic_signal_id = std::move(arg);
    return Init_TrafficSignal_elements(msg_);
  }

private:
  ::autoware_perception_msgs::msg::TrafficSignal msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_perception_msgs::msg::TrafficSignal>()
{
  return autoware_perception_msgs::msg::builder::Init_TrafficSignal_traffic_signal_id();
}

}  // namespace autoware_perception_msgs

#endif  // AUTOWARE_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_SIGNAL__BUILDER_HPP_
