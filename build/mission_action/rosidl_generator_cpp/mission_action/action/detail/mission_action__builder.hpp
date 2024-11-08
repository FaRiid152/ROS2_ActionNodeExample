// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mission_action:action/MissionAction.idl
// generated code does not contain a copyright notice

#ifndef MISSION_ACTION__ACTION__DETAIL__MISSION_ACTION__BUILDER_HPP_
#define MISSION_ACTION__ACTION__DETAIL__MISSION_ACTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mission_action/action/detail/mission_action__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mission_action
{

namespace action
{

namespace builder
{

class Init_MissionAction_Goal_mission_details
{
public:
  explicit Init_MissionAction_Goal_mission_details(::mission_action::action::MissionAction_Goal & msg)
  : msg_(msg)
  {}
  ::mission_action::action::MissionAction_Goal mission_details(::mission_action::action::MissionAction_Goal::_mission_details_type arg)
  {
    msg_.mission_details = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_action::action::MissionAction_Goal msg_;
};

class Init_MissionAction_Goal_mission_id
{
public:
  Init_MissionAction_Goal_mission_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MissionAction_Goal_mission_details mission_id(::mission_action::action::MissionAction_Goal::_mission_id_type arg)
  {
    msg_.mission_id = std::move(arg);
    return Init_MissionAction_Goal_mission_details(msg_);
  }

private:
  ::mission_action::action::MissionAction_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_action::action::MissionAction_Goal>()
{
  return mission_action::action::builder::Init_MissionAction_Goal_mission_id();
}

}  // namespace mission_action


namespace mission_action
{

namespace action
{

namespace builder
{

class Init_MissionAction_Result_message
{
public:
  explicit Init_MissionAction_Result_message(::mission_action::action::MissionAction_Result & msg)
  : msg_(msg)
  {}
  ::mission_action::action::MissionAction_Result message(::mission_action::action::MissionAction_Result::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_action::action::MissionAction_Result msg_;
};

class Init_MissionAction_Result_success
{
public:
  Init_MissionAction_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MissionAction_Result_message success(::mission_action::action::MissionAction_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_MissionAction_Result_message(msg_);
  }

private:
  ::mission_action::action::MissionAction_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_action::action::MissionAction_Result>()
{
  return mission_action::action::builder::Init_MissionAction_Result_success();
}

}  // namespace mission_action


namespace mission_action
{

namespace action
{


}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_action::action::MissionAction_Feedback>()
{
  return ::mission_action::action::MissionAction_Feedback(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace mission_action


namespace mission_action
{

namespace action
{

namespace builder
{

class Init_MissionAction_SendGoal_Request_goal
{
public:
  explicit Init_MissionAction_SendGoal_Request_goal(::mission_action::action::MissionAction_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::mission_action::action::MissionAction_SendGoal_Request goal(::mission_action::action::MissionAction_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_action::action::MissionAction_SendGoal_Request msg_;
};

class Init_MissionAction_SendGoal_Request_goal_id
{
public:
  Init_MissionAction_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MissionAction_SendGoal_Request_goal goal_id(::mission_action::action::MissionAction_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_MissionAction_SendGoal_Request_goal(msg_);
  }

private:
  ::mission_action::action::MissionAction_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_action::action::MissionAction_SendGoal_Request>()
{
  return mission_action::action::builder::Init_MissionAction_SendGoal_Request_goal_id();
}

}  // namespace mission_action


namespace mission_action
{

namespace action
{

namespace builder
{

class Init_MissionAction_SendGoal_Response_stamp
{
public:
  explicit Init_MissionAction_SendGoal_Response_stamp(::mission_action::action::MissionAction_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::mission_action::action::MissionAction_SendGoal_Response stamp(::mission_action::action::MissionAction_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_action::action::MissionAction_SendGoal_Response msg_;
};

class Init_MissionAction_SendGoal_Response_accepted
{
public:
  Init_MissionAction_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MissionAction_SendGoal_Response_stamp accepted(::mission_action::action::MissionAction_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_MissionAction_SendGoal_Response_stamp(msg_);
  }

private:
  ::mission_action::action::MissionAction_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_action::action::MissionAction_SendGoal_Response>()
{
  return mission_action::action::builder::Init_MissionAction_SendGoal_Response_accepted();
}

}  // namespace mission_action


namespace mission_action
{

namespace action
{

namespace builder
{

class Init_MissionAction_GetResult_Request_goal_id
{
public:
  Init_MissionAction_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mission_action::action::MissionAction_GetResult_Request goal_id(::mission_action::action::MissionAction_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_action::action::MissionAction_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_action::action::MissionAction_GetResult_Request>()
{
  return mission_action::action::builder::Init_MissionAction_GetResult_Request_goal_id();
}

}  // namespace mission_action


namespace mission_action
{

namespace action
{

namespace builder
{

class Init_MissionAction_GetResult_Response_result
{
public:
  explicit Init_MissionAction_GetResult_Response_result(::mission_action::action::MissionAction_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::mission_action::action::MissionAction_GetResult_Response result(::mission_action::action::MissionAction_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_action::action::MissionAction_GetResult_Response msg_;
};

class Init_MissionAction_GetResult_Response_status
{
public:
  Init_MissionAction_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MissionAction_GetResult_Response_result status(::mission_action::action::MissionAction_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_MissionAction_GetResult_Response_result(msg_);
  }

private:
  ::mission_action::action::MissionAction_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_action::action::MissionAction_GetResult_Response>()
{
  return mission_action::action::builder::Init_MissionAction_GetResult_Response_status();
}

}  // namespace mission_action


namespace mission_action
{

namespace action
{

namespace builder
{

class Init_MissionAction_FeedbackMessage_feedback
{
public:
  explicit Init_MissionAction_FeedbackMessage_feedback(::mission_action::action::MissionAction_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::mission_action::action::MissionAction_FeedbackMessage feedback(::mission_action::action::MissionAction_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mission_action::action::MissionAction_FeedbackMessage msg_;
};

class Init_MissionAction_FeedbackMessage_goal_id
{
public:
  Init_MissionAction_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MissionAction_FeedbackMessage_feedback goal_id(::mission_action::action::MissionAction_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_MissionAction_FeedbackMessage_feedback(msg_);
  }

private:
  ::mission_action::action::MissionAction_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mission_action::action::MissionAction_FeedbackMessage>()
{
  return mission_action::action::builder::Init_MissionAction_FeedbackMessage_goal_id();
}

}  // namespace mission_action

#endif  // MISSION_ACTION__ACTION__DETAIL__MISSION_ACTION__BUILDER_HPP_
