// Generated by gencpp from file flexbe_msgs/BehaviorModification.msg
// DO NOT EDIT!


#ifndef FLEXBE_MSGS_MESSAGE_BEHAVIORMODIFICATION_H
#define FLEXBE_MSGS_MESSAGE_BEHAVIORMODIFICATION_H


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
struct BehaviorModification_
{
  typedef BehaviorModification_<ContainerAllocator> Type;

  BehaviorModification_()
    : index_begin(0)
    , index_end(0)
    , new_content()  {
    }
  BehaviorModification_(const ContainerAllocator& _alloc)
    : index_begin(0)
    , index_end(0)
    , new_content(_alloc)  {
  (void)_alloc;
    }



   typedef int32_t _index_begin_type;
  _index_begin_type index_begin;

   typedef int32_t _index_end_type;
  _index_end_type index_end;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _new_content_type;
  _new_content_type new_content;





  typedef boost::shared_ptr< ::flexbe_msgs::BehaviorModification_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::flexbe_msgs::BehaviorModification_<ContainerAllocator> const> ConstPtr;

}; // struct BehaviorModification_

typedef ::flexbe_msgs::BehaviorModification_<std::allocator<void> > BehaviorModification;

typedef boost::shared_ptr< ::flexbe_msgs::BehaviorModification > BehaviorModificationPtr;
typedef boost::shared_ptr< ::flexbe_msgs::BehaviorModification const> BehaviorModificationConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::flexbe_msgs::BehaviorModification_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::flexbe_msgs::BehaviorModification_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace flexbe_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'flexbe_msgs': ['/home/irobot/nav_insp_ws/src/flexbe/flexbe_behavior_engine/flexbe_msgs/msg', '/home/irobot/nav_insp_ws/devel/share/flexbe_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::flexbe_msgs::BehaviorModification_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::flexbe_msgs::BehaviorModification_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::flexbe_msgs::BehaviorModification_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::flexbe_msgs::BehaviorModification_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::flexbe_msgs::BehaviorModification_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::flexbe_msgs::BehaviorModification_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::flexbe_msgs::BehaviorModification_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ac997193d826b145a432b8e3e528f6b4";
  }

  static const char* value(const ::flexbe_msgs::BehaviorModification_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xac997193d826b145ULL;
  static const uint64_t static_value2 = 0xa432b8e3e528f6b4ULL;
};

template<class ContainerAllocator>
struct DataType< ::flexbe_msgs::BehaviorModification_<ContainerAllocator> >
{
  static const char* value()
  {
    return "flexbe_msgs/BehaviorModification";
  }

  static const char* value(const ::flexbe_msgs::BehaviorModification_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::flexbe_msgs::BehaviorModification_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 index_begin\n\
int32 index_end\n\
string new_content\n\
";
  }

  static const char* value(const ::flexbe_msgs::BehaviorModification_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::flexbe_msgs::BehaviorModification_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.index_begin);
      stream.next(m.index_end);
      stream.next(m.new_content);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct BehaviorModification_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::flexbe_msgs::BehaviorModification_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::flexbe_msgs::BehaviorModification_<ContainerAllocator>& v)
  {
    s << indent << "index_begin: ";
    Printer<int32_t>::stream(s, indent + "  ", v.index_begin);
    s << indent << "index_end: ";
    Printer<int32_t>::stream(s, indent + "  ", v.index_end);
    s << indent << "new_content: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.new_content);
  }
};

} // namespace message_operations
} // namespace ros

#endif // FLEXBE_MSGS_MESSAGE_BEHAVIORMODIFICATION_H
