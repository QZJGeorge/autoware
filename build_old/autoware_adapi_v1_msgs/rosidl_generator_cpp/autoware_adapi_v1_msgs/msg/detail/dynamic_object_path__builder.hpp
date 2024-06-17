// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_adapi_v1_msgs:msg/DynamicObjectPath.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__DYNAMIC_OBJECT_PATH__BUILDER_HPP_
#define AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__DYNAMIC_OBJECT_PATH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_adapi_v1_msgs/msg/detail/dynamic_object_path__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_adapi_v1_msgs
{

namespace msg
{

namespace builder
{

class Init_DynamicObjectPath_confidence
{
public:
  explicit Init_DynamicObjectPath_confidence(::autoware_adapi_v1_msgs::msg::DynamicObjectPath & msg)
  : msg_(msg)
  {}
  ::autoware_adapi_v1_msgs::msg::DynamicObjectPath confidence(::autoware_adapi_v1_msgs::msg::DynamicObjectPath::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_adapi_v1_msgs::msg::DynamicObjectPath msg_;
};

class Init_DynamicObjectPath_time_step
{
public:
  explicit Init_DynamicObjectPath_time_step(::autoware_adapi_v1_msgs::msg::DynamicObjectPath & msg)
  : msg_(msg)
  {}
  Init_DynamicObjectPath_confidence time_step(::autoware_adapi_v1_msgs::msg::DynamicObjectPath::_time_step_type arg)
  {
    msg_.time_step = std::move(arg);
    return Init_DynamicObjectPath_confidence(msg_);
  }

private:
  ::autoware_adapi_v1_msgs::msg::DynamicObjectPath msg_;
};

class Init_DynamicObjectPath_path
{
public:
  Init_DynamicObjectPath_path()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DynamicObjectPath_time_step path(::autoware_adapi_v1_msgs::msg::DynamicObjectPath::_path_type arg)
  {
    msg_.path = std::move(arg);
    return Init_DynamicObjectPath_time_step(msg_);
  }

private:
  ::autoware_adapi_v1_msgs::msg::DynamicObjectPath msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_adapi_v1_msgs::msg::DynamicObjectPath>()
{
  return autoware_adapi_v1_msgs::msg::builder::Init_DynamicObjectPath_path();
}

}  // namespace autoware_adapi_v1_msgs

#endif  // AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__DYNAMIC_OBJECT_PATH__BUILDER_HPP_
