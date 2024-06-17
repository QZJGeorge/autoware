// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tier4_control_msgs:srv/SetStop.idl
// generated code does not contain a copyright notice

#ifndef TIER4_CONTROL_MSGS__SRV__DETAIL__SET_STOP__STRUCT_HPP_
#define TIER4_CONTROL_MSGS__SRV__DETAIL__SET_STOP__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__tier4_control_msgs__srv__SetStop_Request __attribute__((deprecated))
#else
# define DEPRECATED__tier4_control_msgs__srv__SetStop_Request __declspec(deprecated)
#endif

namespace tier4_control_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetStop_Request_
{
  using Type = SetStop_Request_<ContainerAllocator>;

  explicit SetStop_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->stop = false;
      this->request_source = "";
    }
  }

  explicit SetStop_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : request_source(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->stop = false;
      this->request_source = "";
    }
  }

  // field types and members
  using _stop_type =
    bool;
  _stop_type stop;
  using _request_source_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _request_source_type request_source;

  // setters for named parameter idiom
  Type & set__stop(
    const bool & _arg)
  {
    this->stop = _arg;
    return *this;
  }
  Type & set__request_source(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->request_source = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tier4_control_msgs::srv::SetStop_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const tier4_control_msgs::srv::SetStop_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tier4_control_msgs::srv::SetStop_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tier4_control_msgs::srv::SetStop_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tier4_control_msgs::srv::SetStop_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tier4_control_msgs::srv::SetStop_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tier4_control_msgs::srv::SetStop_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tier4_control_msgs::srv::SetStop_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tier4_control_msgs::srv::SetStop_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tier4_control_msgs::srv::SetStop_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tier4_control_msgs__srv__SetStop_Request
    std::shared_ptr<tier4_control_msgs::srv::SetStop_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tier4_control_msgs__srv__SetStop_Request
    std::shared_ptr<tier4_control_msgs::srv::SetStop_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetStop_Request_ & other) const
  {
    if (this->stop != other.stop) {
      return false;
    }
    if (this->request_source != other.request_source) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetStop_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetStop_Request_

// alias to use template instance with default allocator
using SetStop_Request =
  tier4_control_msgs::srv::SetStop_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tier4_control_msgs


// Include directives for member types
// Member 'status'
#include "autoware_common_msgs/msg/detail/response_status__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tier4_control_msgs__srv__SetStop_Response __attribute__((deprecated))
#else
# define DEPRECATED__tier4_control_msgs__srv__SetStop_Response __declspec(deprecated)
#endif

namespace tier4_control_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetStop_Response_
{
  using Type = SetStop_Response_<ContainerAllocator>;

  explicit SetStop_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : status(_init)
  {
    (void)_init;
  }

  explicit SetStop_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    tier4_control_msgs::srv::SetStop_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const tier4_control_msgs::srv::SetStop_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tier4_control_msgs::srv::SetStop_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tier4_control_msgs::srv::SetStop_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tier4_control_msgs::srv::SetStop_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tier4_control_msgs::srv::SetStop_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tier4_control_msgs::srv::SetStop_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tier4_control_msgs::srv::SetStop_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tier4_control_msgs::srv::SetStop_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tier4_control_msgs::srv::SetStop_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tier4_control_msgs__srv__SetStop_Response
    std::shared_ptr<tier4_control_msgs::srv::SetStop_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tier4_control_msgs__srv__SetStop_Response
    std::shared_ptr<tier4_control_msgs::srv::SetStop_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetStop_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetStop_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetStop_Response_

// alias to use template instance with default allocator
using SetStop_Response =
  tier4_control_msgs::srv::SetStop_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tier4_control_msgs

namespace tier4_control_msgs
{

namespace srv
{

struct SetStop
{
  using Request = tier4_control_msgs::srv::SetStop_Request;
  using Response = tier4_control_msgs::srv::SetStop_Response;
};

}  // namespace srv

}  // namespace tier4_control_msgs

#endif  // TIER4_CONTROL_MSGS__SRV__DETAIL__SET_STOP__STRUCT_HPP_
