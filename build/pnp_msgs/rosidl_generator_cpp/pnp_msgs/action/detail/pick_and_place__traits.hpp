// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pnp_msgs:action/PickAndPlace.idl
// generated code does not contain a copyright notice

#ifndef PNP_MSGS__ACTION__DETAIL__PICK_AND_PLACE__TRAITS_HPP_
#define PNP_MSGS__ACTION__DETAIL__PICK_AND_PLACE__TRAITS_HPP_

#include "pnp_msgs/action/detail/pick_and_place__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const pnp_msgs::action::PickAndPlace_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pick_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.pick_position.size() == 0) {
      out << "pick_position: []\n";
    } else {
      out << "pick_position:\n";
      for (auto item : msg.pick_position) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: place_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.place_position.size() == 0) {
      out << "place_position: []\n";
    } else {
      out << "place_position:\n";
      for (auto item : msg.place_position) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const pnp_msgs::action::PickAndPlace_Goal & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<pnp_msgs::action::PickAndPlace_Goal>()
{
  return "pnp_msgs::action::PickAndPlace_Goal";
}

template<>
inline const char * name<pnp_msgs::action::PickAndPlace_Goal>()
{
  return "pnp_msgs/action/PickAndPlace_Goal";
}

template<>
struct has_fixed_size<pnp_msgs::action::PickAndPlace_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<pnp_msgs::action::PickAndPlace_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<pnp_msgs::action::PickAndPlace_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const pnp_msgs::action::PickAndPlace_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result: ";
    value_to_yaml(msg.result, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const pnp_msgs::action::PickAndPlace_Result & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<pnp_msgs::action::PickAndPlace_Result>()
{
  return "pnp_msgs::action::PickAndPlace_Result";
}

template<>
inline const char * name<pnp_msgs::action::PickAndPlace_Result>()
{
  return "pnp_msgs/action/PickAndPlace_Result";
}

template<>
struct has_fixed_size<pnp_msgs::action::PickAndPlace_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<pnp_msgs::action::PickAndPlace_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<pnp_msgs::action::PickAndPlace_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const pnp_msgs::action::PickAndPlace_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: robot_gripper_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robot_gripper_position: ";
    value_to_yaml(msg.robot_gripper_position, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const pnp_msgs::action::PickAndPlace_Feedback & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<pnp_msgs::action::PickAndPlace_Feedback>()
{
  return "pnp_msgs::action::PickAndPlace_Feedback";
}

template<>
inline const char * name<pnp_msgs::action::PickAndPlace_Feedback>()
{
  return "pnp_msgs/action/PickAndPlace_Feedback";
}

template<>
struct has_fixed_size<pnp_msgs::action::PickAndPlace_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<pnp_msgs::action::PickAndPlace_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<pnp_msgs::action::PickAndPlace_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "pnp_msgs/action/detail/pick_and_place__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const pnp_msgs::action::PickAndPlace_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const pnp_msgs::action::PickAndPlace_SendGoal_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<pnp_msgs::action::PickAndPlace_SendGoal_Request>()
{
  return "pnp_msgs::action::PickAndPlace_SendGoal_Request";
}

template<>
inline const char * name<pnp_msgs::action::PickAndPlace_SendGoal_Request>()
{
  return "pnp_msgs/action/PickAndPlace_SendGoal_Request";
}

template<>
struct has_fixed_size<pnp_msgs::action::PickAndPlace_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<pnp_msgs::action::PickAndPlace_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<pnp_msgs::action::PickAndPlace_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<pnp_msgs::action::PickAndPlace_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<pnp_msgs::action::PickAndPlace_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const pnp_msgs::action::PickAndPlace_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const pnp_msgs::action::PickAndPlace_SendGoal_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<pnp_msgs::action::PickAndPlace_SendGoal_Response>()
{
  return "pnp_msgs::action::PickAndPlace_SendGoal_Response";
}

template<>
inline const char * name<pnp_msgs::action::PickAndPlace_SendGoal_Response>()
{
  return "pnp_msgs/action/PickAndPlace_SendGoal_Response";
}

template<>
struct has_fixed_size<pnp_msgs::action::PickAndPlace_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<pnp_msgs::action::PickAndPlace_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<pnp_msgs::action::PickAndPlace_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<pnp_msgs::action::PickAndPlace_SendGoal>()
{
  return "pnp_msgs::action::PickAndPlace_SendGoal";
}

template<>
inline const char * name<pnp_msgs::action::PickAndPlace_SendGoal>()
{
  return "pnp_msgs/action/PickAndPlace_SendGoal";
}

template<>
struct has_fixed_size<pnp_msgs::action::PickAndPlace_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<pnp_msgs::action::PickAndPlace_SendGoal_Request>::value &&
    has_fixed_size<pnp_msgs::action::PickAndPlace_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<pnp_msgs::action::PickAndPlace_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<pnp_msgs::action::PickAndPlace_SendGoal_Request>::value &&
    has_bounded_size<pnp_msgs::action::PickAndPlace_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<pnp_msgs::action::PickAndPlace_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<pnp_msgs::action::PickAndPlace_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<pnp_msgs::action::PickAndPlace_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const pnp_msgs::action::PickAndPlace_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const pnp_msgs::action::PickAndPlace_GetResult_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<pnp_msgs::action::PickAndPlace_GetResult_Request>()
{
  return "pnp_msgs::action::PickAndPlace_GetResult_Request";
}

template<>
inline const char * name<pnp_msgs::action::PickAndPlace_GetResult_Request>()
{
  return "pnp_msgs/action/PickAndPlace_GetResult_Request";
}

template<>
struct has_fixed_size<pnp_msgs::action::PickAndPlace_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<pnp_msgs::action::PickAndPlace_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<pnp_msgs::action::PickAndPlace_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "pnp_msgs/action/detail/pick_and_place__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const pnp_msgs::action::PickAndPlace_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const pnp_msgs::action::PickAndPlace_GetResult_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<pnp_msgs::action::PickAndPlace_GetResult_Response>()
{
  return "pnp_msgs::action::PickAndPlace_GetResult_Response";
}

template<>
inline const char * name<pnp_msgs::action::PickAndPlace_GetResult_Response>()
{
  return "pnp_msgs/action/PickAndPlace_GetResult_Response";
}

template<>
struct has_fixed_size<pnp_msgs::action::PickAndPlace_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<pnp_msgs::action::PickAndPlace_Result>::value> {};

template<>
struct has_bounded_size<pnp_msgs::action::PickAndPlace_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<pnp_msgs::action::PickAndPlace_Result>::value> {};

template<>
struct is_message<pnp_msgs::action::PickAndPlace_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<pnp_msgs::action::PickAndPlace_GetResult>()
{
  return "pnp_msgs::action::PickAndPlace_GetResult";
}

template<>
inline const char * name<pnp_msgs::action::PickAndPlace_GetResult>()
{
  return "pnp_msgs/action/PickAndPlace_GetResult";
}

template<>
struct has_fixed_size<pnp_msgs::action::PickAndPlace_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<pnp_msgs::action::PickAndPlace_GetResult_Request>::value &&
    has_fixed_size<pnp_msgs::action::PickAndPlace_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<pnp_msgs::action::PickAndPlace_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<pnp_msgs::action::PickAndPlace_GetResult_Request>::value &&
    has_bounded_size<pnp_msgs::action::PickAndPlace_GetResult_Response>::value
  >
{
};

template<>
struct is_service<pnp_msgs::action::PickAndPlace_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<pnp_msgs::action::PickAndPlace_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<pnp_msgs::action::PickAndPlace_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "pnp_msgs/action/detail/pick_and_place__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const pnp_msgs::action::PickAndPlace_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const pnp_msgs::action::PickAndPlace_FeedbackMessage & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<pnp_msgs::action::PickAndPlace_FeedbackMessage>()
{
  return "pnp_msgs::action::PickAndPlace_FeedbackMessage";
}

template<>
inline const char * name<pnp_msgs::action::PickAndPlace_FeedbackMessage>()
{
  return "pnp_msgs/action/PickAndPlace_FeedbackMessage";
}

template<>
struct has_fixed_size<pnp_msgs::action::PickAndPlace_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<pnp_msgs::action::PickAndPlace_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<pnp_msgs::action::PickAndPlace_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<pnp_msgs::action::PickAndPlace_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<pnp_msgs::action::PickAndPlace_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<pnp_msgs::action::PickAndPlace>
  : std::true_type
{
};

template<>
struct is_action_goal<pnp_msgs::action::PickAndPlace_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<pnp_msgs::action::PickAndPlace_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<pnp_msgs::action::PickAndPlace_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // PNP_MSGS__ACTION__DETAIL__PICK_AND_PLACE__TRAITS_HPP_
