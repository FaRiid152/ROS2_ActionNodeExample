// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mission_action:action/MissionAction.idl
// generated code does not contain a copyright notice

#ifndef MISSION_ACTION__ACTION__DETAIL__MISSION_ACTION__STRUCT_H_
#define MISSION_ACTION__ACTION__DETAIL__MISSION_ACTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'mission_id'
// Member 'mission_details'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/MissionAction in the package mission_action.
typedef struct mission_action__action__MissionAction_Goal
{
  /// Goal definition
  rosidl_runtime_c__String mission_id;
  /// This could be a JSON string or a structured string representing the mission details.
  rosidl_runtime_c__String mission_details;
} mission_action__action__MissionAction_Goal;

// Struct for a sequence of mission_action__action__MissionAction_Goal.
typedef struct mission_action__action__MissionAction_Goal__Sequence
{
  mission_action__action__MissionAction_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mission_action__action__MissionAction_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/MissionAction in the package mission_action.
typedef struct mission_action__action__MissionAction_Result
{
  bool success;
  rosidl_runtime_c__String message;
} mission_action__action__MissionAction_Result;

// Struct for a sequence of mission_action__action__MissionAction_Result.
typedef struct mission_action__action__MissionAction_Result__Sequence
{
  mission_action__action__MissionAction_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mission_action__action__MissionAction_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/MissionAction in the package mission_action.
typedef struct mission_action__action__MissionAction_Feedback
{
  uint8_t structure_needs_at_least_one_member;
} mission_action__action__MissionAction_Feedback;

// Struct for a sequence of mission_action__action__MissionAction_Feedback.
typedef struct mission_action__action__MissionAction_Feedback__Sequence
{
  mission_action__action__MissionAction_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mission_action__action__MissionAction_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "mission_action/action/detail/mission_action__struct.h"

/// Struct defined in action/MissionAction in the package mission_action.
typedef struct mission_action__action__MissionAction_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  mission_action__action__MissionAction_Goal goal;
} mission_action__action__MissionAction_SendGoal_Request;

// Struct for a sequence of mission_action__action__MissionAction_SendGoal_Request.
typedef struct mission_action__action__MissionAction_SendGoal_Request__Sequence
{
  mission_action__action__MissionAction_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mission_action__action__MissionAction_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/MissionAction in the package mission_action.
typedef struct mission_action__action__MissionAction_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} mission_action__action__MissionAction_SendGoal_Response;

// Struct for a sequence of mission_action__action__MissionAction_SendGoal_Response.
typedef struct mission_action__action__MissionAction_SendGoal_Response__Sequence
{
  mission_action__action__MissionAction_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mission_action__action__MissionAction_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/MissionAction in the package mission_action.
typedef struct mission_action__action__MissionAction_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} mission_action__action__MissionAction_GetResult_Request;

// Struct for a sequence of mission_action__action__MissionAction_GetResult_Request.
typedef struct mission_action__action__MissionAction_GetResult_Request__Sequence
{
  mission_action__action__MissionAction_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mission_action__action__MissionAction_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "mission_action/action/detail/mission_action__struct.h"

/// Struct defined in action/MissionAction in the package mission_action.
typedef struct mission_action__action__MissionAction_GetResult_Response
{
  int8_t status;
  mission_action__action__MissionAction_Result result;
} mission_action__action__MissionAction_GetResult_Response;

// Struct for a sequence of mission_action__action__MissionAction_GetResult_Response.
typedef struct mission_action__action__MissionAction_GetResult_Response__Sequence
{
  mission_action__action__MissionAction_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mission_action__action__MissionAction_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "mission_action/action/detail/mission_action__struct.h"

/// Struct defined in action/MissionAction in the package mission_action.
typedef struct mission_action__action__MissionAction_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  mission_action__action__MissionAction_Feedback feedback;
} mission_action__action__MissionAction_FeedbackMessage;

// Struct for a sequence of mission_action__action__MissionAction_FeedbackMessage.
typedef struct mission_action__action__MissionAction_FeedbackMessage__Sequence
{
  mission_action__action__MissionAction_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mission_action__action__MissionAction_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MISSION_ACTION__ACTION__DETAIL__MISSION_ACTION__STRUCT_H_
