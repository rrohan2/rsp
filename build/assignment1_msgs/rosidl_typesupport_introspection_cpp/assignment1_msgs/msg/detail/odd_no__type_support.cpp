// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from assignment1_msgs:msg/OddNo.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "assignment1_msgs/msg/detail/odd_no__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace assignment1_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void OddNo_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) assignment1_msgs::msg::OddNo(_init);
}

void OddNo_fini_function(void * message_memory)
{
  auto typed_message = static_cast<assignment1_msgs::msg::OddNo *>(message_memory);
  typed_message->~OddNo();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember OddNo_message_member_array[1] = {
  {
    "oddnos",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(assignment1_msgs::msg::OddNo, oddnos),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers OddNo_message_members = {
  "assignment1_msgs::msg",  // message namespace
  "OddNo",  // message name
  1,  // number of fields
  sizeof(assignment1_msgs::msg::OddNo),
  OddNo_message_member_array,  // message members
  OddNo_init_function,  // function to initialize message memory (memory has to be allocated)
  OddNo_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t OddNo_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &OddNo_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace assignment1_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<assignment1_msgs::msg::OddNo>()
{
  return &::assignment1_msgs::msg::rosidl_typesupport_introspection_cpp::OddNo_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, assignment1_msgs, msg, OddNo)() {
  return &::assignment1_msgs::msg::rosidl_typesupport_introspection_cpp::OddNo_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
