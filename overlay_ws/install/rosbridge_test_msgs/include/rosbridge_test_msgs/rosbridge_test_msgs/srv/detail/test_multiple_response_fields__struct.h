// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rosbridge_test_msgs:srv/TestMultipleResponseFields.idl
// generated code does not contain a copyright notice

#ifndef ROSBRIDGE_TEST_MSGS__SRV__DETAIL__TEST_MULTIPLE_RESPONSE_FIELDS__STRUCT_H_
#define ROSBRIDGE_TEST_MSGS__SRV__DETAIL__TEST_MULTIPLE_RESPONSE_FIELDS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/TestMultipleResponseFields in the package rosbridge_test_msgs.
typedef struct rosbridge_test_msgs__srv__TestMultipleResponseFields_Request
{
  uint8_t structure_needs_at_least_one_member;
} rosbridge_test_msgs__srv__TestMultipleResponseFields_Request;

// Struct for a sequence of rosbridge_test_msgs__srv__TestMultipleResponseFields_Request.
typedef struct rosbridge_test_msgs__srv__TestMultipleResponseFields_Request__Sequence
{
  rosbridge_test_msgs__srv__TestMultipleResponseFields_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rosbridge_test_msgs__srv__TestMultipleResponseFields_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'string'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/TestMultipleResponseFields in the package rosbridge_test_msgs.
typedef struct rosbridge_test_msgs__srv__TestMultipleResponseFields_Response
{
  int32_t int_value;
  float float_value;
  rosidl_runtime_c__String string;
  bool bool_value;
} rosbridge_test_msgs__srv__TestMultipleResponseFields_Response;

// Struct for a sequence of rosbridge_test_msgs__srv__TestMultipleResponseFields_Response.
typedef struct rosbridge_test_msgs__srv__TestMultipleResponseFields_Response__Sequence
{
  rosbridge_test_msgs__srv__TestMultipleResponseFields_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rosbridge_test_msgs__srv__TestMultipleResponseFields_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROSBRIDGE_TEST_MSGS__SRV__DETAIL__TEST_MULTIPLE_RESPONSE_FIELDS__STRUCT_H_
