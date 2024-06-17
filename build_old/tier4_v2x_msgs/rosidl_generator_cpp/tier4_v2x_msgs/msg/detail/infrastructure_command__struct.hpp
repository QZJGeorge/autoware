// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tier4_v2x_msgs:msg/InfrastructureCommand.idl
// generated code does not contain a copyright notice

#ifndef TIER4_V2X_MSGS__MSG__DETAIL__INFRASTRUCTURE_COMMAND__STRUCT_HPP_
#define TIER4_V2X_MSGS__MSG__DETAIL__INFRASTRUCTURE_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"
// Member 'custom_tags'
#include "tier4_v2x_msgs/msg/detail/key_value__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tier4_v2x_msgs__msg__InfrastructureCommand __attribute__((deprecated))
#else
# define DEPRECATED__tier4_v2x_msgs__msg__InfrastructureCommand __declspec(deprecated)
#endif

namespace tier4_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct InfrastructureCommand_
{
  using Type = InfrastructureCommand_<ContainerAllocator>;

  explicit InfrastructureCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = "";
      this->id = "";
      this->state = 0;
    }
  }

  explicit InfrastructureCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init),
    type(_alloc),
    id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = "";
      this->id = "";
      this->state = 0;
    }
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _type_type type;
  using _id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _id_type id;
  using _custom_tags_type =
    std::vector<tier4_v2x_msgs::msg::KeyValue_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<tier4_v2x_msgs::msg::KeyValue_<ContainerAllocator>>>;
  _custom_tags_type custom_tags;
  using _state_type =
    uint8_t;
  _state_type state;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__custom_tags(
    const std::vector<tier4_v2x_msgs::msg::KeyValue_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<tier4_v2x_msgs::msg::KeyValue_<ContainerAllocator>>> & _arg)
  {
    this->custom_tags = _arg;
    return *this;
  }
  Type & set__state(
    const uint8_t & _arg)
  {
    this->state = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t NONE =
    0u;
  static constexpr uint8_t REQUESTING =
    1u;
  static constexpr uint8_t PASSING =
    2u;
  static constexpr uint8_t FINALIZING =
    3u;
  static constexpr uint8_t FINALIZED =
    4u;

  // pointer types
  using RawPtr =
    tier4_v2x_msgs::msg::InfrastructureCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const tier4_v2x_msgs::msg::InfrastructureCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tier4_v2x_msgs::msg::InfrastructureCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tier4_v2x_msgs::msg::InfrastructureCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tier4_v2x_msgs::msg::InfrastructureCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tier4_v2x_msgs::msg::InfrastructureCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tier4_v2x_msgs::msg::InfrastructureCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tier4_v2x_msgs::msg::InfrastructureCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tier4_v2x_msgs::msg::InfrastructureCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tier4_v2x_msgs::msg::InfrastructureCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tier4_v2x_msgs__msg__InfrastructureCommand
    std::shared_ptr<tier4_v2x_msgs::msg::InfrastructureCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tier4_v2x_msgs__msg__InfrastructureCommand
    std::shared_ptr<tier4_v2x_msgs::msg::InfrastructureCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const InfrastructureCommand_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->custom_tags != other.custom_tags) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    return true;
  }
  bool operator!=(const InfrastructureCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct InfrastructureCommand_

// alias to use template instance with default allocator
using InfrastructureCommand =
  tier4_v2x_msgs::msg::InfrastructureCommand_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t InfrastructureCommand_<ContainerAllocator>::NONE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t InfrastructureCommand_<ContainerAllocator>::REQUESTING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t InfrastructureCommand_<ContainerAllocator>::PASSING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t InfrastructureCommand_<ContainerAllocator>::FINALIZING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t InfrastructureCommand_<ContainerAllocator>::FINALIZED;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace tier4_v2x_msgs

#endif  // TIER4_V2X_MSGS__MSG__DETAIL__INFRASTRUCTURE_COMMAND__STRUCT_HPP_
