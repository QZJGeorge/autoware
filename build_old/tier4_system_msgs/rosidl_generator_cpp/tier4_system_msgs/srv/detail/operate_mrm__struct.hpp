// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tier4_system_msgs:srv/OperateMrm.idl
// generated code does not contain a copyright notice

#ifndef TIER4_SYSTEM_MSGS__SRV__DETAIL__OPERATE_MRM__STRUCT_HPP_
#define TIER4_SYSTEM_MSGS__SRV__DETAIL__OPERATE_MRM__STRUCT_HPP_

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
# define DEPRECATED__tier4_system_msgs__srv__OperateMrm_Request __attribute__((deprecated))
#else
# define DEPRECATED__tier4_system_msgs__srv__OperateMrm_Request __declspec(deprecated)
#endif

namespace tier4_system_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct OperateMrm_Request_
{
  using Type = OperateMrm_Request_<ContainerAllocator>;

  explicit OperateMrm_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->operate = false;
    }
  }

  explicit OperateMrm_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->operate = false;
    }
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _operate_type =
    bool;
  _operate_type operate;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__operate(
    const bool & _arg)
  {
    this->operate = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tier4_system_msgs::srv::OperateMrm_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const tier4_system_msgs::srv::OperateMrm_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tier4_system_msgs::srv::OperateMrm_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tier4_system_msgs::srv::OperateMrm_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tier4_system_msgs::srv::OperateMrm_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tier4_system_msgs::srv::OperateMrm_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tier4_system_msgs::srv::OperateMrm_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tier4_system_msgs::srv::OperateMrm_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tier4_system_msgs::srv::OperateMrm_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tier4_system_msgs::srv::OperateMrm_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tier4_system_msgs__srv__OperateMrm_Request
    std::shared_ptr<tier4_system_msgs::srv::OperateMrm_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tier4_system_msgs__srv__OperateMrm_Request
    std::shared_ptr<tier4_system_msgs::srv::OperateMrm_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OperateMrm_Request_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->operate != other.operate) {
      return false;
    }
    return true;
  }
  bool operator!=(const OperateMrm_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OperateMrm_Request_

// alias to use template instance with default allocator
using OperateMrm_Request =
  tier4_system_msgs::srv::OperateMrm_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tier4_system_msgs


// Include directives for member types
// Member 'response'
#include "autoware_common_msgs/msg/detail/response_status__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tier4_system_msgs__srv__OperateMrm_Response __attribute__((deprecated))
#else
# define DEPRECATED__tier4_system_msgs__srv__OperateMrm_Response __declspec(deprecated)
#endif

namespace tier4_system_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct OperateMrm_Response_
{
  using Type = OperateMrm_Response_<ContainerAllocator>;

  explicit OperateMrm_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : response(_init)
  {
    (void)_init;
  }

  explicit OperateMrm_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : response(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _response_type =
    autoware_common_msgs::msg::ResponseStatus_<ContainerAllocator>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__response(
    const autoware_common_msgs::msg::ResponseStatus_<ContainerAllocator> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tier4_system_msgs::srv::OperateMrm_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const tier4_system_msgs::srv::OperateMrm_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tier4_system_msgs::srv::OperateMrm_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tier4_system_msgs::srv::OperateMrm_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tier4_system_msgs::srv::OperateMrm_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tier4_system_msgs::srv::OperateMrm_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tier4_system_msgs::srv::OperateMrm_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tier4_system_msgs::srv::OperateMrm_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tier4_system_msgs::srv::OperateMrm_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tier4_system_msgs::srv::OperateMrm_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tier4_system_msgs__srv__OperateMrm_Response
    std::shared_ptr<tier4_system_msgs::srv::OperateMrm_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tier4_system_msgs__srv__OperateMrm_Response
    std::shared_ptr<tier4_system_msgs::srv::OperateMrm_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OperateMrm_Response_ & other) const
  {
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const OperateMrm_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OperateMrm_Response_

// alias to use template instance with default allocator
using OperateMrm_Response =
  tier4_system_msgs::srv::OperateMrm_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tier4_system_msgs

namespace tier4_system_msgs
{

namespace srv
{

struct OperateMrm
{
  using Request = tier4_system_msgs::srv::OperateMrm_Request;
  using Response = tier4_system_msgs::srv::OperateMrm_Response;
};

}  // namespace srv

}  // namespace tier4_system_msgs

#endif  // TIER4_SYSTEM_MSGS__SRV__DETAIL__OPERATE_MRM__STRUCT_HPP_
