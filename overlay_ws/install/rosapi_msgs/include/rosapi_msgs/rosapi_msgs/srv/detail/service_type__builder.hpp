// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rosapi_msgs:srv/ServiceType.idl
// generated code does not contain a copyright notice

#ifndef ROSAPI_MSGS__SRV__DETAIL__SERVICE_TYPE__BUILDER_HPP_
#define ROSAPI_MSGS__SRV__DETAIL__SERVICE_TYPE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rosapi_msgs/srv/detail/service_type__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rosapi_msgs
{

namespace srv
{

namespace builder
{

class Init_ServiceType_Request_service
{
public:
  Init_ServiceType_Request_service()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rosapi_msgs::srv::ServiceType_Request service(::rosapi_msgs::srv::ServiceType_Request::_service_type arg)
  {
    msg_.service = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rosapi_msgs::srv::ServiceType_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rosapi_msgs::srv::ServiceType_Request>()
{
  return rosapi_msgs::srv::builder::Init_ServiceType_Request_service();
}

}  // namespace rosapi_msgs


namespace rosapi_msgs
{

namespace srv
{

namespace builder
{

class Init_ServiceType_Response_type
{
public:
  Init_ServiceType_Response_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rosapi_msgs::srv::ServiceType_Response type(::rosapi_msgs::srv::ServiceType_Response::_type_type arg)
  {
    msg_.type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rosapi_msgs::srv::ServiceType_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rosapi_msgs::srv::ServiceType_Response>()
{
  return rosapi_msgs::srv::builder::Init_ServiceType_Response_type();
}

}  // namespace rosapi_msgs

#endif  // ROSAPI_MSGS__SRV__DETAIL__SERVICE_TYPE__BUILDER_HPP_
