// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from morai_msgs:msg/RadarDetection.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__RADAR_DETECTION__STRUCT_HPP_
#define MORAI_MSGS__MSG__DETAIL__RADAR_DETECTION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'position'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__morai_msgs__msg__RadarDetection __attribute__((deprecated))
#else
# define DEPRECATED__morai_msgs__msg__RadarDetection __declspec(deprecated)
#endif

namespace morai_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RadarDetection_
{
  using Type = RadarDetection_<ContainerAllocator>;

  explicit RadarDetection_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->detection_id = 0;
      this->azimuth = 0.0f;
      this->rangerate = 0.0f;
      this->amplitude = 0.0f;
    }
  }

  explicit RadarDetection_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->detection_id = 0;
      this->azimuth = 0.0f;
      this->rangerate = 0.0f;
      this->amplitude = 0.0f;
    }
  }

  // field types and members
  using _detection_id_type =
    uint16_t;
  _detection_id_type detection_id;
  using _position_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _position_type position;
  using _azimuth_type =
    float;
  _azimuth_type azimuth;
  using _rangerate_type =
    float;
  _rangerate_type rangerate;
  using _amplitude_type =
    float;
  _amplitude_type amplitude;

  // setters for named parameter idiom
  Type & set__detection_id(
    const uint16_t & _arg)
  {
    this->detection_id = _arg;
    return *this;
  }
  Type & set__position(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__azimuth(
    const float & _arg)
  {
    this->azimuth = _arg;
    return *this;
  }
  Type & set__rangerate(
    const float & _arg)
  {
    this->rangerate = _arg;
    return *this;
  }
  Type & set__amplitude(
    const float & _arg)
  {
    this->amplitude = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    morai_msgs::msg::RadarDetection_<ContainerAllocator> *;
  using ConstRawPtr =
    const morai_msgs::msg::RadarDetection_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<morai_msgs::msg::RadarDetection_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<morai_msgs::msg::RadarDetection_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      morai_msgs::msg::RadarDetection_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<morai_msgs::msg::RadarDetection_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      morai_msgs::msg::RadarDetection_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<morai_msgs::msg::RadarDetection_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<morai_msgs::msg::RadarDetection_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<morai_msgs::msg::RadarDetection_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__morai_msgs__msg__RadarDetection
    std::shared_ptr<morai_msgs::msg::RadarDetection_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__morai_msgs__msg__RadarDetection
    std::shared_ptr<morai_msgs::msg::RadarDetection_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RadarDetection_ & other) const
  {
    if (this->detection_id != other.detection_id) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    if (this->azimuth != other.azimuth) {
      return false;
    }
    if (this->rangerate != other.rangerate) {
      return false;
    }
    if (this->amplitude != other.amplitude) {
      return false;
    }
    return true;
  }
  bool operator!=(const RadarDetection_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RadarDetection_

// alias to use template instance with default allocator
using RadarDetection =
  morai_msgs::msg::RadarDetection_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace morai_msgs

#endif  // MORAI_MSGS__MSG__DETAIL__RADAR_DETECTION__STRUCT_HPP_
