// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_perception_msgs:msg/DynamicObject.idl
// generated code does not contain a copyright notice

#ifndef TIER4_PERCEPTION_MSGS__MSG__DETAIL__DYNAMIC_OBJECT__BUILDER_HPP_
#define TIER4_PERCEPTION_MSGS__MSG__DETAIL__DYNAMIC_OBJECT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_perception_msgs/msg/detail/dynamic_object__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_DynamicObject_shape
{
public:
  explicit Init_DynamicObject_shape(::tier4_perception_msgs::msg::DynamicObject & msg)
  : msg_(msg)
  {}
  ::tier4_perception_msgs::msg::DynamicObject shape(::tier4_perception_msgs::msg::DynamicObject::_shape_type arg)
  {
    msg_.shape = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_perception_msgs::msg::DynamicObject msg_;
};

class Init_DynamicObject_state
{
public:
  explicit Init_DynamicObject_state(::tier4_perception_msgs::msg::DynamicObject & msg)
  : msg_(msg)
  {}
  Init_DynamicObject_shape state(::tier4_perception_msgs::msg::DynamicObject::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_DynamicObject_shape(msg_);
  }

private:
  ::tier4_perception_msgs::msg::DynamicObject msg_;
};

class Init_DynamicObject_semantic
{
public:
  explicit Init_DynamicObject_semantic(::tier4_perception_msgs::msg::DynamicObject & msg)
  : msg_(msg)
  {}
  Init_DynamicObject_state semantic(::tier4_perception_msgs::msg::DynamicObject::_semantic_type arg)
  {
    msg_.semantic = std::move(arg);
    return Init_DynamicObject_state(msg_);
  }

private:
  ::tier4_perception_msgs::msg::DynamicObject msg_;
};

class Init_DynamicObject_id
{
public:
  Init_DynamicObject_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DynamicObject_semantic id(::tier4_perception_msgs::msg::DynamicObject::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_DynamicObject_semantic(msg_);
  }

private:
  ::tier4_perception_msgs::msg::DynamicObject msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_perception_msgs::msg::DynamicObject>()
{
  return tier4_perception_msgs::msg::builder::Init_DynamicObject_id();
}

}  // namespace tier4_perception_msgs

#endif  // TIER4_PERCEPTION_MSGS__MSG__DETAIL__DYNAMIC_OBJECT__BUILDER_HPP_
