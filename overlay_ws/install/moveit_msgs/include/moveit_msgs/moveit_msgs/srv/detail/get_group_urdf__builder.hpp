// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from moveit_msgs:srv/GetGroupUrdf.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__SRV__DETAIL__GET_GROUP_URDF__BUILDER_HPP_
#define MOVEIT_MSGS__SRV__DETAIL__GET_GROUP_URDF__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "moveit_msgs/srv/detail/get_group_urdf__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace moveit_msgs
{

namespace srv
{

namespace builder
{

class Init_GetGroupUrdf_Request_group_name
{
public:
  Init_GetGroupUrdf_Request_group_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::moveit_msgs::srv::GetGroupUrdf_Request group_name(::moveit_msgs::srv::GetGroupUrdf_Request::_group_name_type arg)
  {
    msg_.group_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::srv::GetGroupUrdf_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::srv::GetGroupUrdf_Request>()
{
  return moveit_msgs::srv::builder::Init_GetGroupUrdf_Request_group_name();
}

}  // namespace moveit_msgs


namespace moveit_msgs
{

namespace srv
{

namespace builder
{

class Init_GetGroupUrdf_Response_urdf_string
{
public:
  explicit Init_GetGroupUrdf_Response_urdf_string(::moveit_msgs::srv::GetGroupUrdf_Response & msg)
  : msg_(msg)
  {}
  ::moveit_msgs::srv::GetGroupUrdf_Response urdf_string(::moveit_msgs::srv::GetGroupUrdf_Response::_urdf_string_type arg)
  {
    msg_.urdf_string = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::srv::GetGroupUrdf_Response msg_;
};

class Init_GetGroupUrdf_Response_error_code
{
public:
  Init_GetGroupUrdf_Response_error_code()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetGroupUrdf_Response_urdf_string error_code(::moveit_msgs::srv::GetGroupUrdf_Response::_error_code_type arg)
  {
    msg_.error_code = std::move(arg);
    return Init_GetGroupUrdf_Response_urdf_string(msg_);
  }

private:
  ::moveit_msgs::srv::GetGroupUrdf_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::srv::GetGroupUrdf_Response>()
{
  return moveit_msgs::srv::builder::Init_GetGroupUrdf_Response_error_code();
}

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__SRV__DETAIL__GET_GROUP_URDF__BUILDER_HPP_
