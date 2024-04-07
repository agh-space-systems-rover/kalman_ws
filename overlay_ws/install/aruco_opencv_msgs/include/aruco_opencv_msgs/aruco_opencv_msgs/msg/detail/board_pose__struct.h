// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aruco_opencv_msgs:msg/BoardPose.idl
// generated code does not contain a copyright notice

#ifndef ARUCO_OPENCV_MSGS__MSG__DETAIL__BOARD_POSE__STRUCT_H_
#define ARUCO_OPENCV_MSGS__MSG__DETAIL__BOARD_POSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'board_name'
#include "rosidl_runtime_c/string.h"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in msg/BoardPose in the package aruco_opencv_msgs.
typedef struct aruco_opencv_msgs__msg__BoardPose
{
  rosidl_runtime_c__String board_name;
  geometry_msgs__msg__Pose pose;
} aruco_opencv_msgs__msg__BoardPose;

// Struct for a sequence of aruco_opencv_msgs__msg__BoardPose.
typedef struct aruco_opencv_msgs__msg__BoardPose__Sequence
{
  aruco_opencv_msgs__msg__BoardPose * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aruco_opencv_msgs__msg__BoardPose__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARUCO_OPENCV_MSGS__MSG__DETAIL__BOARD_POSE__STRUCT_H_
