// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_vehicle_msgs:msg/SteeringWheelStatusStamped.idl
// generated code does not contain a copyright notice

#ifndef TIER4_VEHICLE_MSGS__MSG__DETAIL__STEERING_WHEEL_STATUS_STAMPED__BUILDER_HPP_
#define TIER4_VEHICLE_MSGS__MSG__DETAIL__STEERING_WHEEL_STATUS_STAMPED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_vehicle_msgs/msg/detail/steering_wheel_status_stamped__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_vehicle_msgs
{

namespace msg
{

namespace builder
{

class Init_SteeringWheelStatusStamped_data
{
public:
  explicit Init_SteeringWheelStatusStamped_data(::tier4_vehicle_msgs::msg::SteeringWheelStatusStamped & msg)
  : msg_(msg)
  {}
  ::tier4_vehicle_msgs::msg::SteeringWheelStatusStamped data(::tier4_vehicle_msgs::msg::SteeringWheelStatusStamped::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_vehicle_msgs::msg::SteeringWheelStatusStamped msg_;
};

class Init_SteeringWheelStatusStamped_stamp
{
public:
  Init_SteeringWheelStatusStamped_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SteeringWheelStatusStamped_data stamp(::tier4_vehicle_msgs::msg::SteeringWheelStatusStamped::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_SteeringWheelStatusStamped_data(msg_);
  }

private:
  ::tier4_vehicle_msgs::msg::SteeringWheelStatusStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_vehicle_msgs::msg::SteeringWheelStatusStamped>()
{
  return tier4_vehicle_msgs::msg::builder::Init_SteeringWheelStatusStamped_stamp();
}

}  // namespace tier4_vehicle_msgs

#endif  // TIER4_VEHICLE_MSGS__MSG__DETAIL__STEERING_WHEEL_STATUS_STAMPED__BUILDER_HPP_
