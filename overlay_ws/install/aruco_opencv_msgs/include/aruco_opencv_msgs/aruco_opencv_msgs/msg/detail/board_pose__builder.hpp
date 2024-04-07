// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aruco_opencv_msgs:msg/BoardPose.idl
// generated code does not contain a copyright notice

#ifndef ARUCO_OPENCV_MSGS__MSG__DETAIL__BOARD_POSE__BUILDER_HPP_
#define ARUCO_OPENCV_MSGS__MSG__DETAIL__BOARD_POSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aruco_opencv_msgs/msg/detail/board_pose__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aruco_opencv_msgs
{

namespace msg
{

namespace builder
{

class Init_BoardPose_pose
{
public:
  explicit Init_BoardPose_pose(::aruco_opencv_msgs::msg::BoardPose & msg)
  : msg_(msg)
  {}
  ::aruco_opencv_msgs::msg::BoardPose pose(::aruco_opencv_msgs::msg::BoardPose::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aruco_opencv_msgs::msg::BoardPose msg_;
};

class Init_BoardPose_board_name
{
public:
  Init_BoardPose_board_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BoardPose_pose board_name(::aruco_opencv_msgs::msg::BoardPose::_board_name_type arg)
  {
    msg_.board_name = std::move(arg);
    return Init_BoardPose_pose(msg_);
  }

private:
  ::aruco_opencv_msgs::msg::BoardPose msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aruco_opencv_msgs::msg::BoardPose>()
{
  return aruco_opencv_msgs::msg::builder::Init_BoardPose_board_name();
}

}  // namespace aruco_opencv_msgs

#endif  // ARUCO_OPENCV_MSGS__MSG__DETAIL__BOARD_POSE__BUILDER_HPP_
