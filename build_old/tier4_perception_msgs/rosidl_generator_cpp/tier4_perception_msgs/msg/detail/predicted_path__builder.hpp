// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_perception_msgs:msg/PredictedPath.idl
// generated code does not contain a copyright notice

#ifndef TIER4_PERCEPTION_MSGS__MSG__DETAIL__PREDICTED_PATH__BUILDER_HPP_
#define TIER4_PERCEPTION_MSGS__MSG__DETAIL__PREDICTED_PATH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_perception_msgs/msg/detail/predicted_path__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_PredictedPath_confidence
{
public:
  explicit Init_PredictedPath_confidence(::tier4_perception_msgs::msg::PredictedPath & msg)
  : msg_(msg)
  {}
  ::tier4_perception_msgs::msg::PredictedPath confidence(::tier4_perception_msgs::msg::PredictedPath::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_perception_msgs::msg::PredictedPath msg_;
};

class Init_PredictedPath_path
{
public:
  Init_PredictedPath_path()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PredictedPath_confidence path(::tier4_perception_msgs::msg::PredictedPath::_path_type arg)
  {
    msg_.path = std::move(arg);
    return Init_PredictedPath_confidence(msg_);
  }

private:
  ::tier4_perception_msgs::msg::PredictedPath msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_perception_msgs::msg::PredictedPath>()
{
  return tier4_perception_msgs::msg::builder::Init_PredictedPath_path();
}

}  // namespace tier4_perception_msgs

#endif  // TIER4_PERCEPTION_MSGS__MSG__DETAIL__PREDICTED_PATH__BUILDER_HPP_
