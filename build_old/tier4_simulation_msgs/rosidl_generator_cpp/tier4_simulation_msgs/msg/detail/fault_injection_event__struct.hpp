// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tier4_simulation_msgs:msg/FaultInjectionEvent.idl
// generated code does not contain a copyright notice

#ifndef TIER4_SIMULATION_MSGS__MSG__DETAIL__FAULT_INJECTION_EVENT__STRUCT_HPP_
#define TIER4_SIMULATION_MSGS__MSG__DETAIL__FAULT_INJECTION_EVENT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__tier4_simulation_msgs__msg__FaultInjectionEvent __attribute__((deprecated))
#else
# define DEPRECATED__tier4_simulation_msgs__msg__FaultInjectionEvent __declspec(deprecated)
#endif

namespace tier4_simulation_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FaultInjectionEvent_
{
  using Type = FaultInjectionEvent_<ContainerAllocator>;

  explicit FaultInjectionEvent_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->level = 0;
      this->name = "";
    }
  }

  explicit FaultInjectionEvent_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->level = 0;
      this->name = "";
    }
  }

  // field types and members
  using _level_type =
    int8_t;
  _level_type level;
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;

  // setters for named parameter idiom
  Type & set__level(
    const int8_t & _arg)
  {
    this->level = _arg;
    return *this;
  }
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t OK =
    0;
  static constexpr int8_t WARN =
    1;
  // guard against 'ERROR' being predefined by MSVC by temporarily undefining it
#if defined(_WIN32)
#  if defined(ERROR)
#    pragma push_macro("ERROR")
#    undef ERROR
#  endif
#endif
  static constexpr int8_t ERROR =
    2;
#if defined(_WIN32)
#  pragma warning(suppress : 4602)
#  pragma pop_macro("ERROR")
#endif
  static constexpr int8_t STALE =
    3;

  // pointer types
  using RawPtr =
    tier4_simulation_msgs::msg::FaultInjectionEvent_<ContainerAllocator> *;
  using ConstRawPtr =
    const tier4_simulation_msgs::msg::FaultInjectionEvent_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tier4_simulation_msgs::msg::FaultInjectionEvent_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tier4_simulation_msgs::msg::FaultInjectionEvent_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tier4_simulation_msgs::msg::FaultInjectionEvent_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tier4_simulation_msgs::msg::FaultInjectionEvent_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tier4_simulation_msgs::msg::FaultInjectionEvent_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tier4_simulation_msgs::msg::FaultInjectionEvent_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tier4_simulation_msgs::msg::FaultInjectionEvent_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tier4_simulation_msgs::msg::FaultInjectionEvent_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tier4_simulation_msgs__msg__FaultInjectionEvent
    std::shared_ptr<tier4_simulation_msgs::msg::FaultInjectionEvent_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tier4_simulation_msgs__msg__FaultInjectionEvent
    std::shared_ptr<tier4_simulation_msgs::msg::FaultInjectionEvent_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FaultInjectionEvent_ & other) const
  {
    if (this->level != other.level) {
      return false;
    }
    if (this->name != other.name) {
      return false;
    }
    return true;
  }
  bool operator!=(const FaultInjectionEvent_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FaultInjectionEvent_

// alias to use template instance with default allocator
using FaultInjectionEvent =
  tier4_simulation_msgs::msg::FaultInjectionEvent_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t FaultInjectionEvent_<ContainerAllocator>::OK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t FaultInjectionEvent_<ContainerAllocator>::WARN;
#endif  // __cplusplus < 201703L
// guard against 'ERROR' being predefined by MSVC by temporarily undefining it
#if defined(_WIN32)
#  if defined(ERROR)
#    pragma push_macro("ERROR")
#    undef ERROR
#  endif
#endif
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t FaultInjectionEvent_<ContainerAllocator>::ERROR;
#endif  // __cplusplus < 201703L
#if defined(_WIN32)
#  pragma warning(suppress : 4602)
#  pragma pop_macro("ERROR")
#endif
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t FaultInjectionEvent_<ContainerAllocator>::STALE;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace tier4_simulation_msgs

#endif  // TIER4_SIMULATION_MSGS__MSG__DETAIL__FAULT_INJECTION_EVENT__STRUCT_HPP_
