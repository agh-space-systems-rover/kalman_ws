// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aruco_opencv_msgs:msg/ArucoDetection.idl
// generated code does not contain a copyright notice

#ifndef ARUCO_OPENCV_MSGS__MSG__DETAIL__ARUCO_DETECTION__STRUCT_HPP_
#define ARUCO_OPENCV_MSGS__MSG__DETAIL__ARUCO_DETECTION__STRUCT_HPP_

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
// Member 'markers'
#include "aruco_opencv_msgs/msg/detail/marker_pose__struct.hpp"
// Member 'boards'
#include "aruco_opencv_msgs/msg/detail/board_pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__aruco_opencv_msgs__msg__ArucoDetection __attribute__((deprecated))
#else
# define DEPRECATED__aruco_opencv_msgs__msg__ArucoDetection __declspec(deprecated)
#endif

namespace aruco_opencv_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ArucoDetection_
{
  using Type = ArucoDetection_<ContainerAllocator>;

  explicit ArucoDetection_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit ArucoDetection_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _markers_type =
    std::vector<aruco_opencv_msgs::msg::MarkerPose_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<aruco_opencv_msgs::msg::MarkerPose_<ContainerAllocator>>>;
  _markers_type markers;
  using _boards_type =
    std::vector<aruco_opencv_msgs::msg::BoardPose_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<aruco_opencv_msgs::msg::BoardPose_<ContainerAllocator>>>;
  _boards_type boards;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__markers(
    const std::vector<aruco_opencv_msgs::msg::MarkerPose_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<aruco_opencv_msgs::msg::MarkerPose_<ContainerAllocator>>> & _arg)
  {
    this->markers = _arg;
    return *this;
  }
  Type & set__boards(
    const std::vector<aruco_opencv_msgs::msg::BoardPose_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<aruco_opencv_msgs::msg::BoardPose_<ContainerAllocator>>> & _arg)
  {
    this->boards = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aruco_opencv_msgs::msg::ArucoDetection_<ContainerAllocator> *;
  using ConstRawPtr =
    const aruco_opencv_msgs::msg::ArucoDetection_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aruco_opencv_msgs::msg::ArucoDetection_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aruco_opencv_msgs::msg::ArucoDetection_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aruco_opencv_msgs::msg::ArucoDetection_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aruco_opencv_msgs::msg::ArucoDetection_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aruco_opencv_msgs::msg::ArucoDetection_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aruco_opencv_msgs::msg::ArucoDetection_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aruco_opencv_msgs::msg::ArucoDetection_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aruco_opencv_msgs::msg::ArucoDetection_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aruco_opencv_msgs__msg__ArucoDetection
    std::shared_ptr<aruco_opencv_msgs::msg::ArucoDetection_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aruco_opencv_msgs__msg__ArucoDetection
    std::shared_ptr<aruco_opencv_msgs::msg::ArucoDetection_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ArucoDetection_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->markers != other.markers) {
      return false;
    }
    if (this->boards != other.boards) {
      return false;
    }
    return true;
  }
  bool operator!=(const ArucoDetection_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ArucoDetection_

// alias to use template instance with default allocator
using ArucoDetection =
  aruco_opencv_msgs::msg::ArucoDetection_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace aruco_opencv_msgs

#endif  // ARUCO_OPENCV_MSGS__MSG__DETAIL__ARUCO_DETECTION__STRUCT_HPP_
