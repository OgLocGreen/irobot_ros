# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from robotnik_msgs/QueryAlarmsRequest.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class QueryAlarmsRequest(genpy.Message):
  _md5sum = "f1be883ec4718e1184241817a2fe2b57"
  _type = "robotnik_msgs/QueryAlarmsRequest"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """string TYPE_QUERY_ALL=ALL
string TYPE_QUERY_TOP=TOP
string TYPE_BETWEEN_DATE=BETWEEN_DATE
string TYPE_TOP_BETWEEN_DATE=TOP_BETWEEN_DATE
string FILTER_TYPE_NOTHING=NOTHING
string FILTER_TYPE_EVENT=EVENT
string FILTER_TYPE_ALARM=ALARM
string FILTER_TYPE_ERROR=ERROR
string type_query
string start_date
string end_date
int32 top
string filter_type
"""
  # Pseudo-constants
  TYPE_QUERY_ALL = 'ALL'
  TYPE_QUERY_TOP = 'TOP'
  TYPE_BETWEEN_DATE = 'BETWEEN_DATE'
  TYPE_TOP_BETWEEN_DATE = 'TOP_BETWEEN_DATE'
  FILTER_TYPE_NOTHING = 'NOTHING'
  FILTER_TYPE_EVENT = 'EVENT'
  FILTER_TYPE_ALARM = 'ALARM'
  FILTER_TYPE_ERROR = 'ERROR'

  __slots__ = ['type_query','start_date','end_date','top','filter_type']
  _slot_types = ['string','string','string','int32','string']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       type_query,start_date,end_date,top,filter_type

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(QueryAlarmsRequest, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.type_query is None:
        self.type_query = ''
      if self.start_date is None:
        self.start_date = ''
      if self.end_date is None:
        self.end_date = ''
      if self.top is None:
        self.top = 0
      if self.filter_type is None:
        self.filter_type = ''
    else:
      self.type_query = ''
      self.start_date = ''
      self.end_date = ''
      self.top = 0
      self.filter_type = ''

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self.type_query
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self.start_date
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self.end_date
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self.top
      buff.write(_get_struct_i().pack(_x))
      _x = self.filter_type
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.type_query = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.type_query = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.start_date = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.start_date = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.end_date = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.end_date = str[start:end]
      start = end
      end += 4
      (self.top,) = _get_struct_i().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.filter_type = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.filter_type = str[start:end]
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self.type_query
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self.start_date
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self.end_date
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self.top
      buff.write(_get_struct_i().pack(_x))
      _x = self.filter_type
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.type_query = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.type_query = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.start_date = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.start_date = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.end_date = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.end_date = str[start:end]
      start = end
      end += 4
      (self.top,) = _get_struct_i().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.filter_type = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.filter_type = str[start:end]
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_i = None
def _get_struct_i():
    global _struct_i
    if _struct_i is None:
        _struct_i = struct.Struct("<i")
    return _struct_i
# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from robotnik_msgs/QueryAlarmsResponse.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import robotnik_msgs.msg

class QueryAlarmsResponse(genpy.Message):
  _md5sum = "6d2c5e83064a46d4d198ba7049acbc1c"
  _type = "robotnik_msgs/QueryAlarmsResponse"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """QueryAlarm[] alarms
bool success
string msg


================================================================================
MSG: robotnik_msgs/QueryAlarm
int32 alm_id
string alm_component
string alm_type
string alm_group
string alm_description
string alm_start_time
string alm_end_time
"""
  __slots__ = ['alarms','success','msg']
  _slot_types = ['robotnik_msgs/QueryAlarm[]','bool','string']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       alarms,success,msg

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(QueryAlarmsResponse, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.alarms is None:
        self.alarms = []
      if self.success is None:
        self.success = False
      if self.msg is None:
        self.msg = ''
    else:
      self.alarms = []
      self.success = False
      self.msg = ''

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      length = len(self.alarms)
      buff.write(_struct_I.pack(length))
      for val1 in self.alarms:
        _x = val1.alm_id
        buff.write(_get_struct_i().pack(_x))
        _x = val1.alm_component
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
        _x = val1.alm_type
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
        _x = val1.alm_group
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
        _x = val1.alm_description
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
        _x = val1.alm_start_time
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
        _x = val1.alm_end_time
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self.success
      buff.write(_get_struct_B().pack(_x))
      _x = self.msg
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.alarms is None:
        self.alarms = None
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.alarms = []
      for i in range(0, length):
        val1 = robotnik_msgs.msg.QueryAlarm()
        start = end
        end += 4
        (val1.alm_id,) = _get_struct_i().unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.alm_component = str[start:end].decode('utf-8', 'rosmsg')
        else:
          val1.alm_component = str[start:end]
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.alm_type = str[start:end].decode('utf-8', 'rosmsg')
        else:
          val1.alm_type = str[start:end]
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.alm_group = str[start:end].decode('utf-8', 'rosmsg')
        else:
          val1.alm_group = str[start:end]
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.alm_description = str[start:end].decode('utf-8', 'rosmsg')
        else:
          val1.alm_description = str[start:end]
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.alm_start_time = str[start:end].decode('utf-8', 'rosmsg')
        else:
          val1.alm_start_time = str[start:end]
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.alm_end_time = str[start:end].decode('utf-8', 'rosmsg')
        else:
          val1.alm_end_time = str[start:end]
        self.alarms.append(val1)
      start = end
      end += 1
      (self.success,) = _get_struct_B().unpack(str[start:end])
      self.success = bool(self.success)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.msg = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.msg = str[start:end]
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      length = len(self.alarms)
      buff.write(_struct_I.pack(length))
      for val1 in self.alarms:
        _x = val1.alm_id
        buff.write(_get_struct_i().pack(_x))
        _x = val1.alm_component
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
        _x = val1.alm_type
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
        _x = val1.alm_group
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
        _x = val1.alm_description
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
        _x = val1.alm_start_time
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
        _x = val1.alm_end_time
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self.success
      buff.write(_get_struct_B().pack(_x))
      _x = self.msg
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.alarms is None:
        self.alarms = None
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.alarms = []
      for i in range(0, length):
        val1 = robotnik_msgs.msg.QueryAlarm()
        start = end
        end += 4
        (val1.alm_id,) = _get_struct_i().unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.alm_component = str[start:end].decode('utf-8', 'rosmsg')
        else:
          val1.alm_component = str[start:end]
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.alm_type = str[start:end].decode('utf-8', 'rosmsg')
        else:
          val1.alm_type = str[start:end]
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.alm_group = str[start:end].decode('utf-8', 'rosmsg')
        else:
          val1.alm_group = str[start:end]
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.alm_description = str[start:end].decode('utf-8', 'rosmsg')
        else:
          val1.alm_description = str[start:end]
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.alm_start_time = str[start:end].decode('utf-8', 'rosmsg')
        else:
          val1.alm_start_time = str[start:end]
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.alm_end_time = str[start:end].decode('utf-8', 'rosmsg')
        else:
          val1.alm_end_time = str[start:end]
        self.alarms.append(val1)
      start = end
      end += 1
      (self.success,) = _get_struct_B().unpack(str[start:end])
      self.success = bool(self.success)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.msg = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.msg = str[start:end]
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_B = None
def _get_struct_B():
    global _struct_B
    if _struct_B is None:
        _struct_B = struct.Struct("<B")
    return _struct_B
_struct_i = None
def _get_struct_i():
    global _struct_i
    if _struct_i is None:
        _struct_i = struct.Struct("<i")
    return _struct_i
class QueryAlarms(object):
  _type          = 'robotnik_msgs/QueryAlarms'
  _md5sum = 'a3f95993dac9d6abc16a8e0ab77695c5'
  _request_class  = QueryAlarmsRequest
  _response_class = QueryAlarmsResponse
