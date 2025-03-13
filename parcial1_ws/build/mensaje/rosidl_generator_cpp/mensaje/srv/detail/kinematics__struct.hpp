// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mensaje:srv/Kinematics.idl
// generated code does not contain a copyright notice

#ifndef MENSAJE__SRV__DETAIL__KINEMATICS__STRUCT_HPP_
#define MENSAJE__SRV__DETAIL__KINEMATICS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mensaje__srv__Kinematics_Request __attribute__((deprecated))
#else
# define DEPRECATED__mensaje__srv__Kinematics_Request __declspec(deprecated)
#endif

namespace mensaje
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Kinematics_Request_
{
  using Type = Kinematics_Request_<ContainerAllocator>;

  explicit Kinematics_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->theta1 = 0.0;
      this->theta2 = 0.0;
      this->theta3 = 0.0;
      this->theta4 = 0.0;
    }
  }

  explicit Kinematics_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->theta1 = 0.0;
      this->theta2 = 0.0;
      this->theta3 = 0.0;
      this->theta4 = 0.0;
    }
  }

  // field types and members
  using _theta1_type =
    double;
  _theta1_type theta1;
  using _theta2_type =
    double;
  _theta2_type theta2;
  using _theta3_type =
    double;
  _theta3_type theta3;
  using _theta4_type =
    double;
  _theta4_type theta4;

  // setters for named parameter idiom
  Type & set__theta1(
    const double & _arg)
  {
    this->theta1 = _arg;
    return *this;
  }
  Type & set__theta2(
    const double & _arg)
  {
    this->theta2 = _arg;
    return *this;
  }
  Type & set__theta3(
    const double & _arg)
  {
    this->theta3 = _arg;
    return *this;
  }
  Type & set__theta4(
    const double & _arg)
  {
    this->theta4 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mensaje::srv::Kinematics_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const mensaje::srv::Kinematics_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mensaje::srv::Kinematics_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mensaje::srv::Kinematics_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mensaje::srv::Kinematics_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mensaje::srv::Kinematics_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mensaje::srv::Kinematics_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mensaje::srv::Kinematics_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mensaje::srv::Kinematics_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mensaje::srv::Kinematics_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mensaje__srv__Kinematics_Request
    std::shared_ptr<mensaje::srv::Kinematics_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mensaje__srv__Kinematics_Request
    std::shared_ptr<mensaje::srv::Kinematics_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Kinematics_Request_ & other) const
  {
    if (this->theta1 != other.theta1) {
      return false;
    }
    if (this->theta2 != other.theta2) {
      return false;
    }
    if (this->theta3 != other.theta3) {
      return false;
    }
    if (this->theta4 != other.theta4) {
      return false;
    }
    return true;
  }
  bool operator!=(const Kinematics_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Kinematics_Request_

// alias to use template instance with default allocator
using Kinematics_Request =
  mensaje::srv::Kinematics_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mensaje


// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mensaje__srv__Kinematics_Response __attribute__((deprecated))
#else
# define DEPRECATED__mensaje__srv__Kinematics_Response __declspec(deprecated)
#endif

namespace mensaje
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Kinematics_Response_
{
  using Type = Kinematics_Response_<ContainerAllocator>;

  explicit Kinematics_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_init)
  {
    (void)_init;
  }

  explicit Kinematics_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _pose_type pose;

  // setters for named parameter idiom
  Type & set__pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mensaje::srv::Kinematics_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const mensaje::srv::Kinematics_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mensaje::srv::Kinematics_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mensaje::srv::Kinematics_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mensaje::srv::Kinematics_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mensaje::srv::Kinematics_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mensaje::srv::Kinematics_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mensaje::srv::Kinematics_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mensaje::srv::Kinematics_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mensaje::srv::Kinematics_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mensaje__srv__Kinematics_Response
    std::shared_ptr<mensaje::srv::Kinematics_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mensaje__srv__Kinematics_Response
    std::shared_ptr<mensaje::srv::Kinematics_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Kinematics_Response_ & other) const
  {
    if (this->pose != other.pose) {
      return false;
    }
    return true;
  }
  bool operator!=(const Kinematics_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Kinematics_Response_

// alias to use template instance with default allocator
using Kinematics_Response =
  mensaje::srv::Kinematics_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mensaje

namespace mensaje
{

namespace srv
{

struct Kinematics
{
  using Request = mensaje::srv::Kinematics_Request;
  using Response = mensaje::srv::Kinematics_Response;
};

}  // namespace srv

}  // namespace mensaje

#endif  // MENSAJE__SRV__DETAIL__KINEMATICS__STRUCT_HPP_
