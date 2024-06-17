// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_external_api_msgs:msg/GearShiftStamped.idl
// generated code does not contain a copyright notice

#ifndef TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__GEAR_SHIFT_STAMPED__BUILDER_HPP_
#define TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__GEAR_SHIFT_STAMPED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_external_api_msgs/msg/detail/gear_shift_stamped__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_external_api_msgs
{

namespace msg
{

namespace builder
{

class Init_GearShiftStamped_gear_shift
{
public:
  explicit Init_GearShiftStamped_gear_shift(::tier4_external_api_msgs::msg::GearShiftStamped & msg)
  : msg_(msg)
  {}
  ::tier4_external_api_msgs::msg::GearShiftStamped gear_shift(::tier4_external_api_msgs::msg::GearShiftStamped::_gear_shift_type arg)
  {
    msg_.gear_shift = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_external_api_msgs::msg::GearShiftStamped msg_;
};

class Init_GearShiftStamped_stamp
{
public:
  Init_GearShiftStamped_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GearShiftStamped_gear_shift stamp(::tier4_external_api_msgs::msg::GearShiftStamped::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_GearShiftStamped_gear_shift(msg_);
  }

private:
  ::tier4_external_api_msgs::msg::GearShiftStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_external_api_msgs::msg::GearShiftStamped>()
{
  return tier4_external_api_msgs::msg::builder::Init_GearShiftStamped_stamp();
}

}  // namespace tier4_external_api_msgs

#endif  // TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__GEAR_SHIFT_STAMPED__BUILDER_HPP_
