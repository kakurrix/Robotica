// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mensaje:srv/Kinematics.idl
// generated code does not contain a copyright notice

#ifndef MENSAJE__SRV__DETAIL__KINEMATICS__BUILDER_HPP_
#define MENSAJE__SRV__DETAIL__KINEMATICS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mensaje/srv/detail/kinematics__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mensaje
{

namespace srv
{

namespace builder
{

class Init_Kinematics_Request_theta4
{
public:
  explicit Init_Kinematics_Request_theta4(::mensaje::srv::Kinematics_Request & msg)
  : msg_(msg)
  {}
  ::mensaje::srv::Kinematics_Request theta4(::mensaje::srv::Kinematics_Request::_theta4_type arg)
  {
    msg_.theta4 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mensaje::srv::Kinematics_Request msg_;
};

class Init_Kinematics_Request_theta3
{
public:
  explicit Init_Kinematics_Request_theta3(::mensaje::srv::Kinematics_Request & msg)
  : msg_(msg)
  {}
  Init_Kinematics_Request_theta4 theta3(::mensaje::srv::Kinematics_Request::_theta3_type arg)
  {
    msg_.theta3 = std::move(arg);
    return Init_Kinematics_Request_theta4(msg_);
  }

private:
  ::mensaje::srv::Kinematics_Request msg_;
};

class Init_Kinematics_Request_theta2
{
public:
  explicit Init_Kinematics_Request_theta2(::mensaje::srv::Kinematics_Request & msg)
  : msg_(msg)
  {}
  Init_Kinematics_Request_theta3 theta2(::mensaje::srv::Kinematics_Request::_theta2_type arg)
  {
    msg_.theta2 = std::move(arg);
    return Init_Kinematics_Request_theta3(msg_);
  }

private:
  ::mensaje::srv::Kinematics_Request msg_;
};

class Init_Kinematics_Request_theta1
{
public:
  Init_Kinematics_Request_theta1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Kinematics_Request_theta2 theta1(::mensaje::srv::Kinematics_Request::_theta1_type arg)
  {
    msg_.theta1 = std::move(arg);
    return Init_Kinematics_Request_theta2(msg_);
  }

private:
  ::mensaje::srv::Kinematics_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mensaje::srv::Kinematics_Request>()
{
  return mensaje::srv::builder::Init_Kinematics_Request_theta1();
}

}  // namespace mensaje


namespace mensaje
{

namespace srv
{

namespace builder
{

class Init_Kinematics_Response_pose
{
public:
  Init_Kinematics_Response_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mensaje::srv::Kinematics_Response pose(::mensaje::srv::Kinematics_Response::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mensaje::srv::Kinematics_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mensaje::srv::Kinematics_Response>()
{
  return mensaje::srv::builder::Init_Kinematics_Response_pose();
}

}  // namespace mensaje

#endif  // MENSAJE__SRV__DETAIL__KINEMATICS__BUILDER_HPP_
