// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rosapi_msgs:srv/Services.idl
// generated code does not contain a copyright notice

#ifndef ROSAPI_MSGS__SRV__DETAIL__SERVICES__BUILDER_HPP_
#define ROSAPI_MSGS__SRV__DETAIL__SERVICES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rosapi_msgs/srv/detail/services__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rosapi_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rosapi_msgs::srv::Services_Request>()
{
  return ::rosapi_msgs::srv::Services_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace rosapi_msgs


namespace rosapi_msgs
{

namespace srv
{

namespace builder
{

class Init_Services_Response_services
{
public:
  Init_Services_Response_services()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rosapi_msgs::srv::Services_Response services(::rosapi_msgs::srv::Services_Response::_services_type arg)
  {
    msg_.services = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rosapi_msgs::srv::Services_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rosapi_msgs::srv::Services_Response>()
{
  return rosapi_msgs::srv::builder::Init_Services_Response_services();
}

}  // namespace rosapi_msgs

#endif  // ROSAPI_MSGS__SRV__DETAIL__SERVICES__BUILDER_HPP_
