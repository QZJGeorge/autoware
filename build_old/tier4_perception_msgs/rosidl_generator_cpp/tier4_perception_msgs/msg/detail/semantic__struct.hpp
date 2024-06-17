// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tier4_perception_msgs:msg/Semantic.idl
// generated code does not contain a copyright notice

#ifndef TIER4_PERCEPTION_MSGS__MSG__DETAIL__SEMANTIC__STRUCT_HPP_
#define TIER4_PERCEPTION_MSGS__MSG__DETAIL__SEMANTIC__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__tier4_perception_msgs__msg__Semantic __attribute__((deprecated))
#else
# define DEPRECATED__tier4_perception_msgs__msg__Semantic __declspec(deprecated)
#endif

namespace tier4_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Semantic_
{
  using Type = Semantic_<ContainerAllocator>;

  explicit Semantic_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0ul;
      this->confidence = 0.0;
    }
  }

  explicit Semantic_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0ul;
      this->confidence = 0.0;
    }
  }

  // field types and members
  using _type_type =
    uint32_t;
  _type_type type;
  using _confidence_type =
    double;
  _confidence_type confidence;

  // setters for named parameter idiom
  Type & set__type(
    const uint32_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__confidence(
    const double & _arg)
  {
    this->confidence = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t UNKNOWN =
    0u;
  static constexpr uint8_t CAR =
    1u;
  static constexpr uint8_t TRUCK =
    2u;
  static constexpr uint8_t BUS =
    3u;
  static constexpr uint8_t BICYCLE =
    4u;
  static constexpr uint8_t MOTORBIKE =
    5u;
  static constexpr uint8_t PEDESTRIAN =
    6u;
  static constexpr uint8_t ANIMAL =
    7u;

  // pointer types
  using RawPtr =
    tier4_perception_msgs::msg::Semantic_<ContainerAllocator> *;
  using ConstRawPtr =
    const tier4_perception_msgs::msg::Semantic_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tier4_perception_msgs::msg::Semantic_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tier4_perception_msgs::msg::Semantic_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tier4_perception_msgs::msg::Semantic_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tier4_perception_msgs::msg::Semantic_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tier4_perception_msgs::msg::Semantic_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tier4_perception_msgs::msg::Semantic_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tier4_perception_msgs::msg::Semantic_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tier4_perception_msgs::msg::Semantic_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tier4_perception_msgs__msg__Semantic
    std::shared_ptr<tier4_perception_msgs::msg::Semantic_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tier4_perception_msgs__msg__Semantic
    std::shared_ptr<tier4_perception_msgs::msg::Semantic_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Semantic_ & other) const
  {
    if (this->type != other.type) {
      return false;
    }
    if (this->confidence != other.confidence) {
      return false;
    }
    return true;
  }
  bool operator!=(const Semantic_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Semantic_

// alias to use template instance with default allocator
using Semantic =
  tier4_perception_msgs::msg::Semantic_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Semantic_<ContainerAllocator>::UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Semantic_<ContainerAllocator>::CAR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Semantic_<ContainerAllocator>::TRUCK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Semantic_<ContainerAllocator>::BUS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Semantic_<ContainerAllocator>::BICYCLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Semantic_<ContainerAllocator>::MOTORBIKE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Semantic_<ContainerAllocator>::PEDESTRIAN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Semantic_<ContainerAllocator>::ANIMAL;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace tier4_perception_msgs

#endif  // TIER4_PERCEPTION_MSGS__MSG__DETAIL__SEMANTIC__STRUCT_HPP_
