// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_external_api_msgs:msg/VehicleStatusStamped.idl
// generated code does not contain a copyright notice

#ifndef TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__VEHICLE_STATUS_STAMPED__BUILDER_HPP_
#define TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__VEHICLE_STATUS_STAMPED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_external_api_msgs/msg/detail/vehicle_status_stamped__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_external_api_msgs
{

namespace msg
{

namespace builder
{

class Init_VehicleStatusStamped_status
{
public:
  explicit Init_VehicleStatusStamped_status(::tier4_external_api_msgs::msg::VehicleStatusStamped & msg)
  : msg_(msg)
  {}
  ::tier4_external_api_msgs::msg::VehicleStatusStamped status(::tier4_external_api_msgs::msg::VehicleStatusStamped::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_external_api_msgs::msg::VehicleStatusStamped msg_;
};

class Init_VehicleStatusStamped_stamp
{
public:
  Init_VehicleStatusStamped_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VehicleStatusStamped_status stamp(::tier4_external_api_msgs::msg::VehicleStatusStamped::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_VehicleStatusStamped_status(msg_);
  }

private:
  ::tier4_external_api_msgs::msg::VehicleStatusStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_external_api_msgs::msg::VehicleStatusStamped>()
{
  return tier4_external_api_msgs::msg::builder::Init_VehicleStatusStamped_stamp();
}

}  // namespace tier4_external_api_msgs

#endif  // TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__VEHICLE_STATUS_STAMPED__BUILDER_HPP_
