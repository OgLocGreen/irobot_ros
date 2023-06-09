// Generated by gencpp from file irobot_fcpp_simul/ExecuteRectangleFCPPFeedback.msg
// DO NOT EDIT!


#ifndef IROBOT_FCPP_SIMUL_MESSAGE_EXECUTERECTANGLEFCPPFEEDBACK_H
#define IROBOT_FCPP_SIMUL_MESSAGE_EXECUTERECTANGLEFCPPFEEDBACK_H


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
struct ExecuteRectangleFCPPFeedback_
{
  typedef ExecuteRectangleFCPPFeedback_<ContainerAllocator> Type;

  ExecuteRectangleFCPPFeedback_()
    {
    }
  ExecuteRectangleFCPPFeedback_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef boost::shared_ptr< ::irobot_fcpp_simul::ExecuteRectangleFCPPFeedback_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::irobot_fcpp_simul::ExecuteRectangleFCPPFeedback_<ContainerAllocator> const> ConstPtr;

}; // struct ExecuteRectangleFCPPFeedback_

typedef ::irobot_fcpp_simul::ExecuteRectangleFCPPFeedback_<std::allocator<void> > ExecuteRectangleFCPPFeedback;

typedef boost::shared_ptr< ::irobot_fcpp_simul::ExecuteRectangleFCPPFeedback > ExecuteRectangleFCPPFeedbackPtr;
typedef boost::shared_ptr< ::irobot_fcpp_simul::ExecuteRectangleFCPPFeedback const> ExecuteRectangleFCPPFeedbackConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::irobot_fcpp_simul::ExecuteRectangleFCPPFeedback_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::irobot_fcpp_simul::ExecuteRectangleFCPPFeedback_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::irobot_fcpp_simul::ExecuteRectangleFCPPFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::irobot_fcpp_simul::ExecuteRectangleFCPPFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::irobot_fcpp_simul::ExecuteRectangleFCPPFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::irobot_fcpp_simul::ExecuteRectangleFCPPFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::irobot_fcpp_simul::ExecuteRectangleFCPPFeedback_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::irobot_fcpp_simul::ExecuteRectangleFCPPFeedback_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::irobot_fcpp_simul::ExecuteRectangleFCPPFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::irobot_fcpp_simul::ExecuteRectangleFCPPFeedback_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::irobot_fcpp_simul::ExecuteRectangleFCPPFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "irobot_fcpp_simul/ExecuteRectangleFCPPFeedback";
  }

  static const char* value(const ::irobot_fcpp_simul::ExecuteRectangleFCPPFeedback_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::irobot_fcpp_simul::ExecuteRectangleFCPPFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
# Define a feedback message\n\
\n\
";
  }

  static const char* value(const ::irobot_fcpp_simul::ExecuteRectangleFCPPFeedback_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::irobot_fcpp_simul::ExecuteRectangleFCPPFeedback_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ExecuteRectangleFCPPFeedback_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::irobot_fcpp_simul::ExecuteRectangleFCPPFeedback_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::irobot_fcpp_simul::ExecuteRectangleFCPPFeedback_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // IROBOT_FCPP_SIMUL_MESSAGE_EXECUTERECTANGLEFCPPFEEDBACK_H
