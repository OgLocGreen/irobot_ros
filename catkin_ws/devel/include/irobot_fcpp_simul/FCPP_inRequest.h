// Generated by gencpp from file irobot_fcpp_simul/FCPP_inRequest.msg
// DO NOT EDIT!


#ifndef IROBOT_FCPP_SIMUL_MESSAGE_FCPP_INREQUEST_H
#define IROBOT_FCPP_SIMUL_MESSAGE_FCPP_INREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace irobot_fcpp_simul
{
template <class ContainerAllocator>
struct FCPP_inRequest_
{
  typedef FCPP_inRequest_<ContainerAllocator> Type;

  FCPP_inRequest_()
    : id_input(0)
    , get_working_zones(false)
    , get_inspection_zones(false)
    , get_rot_zone(false)  {
    }
  FCPP_inRequest_(const ContainerAllocator& _alloc)
    : id_input(0)
    , get_working_zones(false)
    , get_inspection_zones(false)
    , get_rot_zone(false)  {
  (void)_alloc;
    }



   typedef int32_t _id_input_type;
  _id_input_type id_input;

   typedef uint8_t _get_working_zones_type;
  _get_working_zones_type get_working_zones;

   typedef uint8_t _get_inspection_zones_type;
  _get_inspection_zones_type get_inspection_zones;

   typedef uint8_t _get_rot_zone_type;
  _get_rot_zone_type get_rot_zone;





  typedef boost::shared_ptr< ::irobot_fcpp_simul::FCPP_inRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::irobot_fcpp_simul::FCPP_inRequest_<ContainerAllocator> const> ConstPtr;

}; // struct FCPP_inRequest_

typedef ::irobot_fcpp_simul::FCPP_inRequest_<std::allocator<void> > FCPP_inRequest;

typedef boost::shared_ptr< ::irobot_fcpp_simul::FCPP_inRequest > FCPP_inRequestPtr;
typedef boost::shared_ptr< ::irobot_fcpp_simul::FCPP_inRequest const> FCPP_inRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::irobot_fcpp_simul::FCPP_inRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::irobot_fcpp_simul::FCPP_inRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace irobot_fcpp_simul

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg', '/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'irobot_fcpp_simul': ['/home/irobot/catkin_ws/src/irobot_fcpp_simul/msg', '/home/irobot/catkin_ws/devel/share/irobot_fcpp_simul/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::irobot_fcpp_simul::FCPP_inRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::irobot_fcpp_simul::FCPP_inRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::irobot_fcpp_simul::FCPP_inRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::irobot_fcpp_simul::FCPP_inRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::irobot_fcpp_simul::FCPP_inRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::irobot_fcpp_simul::FCPP_inRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::irobot_fcpp_simul::FCPP_inRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ab3c84f8b5d4cbb9d71b6a57611e603a";
  }

  static const char* value(const ::irobot_fcpp_simul::FCPP_inRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xab3c84f8b5d4cbb9ULL;
  static const uint64_t static_value2 = 0xd71b6a57611e603aULL;
};

template<class ContainerAllocator>
struct DataType< ::irobot_fcpp_simul::FCPP_inRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "irobot_fcpp_simul/FCPP_inRequest";
  }

  static const char* value(const ::irobot_fcpp_simul::FCPP_inRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::irobot_fcpp_simul::FCPP_inRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 id_input\n\
bool get_working_zones\n\
bool get_inspection_zones\n\
bool get_rot_zone\n\
";
  }

  static const char* value(const ::irobot_fcpp_simul::FCPP_inRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::irobot_fcpp_simul::FCPP_inRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.id_input);
      stream.next(m.get_working_zones);
      stream.next(m.get_inspection_zones);
      stream.next(m.get_rot_zone);
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
struct Printer< ::irobot_fcpp_simul::FCPP_inRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::irobot_fcpp_simul::FCPP_inRequest_<ContainerAllocator>& v)
  {
    s << indent << "id_input: ";
    Printer<int32_t>::stream(s, indent + "  ", v.id_input);
    s << indent << "get_working_zones: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.get_working_zones);
    s << indent << "get_inspection_zones: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.get_inspection_zones);
    s << indent << "get_rot_zone: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.get_rot_zone);
  }
};

} // namespace message_operations
} // namespace ros

#endif // IROBOT_FCPP_SIMUL_MESSAGE_FCPP_INREQUEST_H
