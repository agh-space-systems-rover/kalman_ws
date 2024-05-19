// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from moveit_msgs:msg/ServoStatus.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__SERVO_STATUS__STRUCT_H_
#define MOVEIT_MSGS__MSG__DETAIL__SERVO_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'INVALID'.
/**
  * Status types (should reflect StatusCode from moveit_servo/utils/datatype.hpp)
 */
enum
{
  moveit_msgs__msg__ServoStatus__INVALID = -1
};

/// Constant 'NO_WARNING'.
enum
{
  moveit_msgs__msg__ServoStatus__NO_WARNING = 0
};

/// Constant 'DECELERATE_FOR_APPROACHING_SINGULARITY'.
enum
{
  moveit_msgs__msg__ServoStatus__DECELERATE_FOR_APPROACHING_SINGULARITY = 1
};

/// Constant 'HALT_FOR_SINGULARITY'.
enum
{
  moveit_msgs__msg__ServoStatus__HALT_FOR_SINGULARITY = 2
};

/// Constant 'DECELERATE_FOR_LEAVING_SINGULARITY'.
enum
{
  moveit_msgs__msg__ServoStatus__DECELERATE_FOR_LEAVING_SINGULARITY = 3
};

/// Constant 'DECELERATE_FOR_COLLISION'.
enum
{
  moveit_msgs__msg__ServoStatus__DECELERATE_FOR_COLLISION = 4
};

/// Constant 'HALT_FOR_COLLISION'.
enum
{
  moveit_msgs__msg__ServoStatus__HALT_FOR_COLLISION = 5
};

/// Constant 'JOINT_BOUND'.
enum
{
  moveit_msgs__msg__ServoStatus__JOINT_BOUND = 6
};

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/ServoStatus in the package moveit_msgs.
/**
  * Message
 */
typedef struct moveit_msgs__msg__ServoStatus
{
  /// will contains integer code
  int8_t code;
  /// will contain explanatory message
  rosidl_runtime_c__String message;
} moveit_msgs__msg__ServoStatus;

// Struct for a sequence of moveit_msgs__msg__ServoStatus.
typedef struct moveit_msgs__msg__ServoStatus__Sequence
{
  moveit_msgs__msg__ServoStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__msg__ServoStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOVEIT_MSGS__MSG__DETAIL__SERVO_STATUS__STRUCT_H_
