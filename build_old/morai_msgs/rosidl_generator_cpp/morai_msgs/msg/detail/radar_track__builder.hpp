// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from morai_msgs:msg/RadarTrack.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__RADAR_TRACK__BUILDER_HPP_
#define MORAI_MSGS__MSG__DETAIL__RADAR_TRACK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "morai_msgs/msg/detail/radar_track__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace morai_msgs
{

namespace msg
{

namespace builder
{

class Init_RadarTrack_amplitude
{
public:
  explicit Init_RadarTrack_amplitude(::morai_msgs::msg::RadarTrack & msg)
  : msg_(msg)
  {}
  ::morai_msgs::msg::RadarTrack amplitude(::morai_msgs::msg::RadarTrack::_amplitude_type arg)
  {
    msg_.amplitude = std::move(arg);
    return std::move(msg_);
  }

private:
  ::morai_msgs::msg::RadarTrack msg_;
};

class Init_RadarTrack_size_covariance
{
public:
  explicit Init_RadarTrack_size_covariance(::morai_msgs::msg::RadarTrack & msg)
  : msg_(msg)
  {}
  Init_RadarTrack_amplitude size_covariance(::morai_msgs::msg::RadarTrack::_size_covariance_type arg)
  {
    msg_.size_covariance = std::move(arg);
    return Init_RadarTrack_amplitude(msg_);
  }

private:
  ::morai_msgs::msg::RadarTrack msg_;
};

class Init_RadarTrack_acceleration_covariance
{
public:
  explicit Init_RadarTrack_acceleration_covariance(::morai_msgs::msg::RadarTrack & msg)
  : msg_(msg)
  {}
  Init_RadarTrack_size_covariance acceleration_covariance(::morai_msgs::msg::RadarTrack::_acceleration_covariance_type arg)
  {
    msg_.acceleration_covariance = std::move(arg);
    return Init_RadarTrack_size_covariance(msg_);
  }

private:
  ::morai_msgs::msg::RadarTrack msg_;
};

class Init_RadarTrack_velocity_covariance
{
public:
  explicit Init_RadarTrack_velocity_covariance(::morai_msgs::msg::RadarTrack & msg)
  : msg_(msg)
  {}
  Init_RadarTrack_acceleration_covariance velocity_covariance(::morai_msgs::msg::RadarTrack::_velocity_covariance_type arg)
  {
    msg_.velocity_covariance = std::move(arg);
    return Init_RadarTrack_acceleration_covariance(msg_);
  }

private:
  ::morai_msgs::msg::RadarTrack msg_;
};

class Init_RadarTrack_position_covariance
{
public:
  explicit Init_RadarTrack_position_covariance(::morai_msgs::msg::RadarTrack & msg)
  : msg_(msg)
  {}
  Init_RadarTrack_velocity_covariance position_covariance(::morai_msgs::msg::RadarTrack::_position_covariance_type arg)
  {
    msg_.position_covariance = std::move(arg);
    return Init_RadarTrack_velocity_covariance(msg_);
  }

private:
  ::morai_msgs::msg::RadarTrack msg_;
};

class Init_RadarTrack_classification
{
public:
  explicit Init_RadarTrack_classification(::morai_msgs::msg::RadarTrack & msg)
  : msg_(msg)
  {}
  Init_RadarTrack_position_covariance classification(::morai_msgs::msg::RadarTrack::_classification_type arg)
  {
    msg_.classification = std::move(arg);
    return Init_RadarTrack_position_covariance(msg_);
  }

private:
  ::morai_msgs::msg::RadarTrack msg_;
};

class Init_RadarTrack_size
{
public:
  explicit Init_RadarTrack_size(::morai_msgs::msg::RadarTrack & msg)
  : msg_(msg)
  {}
  Init_RadarTrack_classification size(::morai_msgs::msg::RadarTrack::_size_type arg)
  {
    msg_.size = std::move(arg);
    return Init_RadarTrack_classification(msg_);
  }

private:
  ::morai_msgs::msg::RadarTrack msg_;
};

class Init_RadarTrack_acceleration
{
public:
  explicit Init_RadarTrack_acceleration(::morai_msgs::msg::RadarTrack & msg)
  : msg_(msg)
  {}
  Init_RadarTrack_size acceleration(::morai_msgs::msg::RadarTrack::_acceleration_type arg)
  {
    msg_.acceleration = std::move(arg);
    return Init_RadarTrack_size(msg_);
  }

private:
  ::morai_msgs::msg::RadarTrack msg_;
};

class Init_RadarTrack_velocity
{
public:
  explicit Init_RadarTrack_velocity(::morai_msgs::msg::RadarTrack & msg)
  : msg_(msg)
  {}
  Init_RadarTrack_acceleration velocity(::morai_msgs::msg::RadarTrack::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_RadarTrack_acceleration(msg_);
  }

private:
  ::morai_msgs::msg::RadarTrack msg_;
};

class Init_RadarTrack_position
{
public:
  explicit Init_RadarTrack_position(::morai_msgs::msg::RadarTrack & msg)
  : msg_(msg)
  {}
  Init_RadarTrack_velocity position(::morai_msgs::msg::RadarTrack::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_RadarTrack_velocity(msg_);
  }

private:
  ::morai_msgs::msg::RadarTrack msg_;
};

class Init_RadarTrack_uuid
{
public:
  Init_RadarTrack_uuid()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RadarTrack_position uuid(::morai_msgs::msg::RadarTrack::_uuid_type arg)
  {
    msg_.uuid = std::move(arg);
    return Init_RadarTrack_position(msg_);
  }

private:
  ::morai_msgs::msg::RadarTrack msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::morai_msgs::msg::RadarTrack>()
{
  return morai_msgs::msg::builder::Init_RadarTrack_uuid();
}

}  // namespace morai_msgs

#endif  // MORAI_MSGS__MSG__DETAIL__RADAR_TRACK__BUILDER_HPP_
