// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_perception_msgs:msg/Semantic.idl
// generated code does not contain a copyright notice

#ifndef TIER4_PERCEPTION_MSGS__MSG__DETAIL__SEMANTIC__BUILDER_HPP_
#define TIER4_PERCEPTION_MSGS__MSG__DETAIL__SEMANTIC__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_perception_msgs/msg/detail/semantic__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_Semantic_confidence
{
public:
  explicit Init_Semantic_confidence(::tier4_perception_msgs::msg::Semantic & msg)
  : msg_(msg)
  {}
  ::tier4_perception_msgs::msg::Semantic confidence(::tier4_perception_msgs::msg::Semantic::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_perception_msgs::msg::Semantic msg_;
};

class Init_Semantic_type
{
public:
  Init_Semantic_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Semantic_confidence type(::tier4_perception_msgs::msg::Semantic::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_Semantic_confidence(msg_);
  }

private:
  ::tier4_perception_msgs::msg::Semantic msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_perception_msgs::msg::Semantic>()
{
  return tier4_perception_msgs::msg::builder::Init_Semantic_type();
}

}  // namespace tier4_perception_msgs

#endif  // TIER4_PERCEPTION_MSGS__MSG__DETAIL__SEMANTIC__BUILDER_HPP_
