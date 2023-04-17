// Generated by gencpp from file action_server_package/BaseRotationResult.msg
// DO NOT EDIT!


#ifndef ACTION_SERVER_PACKAGE_MESSAGE_BASEROTATIONRESULT_H
#define ACTION_SERVER_PACKAGE_MESSAGE_BASEROTATIONRESULT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace action_server_package
{
template <class ContainerAllocator>
struct BaseRotationResult_
{
  typedef BaseRotationResult_<ContainerAllocator> Type;

  BaseRotationResult_()
    : final_yaw(0.0)  {
    }
  BaseRotationResult_(const ContainerAllocator& _alloc)
    : final_yaw(0.0)  {
  (void)_alloc;
    }



   typedef float _final_yaw_type;
  _final_yaw_type final_yaw;





  typedef boost::shared_ptr< ::action_server_package::BaseRotationResult_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::action_server_package::BaseRotationResult_<ContainerAllocator> const> ConstPtr;

}; // struct BaseRotationResult_

typedef ::action_server_package::BaseRotationResult_<std::allocator<void> > BaseRotationResult;

typedef boost::shared_ptr< ::action_server_package::BaseRotationResult > BaseRotationResultPtr;
typedef boost::shared_ptr< ::action_server_package::BaseRotationResult const> BaseRotationResultConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::action_server_package::BaseRotationResult_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::action_server_package::BaseRotationResult_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace action_server_package

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'action_server_package': ['/home/irobot/nav_insp_ws/devel/share/action_server_package/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::action_server_package::BaseRotationResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::action_server_package::BaseRotationResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::action_server_package::BaseRotationResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::action_server_package::BaseRotationResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::action_server_package::BaseRotationResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::action_server_package::BaseRotationResult_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::action_server_package::BaseRotationResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d43731d6fbe32b7ac8cb4548c278fc73";
  }

  static const char* value(const ::action_server_package::BaseRotationResult_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd43731d6fbe32b7aULL;
  static const uint64_t static_value2 = 0xc8cb4548c278fc73ULL;
};

template<class ContainerAllocator>
struct DataType< ::action_server_package::BaseRotationResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "action_server_package/BaseRotationResult";
  }

  static const char* value(const ::action_server_package::BaseRotationResult_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::action_server_package::BaseRotationResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
# Define the result\n\
float32 final_yaw\n\
";
  }

  static const char* value(const ::action_server_package::BaseRotationResult_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::action_server_package::BaseRotationResult_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.final_yaw);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct BaseRotationResult_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::action_server_package::BaseRotationResult_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::action_server_package::BaseRotationResult_<ContainerAllocator>& v)
  {
    s << indent << "final_yaw: ";
    Printer<float>::stream(s, indent + "  ", v.final_yaw);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ACTION_SERVER_PACKAGE_MESSAGE_BASEROTATIONRESULT_H
