// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_planning_msgs:msg/LateralOffset.idl
// generated code does not contain a copyright notice

#ifndef TIER4_PLANNING_MSGS__MSG__DETAIL__LATERAL_OFFSET__BUILDER_HPP_
#define TIER4_PLANNING_MSGS__MSG__DETAIL__LATERAL_OFFSET__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_planning_msgs/msg/detail/lateral_offset__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_planning_msgs
{

namespace msg
{

namespace builder
{

class Init_LateralOffset_lateral_offset
{
public:
  explicit Init_LateralOffset_lateral_offset(::tier4_planning_msgs::msg::LateralOffset & msg)
  : msg_(msg)
  {}
  ::tier4_planning_msgs::msg::LateralOffset lateral_offset(::tier4_planning_msgs::msg::LateralOffset::_lateral_offset_type arg)
  {
    msg_.lateral_offset = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_planning_msgs::msg::LateralOffset msg_;
};

class Init_LateralOffset_stamp
{
public:
  Init_LateralOffset_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LateralOffset_lateral_offset stamp(::tier4_planning_msgs::msg::LateralOffset::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_LateralOffset_lateral_offset(msg_);
  }

private:
  ::tier4_planning_msgs::msg::LateralOffset msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_planning_msgs::msg::LateralOffset>()
{
  return tier4_planning_msgs::msg::builder::Init_LateralOffset_stamp();
}

}  // namespace tier4_planning_msgs

#endif  // TIER4_PLANNING_MSGS__MSG__DETAIL__LATERAL_OFFSET__BUILDER_HPP_
