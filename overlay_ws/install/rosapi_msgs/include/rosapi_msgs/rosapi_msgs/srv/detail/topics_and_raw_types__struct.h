// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rosapi_msgs:srv/TopicsAndRawTypes.idl
// generated code does not contain a copyright notice

#ifndef ROSAPI_MSGS__SRV__DETAIL__TOPICS_AND_RAW_TYPES__STRUCT_H_
#define ROSAPI_MSGS__SRV__DETAIL__TOPICS_AND_RAW_TYPES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/TopicsAndRawTypes in the package rosapi_msgs.
typedef struct rosapi_msgs__srv__TopicsAndRawTypes_Request
{
  uint8_t structure_needs_at_least_one_member;
} rosapi_msgs__srv__TopicsAndRawTypes_Request;

// Struct for a sequence of rosapi_msgs__srv__TopicsAndRawTypes_Request.
typedef struct rosapi_msgs__srv__TopicsAndRawTypes_Request__Sequence
{
  rosapi_msgs__srv__TopicsAndRawTypes_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rosapi_msgs__srv__TopicsAndRawTypes_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'topics'
// Member 'types'
// Member 'typedefs_full_text'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/TopicsAndRawTypes in the package rosapi_msgs.
typedef struct rosapi_msgs__srv__TopicsAndRawTypes_Response
{
  rosidl_runtime_c__String__Sequence topics;
  rosidl_runtime_c__String__Sequence types;
  rosidl_runtime_c__String__Sequence typedefs_full_text;
} rosapi_msgs__srv__TopicsAndRawTypes_Response;

// Struct for a sequence of rosapi_msgs__srv__TopicsAndRawTypes_Response.
typedef struct rosapi_msgs__srv__TopicsAndRawTypes_Response__Sequence
{
  rosapi_msgs__srv__TopicsAndRawTypes_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rosapi_msgs__srv__TopicsAndRawTypes_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROSAPI_MSGS__SRV__DETAIL__TOPICS_AND_RAW_TYPES__STRUCT_H_
