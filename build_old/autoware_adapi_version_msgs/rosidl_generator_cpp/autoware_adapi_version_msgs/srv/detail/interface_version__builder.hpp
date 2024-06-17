// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_adapi_version_msgs:srv/InterfaceVersion.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_ADAPI_VERSION_MSGS__SRV__DETAIL__INTERFACE_VERSION__BUILDER_HPP_
#define AUTOWARE_ADAPI_VERSION_MSGS__SRV__DETAIL__INTERFACE_VERSION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_adapi_version_msgs/srv/detail/interface_version__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_adapi_version_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_adapi_version_msgs::srv::InterfaceVersion_Request>()
{
  return ::autoware_adapi_version_msgs::srv::InterfaceVersion_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace autoware_adapi_version_msgs


namespace autoware_adapi_version_msgs
{

namespace srv
{

namespace builder
{

class Init_InterfaceVersion_Response_patch
{
public:
  explicit Init_InterfaceVersion_Response_patch(::autoware_adapi_version_msgs::srv::InterfaceVersion_Response & msg)
  : msg_(msg)
  {}
  ::autoware_adapi_version_msgs::srv::InterfaceVersion_Response patch(::autoware_adapi_version_msgs::srv::InterfaceVersion_Response::_patch_type arg)
  {
    msg_.patch = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_adapi_version_msgs::srv::InterfaceVersion_Response msg_;
};

class Init_InterfaceVersion_Response_minor
{
public:
  explicit Init_InterfaceVersion_Response_minor(::autoware_adapi_version_msgs::srv::InterfaceVersion_Response & msg)
  : msg_(msg)
  {}
  Init_InterfaceVersion_Response_patch minor(::autoware_adapi_version_msgs::srv::InterfaceVersion_Response::_minor_type arg)
  {
    msg_.minor = std::move(arg);
    return Init_InterfaceVersion_Response_patch(msg_);
  }

private:
  ::autoware_adapi_version_msgs::srv::InterfaceVersion_Response msg_;
};

class Init_InterfaceVersion_Response_major
{
public:
  Init_InterfaceVersion_Response_major()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_InterfaceVersion_Response_minor major(::autoware_adapi_version_msgs::srv::InterfaceVersion_Response::_major_type arg)
  {
    msg_.major = std::move(arg);
    return Init_InterfaceVersion_Response_minor(msg_);
  }

private:
  ::autoware_adapi_version_msgs::srv::InterfaceVersion_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_adapi_version_msgs::srv::InterfaceVersion_Response>()
{
  return autoware_adapi_version_msgs::srv::builder::Init_InterfaceVersion_Response_major();
}

}  // namespace autoware_adapi_version_msgs

#endif  // AUTOWARE_ADAPI_VERSION_MSGS__SRV__DETAIL__INTERFACE_VERSION__BUILDER_HPP_
