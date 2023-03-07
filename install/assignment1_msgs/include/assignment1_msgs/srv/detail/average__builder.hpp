// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from assignment1_msgs:srv/Average.idl
// generated code does not contain a copyright notice

#ifndef ASSIGNMENT1_MSGS__SRV__DETAIL__AVERAGE__BUILDER_HPP_
#define ASSIGNMENT1_MSGS__SRV__DETAIL__AVERAGE__BUILDER_HPP_

#include "assignment1_msgs/srv/detail/average__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace assignment1_msgs
{

namespace srv
{

namespace builder
{

class Init_Average_Request_c
{
public:
  explicit Init_Average_Request_c(::assignment1_msgs::srv::Average_Request & msg)
  : msg_(msg)
  {}
  ::assignment1_msgs::srv::Average_Request c(::assignment1_msgs::srv::Average_Request::_c_type arg)
  {
    msg_.c = std::move(arg);
    return std::move(msg_);
  }

private:
  ::assignment1_msgs::srv::Average_Request msg_;
};

class Init_Average_Request_b
{
public:
  explicit Init_Average_Request_b(::assignment1_msgs::srv::Average_Request & msg)
  : msg_(msg)
  {}
  Init_Average_Request_c b(::assignment1_msgs::srv::Average_Request::_b_type arg)
  {
    msg_.b = std::move(arg);
    return Init_Average_Request_c(msg_);
  }

private:
  ::assignment1_msgs::srv::Average_Request msg_;
};

class Init_Average_Request_a
{
public:
  Init_Average_Request_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Average_Request_b a(::assignment1_msgs::srv::Average_Request::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_Average_Request_b(msg_);
  }

private:
  ::assignment1_msgs::srv::Average_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::assignment1_msgs::srv::Average_Request>()
{
  return assignment1_msgs::srv::builder::Init_Average_Request_a();
}

}  // namespace assignment1_msgs


namespace assignment1_msgs
{

namespace srv
{

namespace builder
{

class Init_Average_Response_average
{
public:
  Init_Average_Response_average()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::assignment1_msgs::srv::Average_Response average(::assignment1_msgs::srv::Average_Response::_average_type arg)
  {
    msg_.average = std::move(arg);
    return std::move(msg_);
  }

private:
  ::assignment1_msgs::srv::Average_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::assignment1_msgs::srv::Average_Response>()
{
  return assignment1_msgs::srv::builder::Init_Average_Response_average();
}

}  // namespace assignment1_msgs

#endif  // ASSIGNMENT1_MSGS__SRV__DETAIL__AVERAGE__BUILDER_HPP_
