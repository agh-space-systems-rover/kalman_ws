// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rosbridge_test_msgs:srv/TestResponseOnly.idl
// generated code does not contain a copyright notice

#ifndef ROSBRIDGE_TEST_MSGS__SRV__DETAIL__TEST_RESPONSE_ONLY__BUILDER_HPP_
#define ROSBRIDGE_TEST_MSGS__SRV__DETAIL__TEST_RESPONSE_ONLY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rosbridge_test_msgs/srv/detail/test_response_only__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rosbridge_test_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rosbridge_test_msgs::srv::TestResponseOnly_Request>()
{
  return ::rosbridge_test_msgs::srv::TestResponseOnly_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace rosbridge_test_msgs


namespace rosbridge_test_msgs
{

namespace srv
{

namespace builder
{

class Init_TestResponseOnly_Response_data
{
public:
  Init_TestResponseOnly_Response_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rosbridge_test_msgs::srv::TestResponseOnly_Response data(::rosbridge_test_msgs::srv::TestResponseOnly_Response::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rosbridge_test_msgs::srv::TestResponseOnly_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rosbridge_test_msgs::srv::TestResponseOnly_Response>()
{
  return rosbridge_test_msgs::srv::builder::Init_TestResponseOnly_Response_data();
}

}  // namespace rosbridge_test_msgs

#endif  // ROSBRIDGE_TEST_MSGS__SRV__DETAIL__TEST_RESPONSE_ONLY__BUILDER_HPP_
