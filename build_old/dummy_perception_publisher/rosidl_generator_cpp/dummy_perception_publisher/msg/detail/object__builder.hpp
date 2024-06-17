// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dummy_perception_publisher:msg/Object.idl
// generated code does not contain a copyright notice

#ifndef DUMMY_PERCEPTION_PUBLISHER__MSG__DETAIL__OBJECT__BUILDER_HPP_
#define DUMMY_PERCEPTION_PUBLISHER__MSG__DETAIL__OBJECT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dummy_perception_publisher/msg/detail/object__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dummy_perception_publisher
{

namespace msg
{

namespace builder
{

class Init_Object_action
{
public:
  explicit Init_Object_action(::dummy_perception_publisher::msg::Object & msg)
  : msg_(msg)
  {}
  ::dummy_perception_publisher::msg::Object action(::dummy_perception_publisher::msg::Object::_action_type arg)
  {
    msg_.action = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dummy_perception_publisher::msg::Object msg_;
};

class Init_Object_min_velocity
{
public:
  explicit Init_Object_min_velocity(::dummy_perception_publisher::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_action min_velocity(::dummy_perception_publisher::msg::Object::_min_velocity_type arg)
  {
    msg_.min_velocity = std::move(arg);
    return Init_Object_action(msg_);
  }

private:
  ::dummy_perception_publisher::msg::Object msg_;
};

class Init_Object_max_velocity
{
public:
  explicit Init_Object_max_velocity(::dummy_perception_publisher::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_min_velocity max_velocity(::dummy_perception_publisher::msg::Object::_max_velocity_type arg)
  {
    msg_.max_velocity = std::move(arg);
    return Init_Object_min_velocity(msg_);
  }

private:
  ::dummy_perception_publisher::msg::Object msg_;
};

class Init_Object_shape
{
public:
  explicit Init_Object_shape(::dummy_perception_publisher::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_max_velocity shape(::dummy_perception_publisher::msg::Object::_shape_type arg)
  {
    msg_.shape = std::move(arg);
    return Init_Object_max_velocity(msg_);
  }

private:
  ::dummy_perception_publisher::msg::Object msg_;
};

class Init_Object_classification
{
public:
  explicit Init_Object_classification(::dummy_perception_publisher::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_shape classification(::dummy_perception_publisher::msg::Object::_classification_type arg)
  {
    msg_.classification = std::move(arg);
    return Init_Object_shape(msg_);
  }

private:
  ::dummy_perception_publisher::msg::Object msg_;
};

class Init_Object_initial_state
{
public:
  explicit Init_Object_initial_state(::dummy_perception_publisher::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_classification initial_state(::dummy_perception_publisher::msg::Object::_initial_state_type arg)
  {
    msg_.initial_state = std::move(arg);
    return Init_Object_classification(msg_);
  }

private:
  ::dummy_perception_publisher::msg::Object msg_;
};

class Init_Object_id
{
public:
  explicit Init_Object_id(::dummy_perception_publisher::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_initial_state id(::dummy_perception_publisher::msg::Object::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_Object_initial_state(msg_);
  }

private:
  ::dummy_perception_publisher::msg::Object msg_;
};

class Init_Object_header
{
public:
  Init_Object_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Object_id header(::dummy_perception_publisher::msg::Object::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Object_id(msg_);
  }

private:
  ::dummy_perception_publisher::msg::Object msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::dummy_perception_publisher::msg::Object>()
{
  return dummy_perception_publisher::msg::builder::Init_Object_header();
}

}  // namespace dummy_perception_publisher

#endif  // DUMMY_PERCEPTION_PUBLISHER__MSG__DETAIL__OBJECT__BUILDER_HPP_
