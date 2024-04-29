// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rosbridge_test_msgs:srv/TestArrayRequest.idl
// generated code does not contain a copyright notice

#ifndef ROSBRIDGE_TEST_MSGS__SRV__DETAIL__TEST_ARRAY_REQUEST__STRUCT_H_
#define ROSBRIDGE_TEST_MSGS__SRV__DETAIL__TEST_ARRAY_REQUEST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'int_values'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/TestArrayRequest in the package rosbridge_test_msgs.
typedef struct rosbridge_test_msgs__srv__TestArrayRequest_Request
{
  rosidl_runtime_c__int32__Sequence int_values;
} rosbridge_test_msgs__srv__TestArrayRequest_Request;

// Struct for a sequence of rosbridge_test_msgs__srv__TestArrayRequest_Request.
typedef struct rosbridge_test_msgs__srv__TestArrayRequest_Request__Sequence
{
  rosbridge_test_msgs__srv__TestArrayRequest_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rosbridge_test_msgs__srv__TestArrayRequest_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/TestArrayRequest in the package rosbridge_test_msgs.
typedef struct rosbridge_test_msgs__srv__TestArrayRequest_Response
{
  uint8_t structure_needs_at_least_one_member;
} rosbridge_test_msgs__srv__TestArrayRequest_Response;

// Struct for a sequence of rosbridge_test_msgs__srv__TestArrayRequest_Response.
typedef struct rosbridge_test_msgs__srv__TestArrayRequest_Response__Sequence
{
  rosbridge_test_msgs__srv__TestArrayRequest_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rosbridge_test_msgs__srv__TestArrayRequest_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROSBRIDGE_TEST_MSGS__SRV__DETAIL__TEST_ARRAY_REQUEST__STRUCT_H_
