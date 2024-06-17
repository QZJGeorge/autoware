// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_hmi_msgs:srv/Announce.idl
// generated code does not contain a copyright notice

#ifndef TIER4_HMI_MSGS__SRV__DETAIL__ANNOUNCE__BUILDER_HPP_
#define TIER4_HMI_MSGS__SRV__DETAIL__ANNOUNCE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_hmi_msgs/srv/detail/announce__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_hmi_msgs
{

namespace srv
{

namespace builder
{

class Init_Announce_Request_kind
{
public:
  Init_Announce_Request_kind()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tier4_hmi_msgs::srv::Announce_Request kind(::tier4_hmi_msgs::srv::Announce_Request::_kind_type arg)
  {
    msg_.kind = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_hmi_msgs::srv::Announce_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_hmi_msgs::srv::Announce_Request>()
{
  return tier4_hmi_msgs::srv::builder::Init_Announce_Request_kind();
}

}  // namespace tier4_hmi_msgs


namespace tier4_hmi_msgs
{

namespace srv
{

namespace builder
{

class Init_Announce_Response_status
{
public:
  Init_Announce_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tier4_hmi_msgs::srv::Announce_Response status(::tier4_hmi_msgs::srv::Announce_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_hmi_msgs::srv::Announce_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_hmi_msgs::srv::Announce_Response>()
{
  return tier4_hmi_msgs::srv::builder::Init_Announce_Response_status();
}

}  // namespace tier4_hmi_msgs

#endif  // TIER4_HMI_MSGS__SRV__DETAIL__ANNOUNCE__BUILDER_HPP_
