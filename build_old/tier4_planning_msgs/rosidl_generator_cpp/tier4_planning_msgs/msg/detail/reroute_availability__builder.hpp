// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_planning_msgs:msg/RerouteAvailability.idl
// generated code does not contain a copyright notice

#ifndef TIER4_PLANNING_MSGS__MSG__DETAIL__REROUTE_AVAILABILITY__BUILDER_HPP_
#define TIER4_PLANNING_MSGS__MSG__DETAIL__REROUTE_AVAILABILITY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_planning_msgs/msg/detail/reroute_availability__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_planning_msgs
{

namespace msg
{

namespace builder
{

class Init_RerouteAvailability_availability
{
public:
  explicit Init_RerouteAvailability_availability(::tier4_planning_msgs::msg::RerouteAvailability & msg)
  : msg_(msg)
  {}
  ::tier4_planning_msgs::msg::RerouteAvailability availability(::tier4_planning_msgs::msg::RerouteAvailability::_availability_type arg)
  {
    msg_.availability = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_planning_msgs::msg::RerouteAvailability msg_;
};

class Init_RerouteAvailability_stamp
{
public:
  Init_RerouteAvailability_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RerouteAvailability_availability stamp(::tier4_planning_msgs::msg::RerouteAvailability::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_RerouteAvailability_availability(msg_);
  }

private:
  ::tier4_planning_msgs::msg::RerouteAvailability msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_planning_msgs::msg::RerouteAvailability>()
{
  return tier4_planning_msgs::msg::builder::Init_RerouteAvailability_stamp();
}

}  // namespace tier4_planning_msgs

#endif  // TIER4_PLANNING_MSGS__MSG__DETAIL__REROUTE_AVAILABILITY__BUILDER_HPP_
