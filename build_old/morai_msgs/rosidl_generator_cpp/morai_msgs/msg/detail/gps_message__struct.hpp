// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from morai_msgs:msg/GPSMessage.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__GPS_MESSAGE__STRUCT_HPP_
#define MORAI_MSGS__MSG__DETAIL__GPS_MESSAGE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__morai_msgs__msg__GPSMessage __attribute__((deprecated))
#else
# define DEPRECATED__morai_msgs__msg__GPSMessage __declspec(deprecated)
#endif

namespace morai_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GPSMessage_
{
  using Type = GPSMessage_<ContainerAllocator>;

  explicit GPSMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->latitude = 0.0;
      this->longitude = 0.0;
      this->altitude = 0.0;
      this->east_offset = 0.0;
      this->north_offset = 0.0;
      this->status = 0;
    }
  }

  explicit GPSMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->latitude = 0.0;
      this->longitude = 0.0;
      this->altitude = 0.0;
      this->east_offset = 0.0;
      this->north_offset = 0.0;
      this->status = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _latitude_type =
    double;
  _latitude_type latitude;
  using _longitude_type =
    double;
  _longitude_type longitude;
  using _altitude_type =
    double;
  _altitude_type altitude;
  using _east_offset_type =
    double;
  _east_offset_type east_offset;
  using _north_offset_type =
    double;
  _north_offset_type north_offset;
  using _status_type =
    int16_t;
  _status_type status;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__latitude(
    const double & _arg)
  {
    this->latitude = _arg;
    return *this;
  }
  Type & set__longitude(
    const double & _arg)
  {
    this->longitude = _arg;
    return *this;
  }
  Type & set__altitude(
    const double & _arg)
  {
    this->altitude = _arg;
    return *this;
  }
  Type & set__east_offset(
    const double & _arg)
  {
    this->east_offset = _arg;
    return *this;
  }
  Type & set__north_offset(
    const double & _arg)
  {
    this->north_offset = _arg;
    return *this;
  }
  Type & set__status(
    const int16_t & _arg)
  {
    this->status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    morai_msgs::msg::GPSMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const morai_msgs::msg::GPSMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<morai_msgs::msg::GPSMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<morai_msgs::msg::GPSMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      morai_msgs::msg::GPSMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<morai_msgs::msg::GPSMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      morai_msgs::msg::GPSMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<morai_msgs::msg::GPSMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<morai_msgs::msg::GPSMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<morai_msgs::msg::GPSMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__morai_msgs__msg__GPSMessage
    std::shared_ptr<morai_msgs::msg::GPSMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__morai_msgs__msg__GPSMessage
    std::shared_ptr<morai_msgs::msg::GPSMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GPSMessage_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->latitude != other.latitude) {
      return false;
    }
    if (this->longitude != other.longitude) {
      return false;
    }
    if (this->altitude != other.altitude) {
      return false;
    }
    if (this->east_offset != other.east_offset) {
      return false;
    }
    if (this->north_offset != other.north_offset) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const GPSMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GPSMessage_

// alias to use template instance with default allocator
using GPSMessage =
  morai_msgs::msg::GPSMessage_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace morai_msgs

#endif  // MORAI_MSGS__MSG__DETAIL__GPS_MESSAGE__STRUCT_HPP_
