// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pnp_msgs:action/Gripper.idl
// generated code does not contain a copyright notice

#ifndef PNP_MSGS__ACTION__DETAIL__GRIPPER__BUILDER_HPP_
#define PNP_MSGS__ACTION__DETAIL__GRIPPER__BUILDER_HPP_

#include "pnp_msgs/action/detail/gripper__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace pnp_msgs
{

namespace action
{

namespace builder
{

class Init_Gripper_Goal_gripper_position
{
public:
  Init_Gripper_Goal_gripper_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::pnp_msgs::action::Gripper_Goal gripper_position(::pnp_msgs::action::Gripper_Goal::_gripper_position_type arg)
  {
    msg_.gripper_position = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pnp_msgs::action::Gripper_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pnp_msgs::action::Gripper_Goal>()
{
  return pnp_msgs::action::builder::Init_Gripper_Goal_gripper_position();
}

}  // namespace pnp_msgs


namespace pnp_msgs
{

namespace action
{

namespace builder
{

class Init_Gripper_Result_result
{
public:
  Init_Gripper_Result_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::pnp_msgs::action::Gripper_Result result(::pnp_msgs::action::Gripper_Result::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pnp_msgs::action::Gripper_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pnp_msgs::action::Gripper_Result>()
{
  return pnp_msgs::action::builder::Init_Gripper_Result_result();
}

}  // namespace pnp_msgs


namespace pnp_msgs
{

namespace action
{

namespace builder
{

class Init_Gripper_Feedback_gripper_progress
{
public:
  Init_Gripper_Feedback_gripper_progress()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::pnp_msgs::action::Gripper_Feedback gripper_progress(::pnp_msgs::action::Gripper_Feedback::_gripper_progress_type arg)
  {
    msg_.gripper_progress = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pnp_msgs::action::Gripper_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pnp_msgs::action::Gripper_Feedback>()
{
  return pnp_msgs::action::builder::Init_Gripper_Feedback_gripper_progress();
}

}  // namespace pnp_msgs


namespace pnp_msgs
{

namespace action
{

namespace builder
{

class Init_Gripper_SendGoal_Request_goal
{
public:
  explicit Init_Gripper_SendGoal_Request_goal(::pnp_msgs::action::Gripper_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::pnp_msgs::action::Gripper_SendGoal_Request goal(::pnp_msgs::action::Gripper_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pnp_msgs::action::Gripper_SendGoal_Request msg_;
};

class Init_Gripper_SendGoal_Request_goal_id
{
public:
  Init_Gripper_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Gripper_SendGoal_Request_goal goal_id(::pnp_msgs::action::Gripper_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Gripper_SendGoal_Request_goal(msg_);
  }

private:
  ::pnp_msgs::action::Gripper_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pnp_msgs::action::Gripper_SendGoal_Request>()
{
  return pnp_msgs::action::builder::Init_Gripper_SendGoal_Request_goal_id();
}

}  // namespace pnp_msgs


namespace pnp_msgs
{

namespace action
{

namespace builder
{

class Init_Gripper_SendGoal_Response_stamp
{
public:
  explicit Init_Gripper_SendGoal_Response_stamp(::pnp_msgs::action::Gripper_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::pnp_msgs::action::Gripper_SendGoal_Response stamp(::pnp_msgs::action::Gripper_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pnp_msgs::action::Gripper_SendGoal_Response msg_;
};

class Init_Gripper_SendGoal_Response_accepted
{
public:
  Init_Gripper_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Gripper_SendGoal_Response_stamp accepted(::pnp_msgs::action::Gripper_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Gripper_SendGoal_Response_stamp(msg_);
  }

private:
  ::pnp_msgs::action::Gripper_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pnp_msgs::action::Gripper_SendGoal_Response>()
{
  return pnp_msgs::action::builder::Init_Gripper_SendGoal_Response_accepted();
}

}  // namespace pnp_msgs


namespace pnp_msgs
{

namespace action
{

namespace builder
{

class Init_Gripper_GetResult_Request_goal_id
{
public:
  Init_Gripper_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::pnp_msgs::action::Gripper_GetResult_Request goal_id(::pnp_msgs::action::Gripper_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pnp_msgs::action::Gripper_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pnp_msgs::action::Gripper_GetResult_Request>()
{
  return pnp_msgs::action::builder::Init_Gripper_GetResult_Request_goal_id();
}

}  // namespace pnp_msgs


namespace pnp_msgs
{

namespace action
{

namespace builder
{

class Init_Gripper_GetResult_Response_result
{
public:
  explicit Init_Gripper_GetResult_Response_result(::pnp_msgs::action::Gripper_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::pnp_msgs::action::Gripper_GetResult_Response result(::pnp_msgs::action::Gripper_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pnp_msgs::action::Gripper_GetResult_Response msg_;
};

class Init_Gripper_GetResult_Response_status
{
public:
  Init_Gripper_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Gripper_GetResult_Response_result status(::pnp_msgs::action::Gripper_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Gripper_GetResult_Response_result(msg_);
  }

private:
  ::pnp_msgs::action::Gripper_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pnp_msgs::action::Gripper_GetResult_Response>()
{
  return pnp_msgs::action::builder::Init_Gripper_GetResult_Response_status();
}

}  // namespace pnp_msgs


namespace pnp_msgs
{

namespace action
{

namespace builder
{

class Init_Gripper_FeedbackMessage_feedback
{
public:
  explicit Init_Gripper_FeedbackMessage_feedback(::pnp_msgs::action::Gripper_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::pnp_msgs::action::Gripper_FeedbackMessage feedback(::pnp_msgs::action::Gripper_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pnp_msgs::action::Gripper_FeedbackMessage msg_;
};

class Init_Gripper_FeedbackMessage_goal_id
{
public:
  Init_Gripper_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Gripper_FeedbackMessage_feedback goal_id(::pnp_msgs::action::Gripper_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Gripper_FeedbackMessage_feedback(msg_);
  }

private:
  ::pnp_msgs::action::Gripper_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pnp_msgs::action::Gripper_FeedbackMessage>()
{
  return pnp_msgs::action::builder::Init_Gripper_FeedbackMessage_goal_id();
}

}  // namespace pnp_msgs

#endif  // PNP_MSGS__ACTION__DETAIL__GRIPPER__BUILDER_HPP_
