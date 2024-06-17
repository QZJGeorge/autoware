// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tier4_rtc_msgs:msg/CooperateResponse.idl
// generated code does not contain a copyright notice

#ifndef TIER4_RTC_MSGS__MSG__DETAIL__COOPERATE_RESPONSE__STRUCT_HPP_
#define TIER4_RTC_MSGS__MSG__DETAIL__COOPERATE_RESPONSE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'uuid'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'module'
#include "tier4_rtc_msgs/msg/detail/module__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tier4_rtc_msgs__msg__CooperateResponse __attribute__((deprecated))
#else
# define DEPRECATED__tier4_rtc_msgs__msg__CooperateResponse __declspec(deprecated)
#endif

namespace tier4_rtc_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CooperateResponse_
{
  using Type = CooperateResponse_<ContainerAllocator>;

  explicit CooperateResponse_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : uuid(_init),
    module(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit CooperateResponse_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : uuid(_alloc, _init),
    module(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _uuid_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _uuid_type uuid;
  using _module_type =
    tier4_rtc_msgs::msg::Module_<ContainerAllocator>;
  _module_type module;
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__uuid(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->uuid = _arg;
    return *this;
  }
  Type & set__module(
    const tier4_rtc_msgs::msg::Module_<ContainerAllocator> & _arg)
  {
    this->module = _arg;
    return *this;
  }
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tier4_rtc_msgs::msg::CooperateResponse_<ContainerAllocator> *;
  using ConstRawPtr =
    const tier4_rtc_msgs::msg::CooperateResponse_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tier4_rtc_msgs::msg::CooperateResponse_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tier4_rtc_msgs::msg::CooperateResponse_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tier4_rtc_msgs::msg::CooperateResponse_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tier4_rtc_msgs::msg::CooperateResponse_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tier4_rtc_msgs::msg::CooperateResponse_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tier4_rtc_msgs::msg::CooperateResponse_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tier4_rtc_msgs::msg::CooperateResponse_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tier4_rtc_msgs::msg::CooperateResponse_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tier4_rtc_msgs__msg__CooperateResponse
    std::shared_ptr<tier4_rtc_msgs::msg::CooperateResponse_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tier4_rtc_msgs__msg__CooperateResponse
    std::shared_ptr<tier4_rtc_msgs::msg::CooperateResponse_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CooperateResponse_ & other) const
  {
    if (this->uuid != other.uuid) {
      return false;
    }
    if (this->module != other.module) {
      return false;
    }
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const CooperateResponse_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CooperateResponse_

// alias to use template instance with default allocator
using CooperateResponse =
  tier4_rtc_msgs::msg::CooperateResponse_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tier4_rtc_msgs

#endif  // TIER4_RTC_MSGS__MSG__DETAIL__COOPERATE_RESPONSE__STRUCT_HPP_
