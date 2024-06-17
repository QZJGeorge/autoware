// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from morai_msgs:msg/RadarDetection.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__RADAR_DETECTION__BUILDER_HPP_
#define MORAI_MSGS__MSG__DETAIL__RADAR_DETECTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "morai_msgs/msg/detail/radar_detection__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace morai_msgs
{

namespace msg
{

namespace builder
{

class Init_RadarDetection_amplitude
{
public:
  explicit Init_RadarDetection_amplitude(::morai_msgs::msg::RadarDetection & msg)
  : msg_(msg)
  {}
  ::morai_msgs::msg::RadarDetection amplitude(::morai_msgs::msg::RadarDetection::_amplitude_type arg)
  {
    msg_.amplitude = std::move(arg);
    return std::move(msg_);
  }

private:
  ::morai_msgs::msg::RadarDetection msg_;
};

class Init_RadarDetection_rangerate
{
public:
  explicit Init_RadarDetection_rangerate(::morai_msgs::msg::RadarDetection & msg)
  : msg_(msg)
  {}
  Init_RadarDetection_amplitude rangerate(::morai_msgs::msg::RadarDetection::_rangerate_type arg)
  {
    msg_.rangerate = std::move(arg);
    return Init_RadarDetection_amplitude(msg_);
  }

private:
  ::morai_msgs::msg::RadarDetection msg_;
};

class Init_RadarDetection_azimuth
{
public:
  explicit Init_RadarDetection_azimuth(::morai_msgs::msg::RadarDetection & msg)
  : msg_(msg)
  {}
  Init_RadarDetection_rangerate azimuth(::morai_msgs::msg::RadarDetection::_azimuth_type arg)
  {
    msg_.azimuth = std::move(arg);
    return Init_RadarDetection_rangerate(msg_);
  }

private:
  ::morai_msgs::msg::RadarDetection msg_;
};

class Init_RadarDetection_position
{
public:
  explicit Init_RadarDetection_position(::morai_msgs::msg::RadarDetection & msg)
  : msg_(msg)
  {}
  Init_RadarDetection_azimuth position(::morai_msgs::msg::RadarDetection::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_RadarDetection_azimuth(msg_);
  }

private:
  ::morai_msgs::msg::RadarDetection msg_;
};

class Init_RadarDetection_detection_id
{
public:
  Init_RadarDetection_detection_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RadarDetection_position detection_id(::morai_msgs::msg::RadarDetection::_detection_id_type arg)
  {
    msg_.detection_id = std::move(arg);
    return Init_RadarDetection_position(msg_);
  }

private:
  ::morai_msgs::msg::RadarDetection msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::morai_msgs::msg::RadarDetection>()
{
  return morai_msgs::msg::builder::Init_RadarDetection_detection_id();
}

}  // namespace morai_msgs

#endif  // MORAI_MSGS__MSG__DETAIL__RADAR_DETECTION__BUILDER_HPP_
