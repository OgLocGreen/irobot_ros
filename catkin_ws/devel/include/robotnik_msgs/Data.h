// Generated by gencpp from file robotnik_msgs/Data.msg
// DO NOT EDIT!


#ifndef ROBOTNIK_MSGS_MESSAGE_DATA_H
#define ROBOTNIK_MSGS_MESSAGE_DATA_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace robotnik_msgs
{
template <class ContainerAllocator>
struct Data_
{
  typedef Data_<ContainerAllocator> Type;

  Data_()
    : interface()
    , bytes_sent(0.0)
    , bytes_received(0.0)
    , units_sent()
    , units_received()
    , packages_sent(0)
    , packages_received(0)  {
    }
  Data_(const ContainerAllocator& _alloc)
    : interface(_alloc)
    , bytes_sent(0.0)
    , bytes_received(0.0)
    , units_sent(_alloc)
    , units_received(_alloc)
    , packages_sent(0)
    , packages_received(0)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _interface_type;
  _interface_type interface;

   typedef float _bytes_sent_type;
  _bytes_sent_type bytes_sent;

   typedef float _bytes_received_type;
  _bytes_received_type bytes_received;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _units_sent_type;
  _units_sent_type units_sent;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _units_received_type;
  _units_received_type units_received;

   typedef int32_t _packages_sent_type;
  _packages_sent_type packages_sent;

   typedef int32_t _packages_received_type;
  _packages_received_type packages_received;





  typedef boost::shared_ptr< ::robotnik_msgs::Data_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::robotnik_msgs::Data_<ContainerAllocator> const> ConstPtr;

}; // struct Data_

typedef ::robotnik_msgs::Data_<std::allocator<void> > Data;

typedef boost::shared_ptr< ::robotnik_msgs::Data > DataPtr;
typedef boost::shared_ptr< ::robotnik_msgs::Data const> DataConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::robotnik_msgs::Data_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::robotnik_msgs::Data_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace robotnik_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'robotnik_msgs': ['/home/irobot/catkin_ws/src/simulacion/robotnik_msgs/msg', '/home/irobot/catkin_ws/devel/share/robotnik_msgs/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::robotnik_msgs::Data_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robotnik_msgs::Data_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robotnik_msgs::Data_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robotnik_msgs::Data_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robotnik_msgs::Data_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robotnik_msgs::Data_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::robotnik_msgs::Data_<ContainerAllocator> >
{
  static const char* value()
  {
    return "beae478f52d7795f673d8edc9e4295a2";
  }

  static const char* value(const ::robotnik_msgs::Data_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xbeae478f52d7795fULL;
  static const uint64_t static_value2 = 0x673d8edc9e4295a2ULL;
};

template<class ContainerAllocator>
struct DataType< ::robotnik_msgs::Data_<ContainerAllocator> >
{
  static const char* value()
  {
    return "robotnik_msgs/Data";
  }

  static const char* value(const ::robotnik_msgs::Data_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::robotnik_msgs::Data_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string interface\n\
float32 bytes_sent\n\
float32 bytes_received\n\
string units_sent\n\
string units_received\n\
int32 packages_sent\n\
int32 packages_received\n\
\n\
";
  }

  static const char* value(const ::robotnik_msgs::Data_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::robotnik_msgs::Data_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.interface);
      stream.next(m.bytes_sent);
      stream.next(m.bytes_received);
      stream.next(m.units_sent);
      stream.next(m.units_received);
      stream.next(m.packages_sent);
      stream.next(m.packages_received);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Data_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::robotnik_msgs::Data_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::robotnik_msgs::Data_<ContainerAllocator>& v)
  {
    s << indent << "interface: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.interface);
    s << indent << "bytes_sent: ";
    Printer<float>::stream(s, indent + "  ", v.bytes_sent);
    s << indent << "bytes_received: ";
    Printer<float>::stream(s, indent + "  ", v.bytes_received);
    s << indent << "units_sent: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.units_sent);
    s << indent << "units_received: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.units_received);
    s << indent << "packages_sent: ";
    Printer<int32_t>::stream(s, indent + "  ", v.packages_sent);
    s << indent << "packages_received: ";
    Printer<int32_t>::stream(s, indent + "  ", v.packages_received);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOTNIK_MSGS_MESSAGE_DATA_H
