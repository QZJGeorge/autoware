// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_planning_msgs:msg/LaneletSegment.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_PLANNING_MSGS__MSG__DETAIL__LANELET_SEGMENT__BUILDER_HPP_
#define AUTOWARE_PLANNING_MSGS__MSG__DETAIL__LANELET_SEGMENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_planning_msgs/msg/detail/lanelet_segment__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_planning_msgs
{

namespace msg
{

namespace builder
{

class Init_LaneletSegment_primitives
{
public:
  explicit Init_LaneletSegment_primitives(::autoware_planning_msgs::msg::LaneletSegment & msg)
  : msg_(msg)
  {}
  ::autoware_planning_msgs::msg::LaneletSegment primitives(::autoware_planning_msgs::msg::LaneletSegment::_primitives_type arg)
  {
    msg_.primitives = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_planning_msgs::msg::LaneletSegment msg_;
};

class Init_LaneletSegment_preferred_primitive
{
public:
  Init_LaneletSegment_preferred_primitive()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LaneletSegment_primitives preferred_primitive(::autoware_planning_msgs::msg::LaneletSegment::_preferred_primitive_type arg)
  {
    msg_.preferred_primitive = std::move(arg);
    return Init_LaneletSegment_primitives(msg_);
  }

private:
  ::autoware_planning_msgs::msg::LaneletSegment msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_planning_msgs::msg::LaneletSegment>()
{
  return autoware_planning_msgs::msg::builder::Init_LaneletSegment_preferred_primitive();
}

}  // namespace autoware_planning_msgs

#endif  // AUTOWARE_PLANNING_MSGS__MSG__DETAIL__LANELET_SEGMENT__BUILDER_HPP_
