// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from spatio_temporal_voxel_layer:srv/SaveGrid.idl
// generated code does not contain a copyright notice

#ifndef SPATIO_TEMPORAL_VOXEL_LAYER__SRV__DETAIL__SAVE_GRID__STRUCT_HPP_
#define SPATIO_TEMPORAL_VOXEL_LAYER__SRV__DETAIL__SAVE_GRID__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__spatio_temporal_voxel_layer__srv__SaveGrid_Request __attribute__((deprecated))
#else
# define DEPRECATED__spatio_temporal_voxel_layer__srv__SaveGrid_Request __declspec(deprecated)
#endif

namespace spatio_temporal_voxel_layer
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SaveGrid_Request_
{
  using Type = SaveGrid_Request_<ContainerAllocator>;

  explicit SaveGrid_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->file_name = "";
    }
  }

  explicit SaveGrid_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : file_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->file_name = "";
    }
  }

  // field types and members
  using _file_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _file_name_type file_name;

  // setters for named parameter idiom
  Type & set__file_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->file_name = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    spatio_temporal_voxel_layer::srv::SaveGrid_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const spatio_temporal_voxel_layer::srv::SaveGrid_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<spatio_temporal_voxel_layer::srv::SaveGrid_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<spatio_temporal_voxel_layer::srv::SaveGrid_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      spatio_temporal_voxel_layer::srv::SaveGrid_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<spatio_temporal_voxel_layer::srv::SaveGrid_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      spatio_temporal_voxel_layer::srv::SaveGrid_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<spatio_temporal_voxel_layer::srv::SaveGrid_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<spatio_temporal_voxel_layer::srv::SaveGrid_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<spatio_temporal_voxel_layer::srv::SaveGrid_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__spatio_temporal_voxel_layer__srv__SaveGrid_Request
    std::shared_ptr<spatio_temporal_voxel_layer::srv::SaveGrid_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__spatio_temporal_voxel_layer__srv__SaveGrid_Request
    std::shared_ptr<spatio_temporal_voxel_layer::srv::SaveGrid_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SaveGrid_Request_ & other) const
  {
    if (this->file_name != other.file_name) {
      return false;
    }
    return true;
  }
  bool operator!=(const SaveGrid_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SaveGrid_Request_

// alias to use template instance with default allocator
using SaveGrid_Request =
  spatio_temporal_voxel_layer::srv::SaveGrid_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace spatio_temporal_voxel_layer


#ifndef _WIN32
# define DEPRECATED__spatio_temporal_voxel_layer__srv__SaveGrid_Response __attribute__((deprecated))
#else
# define DEPRECATED__spatio_temporal_voxel_layer__srv__SaveGrid_Response __declspec(deprecated)
#endif

namespace spatio_temporal_voxel_layer
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SaveGrid_Response_
{
  using Type = SaveGrid_Response_<ContainerAllocator>;

  explicit SaveGrid_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->map_size_bytes = 0.0;
      this->status = false;
    }
  }

  explicit SaveGrid_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->map_size_bytes = 0.0;
      this->status = false;
    }
  }

  // field types and members
  using _map_size_bytes_type =
    double;
  _map_size_bytes_type map_size_bytes;
  using _status_type =
    bool;
  _status_type status;

  // setters for named parameter idiom
  Type & set__map_size_bytes(
    const double & _arg)
  {
    this->map_size_bytes = _arg;
    return *this;
  }
  Type & set__status(
    const bool & _arg)
  {
    this->status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    spatio_temporal_voxel_layer::srv::SaveGrid_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const spatio_temporal_voxel_layer::srv::SaveGrid_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<spatio_temporal_voxel_layer::srv::SaveGrid_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<spatio_temporal_voxel_layer::srv::SaveGrid_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      spatio_temporal_voxel_layer::srv::SaveGrid_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<spatio_temporal_voxel_layer::srv::SaveGrid_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      spatio_temporal_voxel_layer::srv::SaveGrid_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<spatio_temporal_voxel_layer::srv::SaveGrid_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<spatio_temporal_voxel_layer::srv::SaveGrid_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<spatio_temporal_voxel_layer::srv::SaveGrid_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__spatio_temporal_voxel_layer__srv__SaveGrid_Response
    std::shared_ptr<spatio_temporal_voxel_layer::srv::SaveGrid_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__spatio_temporal_voxel_layer__srv__SaveGrid_Response
    std::shared_ptr<spatio_temporal_voxel_layer::srv::SaveGrid_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SaveGrid_Response_ & other) const
  {
    if (this->map_size_bytes != other.map_size_bytes) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const SaveGrid_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SaveGrid_Response_

// alias to use template instance with default allocator
using SaveGrid_Response =
  spatio_temporal_voxel_layer::srv::SaveGrid_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace spatio_temporal_voxel_layer

namespace spatio_temporal_voxel_layer
{

namespace srv
{

struct SaveGrid
{
  using Request = spatio_temporal_voxel_layer::srv::SaveGrid_Request;
  using Response = spatio_temporal_voxel_layer::srv::SaveGrid_Response;
};

}  // namespace srv

}  // namespace spatio_temporal_voxel_layer

#endif  // SPATIO_TEMPORAL_VOXEL_LAYER__SRV__DETAIL__SAVE_GRID__STRUCT_HPP_
