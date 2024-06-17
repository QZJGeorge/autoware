// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from morai_msgs:msg/GPSMessage.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__GPS_MESSAGE__BUILDER_HPP_
#define MORAI_MSGS__MSG__DETAIL__GPS_MESSAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "morai_msgs/msg/detail/gps_message__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace morai_msgs
{

namespace msg
{

namespace builder
{

class Init_GPSMessage_status
{
public:
  explicit Init_GPSMessage_status(::morai_msgs::msg::GPSMessage & msg)
  : msg_(msg)
  {}
  ::morai_msgs::msg::GPSMessage status(::morai_msgs::msg::GPSMessage::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::morai_msgs::msg::GPSMessage msg_;
};

class Init_GPSMessage_north_offset
{
public:
  explicit Init_GPSMessage_north_offset(::morai_msgs::msg::GPSMessage & msg)
  : msg_(msg)
  {}
  Init_GPSMessage_status north_offset(::morai_msgs::msg::GPSMessage::_north_offset_type arg)
  {
    msg_.north_offset = std::move(arg);
    return Init_GPSMessage_status(msg_);
  }

private:
  ::morai_msgs::msg::GPSMessage msg_;
};

class Init_GPSMessage_east_offset
{
public:
  explicit Init_GPSMessage_east_offset(::morai_msgs::msg::GPSMessage & msg)
  : msg_(msg)
  {}
  Init_GPSMessage_north_offset east_offset(::morai_msgs::msg::GPSMessage::_east_offset_type arg)
  {
    msg_.east_offset = std::move(arg);
    return Init_GPSMessage_north_offset(msg_);
  }

private:
  ::morai_msgs::msg::GPSMessage msg_;
};

class Init_GPSMessage_altitude
{
public:
  explicit Init_GPSMessage_altitude(::morai_msgs::msg::GPSMessage & msg)
  : msg_(msg)
  {}
  Init_GPSMessage_east_offset altitude(::morai_msgs::msg::GPSMessage::_altitude_type arg)
  {
    msg_.altitude = std::move(arg);
    return Init_GPSMessage_east_offset(msg_);
  }

private:
  ::morai_msgs::msg::GPSMessage msg_;
};

class Init_GPSMessage_longitude
{
public:
  explicit Init_GPSMessage_longitude(::morai_msgs::msg::GPSMessage & msg)
  : msg_(msg)
  {}
  Init_GPSMessage_altitude longitude(::morai_msgs::msg::GPSMessage::_longitude_type arg)
  {
    msg_.longitude = std::move(arg);
    return Init_GPSMessage_altitude(msg_);
  }

private:
  ::morai_msgs::msg::GPSMessage msg_;
};

class Init_GPSMessage_latitude
{
public:
  explicit Init_GPSMessage_latitude(::morai_msgs::msg::GPSMessage & msg)
  : msg_(msg)
  {}
  Init_GPSMessage_longitude latitude(::morai_msgs::msg::GPSMessage::_latitude_type arg)
  {
    msg_.latitude = std::move(arg);
    return Init_GPSMessage_longitude(msg_);
  }

private:
  ::morai_msgs::msg::GPSMessage msg_;
};

class Init_GPSMessage_header
{
public:
  Init_GPSMessage_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GPSMessage_latitude header(::morai_msgs::msg::GPSMessage::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GPSMessage_latitude(msg_);
  }

private:
  ::morai_msgs::msg::GPSMessage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::morai_msgs::msg::GPSMessage>()
{
  return morai_msgs::msg::builder::Init_GPSMessage_header();
}

}  // namespace morai_msgs

#endif  // MORAI_MSGS__MSG__DETAIL__GPS_MESSAGE__BUILDER_HPP_
