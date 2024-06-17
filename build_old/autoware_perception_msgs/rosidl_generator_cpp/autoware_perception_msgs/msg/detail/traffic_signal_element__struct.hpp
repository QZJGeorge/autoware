// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autoware_perception_msgs:msg/TrafficSignalElement.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_SIGNAL_ELEMENT__STRUCT_HPP_
#define AUTOWARE_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_SIGNAL_ELEMENT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__autoware_perception_msgs__msg__TrafficSignalElement __attribute__((deprecated))
#else
# define DEPRECATED__autoware_perception_msgs__msg__TrafficSignalElement __declspec(deprecated)
#endif

namespace autoware_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TrafficSignalElement_
{
  using Type = TrafficSignalElement_<ContainerAllocator>;

  explicit TrafficSignalElement_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->color = 0;
      this->shape = 0;
      this->status = 0;
      this->confidence = 0.0f;
    }
  }

  explicit TrafficSignalElement_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->color = 0;
      this->shape = 0;
      this->status = 0;
      this->confidence = 0.0f;
    }
  }

  // field types and members
  using _color_type =
    uint8_t;
  _color_type color;
  using _shape_type =
    uint8_t;
  _shape_type shape;
  using _status_type =
    uint8_t;
  _status_type status;
  using _confidence_type =
    float;
  _confidence_type confidence;

  // setters for named parameter idiom
  Type & set__color(
    const uint8_t & _arg)
  {
    this->color = _arg;
    return *this;
  }
  Type & set__shape(
    const uint8_t & _arg)
  {
    this->shape = _arg;
    return *this;
  }
  Type & set__status(
    const uint8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__confidence(
    const float & _arg)
  {
    this->confidence = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t UNKNOWN =
    0u;
  static constexpr uint8_t RED =
    1u;
  static constexpr uint8_t AMBER =
    2u;
  static constexpr uint8_t GREEN =
    3u;
  static constexpr uint8_t WHITE =
    4u;
  static constexpr uint8_t CIRCLE =
    1u;
  static constexpr uint8_t LEFT_ARROW =
    2u;
  static constexpr uint8_t RIGHT_ARROW =
    3u;
  static constexpr uint8_t UP_ARROW =
    4u;
  static constexpr uint8_t UP_LEFT_ARROW =
    5u;
  static constexpr uint8_t UP_RIGHT_ARROW =
    6u;
  static constexpr uint8_t DOWN_ARROW =
    7u;
  static constexpr uint8_t DOWN_LEFT_ARROW =
    8u;
  static constexpr uint8_t DOWN_RIGHT_ARROW =
    9u;
  static constexpr uint8_t CROSS =
    10u;
  static constexpr uint8_t SOLID_OFF =
    1u;
  static constexpr uint8_t SOLID_ON =
    2u;
  static constexpr uint8_t FLASHING =
    3u;

  // pointer types
  using RawPtr =
    autoware_perception_msgs::msg::TrafficSignalElement_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_perception_msgs::msg::TrafficSignalElement_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_perception_msgs::msg::TrafficSignalElement_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_perception_msgs::msg::TrafficSignalElement_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_perception_msgs::msg::TrafficSignalElement_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_perception_msgs::msg::TrafficSignalElement_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_perception_msgs::msg::TrafficSignalElement_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_perception_msgs::msg::TrafficSignalElement_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_perception_msgs::msg::TrafficSignalElement_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_perception_msgs::msg::TrafficSignalElement_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_perception_msgs__msg__TrafficSignalElement
    std::shared_ptr<autoware_perception_msgs::msg::TrafficSignalElement_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_perception_msgs__msg__TrafficSignalElement
    std::shared_ptr<autoware_perception_msgs::msg::TrafficSignalElement_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrafficSignalElement_ & other) const
  {
    if (this->color != other.color) {
      return false;
    }
    if (this->shape != other.shape) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    if (this->confidence != other.confidence) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrafficSignalElement_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrafficSignalElement_

// alias to use template instance with default allocator
using TrafficSignalElement =
  autoware_perception_msgs::msg::TrafficSignalElement_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TrafficSignalElement_<ContainerAllocator>::UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TrafficSignalElement_<ContainerAllocator>::RED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TrafficSignalElement_<ContainerAllocator>::AMBER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TrafficSignalElement_<ContainerAllocator>::GREEN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TrafficSignalElement_<ContainerAllocator>::WHITE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TrafficSignalElement_<ContainerAllocator>::CIRCLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TrafficSignalElement_<ContainerAllocator>::LEFT_ARROW;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TrafficSignalElement_<ContainerAllocator>::RIGHT_ARROW;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TrafficSignalElement_<ContainerAllocator>::UP_ARROW;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TrafficSignalElement_<ContainerAllocator>::UP_LEFT_ARROW;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TrafficSignalElement_<ContainerAllocator>::UP_RIGHT_ARROW;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TrafficSignalElement_<ContainerAllocator>::DOWN_ARROW;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TrafficSignalElement_<ContainerAllocator>::DOWN_LEFT_ARROW;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TrafficSignalElement_<ContainerAllocator>::DOWN_RIGHT_ARROW;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TrafficSignalElement_<ContainerAllocator>::CROSS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TrafficSignalElement_<ContainerAllocator>::SOLID_OFF;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TrafficSignalElement_<ContainerAllocator>::SOLID_ON;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TrafficSignalElement_<ContainerAllocator>::FLASHING;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace autoware_perception_msgs

#endif  // AUTOWARE_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_SIGNAL_ELEMENT__STRUCT_HPP_
