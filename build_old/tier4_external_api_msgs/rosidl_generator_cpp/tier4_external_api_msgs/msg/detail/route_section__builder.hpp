// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_external_api_msgs:msg/RouteSection.idl
// generated code does not contain a copyright notice

#ifndef TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__ROUTE_SECTION__BUILDER_HPP_
#define TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__ROUTE_SECTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_external_api_msgs/msg/detail/route_section__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_external_api_msgs
{

namespace msg
{

namespace builder
{

class Init_RouteSection_continued_lane_ids
{
public:
  explicit Init_RouteSection_continued_lane_ids(::tier4_external_api_msgs::msg::RouteSection & msg)
  : msg_(msg)
  {}
  ::tier4_external_api_msgs::msg::RouteSection continued_lane_ids(::tier4_external_api_msgs::msg::RouteSection::_continued_lane_ids_type arg)
  {
    msg_.continued_lane_ids = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_external_api_msgs::msg::RouteSection msg_;
};

class Init_RouteSection_lane_ids
{
public:
  explicit Init_RouteSection_lane_ids(::tier4_external_api_msgs::msg::RouteSection & msg)
  : msg_(msg)
  {}
  Init_RouteSection_continued_lane_ids lane_ids(::tier4_external_api_msgs::msg::RouteSection::_lane_ids_type arg)
  {
    msg_.lane_ids = std::move(arg);
    return Init_RouteSection_continued_lane_ids(msg_);
  }

private:
  ::tier4_external_api_msgs::msg::RouteSection msg_;
};

class Init_RouteSection_preferred_lane_id
{
public:
  Init_RouteSection_preferred_lane_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RouteSection_lane_ids preferred_lane_id(::tier4_external_api_msgs::msg::RouteSection::_preferred_lane_id_type arg)
  {
    msg_.preferred_lane_id = std::move(arg);
    return Init_RouteSection_lane_ids(msg_);
  }

private:
  ::tier4_external_api_msgs::msg::RouteSection msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_external_api_msgs::msg::RouteSection>()
{
  return tier4_external_api_msgs::msg::builder::Init_RouteSection_preferred_lane_id();
}

}  // namespace tier4_external_api_msgs

#endif  // TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__ROUTE_SECTION__BUILDER_HPP_
