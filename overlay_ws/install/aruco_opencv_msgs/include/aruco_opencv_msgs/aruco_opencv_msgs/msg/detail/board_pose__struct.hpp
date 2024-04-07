// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aruco_opencv_msgs:msg/BoardPose.idl
// generated code does not contain a copyright notice

#ifndef ARUCO_OPENCV_MSGS__MSG__DETAIL__BOARD_POSE__STRUCT_HPP_
#define ARUCO_OPENCV_MSGS__MSG__DETAIL__BOARD_POSE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__aruco_opencv_msgs__msg__BoardPose __attribute__((deprecated))
#else
# define DEPRECATED__aruco_opencv_msgs__msg__BoardPose __declspec(deprecated)
#endif

namespace aruco_opencv_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BoardPose_
{
  using Type = BoardPose_<ContainerAllocator>;

  explicit BoardPose_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->board_name = "";
    }
  }

  explicit BoardPose_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : board_name(_alloc),
    pose(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->board_name = "";
    }
  }

  // field types and members
  using _board_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _board_name_type board_name;
  using _pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _pose_type pose;

  // setters for named parameter idiom
  Type & set__board_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->board_name = _arg;
    return *this;
  }
  Type & set__pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aruco_opencv_msgs::msg::BoardPose_<ContainerAllocator> *;
  using ConstRawPtr =
    const aruco_opencv_msgs::msg::BoardPose_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aruco_opencv_msgs::msg::BoardPose_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aruco_opencv_msgs::msg::BoardPose_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aruco_opencv_msgs::msg::BoardPose_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aruco_opencv_msgs::msg::BoardPose_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aruco_opencv_msgs::msg::BoardPose_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aruco_opencv_msgs::msg::BoardPose_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aruco_opencv_msgs::msg::BoardPose_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aruco_opencv_msgs::msg::BoardPose_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aruco_opencv_msgs__msg__BoardPose
    std::shared_ptr<aruco_opencv_msgs::msg::BoardPose_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aruco_opencv_msgs__msg__BoardPose
    std::shared_ptr<aruco_opencv_msgs::msg::BoardPose_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BoardPose_ & other) const
  {
    if (this->board_name != other.board_name) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    return true;
  }
  bool operator!=(const BoardPose_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BoardPose_

// alias to use template instance with default allocator
using BoardPose =
  aruco_opencv_msgs::msg::BoardPose_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace aruco_opencv_msgs

#endif  // ARUCO_OPENCV_MSGS__MSG__DETAIL__BOARD_POSE__STRUCT_HPP_
