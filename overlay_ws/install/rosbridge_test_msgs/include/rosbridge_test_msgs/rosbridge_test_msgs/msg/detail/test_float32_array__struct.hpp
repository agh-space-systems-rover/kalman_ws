// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rosbridge_test_msgs:msg/TestFloat32Array.idl
// generated code does not contain a copyright notice

#ifndef ROSBRIDGE_TEST_MSGS__MSG__DETAIL__TEST_FLOAT32_ARRAY__STRUCT_HPP_
#define ROSBRIDGE_TEST_MSGS__MSG__DETAIL__TEST_FLOAT32_ARRAY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rosbridge_test_msgs__msg__TestFloat32Array __attribute__((deprecated))
#else
# define DEPRECATED__rosbridge_test_msgs__msg__TestFloat32Array __declspec(deprecated)
#endif

namespace rosbridge_test_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TestFloat32Array_
{
  using Type = TestFloat32Array_<ContainerAllocator>;

  explicit TestFloat32Array_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit TestFloat32Array_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _data_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__data(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rosbridge_test_msgs::msg::TestFloat32Array_<ContainerAllocator> *;
  using ConstRawPtr =
    const rosbridge_test_msgs::msg::TestFloat32Array_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rosbridge_test_msgs::msg::TestFloat32Array_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rosbridge_test_msgs::msg::TestFloat32Array_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rosbridge_test_msgs::msg::TestFloat32Array_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rosbridge_test_msgs::msg::TestFloat32Array_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rosbridge_test_msgs::msg::TestFloat32Array_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rosbridge_test_msgs::msg::TestFloat32Array_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rosbridge_test_msgs::msg::TestFloat32Array_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rosbridge_test_msgs::msg::TestFloat32Array_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rosbridge_test_msgs__msg__TestFloat32Array
    std::shared_ptr<rosbridge_test_msgs::msg::TestFloat32Array_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rosbridge_test_msgs__msg__TestFloat32Array
    std::shared_ptr<rosbridge_test_msgs::msg::TestFloat32Array_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TestFloat32Array_ & other) const
  {
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const TestFloat32Array_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TestFloat32Array_

// alias to use template instance with default allocator
using TestFloat32Array =
  rosbridge_test_msgs::msg::TestFloat32Array_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rosbridge_test_msgs

#endif  // ROSBRIDGE_TEST_MSGS__MSG__DETAIL__TEST_FLOAT32_ARRAY__STRUCT_HPP_
