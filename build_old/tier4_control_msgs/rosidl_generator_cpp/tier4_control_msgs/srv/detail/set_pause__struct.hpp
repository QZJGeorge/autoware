// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tier4_control_msgs:srv/SetPause.idl
// generated code does not contain a copyright notice

#ifndef TIER4_CONTROL_MSGS__SRV__DETAIL__SET_PAUSE__STRUCT_HPP_
#define TIER4_CONTROL_MSGS__SRV__DETAIL__SET_PAUSE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__tier4_control_msgs__srv__SetPause_Request __attribute__((deprecated))
#else
# define DEPRECATED__tier4_control_msgs__srv__SetPause_Request __declspec(deprecated)
#endif

namespace tier4_control_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetPause_Request_
{
  using Type = SetPause_Request_<ContainerAllocator>;

  explicit SetPause_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pause = false;
    }
  }

  explicit SetPause_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pause = false;
    }
  }

  // field types and members
  using _pause_type =
    bool;
  _pause_type pause;

  // setters for named parameter idiom
  Type & set__pause(
    const bool & _arg)
  {
    this->pause = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tier4_control_msgs::srv::SetPause_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const tier4_control_msgs::srv::SetPause_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tier4_control_msgs::srv::SetPause_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tier4_control_msgs::srv::SetPause_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tier4_control_msgs::srv::SetPause_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tier4_control_msgs::srv::SetPause_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tier4_control_msgs::srv::SetPause_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tier4_control_msgs::srv::SetPause_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tier4_control_msgs::srv::SetPause_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tier4_control_msgs::srv::SetPause_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tier4_control_msgs__srv__SetPause_Request
    std::shared_ptr<tier4_control_msgs::srv::SetPause_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tier4_control_msgs__srv__SetPause_Request
    std::shared_ptr<tier4_control_msgs::srv::SetPause_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetPause_Request_ & other) const
  {
    if (this->pause != other.pause) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetPause_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetPause_Request_

// alias to use template instance with default allocator
using SetPause_Request =
  tier4_control_msgs::srv::SetPause_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tier4_control_msgs


// Include directives for member types
// Member 'status'
#include "autoware_common_msgs/msg/detail/response_status__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tier4_control_msgs__srv__SetPause_Response __attribute__((deprecated))
#else
# define DEPRECATED__tier4_control_msgs__srv__SetPause_Response __declspec(deprecated)
#endif

namespace tier4_control_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetPause_Response_
{
  using Type = SetPause_Response_<ContainerAllocator>;

  explicit SetPause_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : status(_init)
  {
    (void)_init;
  }

  explicit SetPause_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    tier4_control_msgs::srv::SetPause_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const tier4_control_msgs::srv::SetPause_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tier4_control_msgs::srv::SetPause_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tier4_control_msgs::srv::SetPause_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tier4_control_msgs::srv::SetPause_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tier4_control_msgs::srv::SetPause_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tier4_control_msgs::srv::SetPause_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tier4_control_msgs::srv::SetPause_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tier4_control_msgs::srv::SetPause_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tier4_control_msgs::srv::SetPause_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tier4_control_msgs__srv__SetPause_Response
    std::shared_ptr<tier4_control_msgs::srv::SetPause_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tier4_control_msgs__srv__SetPause_Response
    std::shared_ptr<tier4_control_msgs::srv::SetPause_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetPause_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetPause_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetPause_Response_

// alias to use template instance with default allocator
using SetPause_Response =
  tier4_control_msgs::srv::SetPause_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tier4_control_msgs

namespace tier4_control_msgs
{

namespace srv
{

struct SetPause
{
  using Request = tier4_control_msgs::srv::SetPause_Request;
  using Response = tier4_control_msgs::srv::SetPause_Response;
};

}  // namespace srv

}  // namespace tier4_control_msgs

#endif  // TIER4_CONTROL_MSGS__SRV__DETAIL__SET_PAUSE__STRUCT_HPP_
