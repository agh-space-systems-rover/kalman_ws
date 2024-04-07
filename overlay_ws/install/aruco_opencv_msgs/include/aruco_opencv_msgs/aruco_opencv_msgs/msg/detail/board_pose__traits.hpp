// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aruco_opencv_msgs:msg/BoardPose.idl
// generated code does not contain a copyright notice

#ifndef ARUCO_OPENCV_MSGS__MSG__DETAIL__BOARD_POSE__TRAITS_HPP_
#define ARUCO_OPENCV_MSGS__MSG__DETAIL__BOARD_POSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "aruco_opencv_msgs/msg/detail/board_pose__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace aruco_opencv_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const BoardPose & msg,
  std::ostream & out)
{
  out << "{";
  // member: board_name
  {
    out << "board_name: ";
    rosidl_generator_traits::value_to_yaml(msg.board_name, out);
    out << ", ";
  }

  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BoardPose & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: board_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "board_name: ";
    rosidl_generator_traits::value_to_yaml(msg.board_name, out);
    out << "\n";
  }

  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_block_style_yaml(msg.pose, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BoardPose & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace aruco_opencv_msgs

namespace rosidl_generator_traits
{

[[deprecated("use aruco_opencv_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const aruco_opencv_msgs::msg::BoardPose & msg,
  std::ostream & out, size_t indentation = 0)
{
  aruco_opencv_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aruco_opencv_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const aruco_opencv_msgs::msg::BoardPose & msg)
{
  return aruco_opencv_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<aruco_opencv_msgs::msg::BoardPose>()
{
  return "aruco_opencv_msgs::msg::BoardPose";
}

template<>
inline const char * name<aruco_opencv_msgs::msg::BoardPose>()
{
  return "aruco_opencv_msgs/msg/BoardPose";
}

template<>
struct has_fixed_size<aruco_opencv_msgs::msg::BoardPose>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<aruco_opencv_msgs::msg::BoardPose>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<aruco_opencv_msgs::msg::BoardPose>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ARUCO_OPENCV_MSGS__MSG__DETAIL__BOARD_POSE__TRAITS_HPP_
