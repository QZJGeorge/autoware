// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_perception_msgs:msg/DetectedObjectWithFeature.idl
// generated code does not contain a copyright notice

#ifndef TIER4_PERCEPTION_MSGS__MSG__DETAIL__DETECTED_OBJECT_WITH_FEATURE__BUILDER_HPP_
#define TIER4_PERCEPTION_MSGS__MSG__DETAIL__DETECTED_OBJECT_WITH_FEATURE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_perception_msgs/msg/detail/detected_object_with_feature__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_DetectedObjectWithFeature_feature
{
public:
  explicit Init_DetectedObjectWithFeature_feature(::tier4_perception_msgs::msg::DetectedObjectWithFeature & msg)
  : msg_(msg)
  {}
  ::tier4_perception_msgs::msg::DetectedObjectWithFeature feature(::tier4_perception_msgs::msg::DetectedObjectWithFeature::_feature_type arg)
  {
    msg_.feature = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_perception_msgs::msg::DetectedObjectWithFeature msg_;
};

class Init_DetectedObjectWithFeature_object
{
public:
  Init_DetectedObjectWithFeature_object()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DetectedObjectWithFeature_feature object(::tier4_perception_msgs::msg::DetectedObjectWithFeature::_object_type arg)
  {
    msg_.object = std::move(arg);
    return Init_DetectedObjectWithFeature_feature(msg_);
  }

private:
  ::tier4_perception_msgs::msg::DetectedObjectWithFeature msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_perception_msgs::msg::DetectedObjectWithFeature>()
{
  return tier4_perception_msgs::msg::builder::Init_DetectedObjectWithFeature_object();
}

}  // namespace tier4_perception_msgs

#endif  // TIER4_PERCEPTION_MSGS__MSG__DETAIL__DETECTED_OBJECT_WITH_FEATURE__BUILDER_HPP_
