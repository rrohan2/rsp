// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from assignment1_msgs:srv/Average.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "assignment1_msgs/srv/detail/average__rosidl_typesupport_introspection_c.h"
#include "assignment1_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "assignment1_msgs/srv/detail/average__functions.h"
#include "assignment1_msgs/srv/detail/average__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Average_Request__rosidl_typesupport_introspection_c__Average_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  assignment1_msgs__srv__Average_Request__init(message_memory);
}

void Average_Request__rosidl_typesupport_introspection_c__Average_Request_fini_function(void * message_memory)
{
  assignment1_msgs__srv__Average_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Average_Request__rosidl_typesupport_introspection_c__Average_Request_message_member_array[3] = {
  {
    "a",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(assignment1_msgs__srv__Average_Request, a),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "b",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(assignment1_msgs__srv__Average_Request, b),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "c",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(assignment1_msgs__srv__Average_Request, c),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Average_Request__rosidl_typesupport_introspection_c__Average_Request_message_members = {
  "assignment1_msgs__srv",  // message namespace
  "Average_Request",  // message name
  3,  // number of fields
  sizeof(assignment1_msgs__srv__Average_Request),
  Average_Request__rosidl_typesupport_introspection_c__Average_Request_message_member_array,  // message members
  Average_Request__rosidl_typesupport_introspection_c__Average_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  Average_Request__rosidl_typesupport_introspection_c__Average_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Average_Request__rosidl_typesupport_introspection_c__Average_Request_message_type_support_handle = {
  0,
  &Average_Request__rosidl_typesupport_introspection_c__Average_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_assignment1_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, assignment1_msgs, srv, Average_Request)() {
  if (!Average_Request__rosidl_typesupport_introspection_c__Average_Request_message_type_support_handle.typesupport_identifier) {
    Average_Request__rosidl_typesupport_introspection_c__Average_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Average_Request__rosidl_typesupport_introspection_c__Average_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "assignment1_msgs/srv/detail/average__rosidl_typesupport_introspection_c.h"
// already included above
// #include "assignment1_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "assignment1_msgs/srv/detail/average__functions.h"
// already included above
// #include "assignment1_msgs/srv/detail/average__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Average_Response__rosidl_typesupport_introspection_c__Average_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  assignment1_msgs__srv__Average_Response__init(message_memory);
}

void Average_Response__rosidl_typesupport_introspection_c__Average_Response_fini_function(void * message_memory)
{
  assignment1_msgs__srv__Average_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Average_Response__rosidl_typesupport_introspection_c__Average_Response_message_member_array[1] = {
  {
    "average",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(assignment1_msgs__srv__Average_Response, average),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Average_Response__rosidl_typesupport_introspection_c__Average_Response_message_members = {
  "assignment1_msgs__srv",  // message namespace
  "Average_Response",  // message name
  1,  // number of fields
  sizeof(assignment1_msgs__srv__Average_Response),
  Average_Response__rosidl_typesupport_introspection_c__Average_Response_message_member_array,  // message members
  Average_Response__rosidl_typesupport_introspection_c__Average_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  Average_Response__rosidl_typesupport_introspection_c__Average_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Average_Response__rosidl_typesupport_introspection_c__Average_Response_message_type_support_handle = {
  0,
  &Average_Response__rosidl_typesupport_introspection_c__Average_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_assignment1_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, assignment1_msgs, srv, Average_Response)() {
  if (!Average_Response__rosidl_typesupport_introspection_c__Average_Response_message_type_support_handle.typesupport_identifier) {
    Average_Response__rosidl_typesupport_introspection_c__Average_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Average_Response__rosidl_typesupport_introspection_c__Average_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "assignment1_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "assignment1_msgs/srv/detail/average__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers assignment1_msgs__srv__detail__average__rosidl_typesupport_introspection_c__Average_service_members = {
  "assignment1_msgs__srv",  // service namespace
  "Average",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // assignment1_msgs__srv__detail__average__rosidl_typesupport_introspection_c__Average_Request_message_type_support_handle,
  NULL  // response message
  // assignment1_msgs__srv__detail__average__rosidl_typesupport_introspection_c__Average_Response_message_type_support_handle
};

static rosidl_service_type_support_t assignment1_msgs__srv__detail__average__rosidl_typesupport_introspection_c__Average_service_type_support_handle = {
  0,
  &assignment1_msgs__srv__detail__average__rosidl_typesupport_introspection_c__Average_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, assignment1_msgs, srv, Average_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, assignment1_msgs, srv, Average_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_assignment1_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, assignment1_msgs, srv, Average)() {
  if (!assignment1_msgs__srv__detail__average__rosidl_typesupport_introspection_c__Average_service_type_support_handle.typesupport_identifier) {
    assignment1_msgs__srv__detail__average__rosidl_typesupport_introspection_c__Average_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)assignment1_msgs__srv__detail__average__rosidl_typesupport_introspection_c__Average_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, assignment1_msgs, srv, Average_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, assignment1_msgs, srv, Average_Response)()->data;
  }

  return &assignment1_msgs__srv__detail__average__rosidl_typesupport_introspection_c__Average_service_type_support_handle;
}
