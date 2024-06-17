// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_external_api_msgs:msg/Route.idl
// generated code does not contain a copyright notice

#ifndef TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__ROUTE__BUILDER_HPP_
#define TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__ROUTE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_external_api_msgs/msg/detail/route__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_external_api_msgs
{

namespace msg
{

namespace builder
{

class Init_Route_route_sections
{
public:
  explicit Init_Route_route_sections(::tier4_external_api_msgs::msg::Route & msg)
  : msg_(msg)
  {}
  ::tier4_external_api_msgs::msg::Route route_sections(::tier4_external_api_msgs::msg::Route::_route_sections_type arg)
  {
    msg_.route_sections = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_external_api_msgs::msg::Route msg_;
};

class Init_Route_goal_pose
{
public:
  Init_Route_goal_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Route_route_sections goal_pose(::tier4_external_api_msgs::msg::Route::_goal_pose_type arg)
  {
    msg_.goal_pose = std::move(arg);
    return Init_Route_route_sections(msg_);
  }

private:
  ::tier4_external_api_msgs::msg::Route msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_external_api_msgs::msg::Route>()
{
  return tier4_external_api_msgs::msg::builder::Init_Route_goal_pose();
}

}  // namespace tier4_external_api_msgs

#endif  // TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__ROUTE__BUILDER_HPP_
