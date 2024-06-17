// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_perception_msgs:msg/DetectedObjectsWithFeature.idl
// generated code does not contain a copyright notice

#ifndef TIER4_PERCEPTION_MSGS__MSG__DETAIL__DETECTED_OBJECTS_WITH_FEATURE__BUILDER_HPP_
#define TIER4_PERCEPTION_MSGS__MSG__DETAIL__DETECTED_OBJECTS_WITH_FEATURE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_perception_msgs/msg/detail/detected_objects_with_feature__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_DetectedObjectsWithFeature_feature_objects
{
public:
  explicit Init_DetectedObjectsWithFeature_feature_objects(::tier4_perception_msgs::msg::DetectedObjectsWithFeature & msg)
  : msg_(msg)
  {}
  ::tier4_perception_msgs::msg::DetectedObjectsWithFeature feature_objects(::tier4_perception_msgs::msg::DetectedObjectsWithFeature::_feature_objects_type arg)
  {
    msg_.feature_objects = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_perception_msgs::msg::DetectedObjectsWithFeature msg_;
};

class Init_DetectedObjectsWithFeature_header
{
public:
  Init_DetectedObjectsWithFeature_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DetectedObjectsWithFeature_feature_objects header(::tier4_perception_msgs::msg::DetectedObjectsWithFeature::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DetectedObjectsWithFeature_feature_objects(msg_);
  }

private:
  ::tier4_perception_msgs::msg::DetectedObjectsWithFeature msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_perception_msgs::msg::DetectedObjectsWithFeature>()
{
  return tier4_perception_msgs::msg::builder::Init_DetectedObjectsWithFeature_header();
}

}  // namespace tier4_perception_msgs

#endif  // TIER4_PERCEPTION_MSGS__MSG__DETAIL__DETECTED_OBJECTS_WITH_FEATURE__BUILDER_HPP_
