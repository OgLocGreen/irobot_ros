// Generated by gencpp from file action_server_package/FCPP_inRequest.msg
// DO NOT EDIT!


#ifndef ACTION_SERVER_PACKAGE_MESSAGE_FCPP_INREQUEST_H
#define ACTION_SERVER_PACKAGE_MESSAGE_FCPP_INREQUEST_H


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
struct FCPP_inRequest_
{
  typedef FCPP_inRequest_<ContainerAllocator> Type;

  FCPP_inRequest_()
    : id_input(0)  {
    }
  FCPP_inRequest_(const ContainerAllocator& _alloc)
    : id_input(0)  {
  (void)_alloc;
    }



   typedef int32_t _id_input_type;
  _id_input_type id_input;





  typedef boost::shared_ptr< ::action_server_package::FCPP_inRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::action_server_package::FCPP_inRequest_<ContainerAllocator> const> ConstPtr;

}; // struct FCPP_inRequest_

typedef ::action_server_package::FCPP_inRequest_<std::allocator<void> > FCPP_inRequest;

typedef boost::shared_ptr< ::action_server_package::FCPP_inRequest > FCPP_inRequestPtr;
typedef boost::shared_ptr< ::action_server_package::FCPP_inRequest const> FCPP_inRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::action_server_package::FCPP_inRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::action_server_package::FCPP_inRequest_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::action_server_package::FCPP_inRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::action_server_package::FCPP_inRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::action_server_package::FCPP_inRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::action_server_package::FCPP_inRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::action_server_package::FCPP_inRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::action_server_package::FCPP_inRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::action_server_package::FCPP_inRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "18c8679e6d3855a24222ca635f731460";
  }

  static const char* value(const ::action_server_package::FCPP_inRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x18c8679e6d3855a2ULL;
  static const uint64_t static_value2 = 0x4222ca635f731460ULL;
};

template<class ContainerAllocator>
struct DataType< ::action_server_package::FCPP_inRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "action_server_package/FCPP_inRequest";
  }

  static const char* value(const ::action_server_package::FCPP_inRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::action_server_package::FCPP_inRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 id_input\n\
";
  }

  static const char* value(const ::action_server_package::FCPP_inRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::action_server_package::FCPP_inRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.id_input);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct FCPP_inRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::action_server_package::FCPP_inRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::action_server_package::FCPP_inRequest_<ContainerAllocator>& v)
  {
    s << indent << "id_input: ";
    Printer<int32_t>::stream(s, indent + "  ", v.id_input);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ACTION_SERVER_PACKAGE_MESSAGE_FCPP_INREQUEST_H