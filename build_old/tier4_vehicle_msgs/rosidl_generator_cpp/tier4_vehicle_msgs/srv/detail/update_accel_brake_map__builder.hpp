// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_vehicle_msgs:srv/UpdateAccelBrakeMap.idl
// generated code does not contain a copyright notice

#ifndef TIER4_VEHICLE_MSGS__SRV__DETAIL__UPDATE_ACCEL_BRAKE_MAP__BUILDER_HPP_
#define TIER4_VEHICLE_MSGS__SRV__DETAIL__UPDATE_ACCEL_BRAKE_MAP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_vehicle_msgs/srv/detail/update_accel_brake_map__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_vehicle_msgs
{

namespace srv
{

namespace builder
{

class Init_UpdateAccelBrakeMap_Request_path
{
public:
  Init_UpdateAccelBrakeMap_Request_path()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tier4_vehicle_msgs::srv::UpdateAccelBrakeMap_Request path(::tier4_vehicle_msgs::srv::UpdateAccelBrakeMap_Request::_path_type arg)
  {
    msg_.path = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_vehicle_msgs::srv::UpdateAccelBrakeMap_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_vehicle_msgs::srv::UpdateAccelBrakeMap_Request>()
{
  return tier4_vehicle_msgs::srv::builder::Init_UpdateAccelBrakeMap_Request_path();
}

}  // namespace tier4_vehicle_msgs


namespace tier4_vehicle_msgs
{

namespace srv
{

namespace builder
{

class Init_UpdateAccelBrakeMap_Response_message
{
public:
  explicit Init_UpdateAccelBrakeMap_Response_message(::tier4_vehicle_msgs::srv::UpdateAccelBrakeMap_Response & msg)
  : msg_(msg)
  {}
  ::tier4_vehicle_msgs::srv::UpdateAccelBrakeMap_Response message(::tier4_vehicle_msgs::srv::UpdateAccelBrakeMap_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_vehicle_msgs::srv::UpdateAccelBrakeMap_Response msg_;
};

class Init_UpdateAccelBrakeMap_Response_success
{
public:
  Init_UpdateAccelBrakeMap_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UpdateAccelBrakeMap_Response_message success(::tier4_vehicle_msgs::srv::UpdateAccelBrakeMap_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_UpdateAccelBrakeMap_Response_message(msg_);
  }

private:
  ::tier4_vehicle_msgs::srv::UpdateAccelBrakeMap_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_vehicle_msgs::srv::UpdateAccelBrakeMap_Response>()
{
  return tier4_vehicle_msgs::srv::builder::Init_UpdateAccelBrakeMap_Response_success();
}

}  // namespace tier4_vehicle_msgs

#endif  // TIER4_VEHICLE_MSGS__SRV__DETAIL__UPDATE_ACCEL_BRAKE_MAP__BUILDER_HPP_
