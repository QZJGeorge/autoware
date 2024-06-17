// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_perception_msgs:msg/DynamicObjectArray.idl
// generated code does not contain a copyright notice

#ifndef TIER4_PERCEPTION_MSGS__MSG__DETAIL__DYNAMIC_OBJECT_ARRAY__BUILDER_HPP_
#define TIER4_PERCEPTION_MSGS__MSG__DETAIL__DYNAMIC_OBJECT_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_perception_msgs/msg/detail/dynamic_object_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_DynamicObjectArray_objects
{
public:
  explicit Init_DynamicObjectArray_objects(::tier4_perception_msgs::msg::DynamicObjectArray & msg)
  : msg_(msg)
  {}
  ::tier4_perception_msgs::msg::DynamicObjectArray objects(::tier4_perception_msgs::msg::DynamicObjectArray::_objects_type arg)
  {
    msg_.objects = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_perception_msgs::msg::DynamicObjectArray msg_;
};

class Init_DynamicObjectArray_header
{
public:
  Init_DynamicObjectArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DynamicObjectArray_objects header(::tier4_perception_msgs::msg::DynamicObjectArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DynamicObjectArray_objects(msg_);
  }

private:
  ::tier4_perception_msgs::msg::DynamicObjectArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_perception_msgs::msg::DynamicObjectArray>()
{
  return tier4_perception_msgs::msg::builder::Init_DynamicObjectArray_header();
}

}  // namespace tier4_perception_msgs

#endif  // TIER4_PERCEPTION_MSGS__MSG__DETAIL__DYNAMIC_OBJECT_ARRAY__BUILDER_HPP_
