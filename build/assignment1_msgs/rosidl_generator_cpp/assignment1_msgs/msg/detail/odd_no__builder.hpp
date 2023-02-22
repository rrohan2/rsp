// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from assignment1_msgs:msg/OddNo.idl
// generated code does not contain a copyright notice

#ifndef ASSIGNMENT1_MSGS__MSG__DETAIL__ODD_NO__BUILDER_HPP_
#define ASSIGNMENT1_MSGS__MSG__DETAIL__ODD_NO__BUILDER_HPP_

#include "assignment1_msgs/msg/detail/odd_no__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace assignment1_msgs
{

namespace msg
{

namespace builder
{

class Init_OddNo_oddnos
{
public:
  Init_OddNo_oddnos()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::assignment1_msgs::msg::OddNo oddnos(::assignment1_msgs::msg::OddNo::_oddnos_type arg)
  {
    msg_.oddnos = std::move(arg);
    return std::move(msg_);
  }

private:
  ::assignment1_msgs::msg::OddNo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::assignment1_msgs::msg::OddNo>()
{
  return assignment1_msgs::msg::builder::Init_OddNo_oddnos();
}

}  // namespace assignment1_msgs

#endif  // ASSIGNMENT1_MSGS__MSG__DETAIL__ODD_NO__BUILDER_HPP_
