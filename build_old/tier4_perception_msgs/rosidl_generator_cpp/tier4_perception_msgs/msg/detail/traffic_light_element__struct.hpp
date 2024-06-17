// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tier4_perception_msgs:msg/TrafficLightElement.idl
// generated code does not contain a copyright notice

#ifndef TIER4_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_LIGHT_ELEMENT__STRUCT_HPP_
#define TIER4_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_LIGHT_ELEMENT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__tier4_perception_msgs__msg__TrafficLightElement __attribute__((deprecated))
#else
# define DEPRECATED__tier4_perception_msgs__msg__TrafficLightElement __declspec(deprecated)
#endif

namespace tier4_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TrafficLightElement_
{
  using Type = TrafficLightElement_<ContainerAllocator>;

  explicit TrafficLightElement_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->color = 0;
      this->shape = 0;
      this->status = 0;
      this->confidence = 0.0;
    }
  }

  explicit TrafficLightElement_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->color = 0;
      this->shape = 0;
      this->status = 0;
      this->confidence = 0.0;
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
    double;
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
    const double & _arg)
  {
    this->confidence = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t RED =
    1u;
  static constexpr uint8_t AMBER =
    2u;
  static constexpr uint8_t GREEN =
    3u;
  static constexpr uint8_t WHITE =
    4u;
  static constexpr uint8_t CIRCLE =
    5u;
  static constexpr uint8_t LEFT_ARROW =
    6u;
  static constexpr uint8_t RIGHT_ARROW =
    7u;
  static constexpr uint8_t UP_ARROW =
    8u;
  static constexpr uint8_t UP_LEFT_ARROW =
    9u;
  static constexpr uint8_t UP_RIGHT_ARROW =
    10u;
  static constexpr uint8_t DOWN_ARROW =
    11u;
  static constexpr uint8_t DOWN_LEFT_ARROW =
    12u;
  static constexpr uint8_t DOWN_RIGHT_ARROW =
    13u;
  static constexpr uint8_t CROSS =
    14u;
  static constexpr uint8_t SOLID_OFF =
    15u;
  static constexpr uint8_t SOLID_ON =
    16u;
  static constexpr uint8_t FLASHING =
    17u;
  static constexpr uint8_t UNKNOWN =
    18u;

  // pointer types
  using RawPtr =
    tier4_perception_msgs::msg::TrafficLightElement_<ContainerAllocator> *;
  using ConstRawPtr =
    const tier4_perception_msgs::msg::TrafficLightElement_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tier4_perception_msgs::msg::TrafficLightElement_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tier4_perception_msgs::msg::TrafficLightElement_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tier4_perception_msgs::msg::TrafficLightElement_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tier4_perception_msgs::msg::TrafficLightElement_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tier4_perception_msgs::msg::TrafficLightElement_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tier4_perception_msgs::msg::TrafficLightElement_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tier4_perception_msgs::msg::TrafficLightElement_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tier4_perception_msgs::msg::TrafficLightElement_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tier4_perception_msgs__msg__TrafficLightElement
    std::shared_ptr<tier4_perception_msgs::msg::TrafficLightElement_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tier4_perception_msgs__msg__TrafficLightElement
    std::shared_ptr<tier4_perception_msgs::msg::TrafficLightElement_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrafficLightElement_ & other) const
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
  bool operator!=(const TrafficLightElement_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrafficLightElement_

// alias to use template instance with default allocator
using TrafficLightElement =
  tier4_perception_msgs::msg::TrafficLightElement_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TrafficLightElement_<ContainerAllocator>::RED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TrafficLightElement_<ContainerAllocator>::AMBER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TrafficLightElement_<ContainerAllocator>::GREEN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TrafficLightElement_<ContainerAllocator>::WHITE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TrafficLightElement_<ContainerAllocator>::CIRCLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TrafficLightElement_<ContainerAllocator>::LEFT_ARROW;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TrafficLightElement_<ContainerAllocator>::RIGHT_ARROW;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TrafficLightElement_<ContainerAllocator>::UP_ARROW;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TrafficLightElement_<ContainerAllocator>::UP_LEFT_ARROW;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TrafficLightElement_<ContainerAllocator>::UP_RIGHT_ARROW;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TrafficLightElement_<ContainerAllocator>::DOWN_ARROW;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TrafficLightElement_<ContainerAllocator>::DOWN_LEFT_ARROW;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TrafficLightElement_<ContainerAllocator>::DOWN_RIGHT_ARROW;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TrafficLightElement_<ContainerAllocator>::CROSS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TrafficLightElement_<ContainerAllocator>::SOLID_OFF;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TrafficLightElement_<ContainerAllocator>::SOLID_ON;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TrafficLightElement_<ContainerAllocator>::FLASHING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TrafficLightElement_<ContainerAllocator>::UNKNOWN;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace tier4_perception_msgs

#endif  // TIER4_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_LIGHT_ELEMENT__STRUCT_HPP_
