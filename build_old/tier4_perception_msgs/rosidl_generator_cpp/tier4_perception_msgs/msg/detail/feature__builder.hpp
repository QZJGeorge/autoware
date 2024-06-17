// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_perception_msgs:msg/Feature.idl
// generated code does not contain a copyright notice

#ifndef TIER4_PERCEPTION_MSGS__MSG__DETAIL__FEATURE__BUILDER_HPP_
#define TIER4_PERCEPTION_MSGS__MSG__DETAIL__FEATURE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_perception_msgs/msg/detail/feature__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_Feature_roi
{
public:
  explicit Init_Feature_roi(::tier4_perception_msgs::msg::Feature & msg)
  : msg_(msg)
  {}
  ::tier4_perception_msgs::msg::Feature roi(::tier4_perception_msgs::msg::Feature::_roi_type arg)
  {
    msg_.roi = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_perception_msgs::msg::Feature msg_;
};

class Init_Feature_cluster
{
public:
  Init_Feature_cluster()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Feature_roi cluster(::tier4_perception_msgs::msg::Feature::_cluster_type arg)
  {
    msg_.cluster = std::move(arg);
    return Init_Feature_roi(msg_);
  }

private:
  ::tier4_perception_msgs::msg::Feature msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_perception_msgs::msg::Feature>()
{
  return tier4_perception_msgs::msg::builder::Init_Feature_cluster();
}

}  // namespace tier4_perception_msgs

#endif  // TIER4_PERCEPTION_MSGS__MSG__DETAIL__FEATURE__BUILDER_HPP_
