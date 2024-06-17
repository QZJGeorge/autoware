// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_vehicle_msgs:msg/ShiftStamped.idl
// generated code does not contain a copyright notice

#ifndef TIER4_VEHICLE_MSGS__MSG__DETAIL__SHIFT_STAMPED__BUILDER_HPP_
#define TIER4_VEHICLE_MSGS__MSG__DETAIL__SHIFT_STAMPED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_vehicle_msgs/msg/detail/shift_stamped__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_vehicle_msgs
{

namespace msg
{

namespace builder
{

class Init_ShiftStamped_shift
{
public:
  explicit Init_ShiftStamped_shift(::tier4_vehicle_msgs::msg::ShiftStamped & msg)
  : msg_(msg)
  {}
  ::tier4_vehicle_msgs::msg::ShiftStamped shift(::tier4_vehicle_msgs::msg::ShiftStamped::_shift_type arg)
  {
    msg_.shift = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_vehicle_msgs::msg::ShiftStamped msg_;
};

class Init_ShiftStamped_header
{
public:
  Init_ShiftStamped_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ShiftStamped_shift header(::tier4_vehicle_msgs::msg::ShiftStamped::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ShiftStamped_shift(msg_);
  }

private:
  ::tier4_vehicle_msgs::msg::ShiftStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_vehicle_msgs::msg::ShiftStamped>()
{
  return tier4_vehicle_msgs::msg::builder::Init_ShiftStamped_header();
}

}  // namespace tier4_vehicle_msgs

#endif  // TIER4_VEHICLE_MSGS__MSG__DETAIL__SHIFT_STAMPED__BUILDER_HPP_
