// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rosbridge_test_msgs:srv/TestEmpty.idl
// generated code does not contain a copyright notice

#ifndef ROSBRIDGE_TEST_MSGS__SRV__DETAIL__TEST_EMPTY__STRUCT_H_
#define ROSBRIDGE_TEST_MSGS__SRV__DETAIL__TEST_EMPTY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/TestEmpty in the package rosbridge_test_msgs.
typedef struct rosbridge_test_msgs__srv__TestEmpty_Request
{
  uint8_t structure_needs_at_least_one_member;
} rosbridge_test_msgs__srv__TestEmpty_Request;

// Struct for a sequence of rosbridge_test_msgs__srv__TestEmpty_Request.
typedef struct rosbridge_test_msgs__srv__TestEmpty_Request__Sequence
{
  rosbridge_test_msgs__srv__TestEmpty_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rosbridge_test_msgs__srv__TestEmpty_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/TestEmpty in the package rosbridge_test_msgs.
typedef struct rosbridge_test_msgs__srv__TestEmpty_Response
{
  uint8_t structure_needs_at_least_one_member;
} rosbridge_test_msgs__srv__TestEmpty_Response;

// Struct for a sequence of rosbridge_test_msgs__srv__TestEmpty_Response.
typedef struct rosbridge_test_msgs__srv__TestEmpty_Response__Sequence
{
  rosbridge_test_msgs__srv__TestEmpty_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rosbridge_test_msgs__srv__TestEmpty_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROSBRIDGE_TEST_MSGS__SRV__DETAIL__TEST_EMPTY__STRUCT_H_
