// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tier4_system_msgs:srv/ChangeAutowareControl.idl
// generated code does not contain a copyright notice

#ifndef TIER4_SYSTEM_MSGS__SRV__DETAIL__CHANGE_AUTOWARE_CONTROL__STRUCT_HPP_
#define TIER4_SYSTEM_MSGS__SRV__DETAIL__CHANGE_AUTOWARE_CONTROL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__tier4_system_msgs__srv__ChangeAutowareControl_Request __attribute__((deprecated))
#else
# define DEPRECATED__tier4_system_msgs__srv__ChangeAutowareControl_Request __declspec(deprecated)
#endif

namespace tier4_system_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ChangeAutowareControl_Request_
{
  using Type = ChangeAutowareControl_Request_<ContainerAllocator>;

  explicit ChangeAutowareControl_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->autoware_control = false;
    }
  }

  explicit ChangeAutowareControl_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->autoware_control = false;
    }
  }

  // field types and members
  using _autoware_control_type =
    bool;
  _autoware_control_type autoware_control;

  // setters for named parameter idiom
  Type & set__autoware_control(
    const bool & _arg)
  {
    this->autoware_control = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tier4_system_msgs::srv::ChangeAutowareControl_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const tier4_system_msgs::srv::ChangeAutowareControl_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tier4_system_msgs::srv::ChangeAutowareControl_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tier4_system_msgs::srv::ChangeAutowareControl_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tier4_system_msgs::srv::ChangeAutowareControl_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tier4_system_msgs::srv::ChangeAutowareControl_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tier4_system_msgs::srv::ChangeAutowareControl_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tier4_system_msgs::srv::ChangeAutowareControl_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tier4_system_msgs::srv::ChangeAutowareControl_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tier4_system_msgs::srv::ChangeAutowareControl_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tier4_system_msgs__srv__ChangeAutowareControl_Request
    std::shared_ptr<tier4_system_msgs::srv::ChangeAutowareControl_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tier4_system_msgs__srv__ChangeAutowareControl_Request
    std::shared_ptr<tier4_system_msgs::srv::ChangeAutowareControl_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ChangeAutowareControl_Request_ & other) const
  {
    if (this->autoware_control != other.autoware_control) {
      return false;
    }
    return true;
  }
  bool operator!=(const ChangeAutowareControl_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ChangeAutowareControl_Request_

// alias to use template instance with default allocator
using ChangeAutowareControl_Request =
  tier4_system_msgs::srv::ChangeAutowareControl_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tier4_system_msgs


// Include directives for member types
// Member 'status'
#include "autoware_common_msgs/msg/detail/response_status__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tier4_system_msgs__srv__ChangeAutowareControl_Response __attribute__((deprecated))
#else
# define DEPRECATED__tier4_system_msgs__srv__ChangeAutowareControl_Response __declspec(deprecated)
#endif

namespace tier4_system_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ChangeAutowareControl_Response_
{
  using Type = ChangeAutowareControl_Response_<ContainerAllocator>;

  explicit ChangeAutowareControl_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : status(_init)
  {
    (void)_init;
  }

  explicit ChangeAutowareControl_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : status(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _status_type =
    autoware_common_msgs::msg::ResponseStatus_<ContainerAllocator>;
  _status_type status;

  // setters for named parameter idiom
  Type & set__status(
    const autoware_common_msgs::msg::ResponseStatus_<ContainerAllocator> & _arg)
  {
    this->status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tier4_system_msgs::srv::ChangeAutowareControl_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const tier4_system_msgs::srv::ChangeAutowareControl_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tier4_system_msgs::srv::ChangeAutowareControl_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tier4_system_msgs::srv::ChangeAutowareControl_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tier4_system_msgs::srv::ChangeAutowareControl_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tier4_system_msgs::srv::ChangeAutowareControl_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tier4_system_msgs::srv::ChangeAutowareControl_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tier4_system_msgs::srv::ChangeAutowareControl_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tier4_system_msgs::srv::ChangeAutowareControl_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tier4_system_msgs::srv::ChangeAutowareControl_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tier4_system_msgs__srv__ChangeAutowareControl_Response
    std::shared_ptr<tier4_system_msgs::srv::ChangeAutowareControl_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tier4_system_msgs__srv__ChangeAutowareControl_Response
    std::shared_ptr<tier4_system_msgs::srv::ChangeAutowareControl_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ChangeAutowareControl_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const ChangeAutowareControl_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ChangeAutowareControl_Response_

// alias to use template instance with default allocator
using ChangeAutowareControl_Response =
  tier4_system_msgs::srv::ChangeAutowareControl_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tier4_system_msgs

namespace tier4_system_msgs
{

namespace srv
{

struct ChangeAutowareControl
{
  using Request = tier4_system_msgs::srv::ChangeAutowareControl_Request;
  using Response = tier4_system_msgs::srv::ChangeAutowareControl_Response;
};

}  // namespace srv

}  // namespace tier4_system_msgs

#endif  // TIER4_SYSTEM_MSGS__SRV__DETAIL__CHANGE_AUTOWARE_CONTROL__STRUCT_HPP_
