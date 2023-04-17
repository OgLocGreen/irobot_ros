// Generated by gencpp from file flexbe_msgs/SynthesisErrorCodes.msg
// DO NOT EDIT!


#ifndef FLEXBE_MSGS_MESSAGE_SYNTHESISERRORCODES_H
#define FLEXBE_MSGS_MESSAGE_SYNTHESISERRORCODES_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace flexbe_msgs
{
template <class ContainerAllocator>
struct SynthesisErrorCodes_
{
  typedef SynthesisErrorCodes_<ContainerAllocator> Type;

  SynthesisErrorCodes_()
    : value(0)  {
    }
  SynthesisErrorCodes_(const ContainerAllocator& _alloc)
    : value(0)  {
  (void)_alloc;
    }



   typedef int32_t _value_type;
  _value_type value;



  enum {
    SUCCESS = 1,
  };


  typedef boost::shared_ptr< ::flexbe_msgs::SynthesisErrorCodes_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::flexbe_msgs::SynthesisErrorCodes_<ContainerAllocator> const> ConstPtr;

}; // struct SynthesisErrorCodes_

typedef ::flexbe_msgs::SynthesisErrorCodes_<std::allocator<void> > SynthesisErrorCodes;

typedef boost::shared_ptr< ::flexbe_msgs::SynthesisErrorCodes > SynthesisErrorCodesPtr;
typedef boost::shared_ptr< ::flexbe_msgs::SynthesisErrorCodes const> SynthesisErrorCodesConstPtr;

// constants requiring out of line definition

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::flexbe_msgs::SynthesisErrorCodes_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::flexbe_msgs::SynthesisErrorCodes_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace flexbe_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'flexbe_msgs': ['/home/irobot/nav_insp_ws/src/flexbe/flexbe_behavior_engine/flexbe_msgs/msg', '/home/irobot/nav_insp_ws/devel/share/flexbe_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::flexbe_msgs::SynthesisErrorCodes_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::flexbe_msgs::SynthesisErrorCodes_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::flexbe_msgs::SynthesisErrorCodes_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::flexbe_msgs::SynthesisErrorCodes_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::flexbe_msgs::SynthesisErrorCodes_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::flexbe_msgs::SynthesisErrorCodes_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::flexbe_msgs::SynthesisErrorCodes_<ContainerAllocator> >
{
  static const char* value()
  {
    return "64e05da1f86a12ce44b1cca74395bd4e";
  }

  static const char* value(const ::flexbe_msgs::SynthesisErrorCodes_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x64e05da1f86a12ceULL;
  static const uint64_t static_value2 = 0x44b1cca74395bd4eULL;
};

template<class ContainerAllocator>
struct DataType< ::flexbe_msgs::SynthesisErrorCodes_<ContainerAllocator> >
{
  static const char* value()
  {
    return "flexbe_msgs/SynthesisErrorCodes";
  }

  static const char* value(const ::flexbe_msgs::SynthesisErrorCodes_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::flexbe_msgs::SynthesisErrorCodes_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 value\n\
\n\
# success\n\
int32 SUCCESS = 1\n\
\n\
# all other values will be considered as any sort of error\n\
";
  }

  static const char* value(const ::flexbe_msgs::SynthesisErrorCodes_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::flexbe_msgs::SynthesisErrorCodes_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.value);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SynthesisErrorCodes_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::flexbe_msgs::SynthesisErrorCodes_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::flexbe_msgs::SynthesisErrorCodes_<ContainerAllocator>& v)
  {
    s << indent << "value: ";
    Printer<int32_t>::stream(s, indent + "  ", v.value);
  }
};

} // namespace message_operations
} // namespace ros

#endif // FLEXBE_MSGS_MESSAGE_SYNTHESISERRORCODES_H
