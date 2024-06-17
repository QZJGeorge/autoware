// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_adapi_v1_msgs:msg/DoorLayout.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__DOOR_LAYOUT__BUILDER_HPP_
#define AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__DOOR_LAYOUT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_adapi_v1_msgs/msg/detail/door_layout__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_adapi_v1_msgs
{

namespace msg
{

namespace builder
{

class Init_DoorLayout_description
{
public:
  explicit Init_DoorLayout_description(::autoware_adapi_v1_msgs::msg::DoorLayout & msg)
  : msg_(msg)
  {}
  ::autoware_adapi_v1_msgs::msg::DoorLayout description(::autoware_adapi_v1_msgs::msg::DoorLayout::_description_type arg)
  {
    msg_.description = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_adapi_v1_msgs::msg::DoorLayout msg_;
};

class Init_DoorLayout_roles
{
public:
  Init_DoorLayout_roles()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DoorLayout_description roles(::autoware_adapi_v1_msgs::msg::DoorLayout::_roles_type arg)
  {
    msg_.roles = std::move(arg);
    return Init_DoorLayout_description(msg_);
  }

private:
  ::autoware_adapi_v1_msgs::msg::DoorLayout msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_adapi_v1_msgs::msg::DoorLayout>()
{
  return autoware_adapi_v1_msgs::msg::builder::Init_DoorLayout_roles();
}

}  // namespace autoware_adapi_v1_msgs

#endif  // AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__DOOR_LAYOUT__BUILDER_HPP_
