// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from assignment1_msgs:msg/OddNo.idl
// generated code does not contain a copyright notice

#ifndef ASSIGNMENT1_MSGS__MSG__DETAIL__ODD_NO__STRUCT_HPP_
#define ASSIGNMENT1_MSGS__MSG__DETAIL__ODD_NO__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__assignment1_msgs__msg__OddNo __attribute__((deprecated))
#else
# define DEPRECATED__assignment1_msgs__msg__OddNo __declspec(deprecated)
#endif

namespace assignment1_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct OddNo_
{
  using Type = OddNo_<ContainerAllocator>;

  explicit OddNo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->oddnos = 0ll;
    }
  }

  explicit OddNo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->oddnos = 0ll;
    }
  }

  // field types and members
  using _oddnos_type =
    int64_t;
  _oddnos_type oddnos;

  // setters for named parameter idiom
  Type & set__oddnos(
    const int64_t & _arg)
  {
    this->oddnos = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    assignment1_msgs::msg::OddNo_<ContainerAllocator> *;
  using ConstRawPtr =
    const assignment1_msgs::msg::OddNo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<assignment1_msgs::msg::OddNo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<assignment1_msgs::msg::OddNo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      assignment1_msgs::msg::OddNo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<assignment1_msgs::msg::OddNo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      assignment1_msgs::msg::OddNo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<assignment1_msgs::msg::OddNo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<assignment1_msgs::msg::OddNo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<assignment1_msgs::msg::OddNo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__assignment1_msgs__msg__OddNo
    std::shared_ptr<assignment1_msgs::msg::OddNo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__assignment1_msgs__msg__OddNo
    std::shared_ptr<assignment1_msgs::msg::OddNo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OddNo_ & other) const
  {
    if (this->oddnos != other.oddnos) {
      return false;
    }
    return true;
  }
  bool operator!=(const OddNo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OddNo_

// alias to use template instance with default allocator
using OddNo =
  assignment1_msgs::msg::OddNo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace assignment1_msgs

#endif  // ASSIGNMENT1_MSGS__MSG__DETAIL__ODD_NO__STRUCT_HPP_
