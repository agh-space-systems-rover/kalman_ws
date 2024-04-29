// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rosbridge_test_msgs:msg/TestFloat32BoundedArray.idl
// generated code does not contain a copyright notice

#ifndef ROSBRIDGE_TEST_MSGS__MSG__DETAIL__TEST_FLOAT32_BOUNDED_ARRAY__BUILDER_HPP_
#define ROSBRIDGE_TEST_MSGS__MSG__DETAIL__TEST_FLOAT32_BOUNDED_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rosbridge_test_msgs/msg/detail/test_float32_bounded_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rosbridge_test_msgs
{

namespace msg
{

namespace builder
{

class Init_TestFloat32BoundedArray_data
{
public:
  Init_TestFloat32BoundedArray_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rosbridge_test_msgs::msg::TestFloat32BoundedArray data(::rosbridge_test_msgs::msg::TestFloat32BoundedArray::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rosbridge_test_msgs::msg::TestFloat32BoundedArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rosbridge_test_msgs::msg::TestFloat32BoundedArray>()
{
  return rosbridge_test_msgs::msg::builder::Init_TestFloat32BoundedArray_data();
}

}  // namespace rosbridge_test_msgs

#endif  // ROSBRIDGE_TEST_MSGS__MSG__DETAIL__TEST_FLOAT32_BOUNDED_ARRAY__BUILDER_HPP_
