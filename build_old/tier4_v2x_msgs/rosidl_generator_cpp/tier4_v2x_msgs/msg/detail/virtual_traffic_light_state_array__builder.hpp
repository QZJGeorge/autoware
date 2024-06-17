// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_v2x_msgs:msg/VirtualTrafficLightStateArray.idl
// generated code does not contain a copyright notice

#ifndef TIER4_V2X_MSGS__MSG__DETAIL__VIRTUAL_TRAFFIC_LIGHT_STATE_ARRAY__BUILDER_HPP_
#define TIER4_V2X_MSGS__MSG__DETAIL__VIRTUAL_TRAFFIC_LIGHT_STATE_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_v2x_msgs/msg/detail/virtual_traffic_light_state_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_VirtualTrafficLightStateArray_states
{
public:
  explicit Init_VirtualTrafficLightStateArray_states(::tier4_v2x_msgs::msg::VirtualTrafficLightStateArray & msg)
  : msg_(msg)
  {}
  ::tier4_v2x_msgs::msg::VirtualTrafficLightStateArray states(::tier4_v2x_msgs::msg::VirtualTrafficLightStateArray::_states_type arg)
  {
    msg_.states = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_v2x_msgs::msg::VirtualTrafficLightStateArray msg_;
};

class Init_VirtualTrafficLightStateArray_stamp
{
public:
  Init_VirtualTrafficLightStateArray_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VirtualTrafficLightStateArray_states stamp(::tier4_v2x_msgs::msg::VirtualTrafficLightStateArray::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_VirtualTrafficLightStateArray_states(msg_);
  }

private:
  ::tier4_v2x_msgs::msg::VirtualTrafficLightStateArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_v2x_msgs::msg::VirtualTrafficLightStateArray>()
{
  return tier4_v2x_msgs::msg::builder::Init_VirtualTrafficLightStateArray_stamp();
}

}  // namespace tier4_v2x_msgs

#endif  // TIER4_V2X_MSGS__MSG__DETAIL__VIRTUAL_TRAFFIC_LIGHT_STATE_ARRAY__BUILDER_HPP_
