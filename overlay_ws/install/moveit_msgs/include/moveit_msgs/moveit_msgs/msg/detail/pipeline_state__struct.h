// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from moveit_msgs:msg/PipelineState.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__PIPELINE_STATE__STRUCT_H_
#define MOVEIT_MSGS__MSG__DETAIL__PIPELINE_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'request'
#include "moveit_msgs/msg/detail/motion_plan_request__struct.h"
// Member 'response'
#include "moveit_msgs/msg/detail/motion_plan_response__struct.h"
// Member 'pipeline_stage'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/PipelineState in the package moveit_msgs.
/**
  * Motion plan response that is processed
 */
typedef struct moveit_msgs__msg__PipelineState
{
  moveit_msgs__msg__MotionPlanRequest request;
  /// Current solution
  moveit_msgs__msg__MotionPlanResponse response;
  /// Latest stage of the planning pipeline that got invoked
  rosidl_runtime_c__String pipeline_stage;
} moveit_msgs__msg__PipelineState;

// Struct for a sequence of moveit_msgs__msg__PipelineState.
typedef struct moveit_msgs__msg__PipelineState__Sequence
{
  moveit_msgs__msg__PipelineState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__msg__PipelineState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOVEIT_MSGS__MSG__DETAIL__PIPELINE_STATE__STRUCT_H_
