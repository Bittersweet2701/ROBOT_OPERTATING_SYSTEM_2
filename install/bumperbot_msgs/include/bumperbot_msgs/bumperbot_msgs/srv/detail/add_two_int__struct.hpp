// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bumperbot_msgs:srv/AddTwoInt.idl
// generated code does not contain a copyright notice

#ifndef BUMPERBOT_MSGS__SRV__DETAIL__ADD_TWO_INT__STRUCT_HPP_
#define BUMPERBOT_MSGS__SRV__DETAIL__ADD_TWO_INT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__bumperbot_msgs__srv__AddTwoInt_Request __attribute__((deprecated))
#else
# define DEPRECATED__bumperbot_msgs__srv__AddTwoInt_Request __declspec(deprecated)
#endif

namespace bumperbot_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct AddTwoInt_Request_
{
  using Type = AddTwoInt_Request_<ContainerAllocator>;

  explicit AddTwoInt_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->a = 0ll;
      this->b = 0ll;
    }
  }

  explicit AddTwoInt_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->a = 0ll;
      this->b = 0ll;
    }
  }

  // field types and members
  using _a_type =
    int64_t;
  _a_type a;
  using _b_type =
    int64_t;
  _b_type b;

  // setters for named parameter idiom
  Type & set__a(
    const int64_t & _arg)
  {
    this->a = _arg;
    return *this;
  }
  Type & set__b(
    const int64_t & _arg)
  {
    this->b = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bumperbot_msgs::srv::AddTwoInt_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const bumperbot_msgs::srv::AddTwoInt_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bumperbot_msgs::srv::AddTwoInt_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bumperbot_msgs::srv::AddTwoInt_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bumperbot_msgs::srv::AddTwoInt_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bumperbot_msgs::srv::AddTwoInt_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bumperbot_msgs::srv::AddTwoInt_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bumperbot_msgs::srv::AddTwoInt_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bumperbot_msgs::srv::AddTwoInt_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bumperbot_msgs::srv::AddTwoInt_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bumperbot_msgs__srv__AddTwoInt_Request
    std::shared_ptr<bumperbot_msgs::srv::AddTwoInt_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bumperbot_msgs__srv__AddTwoInt_Request
    std::shared_ptr<bumperbot_msgs::srv::AddTwoInt_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AddTwoInt_Request_ & other) const
  {
    if (this->a != other.a) {
      return false;
    }
    if (this->b != other.b) {
      return false;
    }
    return true;
  }
  bool operator!=(const AddTwoInt_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AddTwoInt_Request_

// alias to use template instance with default allocator
using AddTwoInt_Request =
  bumperbot_msgs::srv::AddTwoInt_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace bumperbot_msgs


#ifndef _WIN32
# define DEPRECATED__bumperbot_msgs__srv__AddTwoInt_Response __attribute__((deprecated))
#else
# define DEPRECATED__bumperbot_msgs__srv__AddTwoInt_Response __declspec(deprecated)
#endif

namespace bumperbot_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct AddTwoInt_Response_
{
  using Type = AddTwoInt_Response_<ContainerAllocator>;

  explicit AddTwoInt_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sum = 0ll;
    }
  }

  explicit AddTwoInt_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sum = 0ll;
    }
  }

  // field types and members
  using _sum_type =
    int64_t;
  _sum_type sum;

  // setters for named parameter idiom
  Type & set__sum(
    const int64_t & _arg)
  {
    this->sum = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bumperbot_msgs::srv::AddTwoInt_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const bumperbot_msgs::srv::AddTwoInt_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bumperbot_msgs::srv::AddTwoInt_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bumperbot_msgs::srv::AddTwoInt_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bumperbot_msgs::srv::AddTwoInt_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bumperbot_msgs::srv::AddTwoInt_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bumperbot_msgs::srv::AddTwoInt_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bumperbot_msgs::srv::AddTwoInt_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bumperbot_msgs::srv::AddTwoInt_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bumperbot_msgs::srv::AddTwoInt_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bumperbot_msgs__srv__AddTwoInt_Response
    std::shared_ptr<bumperbot_msgs::srv::AddTwoInt_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bumperbot_msgs__srv__AddTwoInt_Response
    std::shared_ptr<bumperbot_msgs::srv::AddTwoInt_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AddTwoInt_Response_ & other) const
  {
    if (this->sum != other.sum) {
      return false;
    }
    return true;
  }
  bool operator!=(const AddTwoInt_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AddTwoInt_Response_

// alias to use template instance with default allocator
using AddTwoInt_Response =
  bumperbot_msgs::srv::AddTwoInt_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace bumperbot_msgs

namespace bumperbot_msgs
{

namespace srv
{

struct AddTwoInt
{
  using Request = bumperbot_msgs::srv::AddTwoInt_Request;
  using Response = bumperbot_msgs::srv::AddTwoInt_Response;
};

}  // namespace srv

}  // namespace bumperbot_msgs

#endif  // BUMPERBOT_MSGS__SRV__DETAIL__ADD_TWO_INT__STRUCT_HPP_
