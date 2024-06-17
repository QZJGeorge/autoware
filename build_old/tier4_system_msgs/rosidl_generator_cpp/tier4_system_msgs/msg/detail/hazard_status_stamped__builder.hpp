// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_system_msgs:msg/HazardStatusStamped.idl
// generated code does not contain a copyright notice

#ifndef TIER4_SYSTEM_MSGS__MSG__DETAIL__HAZARD_STATUS_STAMPED__BUILDER_HPP_
#define TIER4_SYSTEM_MSGS__MSG__DETAIL__HAZARD_STATUS_STAMPED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_system_msgs/msg/detail/hazard_status_stamped__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_system_msgs
{

namespace msg
{

namespace builder
{

class Init_HazardStatusStamped_status
{
public:
  explicit Init_HazardStatusStamped_status(::tier4_system_msgs::msg::HazardStatusStamped & msg)
  : msg_(msg)
  {}
  ::tier4_system_msgs::msg::HazardStatusStamped status(::tier4_system_msgs::msg::HazardStatusStamped::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_system_msgs::msg::HazardStatusStamped msg_;
};

class Init_HazardStatusStamped_header
{
public:
  Init_HazardStatusStamped_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HazardStatusStamped_status header(::tier4_system_msgs::msg::HazardStatusStamped::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_HazardStatusStamped_status(msg_);
  }

private:
  ::tier4_system_msgs::msg::HazardStatusStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_system_msgs::msg::HazardStatusStamped>()
{
  return tier4_system_msgs::msg::builder::Init_HazardStatusStamped_header();
}

}  // namespace tier4_system_msgs

#endif  // TIER4_SYSTEM_MSGS__MSG__DETAIL__HAZARD_STATUS_STAMPED__BUILDER_HPP_
