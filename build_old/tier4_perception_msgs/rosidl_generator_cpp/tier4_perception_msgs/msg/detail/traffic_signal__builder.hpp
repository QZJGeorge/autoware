// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_perception_msgs:msg/TrafficSignal.idl
// generated code does not contain a copyright notice

#ifndef TIER4_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_SIGNAL__BUILDER_HPP_
#define TIER4_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_SIGNAL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_perception_msgs/msg/detail/traffic_signal__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_TrafficSignal_elements
{
public:
  explicit Init_TrafficSignal_elements(::tier4_perception_msgs::msg::TrafficSignal & msg)
  : msg_(msg)
  {}
  ::tier4_perception_msgs::msg::TrafficSignal elements(::tier4_perception_msgs::msg::TrafficSignal::_elements_type arg)
  {
    msg_.elements = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_perception_msgs::msg::TrafficSignal msg_;
};

class Init_TrafficSignal_traffic_light_id
{
public:
  Init_TrafficSignal_traffic_light_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrafficSignal_elements traffic_light_id(::tier4_perception_msgs::msg::TrafficSignal::_traffic_light_id_type arg)
  {
    msg_.traffic_light_id = std::move(arg);
    return Init_TrafficSignal_elements(msg_);
  }

private:
  ::tier4_perception_msgs::msg::TrafficSignal msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_perception_msgs::msg::TrafficSignal>()
{
  return tier4_perception_msgs::msg::builder::Init_TrafficSignal_traffic_light_id();
}

}  // namespace tier4_perception_msgs

#endif  // TIER4_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_SIGNAL__BUILDER_HPP_
