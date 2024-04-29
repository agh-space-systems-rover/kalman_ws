// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rosbridge_test_msgs:srv/AddTwoInts.idl
// generated code does not contain a copyright notice

#ifndef ROSBRIDGE_TEST_MSGS__SRV__DETAIL__ADD_TWO_INTS__STRUCT_H_
#define ROSBRIDGE_TEST_MSGS__SRV__DETAIL__ADD_TWO_INTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/AddTwoInts in the package rosbridge_test_msgs.
typedef struct rosbridge_test_msgs__srv__AddTwoInts_Request
{
  int64_t a;
  int64_t b;
} rosbridge_test_msgs__srv__AddTwoInts_Request;

// Struct for a sequence of rosbridge_test_msgs__srv__AddTwoInts_Request.
typedef struct rosbridge_test_msgs__srv__AddTwoInts_Request__Sequence
{
  rosbridge_test_msgs__srv__AddTwoInts_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rosbridge_test_msgs__srv__AddTwoInts_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/AddTwoInts in the package rosbridge_test_msgs.
typedef struct rosbridge_test_msgs__srv__AddTwoInts_Response
{
  int64_t sum;
} rosbridge_test_msgs__srv__AddTwoInts_Response;

// Struct for a sequence of rosbridge_test_msgs__srv__AddTwoInts_Response.
typedef struct rosbridge_test_msgs__srv__AddTwoInts_Response__Sequence
{
  rosbridge_test_msgs__srv__AddTwoInts_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rosbridge_test_msgs__srv__AddTwoInts_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROSBRIDGE_TEST_MSGS__SRV__DETAIL__ADD_TWO_INTS__STRUCT_H_
