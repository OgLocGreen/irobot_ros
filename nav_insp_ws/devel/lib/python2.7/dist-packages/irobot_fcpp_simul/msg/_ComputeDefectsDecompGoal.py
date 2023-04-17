# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from irobot_fcpp_simul/ComputeDefectsDecompGoal.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import geometry_msgs.msg

class ComputeDefectsDecompGoal(genpy.Message):
  _md5sum = "100a9f9d0c5c91d1ec171cccc3fdc2c8"
  _type = "irobot_fcpp_simul/ComputeDefectsDecompGoal"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
# Define the goal
int32 chapa_id

geometry_msgs/Polygon poly_defect


geometry_msgs/Polygon zone0
geometry_msgs/Polygon zone90
geometry_msgs/Polygon zone180
geometry_msgs/Polygon zone270

float32 xmax
float32 ymax


================================================================================
MSG: geometry_msgs/Polygon
#A specification of a polygon where the first and last points are assumed to be connected
Point32[] points

================================================================================
MSG: geometry_msgs/Point32
# This contains the position of a point in free space(with 32 bits of precision).
# It is recommeded to use Point wherever possible instead of Point32.  
# 
# This recommendation is to promote interoperability.  
#
# This message is designed to take up less space when sending
# lots of points at once, as in the case of a PointCloud.  

float32 x
float32 y
float32 z"""
  __slots__ = ['chapa_id','poly_defect','zone0','zone90','zone180','zone270','xmax','ymax']
  _slot_types = ['int32','geometry_msgs/Polygon','geometry_msgs/Polygon','geometry_msgs/Polygon','geometry_msgs/Polygon','geometry_msgs/Polygon','float32','float32']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       chapa_id,poly_defect,zone0,zone90,zone180,zone270,xmax,ymax

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(ComputeDefectsDecompGoal, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.chapa_id is None:
        self.chapa_id = 0
      if self.poly_defect is None:
        self.poly_defect = geometry_msgs.msg.Polygon()
      if self.zone0 is None:
        self.zone0 = geometry_msgs.msg.Polygon()
      if self.zone90 is None:
        self.zone90 = geometry_msgs.msg.Polygon()
      if self.zone180 is None:
        self.zone180 = geometry_msgs.msg.Polygon()
      if self.zone270 is None:
        self.zone270 = geometry_msgs.msg.Polygon()
      if self.xmax is None:
        self.xmax = 0.
      if self.ymax is None:
        self.ymax = 0.
    else:
      self.chapa_id = 0
      self.poly_defect = geometry_msgs.msg.Polygon()
      self.zone0 = geometry_msgs.msg.Polygon()
      self.zone90 = geometry_msgs.msg.Polygon()
      self.zone180 = geometry_msgs.msg.Polygon()
      self.zone270 = geometry_msgs.msg.Polygon()
      self.xmax = 0.
      self.ymax = 0.

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
      _x = self.chapa_id
      buff.write(_get_struct_i().pack(_x))
      length = len(self.poly_defect.points)
      buff.write(_struct_I.pack(length))
      for val1 in self.poly_defect.points:
        _x = val1
        buff.write(_get_struct_3f().pack(_x.x, _x.y, _x.z))
      length = len(self.zone0.points)
      buff.write(_struct_I.pack(length))
      for val1 in self.zone0.points:
        _x = val1
        buff.write(_get_struct_3f().pack(_x.x, _x.y, _x.z))
      length = len(self.zone90.points)
      buff.write(_struct_I.pack(length))
      for val1 in self.zone90.points:
        _x = val1
        buff.write(_get_struct_3f().pack(_x.x, _x.y, _x.z))
      length = len(self.zone180.points)
      buff.write(_struct_I.pack(length))
      for val1 in self.zone180.points:
        _x = val1
        buff.write(_get_struct_3f().pack(_x.x, _x.y, _x.z))
      length = len(self.zone270.points)
      buff.write(_struct_I.pack(length))
      for val1 in self.zone270.points:
        _x = val1
        buff.write(_get_struct_3f().pack(_x.x, _x.y, _x.z))
      _x = self
      buff.write(_get_struct_2f().pack(_x.xmax, _x.ymax))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.poly_defect is None:
        self.poly_defect = geometry_msgs.msg.Polygon()
      if self.zone0 is None:
        self.zone0 = geometry_msgs.msg.Polygon()
      if self.zone90 is None:
        self.zone90 = geometry_msgs.msg.Polygon()
      if self.zone180 is None:
        self.zone180 = geometry_msgs.msg.Polygon()
      if self.zone270 is None:
        self.zone270 = geometry_msgs.msg.Polygon()
      end = 0
      start = end
      end += 4
      (self.chapa_id,) = _get_struct_i().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.poly_defect.points = []
      for i in range(0, length):
        val1 = geometry_msgs.msg.Point32()
        _x = val1
        start = end
        end += 12
        (_x.x, _x.y, _x.z,) = _get_struct_3f().unpack(str[start:end])
        self.poly_defect.points.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.zone0.points = []
      for i in range(0, length):
        val1 = geometry_msgs.msg.Point32()
        _x = val1
        start = end
        end += 12
        (_x.x, _x.y, _x.z,) = _get_struct_3f().unpack(str[start:end])
        self.zone0.points.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.zone90.points = []
      for i in range(0, length):
        val1 = geometry_msgs.msg.Point32()
        _x = val1
        start = end
        end += 12
        (_x.x, _x.y, _x.z,) = _get_struct_3f().unpack(str[start:end])
        self.zone90.points.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.zone180.points = []
      for i in range(0, length):
        val1 = geometry_msgs.msg.Point32()
        _x = val1
        start = end
        end += 12
        (_x.x, _x.y, _x.z,) = _get_struct_3f().unpack(str[start:end])
        self.zone180.points.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.zone270.points = []
      for i in range(0, length):
        val1 = geometry_msgs.msg.Point32()
        _x = val1
        start = end
        end += 12
        (_x.x, _x.y, _x.z,) = _get_struct_3f().unpack(str[start:end])
        self.zone270.points.append(val1)
      _x = self
      start = end
      end += 8
      (_x.xmax, _x.ymax,) = _get_struct_2f().unpack(str[start:end])
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
      _x = self.chapa_id
      buff.write(_get_struct_i().pack(_x))
      length = len(self.poly_defect.points)
      buff.write(_struct_I.pack(length))
      for val1 in self.poly_defect.points:
        _x = val1
        buff.write(_get_struct_3f().pack(_x.x, _x.y, _x.z))
      length = len(self.zone0.points)
      buff.write(_struct_I.pack(length))
      for val1 in self.zone0.points:
        _x = val1
        buff.write(_get_struct_3f().pack(_x.x, _x.y, _x.z))
      length = len(self.zone90.points)
      buff.write(_struct_I.pack(length))
      for val1 in self.zone90.points:
        _x = val1
        buff.write(_get_struct_3f().pack(_x.x, _x.y, _x.z))
      length = len(self.zone180.points)
      buff.write(_struct_I.pack(length))
      for val1 in self.zone180.points:
        _x = val1
        buff.write(_get_struct_3f().pack(_x.x, _x.y, _x.z))
      length = len(self.zone270.points)
      buff.write(_struct_I.pack(length))
      for val1 in self.zone270.points:
        _x = val1
        buff.write(_get_struct_3f().pack(_x.x, _x.y, _x.z))
      _x = self
      buff.write(_get_struct_2f().pack(_x.xmax, _x.ymax))
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
      if self.poly_defect is None:
        self.poly_defect = geometry_msgs.msg.Polygon()
      if self.zone0 is None:
        self.zone0 = geometry_msgs.msg.Polygon()
      if self.zone90 is None:
        self.zone90 = geometry_msgs.msg.Polygon()
      if self.zone180 is None:
        self.zone180 = geometry_msgs.msg.Polygon()
      if self.zone270 is None:
        self.zone270 = geometry_msgs.msg.Polygon()
      end = 0
      start = end
      end += 4
      (self.chapa_id,) = _get_struct_i().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.poly_defect.points = []
      for i in range(0, length):
        val1 = geometry_msgs.msg.Point32()
        _x = val1
        start = end
        end += 12
        (_x.x, _x.y, _x.z,) = _get_struct_3f().unpack(str[start:end])
        self.poly_defect.points.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.zone0.points = []
      for i in range(0, length):
        val1 = geometry_msgs.msg.Point32()
        _x = val1
        start = end
        end += 12
        (_x.x, _x.y, _x.z,) = _get_struct_3f().unpack(str[start:end])
        self.zone0.points.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.zone90.points = []
      for i in range(0, length):
        val1 = geometry_msgs.msg.Point32()
        _x = val1
        start = end
        end += 12
        (_x.x, _x.y, _x.z,) = _get_struct_3f().unpack(str[start:end])
        self.zone90.points.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.zone180.points = []
      for i in range(0, length):
        val1 = geometry_msgs.msg.Point32()
        _x = val1
        start = end
        end += 12
        (_x.x, _x.y, _x.z,) = _get_struct_3f().unpack(str[start:end])
        self.zone180.points.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.zone270.points = []
      for i in range(0, length):
        val1 = geometry_msgs.msg.Point32()
        _x = val1
        start = end
        end += 12
        (_x.x, _x.y, _x.z,) = _get_struct_3f().unpack(str[start:end])
        self.zone270.points.append(val1)
      _x = self
      start = end
      end += 8
      (_x.xmax, _x.ymax,) = _get_struct_2f().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_2f = None
def _get_struct_2f():
    global _struct_2f
    if _struct_2f is None:
        _struct_2f = struct.Struct("<2f")
    return _struct_2f
_struct_3f = None
def _get_struct_3f():
    global _struct_3f
    if _struct_3f is None:
        _struct_3f = struct.Struct("<3f")
    return _struct_3f
_struct_i = None
def _get_struct_i():
    global _struct_i
    if _struct_i is None:
        _struct_i = struct.Struct("<i")
    return _struct_i