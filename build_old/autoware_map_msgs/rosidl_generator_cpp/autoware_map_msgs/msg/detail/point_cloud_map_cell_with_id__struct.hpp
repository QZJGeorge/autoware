// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autoware_map_msgs:msg/PointCloudMapCellWithID.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_MAP_MSGS__MSG__DETAIL__POINT_CLOUD_MAP_CELL_WITH_ID__STRUCT_HPP_
#define AUTOWARE_MAP_MSGS__MSG__DETAIL__POINT_CLOUD_MAP_CELL_WITH_ID__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'pointcloud'
#include "sensor_msgs/msg/detail/point_cloud2__struct.hpp"
// Member 'metadata'
#include "autoware_map_msgs/msg/detail/point_cloud_map_cell_meta_data__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__autoware_map_msgs__msg__PointCloudMapCellWithID __attribute__((deprecated))
#else
# define DEPRECATED__autoware_map_msgs__msg__PointCloudMapCellWithID __declspec(deprecated)
#endif

namespace autoware_map_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PointCloudMapCellWithID_
{
  using Type = PointCloudMapCellWithID_<ContainerAllocator>;

  explicit PointCloudMapCellWithID_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pointcloud(_init),
    metadata(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cell_id = "";
    }
  }

  explicit PointCloudMapCellWithID_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : cell_id(_alloc),
    pointcloud(_alloc, _init),
    metadata(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cell_id = "";
    }
  }

  // field types and members
  using _cell_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _cell_id_type cell_id;
  using _pointcloud_type =
    sensor_msgs::msg::PointCloud2_<ContainerAllocator>;
  _pointcloud_type pointcloud;
  using _metadata_type =
    autoware_map_msgs::msg::PointCloudMapCellMetaData_<ContainerAllocator>;
  _metadata_type metadata;

  // setters for named parameter idiom
  Type & set__cell_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->cell_id = _arg;
    return *this;
  }
  Type & set__pointcloud(
    const sensor_msgs::msg::PointCloud2_<ContainerAllocator> & _arg)
  {
    this->pointcloud = _arg;
    return *this;
  }
  Type & set__metadata(
    const autoware_map_msgs::msg::PointCloudMapCellMetaData_<ContainerAllocator> & _arg)
  {
    this->metadata = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autoware_map_msgs::msg::PointCloudMapCellWithID_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_map_msgs::msg::PointCloudMapCellWithID_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_map_msgs::msg::PointCloudMapCellWithID_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_map_msgs::msg::PointCloudMapCellWithID_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_map_msgs::msg::PointCloudMapCellWithID_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_map_msgs::msg::PointCloudMapCellWithID_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_map_msgs::msg::PointCloudMapCellWithID_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_map_msgs::msg::PointCloudMapCellWithID_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_map_msgs::msg::PointCloudMapCellWithID_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_map_msgs::msg::PointCloudMapCellWithID_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_map_msgs__msg__PointCloudMapCellWithID
    std::shared_ptr<autoware_map_msgs::msg::PointCloudMapCellWithID_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_map_msgs__msg__PointCloudMapCellWithID
    std::shared_ptr<autoware_map_msgs::msg::PointCloudMapCellWithID_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PointCloudMapCellWithID_ & other) const
  {
    if (this->cell_id != other.cell_id) {
      return false;
    }
    if (this->pointcloud != other.pointcloud) {
      return false;
    }
    if (this->metadata != other.metadata) {
      return false;
    }
    return true;
  }
  bool operator!=(const PointCloudMapCellWithID_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PointCloudMapCellWithID_

// alias to use template instance with default allocator
using PointCloudMapCellWithID =
  autoware_map_msgs::msg::PointCloudMapCellWithID_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace autoware_map_msgs

#endif  // AUTOWARE_MAP_MSGS__MSG__DETAIL__POINT_CLOUD_MAP_CELL_WITH_ID__STRUCT_HPP_
