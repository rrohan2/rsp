// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pnp_msgs:action/PickAndPlace.idl
// generated code does not contain a copyright notice

#ifndef PNP_MSGS__ACTION__DETAIL__PICK_AND_PLACE__STRUCT_H_
#define PNP_MSGS__ACTION__DETAIL__PICK_AND_PLACE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in action/PickAndPlace in the package pnp_msgs.
typedef struct pnp_msgs__action__PickAndPlace_Goal
{
  float pick_position[2];
  float place_position[2];
} pnp_msgs__action__PickAndPlace_Goal;

// Struct for a sequence of pnp_msgs__action__PickAndPlace_Goal.
typedef struct pnp_msgs__action__PickAndPlace_Goal__Sequence
{
  pnp_msgs__action__PickAndPlace_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pnp_msgs__action__PickAndPlace_Goal__Sequence;


// Constants defined in the message

// Struct defined in action/PickAndPlace in the package pnp_msgs.
typedef struct pnp_msgs__action__PickAndPlace_Result
{
  uint8_t result;
} pnp_msgs__action__PickAndPlace_Result;

// Struct for a sequence of pnp_msgs__action__PickAndPlace_Result.
typedef struct pnp_msgs__action__PickAndPlace_Result__Sequence
{
  pnp_msgs__action__PickAndPlace_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pnp_msgs__action__PickAndPlace_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'robot_gripper_position'
#include "rosidl_runtime_c/string.h"

// Struct defined in action/PickAndPlace in the package pnp_msgs.
typedef struct pnp_msgs__action__PickAndPlace_Feedback
{
  rosidl_runtime_c__String robot_gripper_position;
} pnp_msgs__action__PickAndPlace_Feedback;

// Struct for a sequence of pnp_msgs__action__PickAndPlace_Feedback.
typedef struct pnp_msgs__action__PickAndPlace_Feedback__Sequence
{
  pnp_msgs__action__PickAndPlace_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pnp_msgs__action__PickAndPlace_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "pnp_msgs/action/detail/pick_and_place__struct.h"

// Struct defined in action/PickAndPlace in the package pnp_msgs.
typedef struct pnp_msgs__action__PickAndPlace_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  pnp_msgs__action__PickAndPlace_Goal goal;
} pnp_msgs__action__PickAndPlace_SendGoal_Request;

// Struct for a sequence of pnp_msgs__action__PickAndPlace_SendGoal_Request.
typedef struct pnp_msgs__action__PickAndPlace_SendGoal_Request__Sequence
{
  pnp_msgs__action__PickAndPlace_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pnp_msgs__action__PickAndPlace_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

// Struct defined in action/PickAndPlace in the package pnp_msgs.
typedef struct pnp_msgs__action__PickAndPlace_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} pnp_msgs__action__PickAndPlace_SendGoal_Response;

// Struct for a sequence of pnp_msgs__action__PickAndPlace_SendGoal_Response.
typedef struct pnp_msgs__action__PickAndPlace_SendGoal_Response__Sequence
{
  pnp_msgs__action__PickAndPlace_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pnp_msgs__action__PickAndPlace_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

// Struct defined in action/PickAndPlace in the package pnp_msgs.
typedef struct pnp_msgs__action__PickAndPlace_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} pnp_msgs__action__PickAndPlace_GetResult_Request;

// Struct for a sequence of pnp_msgs__action__PickAndPlace_GetResult_Request.
typedef struct pnp_msgs__action__PickAndPlace_GetResult_Request__Sequence
{
  pnp_msgs__action__PickAndPlace_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pnp_msgs__action__PickAndPlace_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "pnp_msgs/action/detail/pick_and_place__struct.h"

// Struct defined in action/PickAndPlace in the package pnp_msgs.
typedef struct pnp_msgs__action__PickAndPlace_GetResult_Response
{
  int8_t status;
  pnp_msgs__action__PickAndPlace_Result result;
} pnp_msgs__action__PickAndPlace_GetResult_Response;

// Struct for a sequence of pnp_msgs__action__PickAndPlace_GetResult_Response.
typedef struct pnp_msgs__action__PickAndPlace_GetResult_Response__Sequence
{
  pnp_msgs__action__PickAndPlace_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pnp_msgs__action__PickAndPlace_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "pnp_msgs/action/detail/pick_and_place__struct.h"

// Struct defined in action/PickAndPlace in the package pnp_msgs.
typedef struct pnp_msgs__action__PickAndPlace_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  pnp_msgs__action__PickAndPlace_Feedback feedback;
} pnp_msgs__action__PickAndPlace_FeedbackMessage;

// Struct for a sequence of pnp_msgs__action__PickAndPlace_FeedbackMessage.
typedef struct pnp_msgs__action__PickAndPlace_FeedbackMessage__Sequence
{
  pnp_msgs__action__PickAndPlace_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pnp_msgs__action__PickAndPlace_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PNP_MSGS__ACTION__DETAIL__PICK_AND_PLACE__STRUCT_H_
