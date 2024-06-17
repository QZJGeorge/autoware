// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tier4_rtc_msgs:srv/AutoModeWithModule.idl
// generated code does not contain a copyright notice

#ifndef TIER4_RTC_MSGS__SRV__DETAIL__AUTO_MODE_WITH_MODULE__STRUCT_HPP_
#define TIER4_RTC_MSGS__SRV__DETAIL__AUTO_MODE_WITH_MODULE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'module'
#include "tier4_rtc_msgs/msg/detail/module__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tier4_rtc_msgs__srv__AutoModeWithModule_Request __attribute__((deprecated))
#else
# define DEPRECATED__tier4_rtc_msgs__srv__AutoModeWithModule_Request __declspec(deprecated)
#endif

namespace tier4_rtc_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct AutoModeWithModule_Request_
{
  using Type = AutoModeWithModule_Request_<ContainerAllocator>;

  explicit AutoModeWithModule_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : module(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->enable = false;
    }
  }

  explicit AutoModeWithModule_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : module(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->enable = false;
    }
  }

  // field types and members
  using _module_type =
    tier4_rtc_msgs::msg::Module_<ContainerAllocator>;
  _module_type module;
  using _enable_type =
    bool;
  _enable_type enable;

  // setters for named parameter idiom
  Type & set__module(
    const tier4_rtc_msgs::msg::Module_<ContainerAllocator> & _arg)
  {
    this->module = _arg;
    return *this;
  }
  Type & set__enable(
    const bool & _arg)
  {
    this->enable = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tier4_rtc_msgs::srv::AutoModeWithModule_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const tier4_rtc_msgs::srv::AutoModeWithModule_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tier4_rtc_msgs::srv::AutoModeWithModule_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tier4_rtc_msgs::srv::AutoModeWithModule_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tier4_rtc_msgs::srv::AutoModeWithModule_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tier4_rtc_msgs::srv::AutoModeWithModule_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tier4_rtc_msgs::srv::AutoModeWithModule_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tier4_rtc_msgs::srv::AutoModeWithModule_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tier4_rtc_msgs::srv::AutoModeWithModule_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tier4_rtc_msgs::srv::AutoModeWithModule_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tier4_rtc_msgs__srv__AutoModeWithModule_Request
    std::shared_ptr<tier4_rtc_msgs::srv::AutoModeWithModule_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tier4_rtc_msgs__srv__AutoModeWithModule_Request
    std::shared_ptr<tier4_rtc_msgs::srv::AutoModeWithModule_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AutoModeWithModule_Request_ & other) const
  {
    if (this->module != other.module) {
      return false;
    }
    if (this->enable != other.enable) {
      return false;
    }
    return true;
  }
  bool operator!=(const AutoModeWithModule_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AutoModeWithModule_Request_

// alias to use template instance with default allocator
using AutoModeWithModule_Request =
  tier4_rtc_msgs::srv::AutoModeWithModule_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tier4_rtc_msgs


#ifndef _WIN32
# define DEPRECATED__tier4_rtc_msgs__srv__AutoModeWithModule_Response __attribute__((deprecated))
#else
# define DEPRECATED__tier4_rtc_msgs__srv__AutoModeWithModule_Response __declspec(deprecated)
#endif

namespace tier4_rtc_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct AutoModeWithModule_Response_
{
  using Type = AutoModeWithModule_Response_<ContainerAllocator>;

  explicit AutoModeWithModule_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit AutoModeWithModule_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tier4_rtc_msgs::srv::AutoModeWithModule_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const tier4_rtc_msgs::srv::AutoModeWithModule_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tier4_rtc_msgs::srv::AutoModeWithModule_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tier4_rtc_msgs::srv::AutoModeWithModule_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tier4_rtc_msgs::srv::AutoModeWithModule_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tier4_rtc_msgs::srv::AutoModeWithModule_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tier4_rtc_msgs::srv::AutoModeWithModule_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tier4_rtc_msgs::srv::AutoModeWithModule_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tier4_rtc_msgs::srv::AutoModeWithModule_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tier4_rtc_msgs::srv::AutoModeWithModule_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tier4_rtc_msgs__srv__AutoModeWithModule_Response
    std::shared_ptr<tier4_rtc_msgs::srv::AutoModeWithModule_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tier4_rtc_msgs__srv__AutoModeWithModule_Response
    std::shared_ptr<tier4_rtc_msgs::srv::AutoModeWithModule_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AutoModeWithModule_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const AutoModeWithModule_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AutoModeWithModule_Response_

// alias to use template instance with default allocator
using AutoModeWithModule_Response =
  tier4_rtc_msgs::srv::AutoModeWithModule_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tier4_rtc_msgs

namespace tier4_rtc_msgs
{

namespace srv
{

struct AutoModeWithModule
{
  using Request = tier4_rtc_msgs::srv::AutoModeWithModule_Request;
  using Response = tier4_rtc_msgs::srv::AutoModeWithModule_Response;
};

}  // namespace srv

}  // namespace tier4_rtc_msgs

#endif  // TIER4_RTC_MSGS__SRV__DETAIL__AUTO_MODE_WITH_MODULE__STRUCT_HPP_
