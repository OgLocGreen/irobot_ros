// Generated by gencpp from file irobot_fcpp_simul/IROBOT_ir_data.msg
// DO NOT EDIT!


#ifndef IROBOT_FCPP_SIMUL_MESSAGE_IROBOT_IR_DATA_H
#define IROBOT_FCPP_SIMUL_MESSAGE_IROBOT_IR_DATA_H

#include <ros/service_traits.h>


#include <irobot_fcpp_simul/IROBOT_ir_dataRequest.h>
#include <irobot_fcpp_simul/IROBOT_ir_dataResponse.h>


namespace irobot_fcpp_simul
{

struct IROBOT_ir_data
{

typedef IROBOT_ir_dataRequest Request;
typedef IROBOT_ir_dataResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct IROBOT_ir_data
} // namespace irobot_fcpp_simul


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::irobot_fcpp_simul::IROBOT_ir_data > {
  static const char* value()
  {
    return "ae9b2e14b3730f735edbdd6f2ac13cb8";
  }

  static const char* value(const ::irobot_fcpp_simul::IROBOT_ir_data&) { return value(); }
};

template<>
struct DataType< ::irobot_fcpp_simul::IROBOT_ir_data > {
  static const char* value()
  {
    return "irobot_fcpp_simul/IROBOT_ir_data";
  }

  static const char* value(const ::irobot_fcpp_simul::IROBOT_ir_data&) { return value(); }
};


// service_traits::MD5Sum< ::irobot_fcpp_simul::IROBOT_ir_dataRequest> should match 
// service_traits::MD5Sum< ::irobot_fcpp_simul::IROBOT_ir_data > 
template<>
struct MD5Sum< ::irobot_fcpp_simul::IROBOT_ir_dataRequest>
{
  static const char* value()
  {
    return MD5Sum< ::irobot_fcpp_simul::IROBOT_ir_data >::value();
  }
  static const char* value(const ::irobot_fcpp_simul::IROBOT_ir_dataRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::irobot_fcpp_simul::IROBOT_ir_dataRequest> should match 
// service_traits::DataType< ::irobot_fcpp_simul::IROBOT_ir_data > 
template<>
struct DataType< ::irobot_fcpp_simul::IROBOT_ir_dataRequest>
{
  static const char* value()
  {
    return DataType< ::irobot_fcpp_simul::IROBOT_ir_data >::value();
  }
  static const char* value(const ::irobot_fcpp_simul::IROBOT_ir_dataRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::irobot_fcpp_simul::IROBOT_ir_dataResponse> should match 
// service_traits::MD5Sum< ::irobot_fcpp_simul::IROBOT_ir_data > 
template<>
struct MD5Sum< ::irobot_fcpp_simul::IROBOT_ir_dataResponse>
{
  static const char* value()
  {
    return MD5Sum< ::irobot_fcpp_simul::IROBOT_ir_data >::value();
  }
  static const char* value(const ::irobot_fcpp_simul::IROBOT_ir_dataResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::irobot_fcpp_simul::IROBOT_ir_dataResponse> should match 
// service_traits::DataType< ::irobot_fcpp_simul::IROBOT_ir_data > 
template<>
struct DataType< ::irobot_fcpp_simul::IROBOT_ir_dataResponse>
{
  static const char* value()
  {
    return DataType< ::irobot_fcpp_simul::IROBOT_ir_data >::value();
  }
  static const char* value(const ::irobot_fcpp_simul::IROBOT_ir_dataResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // IROBOT_FCPP_SIMUL_MESSAGE_IROBOT_IR_DATA_H
