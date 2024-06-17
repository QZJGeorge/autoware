// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_v2x_msgs:msg/VirtualTrafficLightState.idl
// generated code does not contain a copyright notice

#ifndef TIER4_V2X_MSGS__MSG__DETAIL__VIRTUAL_TRAFFIC_LIGHT_STATE__BUILDER_HPP_
#define TIER4_V2X_MSGS__MSG__DETAIL__VIRTUAL_TRAFFIC_LIGHT_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_v2x_msgs/msg/detail/virtual_traffic_light_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_VirtualTrafficLightState_is_finalized
{
public:
  explicit Init_VirtualTrafficLightState_is_finalized(::tier4_v2x_msgs::msg::VirtualTrafficLightState & msg)
  : msg_(msg)
  {}
  ::tier4_v2x_msgs::msg::VirtualTrafficLightState is_finalized(::tier4_v2x_msgs::msg::VirtualTrafficLightState::_is_finalized_type arg)
  {
    msg_.is_finalized = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_v2x_msgs::msg::VirtualTrafficLightState msg_;
};

class Init_VirtualTrafficLightState_approval
{
public:
  explicit Init_VirtualTrafficLightState_approval(::tier4_v2x_msgs::msg::VirtualTrafficLightState & msg)
  : msg_(msg)
  {}
  Init_VirtualTrafficLightState_is_finalized approval(::tier4_v2x_msgs::msg::VirtualTrafficLightState::_approval_type arg)
  {
    msg_.approval = std::move(arg);
    return Init_VirtualTrafficLightState_is_finalized(msg_);
  }

private:
  ::tier4_v2x_msgs::msg::VirtualTrafficLightState msg_;
};

class Init_VirtualTrafficLightState_id
{
public:
  explicit Init_VirtualTrafficLightState_id(::tier4_v2x_msgs::msg::VirtualTrafficLightState & msg)
  : msg_(msg)
  {}
  Init_VirtualTrafficLightState_approval id(::tier4_v2x_msgs::msg::VirtualTrafficLightState::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_VirtualTrafficLightState_approval(msg_);
  }

private:
  ::tier4_v2x_msgs::msg::VirtualTrafficLightState msg_;
};

class Init_VirtualTrafficLightState_type
{
public:
  explicit Init_VirtualTrafficLightState_type(::tier4_v2x_msgs::msg::VirtualTrafficLightState & msg)
  : msg_(msg)
  {}
  Init_VirtualTrafficLightState_id type(::tier4_v2x_msgs::msg::VirtualTrafficLightState::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_VirtualTrafficLightState_id(msg_);
  }

private:
  ::tier4_v2x_msgs::msg::VirtualTrafficLightState msg_;
};

class Init_VirtualTrafficLightState_stamp
{
public:
  Init_VirtualTrafficLightState_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VirtualTrafficLightState_type stamp(::tier4_v2x_msgs::msg::VirtualTrafficLightState::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_VirtualTrafficLightState_type(msg_);
  }

private:
  ::tier4_v2x_msgs::msg::VirtualTrafficLightState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_v2x_msgs::msg::VirtualTrafficLightState>()
{
  return tier4_v2x_msgs::msg::builder::Init_VirtualTrafficLightState_stamp();
}

}  // namespace tier4_v2x_msgs

#endif  // TIER4_V2X_MSGS__MSG__DETAIL__VIRTUAL_TRAFFIC_LIGHT_STATE__BUILDER_HPP_
