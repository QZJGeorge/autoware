// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_perception_msgs:msg/TrafficSignalArray.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_SIGNAL_ARRAY__BUILDER_HPP_
#define AUTOWARE_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_SIGNAL_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_perception_msgs/msg/detail/traffic_signal_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_TrafficSignalArray_signals
{
public:
  explicit Init_TrafficSignalArray_signals(::autoware_perception_msgs::msg::TrafficSignalArray & msg)
  : msg_(msg)
  {}
  ::autoware_perception_msgs::msg::TrafficSignalArray signals(::autoware_perception_msgs::msg::TrafficSignalArray::_signals_type arg)
  {
    msg_.signals = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_perception_msgs::msg::TrafficSignalArray msg_;
};

class Init_TrafficSignalArray_stamp
{
public:
  Init_TrafficSignalArray_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrafficSignalArray_signals stamp(::autoware_perception_msgs::msg::TrafficSignalArray::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_TrafficSignalArray_signals(msg_);
  }

private:
  ::autoware_perception_msgs::msg::TrafficSignalArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_perception_msgs::msg::TrafficSignalArray>()
{
  return autoware_perception_msgs::msg::builder::Init_TrafficSignalArray_stamp();
}

}  // namespace autoware_perception_msgs

#endif  // AUTOWARE_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_SIGNAL_ARRAY__BUILDER_HPP_
