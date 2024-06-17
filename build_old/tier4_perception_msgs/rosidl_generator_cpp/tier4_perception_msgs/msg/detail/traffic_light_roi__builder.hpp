// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_perception_msgs:msg/TrafficLightRoi.idl
// generated code does not contain a copyright notice

#ifndef TIER4_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_LIGHT_ROI__BUILDER_HPP_
#define TIER4_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_LIGHT_ROI__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_perception_msgs/msg/detail/traffic_light_roi__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_TrafficLightRoi_traffic_light_id
{
public:
  explicit Init_TrafficLightRoi_traffic_light_id(::tier4_perception_msgs::msg::TrafficLightRoi & msg)
  : msg_(msg)
  {}
  ::tier4_perception_msgs::msg::TrafficLightRoi traffic_light_id(::tier4_perception_msgs::msg::TrafficLightRoi::_traffic_light_id_type arg)
  {
    msg_.traffic_light_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_perception_msgs::msg::TrafficLightRoi msg_;
};

class Init_TrafficLightRoi_roi
{
public:
  Init_TrafficLightRoi_roi()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrafficLightRoi_traffic_light_id roi(::tier4_perception_msgs::msg::TrafficLightRoi::_roi_type arg)
  {
    msg_.roi = std::move(arg);
    return Init_TrafficLightRoi_traffic_light_id(msg_);
  }

private:
  ::tier4_perception_msgs::msg::TrafficLightRoi msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_perception_msgs::msg::TrafficLightRoi>()
{
  return tier4_perception_msgs::msg::builder::Init_TrafficLightRoi_roi();
}

}  // namespace tier4_perception_msgs

#endif  // TIER4_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_LIGHT_ROI__BUILDER_HPP_
