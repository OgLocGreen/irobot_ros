// Generated by gencpp from file robotnik_msgs/Registers.msg
// DO NOT EDIT!


#ifndef ROBOTNIK_MSGS_MESSAGE_REGISTERS_H
#define ROBOTNIK_MSGS_MESSAGE_REGISTERS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <robotnik_msgs/Register.h>

namespace robotnik_msgs
{
template <class ContainerAllocator>
struct Registers_
{
  typedef Registers_<ContainerAllocator> Type;

  Registers_()
    : registers()  {
    }
  Registers_(const ContainerAllocator& _alloc)
    : registers(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector< ::robotnik_msgs::Register_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::robotnik_msgs::Register_<ContainerAllocator> >::other >  _registers_type;
  _registers_type registers;





  typedef boost::shared_ptr< ::robotnik_msgs::Registers_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::robotnik_msgs::Registers_<ContainerAllocator> const> ConstPtr;

}; // struct Registers_

typedef ::robotnik_msgs::Registers_<std::allocator<void> > Registers;

typedef boost::shared_ptr< ::robotnik_msgs::Registers > RegistersPtr;
typedef boost::shared_ptr< ::robotnik_msgs::Registers const> RegistersConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::robotnik_msgs::Registers_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::robotnik_msgs::Registers_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace robotnik_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'robotnik_msgs': ['/home/irobot/nav_insp_ws/src/simulation/robotnik_msgs/msg', '/home/irobot/nav_insp_ws/devel/share/robotnik_msgs/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::robotnik_msgs::Registers_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robotnik_msgs::Registers_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robotnik_msgs::Registers_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robotnik_msgs::Registers_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robotnik_msgs::Registers_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robotnik_msgs::Registers_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::robotnik_msgs::Registers_<ContainerAllocator> >
{
  static const char* value()
  {
    return "12d8645a7a01078095f8477105240cef";
  }

  static const char* value(const ::robotnik_msgs::Registers_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x12d8645a7a010780ULL;
  static const uint64_t static_value2 = 0x95f8477105240cefULL;
};

template<class ContainerAllocator>
struct DataType< ::robotnik_msgs::Registers_<ContainerAllocator> >
{
  static const char* value()
  {
    return "robotnik_msgs/Registers";
  }

  static const char* value(const ::robotnik_msgs::Registers_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::robotnik_msgs::Registers_<ContainerAllocator> >
{
  static const char* value()
  {
    return "robotnik_msgs/Register[] registers\n\
================================================================================\n\
MSG: robotnik_msgs/Register\n\
int32 id\n\
int32 value\n\
";
  }

  static const char* value(const ::robotnik_msgs::Registers_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::robotnik_msgs::Registers_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.registers);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Registers_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::robotnik_msgs::Registers_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::robotnik_msgs::Registers_<ContainerAllocator>& v)
  {
    s << indent << "registers[]" << std::endl;
    for (size_t i = 0; i < v.registers.size(); ++i)
    {
      s << indent << "  registers[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::robotnik_msgs::Register_<ContainerAllocator> >::stream(s, indent + "    ", v.registers[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOTNIK_MSGS_MESSAGE_REGISTERS_H
