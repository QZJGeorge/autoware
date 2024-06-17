// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from morai_msgs:msg/RadarDetections.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__RADAR_DETECTIONS__STRUCT_HPP_
#define MORAI_MSGS__MSG__DETAIL__RADAR_DETECTIONS__STRUCT_HPP_

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
// Member 'detections'
#include "morai_msgs/msg/detail/radar_detection__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__morai_msgs__msg__RadarDetections __attribute__((deprecated))
#else
# define DEPRECATED__morai_msgs__msg__RadarDetections __declspec(deprecated)
#endif

namespace morai_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RadarDetections_
{
  using Type = RadarDetections_<ContainerAllocator>;

  explicit RadarDetections_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit RadarDetections_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _detections_type =
    std::vector<morai_msgs::msg::RadarDetection_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<morai_msgs::msg::RadarDetection_<ContainerAllocator>>>;
  _detections_type detections;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__detections(
    const std::vector<morai_msgs::msg::RadarDetection_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<morai_msgs::msg::RadarDetection_<ContainerAllocator>>> & _arg)
  {
    this->detections = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    morai_msgs::msg::RadarDetections_<ContainerAllocator> *;
  using ConstRawPtr =
    const morai_msgs::msg::RadarDetections_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<morai_msgs::msg::RadarDetections_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<morai_msgs::msg::RadarDetections_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      morai_msgs::msg::RadarDetections_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<morai_msgs::msg::RadarDetections_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      morai_msgs::msg::RadarDetections_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<morai_msgs::msg::RadarDetections_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<morai_msgs::msg::RadarDetections_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<morai_msgs::msg::RadarDetections_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__morai_msgs__msg__RadarDetections
    std::shared_ptr<morai_msgs::msg::RadarDetections_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__morai_msgs__msg__RadarDetections
    std::shared_ptr<morai_msgs::msg::RadarDetections_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RadarDetections_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->detections != other.detections) {
      return false;
    }
    return true;
  }
  bool operator!=(const RadarDetections_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RadarDetections_

// alias to use template instance with default allocator
using RadarDetections =
  morai_msgs::msg::RadarDetections_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace morai_msgs

#endif  // MORAI_MSGS__MSG__DETAIL__RADAR_DETECTIONS__STRUCT_HPP_
