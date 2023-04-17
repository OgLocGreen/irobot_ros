// Generated by gencpp from file inspection_realsense/moveBackwardResult.msg
// DO NOT EDIT!


#ifndef INSPECTION_REALSENSE_MESSAGE_MOVEBACKWARDRESULT_H
#define INSPECTION_REALSENSE_MESSAGE_MOVEBACKWARDRESULT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace inspection_realsense
{
template <class ContainerAllocator>
struct moveBackwardResult_
{
  typedef moveBackwardResult_<ContainerAllocator> Type;

  moveBackwardResult_()
    : finished(false)
    , n_pasadas_act(0)
    , n_imgs_act(0)  {
    }
  moveBackwardResult_(const ContainerAllocator& _alloc)
    : finished(false)
    , n_pasadas_act(0)
    , n_imgs_act(0)  {
  (void)_alloc;
    }



   typedef uint8_t _finished_type;
  _finished_type finished;

   typedef int32_t _n_pasadas_act_type;
  _n_pasadas_act_type n_pasadas_act;

   typedef int32_t _n_imgs_act_type;
  _n_imgs_act_type n_imgs_act;





  typedef boost::shared_ptr< ::inspection_realsense::moveBackwardResult_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::inspection_realsense::moveBackwardResult_<ContainerAllocator> const> ConstPtr;

}; // struct moveBackwardResult_

typedef ::inspection_realsense::moveBackwardResult_<std::allocator<void> > moveBackwardResult;

typedef boost::shared_ptr< ::inspection_realsense::moveBackwardResult > moveBackwardResultPtr;
typedef boost::shared_ptr< ::inspection_realsense::moveBackwardResult const> moveBackwardResultConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::inspection_realsense::moveBackwardResult_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::inspection_realsense::moveBackwardResult_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace inspection_realsense

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'inspection_realsense': ['/home/irobot/nav_insp_ws/devel/share/inspection_realsense/msg', '/home/irobot/nav_insp_ws/src/inspection_realsense/msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::inspection_realsense::moveBackwardResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::inspection_realsense::moveBackwardResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::inspection_realsense::moveBackwardResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::inspection_realsense::moveBackwardResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::inspection_realsense::moveBackwardResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::inspection_realsense::moveBackwardResult_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::inspection_realsense::moveBackwardResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "1eb6bc0e5a253dc264ac900fe4b70f59";
  }

  static const char* value(const ::inspection_realsense::moveBackwardResult_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x1eb6bc0e5a253dc2ULL;
  static const uint64_t static_value2 = 0x64ac900fe4b70f59ULL;
};

template<class ContainerAllocator>
struct DataType< ::inspection_realsense::moveBackwardResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "inspection_realsense/moveBackwardResult";
  }

  static const char* value(const ::inspection_realsense::moveBackwardResult_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::inspection_realsense::moveBackwardResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
#result definition\n\
bool finished\n\
int32 n_pasadas_act\n\
int32 n_imgs_act\n\
\n\
";
  }

  static const char* value(const ::inspection_realsense::moveBackwardResult_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::inspection_realsense::moveBackwardResult_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.finished);
      stream.next(m.n_pasadas_act);
      stream.next(m.n_imgs_act);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct moveBackwardResult_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::inspection_realsense::moveBackwardResult_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::inspection_realsense::moveBackwardResult_<ContainerAllocator>& v)
  {
    s << indent << "finished: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.finished);
    s << indent << "n_pasadas_act: ";
    Printer<int32_t>::stream(s, indent + "  ", v.n_pasadas_act);
    s << indent << "n_imgs_act: ";
    Printer<int32_t>::stream(s, indent + "  ", v.n_imgs_act);
  }
};

} // namespace message_operations
} // namespace ros

#endif // INSPECTION_REALSENSE_MESSAGE_MOVEBACKWARDRESULT_H
