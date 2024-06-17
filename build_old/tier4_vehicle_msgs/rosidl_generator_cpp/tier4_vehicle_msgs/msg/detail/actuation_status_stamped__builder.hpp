// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_vehicle_msgs:msg/ActuationStatusStamped.idl
// generated code does not contain a copyright notice

#ifndef TIER4_VEHICLE_MSGS__MSG__DETAIL__ACTUATION_STATUS_STAMPED__BUILDER_HPP_
#define TIER4_VEHICLE_MSGS__MSG__DETAIL__ACTUATION_STATUS_STAMPED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_vehicle_msgs/msg/detail/actuation_status_stamped__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_vehicle_msgs
{

namespace msg
{

namespace builder
{

class Init_ActuationStatusStamped_status
{
public:
  explicit Init_ActuationStatusStamped_status(::tier4_vehicle_msgs::msg::ActuationStatusStamped & msg)
  : msg_(msg)
  {}
  ::tier4_vehicle_msgs::msg::ActuationStatusStamped status(::tier4_vehicle_msgs::msg::ActuationStatusStamped::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_vehicle_msgs::msg::ActuationStatusStamped msg_;
};

class Init_ActuationStatusStamped_header
{
public:
  Init_ActuationStatusStamped_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActuationStatusStamped_status header(::tier4_vehicle_msgs::msg::ActuationStatusStamped::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ActuationStatusStamped_status(msg_);
  }

private:
  ::tier4_vehicle_msgs::msg::ActuationStatusStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_vehicle_msgs::msg::ActuationStatusStamped>()
{
  return tier4_vehicle_msgs::msg::builder::Init_ActuationStatusStamped_header();
}

}  // namespace tier4_vehicle_msgs

#endif  // TIER4_VEHICLE_MSGS__MSG__DETAIL__ACTUATION_STATUS_STAMPED__BUILDER_HPP_
