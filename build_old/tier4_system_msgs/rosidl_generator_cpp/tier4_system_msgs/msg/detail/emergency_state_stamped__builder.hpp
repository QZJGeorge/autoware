// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_system_msgs:msg/EmergencyStateStamped.idl
// generated code does not contain a copyright notice

#ifndef TIER4_SYSTEM_MSGS__MSG__DETAIL__EMERGENCY_STATE_STAMPED__BUILDER_HPP_
#define TIER4_SYSTEM_MSGS__MSG__DETAIL__EMERGENCY_STATE_STAMPED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_system_msgs/msg/detail/emergency_state_stamped__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_system_msgs
{

namespace msg
{

namespace builder
{

class Init_EmergencyStateStamped_state
{
public:
  explicit Init_EmergencyStateStamped_state(::tier4_system_msgs::msg::EmergencyStateStamped & msg)
  : msg_(msg)
  {}
  ::tier4_system_msgs::msg::EmergencyStateStamped state(::tier4_system_msgs::msg::EmergencyStateStamped::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_system_msgs::msg::EmergencyStateStamped msg_;
};

class Init_EmergencyStateStamped_stamp
{
public:
  Init_EmergencyStateStamped_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EmergencyStateStamped_state stamp(::tier4_system_msgs::msg::EmergencyStateStamped::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_EmergencyStateStamped_state(msg_);
  }

private:
  ::tier4_system_msgs::msg::EmergencyStateStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_system_msgs::msg::EmergencyStateStamped>()
{
  return tier4_system_msgs::msg::builder::Init_EmergencyStateStamped_stamp();
}

}  // namespace tier4_system_msgs

#endif  // TIER4_SYSTEM_MSGS__MSG__DETAIL__EMERGENCY_STATE_STAMPED__BUILDER_HPP_
