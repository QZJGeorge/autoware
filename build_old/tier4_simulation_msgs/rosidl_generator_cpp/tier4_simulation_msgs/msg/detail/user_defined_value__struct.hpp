// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tier4_simulation_msgs:msg/UserDefinedValue.idl
// generated code does not contain a copyright notice

#ifndef TIER4_SIMULATION_MSGS__MSG__DETAIL__USER_DEFINED_VALUE__STRUCT_HPP_
#define TIER4_SIMULATION_MSGS__MSG__DETAIL__USER_DEFINED_VALUE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'type'
#include "tier4_simulation_msgs/msg/detail/user_defined_value_type__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tier4_simulation_msgs__msg__UserDefinedValue __attribute__((deprecated))
#else
# define DEPRECATED__tier4_simulation_msgs__msg__UserDefinedValue __declspec(deprecated)
#endif

namespace tier4_simulation_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct UserDefinedValue_
{
  using Type = UserDefinedValue_<ContainerAllocator>;

  explicit UserDefinedValue_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : type(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->value = "";
    }
  }

  explicit UserDefinedValue_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : type(_alloc, _init),
    value(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->value = "";
    }
  }

  // field types and members
  using _type_type =
    tier4_simulation_msgs::msg::UserDefinedValueType_<ContainerAllocator>;
  _type_type type;
  using _value_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _value_type value;

  // setters for named parameter idiom
  Type & set__type(
    const tier4_simulation_msgs::msg::UserDefinedValueType_<ContainerAllocator> & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__value(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->value = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tier4_simulation_msgs::msg::UserDefinedValue_<ContainerAllocator> *;
  using ConstRawPtr =
    const tier4_simulation_msgs::msg::UserDefinedValue_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tier4_simulation_msgs::msg::UserDefinedValue_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tier4_simulation_msgs::msg::UserDefinedValue_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tier4_simulation_msgs::msg::UserDefinedValue_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tier4_simulation_msgs::msg::UserDefinedValue_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tier4_simulation_msgs::msg::UserDefinedValue_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tier4_simulation_msgs::msg::UserDefinedValue_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tier4_simulation_msgs::msg::UserDefinedValue_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tier4_simulation_msgs::msg::UserDefinedValue_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tier4_simulation_msgs__msg__UserDefinedValue
    std::shared_ptr<tier4_simulation_msgs::msg::UserDefinedValue_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tier4_simulation_msgs__msg__UserDefinedValue
    std::shared_ptr<tier4_simulation_msgs::msg::UserDefinedValue_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UserDefinedValue_ & other) const
  {
    if (this->type != other.type) {
      return false;
    }
    if (this->value != other.value) {
      return false;
    }
    return true;
  }
  bool operator!=(const UserDefinedValue_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UserDefinedValue_

// alias to use template instance with default allocator
using UserDefinedValue =
  tier4_simulation_msgs::msg::UserDefinedValue_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tier4_simulation_msgs

#endif  // TIER4_SIMULATION_MSGS__MSG__DETAIL__USER_DEFINED_VALUE__STRUCT_HPP_
