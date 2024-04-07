// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aruco_opencv_msgs:msg/MarkerPose.idl
// generated code does not contain a copyright notice

#ifndef ARUCO_OPENCV_MSGS__MSG__DETAIL__MARKER_POSE__BUILDER_HPP_
#define ARUCO_OPENCV_MSGS__MSG__DETAIL__MARKER_POSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aruco_opencv_msgs/msg/detail/marker_pose__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aruco_opencv_msgs
{

namespace msg
{

namespace builder
{

class Init_MarkerPose_pose
{
public:
  explicit Init_MarkerPose_pose(::aruco_opencv_msgs::msg::MarkerPose & msg)
  : msg_(msg)
  {}
  ::aruco_opencv_msgs::msg::MarkerPose pose(::aruco_opencv_msgs::msg::MarkerPose::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aruco_opencv_msgs::msg::MarkerPose msg_;
};

class Init_MarkerPose_marker_id
{
public:
  Init_MarkerPose_marker_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MarkerPose_pose marker_id(::aruco_opencv_msgs::msg::MarkerPose::_marker_id_type arg)
  {
    msg_.marker_id = std::move(arg);
    return Init_MarkerPose_pose(msg_);
  }

private:
  ::aruco_opencv_msgs::msg::MarkerPose msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aruco_opencv_msgs::msg::MarkerPose>()
{
  return aruco_opencv_msgs::msg::builder::Init_MarkerPose_marker_id();
}

}  // namespace aruco_opencv_msgs

#endif  // ARUCO_OPENCV_MSGS__MSG__DETAIL__MARKER_POSE__BUILDER_HPP_
