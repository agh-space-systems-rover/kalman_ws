// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rosbridge_test_msgs:action/TestResultOnly.idl
// generated code does not contain a copyright notice

#ifndef ROSBRIDGE_TEST_MSGS__ACTION__DETAIL__TEST_RESULT_ONLY__STRUCT_H_
#define ROSBRIDGE_TEST_MSGS__ACTION__DETAIL__TEST_RESULT_ONLY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/TestResultOnly in the package rosbridge_test_msgs.
typedef struct rosbridge_test_msgs__action__TestResultOnly_Goal
{
  uint8_t structure_needs_at_least_one_member;
} rosbridge_test_msgs__action__TestResultOnly_Goal;

// Struct for a sequence of rosbridge_test_msgs__action__TestResultOnly_Goal.
typedef struct rosbridge_test_msgs__action__TestResultOnly_Goal__Sequence
{
  rosbridge_test_msgs__action__TestResultOnly_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rosbridge_test_msgs__action__TestResultOnly_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/TestResultOnly in the package rosbridge_test_msgs.
typedef struct rosbridge_test_msgs__action__TestResultOnly_Result
{
  uint8_t structure_needs_at_least_one_member;
} rosbridge_test_msgs__action__TestResultOnly_Result;

// Struct for a sequence of rosbridge_test_msgs__action__TestResultOnly_Result.
typedef struct rosbridge_test_msgs__action__TestResultOnly_Result__Sequence
{
  rosbridge_test_msgs__action__TestResultOnly_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rosbridge_test_msgs__action__TestResultOnly_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/TestResultOnly in the package rosbridge_test_msgs.
typedef struct rosbridge_test_msgs__action__TestResultOnly_Feedback
{
  int32_t data;
} rosbridge_test_msgs__action__TestResultOnly_Feedback;

// Struct for a sequence of rosbridge_test_msgs__action__TestResultOnly_Feedback.
typedef struct rosbridge_test_msgs__action__TestResultOnly_Feedback__Sequence
{
  rosbridge_test_msgs__action__TestResultOnly_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rosbridge_test_msgs__action__TestResultOnly_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "rosbridge_test_msgs/action/detail/test_result_only__struct.h"

/// Struct defined in action/TestResultOnly in the package rosbridge_test_msgs.
typedef struct rosbridge_test_msgs__action__TestResultOnly_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  rosbridge_test_msgs__action__TestResultOnly_Goal goal;
} rosbridge_test_msgs__action__TestResultOnly_SendGoal_Request;

// Struct for a sequence of rosbridge_test_msgs__action__TestResultOnly_SendGoal_Request.
typedef struct rosbridge_test_msgs__action__TestResultOnly_SendGoal_Request__Sequence
{
  rosbridge_test_msgs__action__TestResultOnly_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rosbridge_test_msgs__action__TestResultOnly_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/TestResultOnly in the package rosbridge_test_msgs.
typedef struct rosbridge_test_msgs__action__TestResultOnly_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} rosbridge_test_msgs__action__TestResultOnly_SendGoal_Response;

// Struct for a sequence of rosbridge_test_msgs__action__TestResultOnly_SendGoal_Response.
typedef struct rosbridge_test_msgs__action__TestResultOnly_SendGoal_Response__Sequence
{
  rosbridge_test_msgs__action__TestResultOnly_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rosbridge_test_msgs__action__TestResultOnly_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/TestResultOnly in the package rosbridge_test_msgs.
typedef struct rosbridge_test_msgs__action__TestResultOnly_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} rosbridge_test_msgs__action__TestResultOnly_GetResult_Request;

// Struct for a sequence of rosbridge_test_msgs__action__TestResultOnly_GetResult_Request.
typedef struct rosbridge_test_msgs__action__TestResultOnly_GetResult_Request__Sequence
{
  rosbridge_test_msgs__action__TestResultOnly_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rosbridge_test_msgs__action__TestResultOnly_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "rosbridge_test_msgs/action/detail/test_result_only__struct.h"

/// Struct defined in action/TestResultOnly in the package rosbridge_test_msgs.
typedef struct rosbridge_test_msgs__action__TestResultOnly_GetResult_Response
{
  int8_t status;
  rosbridge_test_msgs__action__TestResultOnly_Result result;
} rosbridge_test_msgs__action__TestResultOnly_GetResult_Response;

// Struct for a sequence of rosbridge_test_msgs__action__TestResultOnly_GetResult_Response.
typedef struct rosbridge_test_msgs__action__TestResultOnly_GetResult_Response__Sequence
{
  rosbridge_test_msgs__action__TestResultOnly_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rosbridge_test_msgs__action__TestResultOnly_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "rosbridge_test_msgs/action/detail/test_result_only__struct.h"

/// Struct defined in action/TestResultOnly in the package rosbridge_test_msgs.
typedef struct rosbridge_test_msgs__action__TestResultOnly_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  rosbridge_test_msgs__action__TestResultOnly_Feedback feedback;
} rosbridge_test_msgs__action__TestResultOnly_FeedbackMessage;

// Struct for a sequence of rosbridge_test_msgs__action__TestResultOnly_FeedbackMessage.
typedef struct rosbridge_test_msgs__action__TestResultOnly_FeedbackMessage__Sequence
{
  rosbridge_test_msgs__action__TestResultOnly_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rosbridge_test_msgs__action__TestResultOnly_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROSBRIDGE_TEST_MSGS__ACTION__DETAIL__TEST_RESULT_ONLY__STRUCT_H_
