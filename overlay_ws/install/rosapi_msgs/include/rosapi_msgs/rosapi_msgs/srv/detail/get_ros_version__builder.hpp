// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rosapi_msgs:srv/GetROSVersion.idl
// generated code does not contain a copyright notice

#ifndef ROSAPI_MSGS__SRV__DETAIL__GET_ROS_VERSION__BUILDER_HPP_
#define ROSAPI_MSGS__SRV__DETAIL__GET_ROS_VERSION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rosapi_msgs/srv/detail/get_ros_version__struct.hpp"
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
auto build<::rosapi_msgs::srv::GetROSVersion_Request>()
{
  return ::rosapi_msgs::srv::GetROSVersion_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace rosapi_msgs


namespace rosapi_msgs
{

namespace srv
{

namespace builder
{

class Init_GetROSVersion_Response_distro
{
public:
  explicit Init_GetROSVersion_Response_distro(::rosapi_msgs::srv::GetROSVersion_Response & msg)
  : msg_(msg)
  {}
  ::rosapi_msgs::srv::GetROSVersion_Response distro(::rosapi_msgs::srv::GetROSVersion_Response::_distro_type arg)
  {
    msg_.distro = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rosapi_msgs::srv::GetROSVersion_Response msg_;
};

class Init_GetROSVersion_Response_version
{
public:
  Init_GetROSVersion_Response_version()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetROSVersion_Response_distro version(::rosapi_msgs::srv::GetROSVersion_Response::_version_type arg)
  {
    msg_.version = std::move(arg);
    return Init_GetROSVersion_Response_distro(msg_);
  }

private:
  ::rosapi_msgs::srv::GetROSVersion_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rosapi_msgs::srv::GetROSVersion_Response>()
{
  return rosapi_msgs::srv::builder::Init_GetROSVersion_Response_version();
}

}  // namespace rosapi_msgs

#endif  // ROSAPI_MSGS__SRV__DETAIL__GET_ROS_VERSION__BUILDER_HPP_
