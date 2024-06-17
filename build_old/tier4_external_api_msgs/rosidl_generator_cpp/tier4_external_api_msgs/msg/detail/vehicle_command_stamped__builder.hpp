// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_external_api_msgs:msg/VehicleCommandStamped.idl
// generated code does not contain a copyright notice

#ifndef TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__VEHICLE_COMMAND_STAMPED__BUILDER_HPP_
#define TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__VEHICLE_COMMAND_STAMPED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_external_api_msgs/msg/detail/vehicle_command_stamped__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_external_api_msgs
{

namespace msg
{

namespace builder
{

class Init_VehicleCommandStamped_command
{
public:
  explicit Init_VehicleCommandStamped_command(::tier4_external_api_msgs::msg::VehicleCommandStamped & msg)
  : msg_(msg)
  {}
  ::tier4_external_api_msgs::msg::VehicleCommandStamped command(::tier4_external_api_msgs::msg::VehicleCommandStamped::_command_type arg)
  {
    msg_.command = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_external_api_msgs::msg::VehicleCommandStamped msg_;
};

class Init_VehicleCommandStamped_stamp
{
public:
  Init_VehicleCommandStamped_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VehicleCommandStamped_command stamp(::tier4_external_api_msgs::msg::VehicleCommandStamped::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_VehicleCommandStamped_command(msg_);
  }

private:
  ::tier4_external_api_msgs::msg::VehicleCommandStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_external_api_msgs::msg::VehicleCommandStamped>()
{
  return tier4_external_api_msgs::msg::builder::Init_VehicleCommandStamped_stamp();
}

}  // namespace tier4_external_api_msgs

#endif  // TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__VEHICLE_COMMAND_STAMPED__BUILDER_HPP_
