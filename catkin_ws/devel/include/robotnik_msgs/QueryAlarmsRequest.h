// Generated by gencpp from file robotnik_msgs/QueryAlarmsRequest.msg
// DO NOT EDIT!


#ifndef ROBOTNIK_MSGS_MESSAGE_QUERYALARMSREQUEST_H
#define ROBOTNIK_MSGS_MESSAGE_QUERYALARMSREQUEST_H


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
struct QueryAlarmsRequest_
{
  typedef QueryAlarmsRequest_<ContainerAllocator> Type;

  QueryAlarmsRequest_()
    : type_query()
    , start_date()
    , end_date()
    , top(0)
    , filter_type()  {
    }
  QueryAlarmsRequest_(const ContainerAllocator& _alloc)
    : type_query(_alloc)
    , start_date(_alloc)
    , end_date(_alloc)
    , top(0)
    , filter_type(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _type_query_type;
  _type_query_type type_query;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _start_date_type;
  _start_date_type start_date;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _end_date_type;
  _end_date_type end_date;

   typedef int32_t _top_type;
  _top_type top;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _filter_type_type;
  _filter_type_type filter_type;




  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  TYPE_QUERY_ALL;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  TYPE_QUERY_TOP;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  TYPE_BETWEEN_DATE;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  TYPE_TOP_BETWEEN_DATE;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  FILTER_TYPE_NOTHING;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  FILTER_TYPE_EVENT;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  FILTER_TYPE_ALARM;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  FILTER_TYPE_ERROR;

  typedef boost::shared_ptr< ::robotnik_msgs::QueryAlarmsRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::robotnik_msgs::QueryAlarmsRequest_<ContainerAllocator> const> ConstPtr;

}; // struct QueryAlarmsRequest_

typedef ::robotnik_msgs::QueryAlarmsRequest_<std::allocator<void> > QueryAlarmsRequest;

typedef boost::shared_ptr< ::robotnik_msgs::QueryAlarmsRequest > QueryAlarmsRequestPtr;
typedef boost::shared_ptr< ::robotnik_msgs::QueryAlarmsRequest const> QueryAlarmsRequestConstPtr;

// constants requiring out of line definition

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      QueryAlarmsRequest_<ContainerAllocator>::TYPE_QUERY_ALL =
        
          "ALL"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      QueryAlarmsRequest_<ContainerAllocator>::TYPE_QUERY_TOP =
        
          "TOP"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      QueryAlarmsRequest_<ContainerAllocator>::TYPE_BETWEEN_DATE =
        
          "BETWEEN_DATE"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      QueryAlarmsRequest_<ContainerAllocator>::TYPE_TOP_BETWEEN_DATE =
        
          "TOP_BETWEEN_DATE"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      QueryAlarmsRequest_<ContainerAllocator>::FILTER_TYPE_NOTHING =
        
          "NOTHING"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      QueryAlarmsRequest_<ContainerAllocator>::FILTER_TYPE_EVENT =
        
          "EVENT"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      QueryAlarmsRequest_<ContainerAllocator>::FILTER_TYPE_ALARM =
        
          "ALARM"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      QueryAlarmsRequest_<ContainerAllocator>::FILTER_TYPE_ERROR =
        
          "ERROR"
        
        ;
   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::robotnik_msgs::QueryAlarmsRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::robotnik_msgs::QueryAlarmsRequest_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::robotnik_msgs::QueryAlarmsRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robotnik_msgs::QueryAlarmsRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robotnik_msgs::QueryAlarmsRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robotnik_msgs::QueryAlarmsRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robotnik_msgs::QueryAlarmsRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robotnik_msgs::QueryAlarmsRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::robotnik_msgs::QueryAlarmsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f1be883ec4718e1184241817a2fe2b57";
  }

  static const char* value(const ::robotnik_msgs::QueryAlarmsRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf1be883ec4718e11ULL;
  static const uint64_t static_value2 = 0x84241817a2fe2b57ULL;
};

template<class ContainerAllocator>
struct DataType< ::robotnik_msgs::QueryAlarmsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "robotnik_msgs/QueryAlarmsRequest";
  }

  static const char* value(const ::robotnik_msgs::QueryAlarmsRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::robotnik_msgs::QueryAlarmsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string TYPE_QUERY_ALL=ALL\n\
string TYPE_QUERY_TOP=TOP\n\
string TYPE_BETWEEN_DATE=BETWEEN_DATE\n\
string TYPE_TOP_BETWEEN_DATE=TOP_BETWEEN_DATE\n\
string FILTER_TYPE_NOTHING=NOTHING\n\
string FILTER_TYPE_EVENT=EVENT\n\
string FILTER_TYPE_ALARM=ALARM\n\
string FILTER_TYPE_ERROR=ERROR\n\
string type_query\n\
string start_date\n\
string end_date\n\
int32 top\n\
string filter_type\n\
";
  }

  static const char* value(const ::robotnik_msgs::QueryAlarmsRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::robotnik_msgs::QueryAlarmsRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.type_query);
      stream.next(m.start_date);
      stream.next(m.end_date);
      stream.next(m.top);
      stream.next(m.filter_type);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct QueryAlarmsRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::robotnik_msgs::QueryAlarmsRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::robotnik_msgs::QueryAlarmsRequest_<ContainerAllocator>& v)
  {
    s << indent << "type_query: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.type_query);
    s << indent << "start_date: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.start_date);
    s << indent << "end_date: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.end_date);
    s << indent << "top: ";
    Printer<int32_t>::stream(s, indent + "  ", v.top);
    s << indent << "filter_type: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.filter_type);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOTNIK_MSGS_MESSAGE_QUERYALARMSREQUEST_H