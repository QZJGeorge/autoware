// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from morai_msgs:msg/RadarTracks.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__RADAR_TRACKS__BUILDER_HPP_
#define MORAI_MSGS__MSG__DETAIL__RADAR_TRACKS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "morai_msgs/msg/detail/radar_tracks__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace morai_msgs
{

namespace msg
{

namespace builder
{

class Init_RadarTracks_tracks
{
public:
  explicit Init_RadarTracks_tracks(::morai_msgs::msg::RadarTracks & msg)
  : msg_(msg)
  {}
  ::morai_msgs::msg::RadarTracks tracks(::morai_msgs::msg::RadarTracks::_tracks_type arg)
  {
    msg_.tracks = std::move(arg);
    return std::move(msg_);
  }

private:
  ::morai_msgs::msg::RadarTracks msg_;
};

class Init_RadarTracks_header
{
public:
  Init_RadarTracks_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RadarTracks_tracks header(::morai_msgs::msg::RadarTracks::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RadarTracks_tracks(msg_);
  }

private:
  ::morai_msgs::msg::RadarTracks msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::morai_msgs::msg::RadarTracks>()
{
  return morai_msgs::msg::builder::Init_RadarTracks_header();
}

}  // namespace morai_msgs

#endif  // MORAI_MSGS__MSG__DETAIL__RADAR_TRACKS__BUILDER_HPP_
