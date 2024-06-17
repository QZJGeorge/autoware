// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tier4_system_msgs:msg/ServiceLog.idl
// generated code does not contain a copyright notice

#ifndef TIER4_SYSTEM_MSGS__MSG__DETAIL__SERVICE_LOG__STRUCT_HPP_
#define TIER4_SYSTEM_MSGS__MSG__DETAIL__SERVICE_LOG__STRUCT_HPP_

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

#ifndef _WIN32
# define DEPRECATED__tier4_system_msgs__msg__ServiceLog __attribute__((deprecated))
#else
# define DEPRECATED__tier4_system_msgs__msg__ServiceLog __declspec(deprecated)
#endif

namespace tier4_system_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ServiceLog_
{
  using Type = ServiceLog_<ContainerAllocator>;

  explicit ServiceLog_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0;
      this->name = "";
      this->node = "";
      this->yaml = "";
    }
  }

  explicit ServiceLog_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init),
    name(_alloc),
    node(_alloc),
    yaml(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0;
      this->name = "";
      this->node = "";
      this->yaml = "";
    }
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _type_type =
    uint8_t;
  _type_type type;
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _node_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _node_type node;
  using _yaml_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _yaml_type yaml;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__type(
    const uint8_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__node(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->node = _arg;
    return *this;
  }
  Type & set__yaml(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->yaml = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t CLIENT_REQUEST =
    1u;
  static constexpr uint8_t SERVER_REQUEST =
    2u;
  static constexpr uint8_t SERVER_RESPONSE =
    3u;
  static constexpr uint8_t CLIENT_RESPONSE =
    4u;
  static constexpr uint8_t ERROR_UNREADY =
    5u;
  static constexpr uint8_t ERROR_TIMEOUT =
    6u;

  // pointer types
  using RawPtr =
    tier4_system_msgs::msg::ServiceLog_<ContainerAllocator> *;
  using ConstRawPtr =
    const tier4_system_msgs::msg::ServiceLog_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tier4_system_msgs::msg::ServiceLog_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tier4_system_msgs::msg::ServiceLog_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tier4_system_msgs::msg::ServiceLog_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tier4_system_msgs::msg::ServiceLog_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tier4_system_msgs::msg::ServiceLog_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tier4_system_msgs::msg::ServiceLog_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tier4_system_msgs::msg::ServiceLog_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tier4_system_msgs::msg::ServiceLog_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tier4_system_msgs__msg__ServiceLog
    std::shared_ptr<tier4_system_msgs::msg::ServiceLog_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tier4_system_msgs__msg__ServiceLog
    std::shared_ptr<tier4_system_msgs::msg::ServiceLog_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ServiceLog_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->name != other.name) {
      return false;
    }
    if (this->node != other.node) {
      return false;
    }
    if (this->yaml != other.yaml) {
      return false;
    }
    return true;
  }
  bool operator!=(const ServiceLog_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ServiceLog_

// alias to use template instance with default allocator
using ServiceLog =
  tier4_system_msgs::msg::ServiceLog_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ServiceLog_<ContainerAllocator>::CLIENT_REQUEST;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ServiceLog_<ContainerAllocator>::SERVER_REQUEST;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ServiceLog_<ContainerAllocator>::SERVER_RESPONSE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ServiceLog_<ContainerAllocator>::CLIENT_RESPONSE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ServiceLog_<ContainerAllocator>::ERROR_UNREADY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ServiceLog_<ContainerAllocator>::ERROR_TIMEOUT;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace tier4_system_msgs

#endif  // TIER4_SYSTEM_MSGS__MSG__DETAIL__SERVICE_LOG__STRUCT_HPP_
