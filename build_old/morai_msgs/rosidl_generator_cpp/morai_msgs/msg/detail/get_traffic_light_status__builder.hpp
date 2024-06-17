// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from morai_msgs:msg/GetTrafficLightStatus.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__GET_TRAFFIC_LIGHT_STATUS__BUILDER_HPP_
#define MORAI_MSGS__MSG__DETAIL__GET_TRAFFIC_LIGHT_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "morai_msgs/msg/detail/get_traffic_light_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace morai_msgs
{

namespace msg
{

namespace builder
{

class Init_GetTrafficLightStatus_traffic_light_status
{
public:
  explicit Init_GetTrafficLightStatus_traffic_light_status(::morai_msgs::msg::GetTrafficLightStatus & msg)
  : msg_(msg)
  {}
  ::morai_msgs::msg::GetTrafficLightStatus traffic_light_status(::morai_msgs::msg::GetTrafficLightStatus::_traffic_light_status_type arg)
  {
    msg_.traffic_light_status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::morai_msgs::msg::GetTrafficLightStatus msg_;
};

class Init_GetTrafficLightStatus_traffic_light_type
{
public:
  explicit Init_GetTrafficLightStatus_traffic_light_type(::morai_msgs::msg::GetTrafficLightStatus & msg)
  : msg_(msg)
  {}
  Init_GetTrafficLightStatus_traffic_light_status traffic_light_type(::morai_msgs::msg::GetTrafficLightStatus::_traffic_light_type_type arg)
  {
    msg_.traffic_light_type = std::move(arg);
    return Init_GetTrafficLightStatus_traffic_light_status(msg_);
  }

private:
  ::morai_msgs::msg::GetTrafficLightStatus msg_;
};

class Init_GetTrafficLightStatus_traffic_light_index
{
public:
  explicit Init_GetTrafficLightStatus_traffic_light_index(::morai_msgs::msg::GetTrafficLightStatus & msg)
  : msg_(msg)
  {}
  Init_GetTrafficLightStatus_traffic_light_type traffic_light_index(::morai_msgs::msg::GetTrafficLightStatus::_traffic_light_index_type arg)
  {
    msg_.traffic_light_index = std::move(arg);
    return Init_GetTrafficLightStatus_traffic_light_type(msg_);
  }

private:
  ::morai_msgs::msg::GetTrafficLightStatus msg_;
};

class Init_GetTrafficLightStatus_header
{
public:
  Init_GetTrafficLightStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetTrafficLightStatus_traffic_light_index header(::morai_msgs::msg::GetTrafficLightStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GetTrafficLightStatus_traffic_light_index(msg_);
  }

private:
  ::morai_msgs::msg::GetTrafficLightStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::morai_msgs::msg::GetTrafficLightStatus>()
{
  return morai_msgs::msg::builder::Init_GetTrafficLightStatus_header();
}

}  // namespace morai_msgs

#endif  // MORAI_MSGS__MSG__DETAIL__GET_TRAFFIC_LIGHT_STATUS__BUILDER_HPP_
