// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rosbridge_test_msgs:action/TestEmpty.idl
// generated code does not contain a copyright notice

#ifndef ROSBRIDGE_TEST_MSGS__ACTION__DETAIL__TEST_EMPTY__STRUCT_H_
#define ROSBRIDGE_TEST_MSGS__ACTION__DETAIL__TEST_EMPTY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/TestEmpty in the package rosbridge_test_msgs.
typedef struct rosbridge_test_msgs__action__TestEmpty_Goal
{
  uint8_t structure_needs_at_least_one_member;
} rosbridge_test_msgs__action__TestEmpty_Goal;

// Struct for a sequence of rosbridge_test_msgs__action__TestEmpty_Goal.
typedef struct rosbridge_test_msgs__action__TestEmpty_Goal__Sequence
{
  rosbridge_test_msgs__action__TestEmpty_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rosbridge_test_msgs__action__TestEmpty_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/TestEmpty in the package rosbridge_test_msgs.
typedef struct rosbridge_test_msgs__action__TestEmpty_Result
{
  uint8_t structure_needs_at_least_one_member;
} rosbridge_test_msgs__action__TestEmpty_Result;

// Struct for a sequence of rosbridge_test_msgs__action__TestEmpty_Result.
typedef struct rosbridge_test_msgs__action__TestEmpty_Result__Sequence
{
  rosbridge_test_msgs__action__TestEmpty_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rosbridge_test_msgs__action__TestEmpty_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/TestEmpty in the package rosbridge_test_msgs.
typedef struct rosbridge_test_msgs__action__TestEmpty_Feedback
{
  uint8_t structure_needs_at_least_one_member;
} rosbridge_test_msgs__action__TestEmpty_Feedback;

// Struct for a sequence of rosbridge_test_msgs__action__TestEmpty_Feedback.
typedef struct rosbridge_test_msgs__action__TestEmpty_Feedback__Sequence
{
  rosbridge_test_msgs__action__TestEmpty_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rosbridge_test_msgs__action__TestEmpty_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "rosbridge_test_msgs/action/detail/test_empty__struct.h"

/// Struct defined in action/TestEmpty in the package rosbridge_test_msgs.
typedef struct rosbridge_test_msgs__action__TestEmpty_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  rosbridge_test_msgs__action__TestEmpty_Goal goal;
} rosbridge_test_msgs__action__TestEmpty_SendGoal_Request;

// Struct for a sequence of rosbridge_test_msgs__action__TestEmpty_SendGoal_Request.
typedef struct rosbridge_test_msgs__action__TestEmpty_SendGoal_Request__Sequence
{
  rosbridge_test_msgs__action__TestEmpty_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rosbridge_test_msgs__action__TestEmpty_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/TestEmpty in the package rosbridge_test_msgs.
typedef struct rosbridge_test_msgs__action__TestEmpty_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} rosbridge_test_msgs__action__TestEmpty_SendGoal_Response;

// Struct for a sequence of rosbridge_test_msgs__action__TestEmpty_SendGoal_Response.
typedef struct rosbridge_test_msgs__action__TestEmpty_SendGoal_Response__Sequence
{
  rosbridge_test_msgs__action__TestEmpty_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rosbridge_test_msgs__action__TestEmpty_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/TestEmpty in the package rosbridge_test_msgs.
typedef struct rosbridge_test_msgs__action__TestEmpty_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} rosbridge_test_msgs__action__TestEmpty_GetResult_Request;

// Struct for a sequence of rosbridge_test_msgs__action__TestEmpty_GetResult_Request.
typedef struct rosbridge_test_msgs__action__TestEmpty_GetResult_Request__Sequence
{
  rosbridge_test_msgs__action__TestEmpty_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rosbridge_test_msgs__action__TestEmpty_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "rosbridge_test_msgs/action/detail/test_empty__struct.h"

/// Struct defined in action/TestEmpty in the package rosbridge_test_msgs.
typedef struct rosbridge_test_msgs__action__TestEmpty_GetResult_Response
{
  int8_t status;
  rosbridge_test_msgs__action__TestEmpty_Result result;
} rosbridge_test_msgs__action__TestEmpty_GetResult_Response;

// Struct for a sequence of rosbridge_test_msgs__action__TestEmpty_GetResult_Response.
typedef struct rosbridge_test_msgs__action__TestEmpty_GetResult_Response__Sequence
{
  rosbridge_test_msgs__action__TestEmpty_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rosbridge_test_msgs__action__TestEmpty_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "rosbridge_test_msgs/action/detail/test_empty__struct.h"

/// Struct defined in action/TestEmpty in the package rosbridge_test_msgs.
typedef struct rosbridge_test_msgs__action__TestEmpty_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  rosbridge_test_msgs__action__TestEmpty_Feedback feedback;
} rosbridge_test_msgs__action__TestEmpty_FeedbackMessage;

// Struct for a sequence of rosbridge_test_msgs__action__TestEmpty_FeedbackMessage.
typedef struct rosbridge_test_msgs__action__TestEmpty_FeedbackMessage__Sequence
{
  rosbridge_test_msgs__action__TestEmpty_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rosbridge_test_msgs__action__TestEmpty_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROSBRIDGE_TEST_MSGS__ACTION__DETAIL__TEST_EMPTY__STRUCT_H_
