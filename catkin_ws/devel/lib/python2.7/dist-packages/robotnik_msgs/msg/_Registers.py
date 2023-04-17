# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from robotnik_msgs/Registers.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import robotnik_msgs.msg

class Registers(genpy.Message):
  _md5sum = "12d8645a7a01078095f8477105240cef"
  _type = "robotnik_msgs/Registers"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """robotnik_msgs/Register[] registers
================================================================================
MSG: robotnik_msgs/Register
int32 id
int32 value"""
  __slots__ = ['registers']
  _slot_types = ['robotnik_msgs/Register[]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       registers

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(Registers, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.registers is None:
        self.registers = []
    else:
      self.registers = []

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
      length = len(self.registers)
      buff.write(_struct_I.pack(length))
      for val1 in self.registers:
        _x = val1
        buff.write(_get_struct_2i().pack(_x.id, _x.value))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.registers is None:
        self.registers = None
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.registers = []
      for i in range(0, length):
        val1 = robotnik_msgs.msg.Register()
        _x = val1
        start = end
        end += 8
        (_x.id, _x.value,) = _get_struct_2i().unpack(str[start:end])
        self.registers.append(val1)
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
      length = len(self.registers)
      buff.write(_struct_I.pack(length))
      for val1 in self.registers:
        _x = val1
        buff.write(_get_struct_2i().pack(_x.id, _x.value))
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
      if self.registers is None:
        self.registers = None
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.registers = []
      for i in range(0, length):
        val1 = robotnik_msgs.msg.Register()
        _x = val1
        start = end
        end += 8
        (_x.id, _x.value,) = _get_struct_2i().unpack(str[start:end])
        self.registers.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_2i = None
def _get_struct_2i():
    global _struct_2i
    if _struct_2i is None:
        _struct_2i = struct.Struct("<2i")
    return _struct_2i
