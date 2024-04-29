// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rosbridge_test_msgs:action/TestMultipleGoalFields.idl
// generated code does not contain a copyright notice

#ifndef ROSBRIDGE_TEST_MSGS__ACTION__DETAIL__TEST_MULTIPLE_GOAL_FIELDS__BUILDER_HPP_
#define ROSBRIDGE_TEST_MSGS__ACTION__DETAIL__TEST_MULTIPLE_GOAL_FIELDS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rosbridge_test_msgs/action/detail/test_multiple_goal_fields__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rosbridge_test_msgs
{

namespace action
{

namespace builder
{

class Init_TestMultipleGoalFields_Goal_bool_value
{
public:
  explicit Init_TestMultipleGoalFields_Goal_bool_value(::rosbridge_test_msgs::action::TestMultipleGoalFields_Goal & msg)
  : msg_(msg)
  {}
  ::rosbridge_test_msgs::action::TestMultipleGoalFields_Goal bool_value(::rosbridge_test_msgs::action::TestMultipleGoalFields_Goal::_bool_value_type arg)
  {
    msg_.bool_value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rosbridge_test_msgs::action::TestMultipleGoalFields_Goal msg_;
};

class Init_TestMultipleGoalFields_Goal_string
{
public:
  explicit Init_TestMultipleGoalFields_Goal_string(::rosbridge_test_msgs::action::TestMultipleGoalFields_Goal & msg)
  : msg_(msg)
  {}
  Init_TestMultipleGoalFields_Goal_bool_value string(::rosbridge_test_msgs::action::TestMultipleGoalFields_Goal::_string_type arg)
  {
    msg_.string = std::move(arg);
    return Init_TestMultipleGoalFields_Goal_bool_value(msg_);
  }

private:
  ::rosbridge_test_msgs::action::TestMultipleGoalFields_Goal msg_;
};

class Init_TestMultipleGoalFields_Goal_float_value
{
public:
  explicit Init_TestMultipleGoalFields_Goal_float_value(::rosbridge_test_msgs::action::TestMultipleGoalFields_Goal & msg)
  : msg_(msg)
  {}
  Init_TestMultipleGoalFields_Goal_string float_value(::rosbridge_test_msgs::action::TestMultipleGoalFields_Goal::_float_value_type arg)
  {
    msg_.float_value = std::move(arg);
    return Init_TestMultipleGoalFields_Goal_string(msg_);
  }

private:
  ::rosbridge_test_msgs::action::TestMultipleGoalFields_Goal msg_;
};

class Init_TestMultipleGoalFields_Goal_int_value
{
public:
  Init_TestMultipleGoalFields_Goal_int_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TestMultipleGoalFields_Goal_float_value int_value(::rosbridge_test_msgs::action::TestMultipleGoalFields_Goal::_int_value_type arg)
  {
    msg_.int_value = std::move(arg);
    return Init_TestMultipleGoalFields_Goal_float_value(msg_);
  }

private:
  ::rosbridge_test_msgs::action::TestMultipleGoalFields_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::rosbridge_test_msgs::action::TestMultipleGoalFields_Goal>()
{
  return rosbridge_test_msgs::action::builder::Init_TestMultipleGoalFields_Goal_int_value();
}

}  // namespace rosbridge_test_msgs


namespace rosbridge_test_msgs
{

namespace action
{


}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::rosbridge_test_msgs::action::TestMultipleGoalFields_Result>()
{
  return ::rosbridge_test_msgs::action::TestMultipleGoalFields_Result(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace rosbridge_test_msgs


namespace rosbridge_test_msgs
{

namespace action
{


}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::rosbridge_test_msgs::action::TestMultipleGoalFields_Feedback>()
{
  return ::rosbridge_test_msgs::action::TestMultipleGoalFields_Feedback(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace rosbridge_test_msgs


namespace rosbridge_test_msgs
{

namespace action
{

namespace builder
{

class Init_TestMultipleGoalFields_SendGoal_Request_goal
{
public:
  explicit Init_TestMultipleGoalFields_SendGoal_Request_goal(::rosbridge_test_msgs::action::TestMultipleGoalFields_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::rosbridge_test_msgs::action::TestMultipleGoalFields_SendGoal_Request goal(::rosbridge_test_msgs::action::TestMultipleGoalFields_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rosbridge_test_msgs::action::TestMultipleGoalFields_SendGoal_Request msg_;
};

class Init_TestMultipleGoalFields_SendGoal_Request_goal_id
{
public:
  Init_TestMultipleGoalFields_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TestMultipleGoalFields_SendGoal_Request_goal goal_id(::rosbridge_test_msgs::action::TestMultipleGoalFields_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_TestMultipleGoalFields_SendGoal_Request_goal(msg_);
  }

private:
  ::rosbridge_test_msgs::action::TestMultipleGoalFields_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::rosbridge_test_msgs::action::TestMultipleGoalFields_SendGoal_Request>()
{
  return rosbridge_test_msgs::action::builder::Init_TestMultipleGoalFields_SendGoal_Request_goal_id();
}

}  // namespace rosbridge_test_msgs


namespace rosbridge_test_msgs
{

namespace action
{

namespace builder
{

class Init_TestMultipleGoalFields_SendGoal_Response_stamp
{
public:
  explicit Init_TestMultipleGoalFields_SendGoal_Response_stamp(::rosbridge_test_msgs::action::TestMultipleGoalFields_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::rosbridge_test_msgs::action::TestMultipleGoalFields_SendGoal_Response stamp(::rosbridge_test_msgs::action::TestMultipleGoalFields_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rosbridge_test_msgs::action::TestMultipleGoalFields_SendGoal_Response msg_;
};

class Init_TestMultipleGoalFields_SendGoal_Response_accepted
{
public:
  Init_TestMultipleGoalFields_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TestMultipleGoalFields_SendGoal_Response_stamp accepted(::rosbridge_test_msgs::action::TestMultipleGoalFields_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_TestMultipleGoalFields_SendGoal_Response_stamp(msg_);
  }

private:
  ::rosbridge_test_msgs::action::TestMultipleGoalFields_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::rosbridge_test_msgs::action::TestMultipleGoalFields_SendGoal_Response>()
{
  return rosbridge_test_msgs::action::builder::Init_TestMultipleGoalFields_SendGoal_Response_accepted();
}

}  // namespace rosbridge_test_msgs


namespace rosbridge_test_msgs
{

namespace action
{

namespace builder
{

class Init_TestMultipleGoalFields_GetResult_Request_goal_id
{
public:
  Init_TestMultipleGoalFields_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rosbridge_test_msgs::action::TestMultipleGoalFields_GetResult_Request goal_id(::rosbridge_test_msgs::action::TestMultipleGoalFields_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rosbridge_test_msgs::action::TestMultipleGoalFields_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::rosbridge_test_msgs::action::TestMultipleGoalFields_GetResult_Request>()
{
  return rosbridge_test_msgs::action::builder::Init_TestMultipleGoalFields_GetResult_Request_goal_id();
}

}  // namespace rosbridge_test_msgs


namespace rosbridge_test_msgs
{

namespace action
{

namespace builder
{

class Init_TestMultipleGoalFields_GetResult_Response_result
{
public:
  explicit Init_TestMultipleGoalFields_GetResult_Response_result(::rosbridge_test_msgs::action::TestMultipleGoalFields_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::rosbridge_test_msgs::action::TestMultipleGoalFields_GetResult_Response result(::rosbridge_test_msgs::action::TestMultipleGoalFields_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rosbridge_test_msgs::action::TestMultipleGoalFields_GetResult_Response msg_;
};

class Init_TestMultipleGoalFields_GetResult_Response_status
{
public:
  Init_TestMultipleGoalFields_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TestMultipleGoalFields_GetResult_Response_result status(::rosbridge_test_msgs::action::TestMultipleGoalFields_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_TestMultipleGoalFields_GetResult_Response_result(msg_);
  }

private:
  ::rosbridge_test_msgs::action::TestMultipleGoalFields_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::rosbridge_test_msgs::action::TestMultipleGoalFields_GetResult_Response>()
{
  return rosbridge_test_msgs::action::builder::Init_TestMultipleGoalFields_GetResult_Response_status();
}

}  // namespace rosbridge_test_msgs


namespace rosbridge_test_msgs
{

namespace action
{

namespace builder
{

class Init_TestMultipleGoalFields_FeedbackMessage_feedback
{
public:
  explicit Init_TestMultipleGoalFields_FeedbackMessage_feedback(::rosbridge_test_msgs::action::TestMultipleGoalFields_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::rosbridge_test_msgs::action::TestMultipleGoalFields_FeedbackMessage feedback(::rosbridge_test_msgs::action::TestMultipleGoalFields_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rosbridge_test_msgs::action::TestMultipleGoalFields_FeedbackMessage msg_;
};

class Init_TestMultipleGoalFields_FeedbackMessage_goal_id
{
public:
  Init_TestMultipleGoalFields_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TestMultipleGoalFields_FeedbackMessage_feedback goal_id(::rosbridge_test_msgs::action::TestMultipleGoalFields_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_TestMultipleGoalFields_FeedbackMessage_feedback(msg_);
  }

private:
  ::rosbridge_test_msgs::action::TestMultipleGoalFields_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::rosbridge_test_msgs::action::TestMultipleGoalFields_FeedbackMessage>()
{
  return rosbridge_test_msgs::action::builder::Init_TestMultipleGoalFields_FeedbackMessage_goal_id();
}

}  // namespace rosbridge_test_msgs

#endif  // ROSBRIDGE_TEST_MSGS__ACTION__DETAIL__TEST_MULTIPLE_GOAL_FIELDS__BUILDER_HPP_
