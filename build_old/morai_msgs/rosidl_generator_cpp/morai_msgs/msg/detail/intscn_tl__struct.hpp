// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from morai_msgs:msg/IntscnTL.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__INTSCN_TL__STRUCT_HPP_
#define MORAI_MSGS__MSG__DETAIL__INTSCN_TL__STRUCT_HPP_

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
# define DEPRECATED__morai_msgs__msg__IntscnTL __attribute__((deprecated))
#else
# define DEPRECATED__morai_msgs__msg__IntscnTL __declspec(deprecated)
#endif

namespace morai_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct IntscnTL_
{
  using Type = IntscnTL_<ContainerAllocator>;

  explicit IntscnTL_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit IntscnTL_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _idx_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _idx_type idx;
  using _state_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _state_type state;
  using _delta_time_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _delta_time_type delta_time;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__idx(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->idx = _arg;
    return *this;
  }
  Type & set__state(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->state = _arg;
    return *this;
  }
  Type & set__delta_time(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->delta_time = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    morai_msgs::msg::IntscnTL_<ContainerAllocator> *;
  using ConstRawPtr =
    const morai_msgs::msg::IntscnTL_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<morai_msgs::msg::IntscnTL_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<morai_msgs::msg::IntscnTL_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      morai_msgs::msg::IntscnTL_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<morai_msgs::msg::IntscnTL_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      morai_msgs::msg::IntscnTL_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<morai_msgs::msg::IntscnTL_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<morai_msgs::msg::IntscnTL_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<morai_msgs::msg::IntscnTL_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__morai_msgs__msg__IntscnTL
    std::shared_ptr<morai_msgs::msg::IntscnTL_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__morai_msgs__msg__IntscnTL
    std::shared_ptr<morai_msgs::msg::IntscnTL_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IntscnTL_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->idx != other.idx) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    if (this->delta_time != other.delta_time) {
      return false;
    }
    return true;
  }
  bool operator!=(const IntscnTL_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IntscnTL_

// alias to use template instance with default allocator
using IntscnTL =
  morai_msgs::msg::IntscnTL_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace morai_msgs

#endif  // MORAI_MSGS__MSG__DETAIL__INTSCN_TL__STRUCT_HPP_
