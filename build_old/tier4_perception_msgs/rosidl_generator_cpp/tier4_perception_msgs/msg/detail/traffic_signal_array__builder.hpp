// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_perception_msgs:msg/TrafficSignalArray.idl
// generated code does not contain a copyright notice

#ifndef TIER4_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_SIGNAL_ARRAY__BUILDER_HPP_
#define TIER4_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_SIGNAL_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_perception_msgs/msg/detail/traffic_signal_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_TrafficSignalArray_signals
{
public:
  explicit Init_TrafficSignalArray_signals(::tier4_perception_msgs::msg::TrafficSignalArray & msg)
  : msg_(msg)
  {}
  ::tier4_perception_msgs::msg::TrafficSignalArray signals(::tier4_perception_msgs::msg::TrafficSignalArray::_signals_type arg)
  {
    msg_.signals = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_perception_msgs::msg::TrafficSignalArray msg_;
};

class Init_TrafficSignalArray_header
{
public:
  Init_TrafficSignalArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrafficSignalArray_signals header(::tier4_perception_msgs::msg::TrafficSignalArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TrafficSignalArray_signals(msg_);
  }

private:
  ::tier4_perception_msgs::msg::TrafficSignalArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_perception_msgs::msg::TrafficSignalArray>()
{
  return tier4_perception_msgs::msg::builder::Init_TrafficSignalArray_header();
}

}  // namespace tier4_perception_msgs

#endif  // TIER4_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_SIGNAL_ARRAY__BUILDER_HPP_
