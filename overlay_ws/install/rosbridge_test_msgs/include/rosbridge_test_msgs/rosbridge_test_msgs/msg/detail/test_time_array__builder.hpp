// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rosbridge_test_msgs:msg/TestTimeArray.idl
// generated code does not contain a copyright notice

#ifndef ROSBRIDGE_TEST_MSGS__MSG__DETAIL__TEST_TIME_ARRAY__BUILDER_HPP_
#define ROSBRIDGE_TEST_MSGS__MSG__DETAIL__TEST_TIME_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rosbridge_test_msgs/msg/detail/test_time_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rosbridge_test_msgs
{

namespace msg
{

namespace builder
{

class Init_TestTimeArray_times
{
public:
  Init_TestTimeArray_times()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rosbridge_test_msgs::msg::TestTimeArray times(::rosbridge_test_msgs::msg::TestTimeArray::_times_type arg)
  {
    msg_.times = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rosbridge_test_msgs::msg::TestTimeArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rosbridge_test_msgs::msg::TestTimeArray>()
{
  return rosbridge_test_msgs::msg::builder::Init_TestTimeArray_times();
}

}  // namespace rosbridge_test_msgs

#endif  // ROSBRIDGE_TEST_MSGS__MSG__DETAIL__TEST_TIME_ARRAY__BUILDER_HPP_
