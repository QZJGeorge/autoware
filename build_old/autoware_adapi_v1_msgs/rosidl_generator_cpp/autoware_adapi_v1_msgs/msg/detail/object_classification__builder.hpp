// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_adapi_v1_msgs:msg/ObjectClassification.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__OBJECT_CLASSIFICATION__BUILDER_HPP_
#define AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__OBJECT_CLASSIFICATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_adapi_v1_msgs/msg/detail/object_classification__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_adapi_v1_msgs
{

namespace msg
{

namespace builder
{

class Init_ObjectClassification_probability
{
public:
  explicit Init_ObjectClassification_probability(::autoware_adapi_v1_msgs::msg::ObjectClassification & msg)
  : msg_(msg)
  {}
  ::autoware_adapi_v1_msgs::msg::ObjectClassification probability(::autoware_adapi_v1_msgs::msg::ObjectClassification::_probability_type arg)
  {
    msg_.probability = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_adapi_v1_msgs::msg::ObjectClassification msg_;
};

class Init_ObjectClassification_label
{
public:
  Init_ObjectClassification_label()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ObjectClassification_probability label(::autoware_adapi_v1_msgs::msg::ObjectClassification::_label_type arg)
  {
    msg_.label = std::move(arg);
    return Init_ObjectClassification_probability(msg_);
  }

private:
  ::autoware_adapi_v1_msgs::msg::ObjectClassification msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_adapi_v1_msgs::msg::ObjectClassification>()
{
  return autoware_adapi_v1_msgs::msg::builder::Init_ObjectClassification_label();
}

}  // namespace autoware_adapi_v1_msgs

#endif  // AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__OBJECT_CLASSIFICATION__BUILDER_HPP_
