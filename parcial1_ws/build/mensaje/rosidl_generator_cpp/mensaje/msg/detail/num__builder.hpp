// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mensaje:msg/Num.idl
// generated code does not contain a copyright notice

#ifndef MENSAJE__MSG__DETAIL__NUM__BUILDER_HPP_
#define MENSAJE__MSG__DETAIL__NUM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mensaje/msg/detail/num__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mensaje
{

namespace msg
{

namespace builder
{

class Init_Num_name
{
public:
  explicit Init_Num_name(::mensaje::msg::Num & msg)
  : msg_(msg)
  {}
  ::mensaje::msg::Num name(::mensaje::msg::Num::_name_type arg)
  {
    msg_.name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mensaje::msg::Num msg_;
};

class Init_Num_sensor_value
{
public:
  Init_Num_sensor_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Num_name sensor_value(::mensaje::msg::Num::_sensor_value_type arg)
  {
    msg_.sensor_value = std::move(arg);
    return Init_Num_name(msg_);
  }

private:
  ::mensaje::msg::Num msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mensaje::msg::Num>()
{
  return mensaje::msg::builder::Init_Num_sensor_value();
}

}  // namespace mensaje

#endif  // MENSAJE__MSG__DETAIL__NUM__BUILDER_HPP_
