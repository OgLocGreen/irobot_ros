# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from inspection_realsense/moveBackwardGoal.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class moveBackwardGoal(genpy.Message):
  _md5sum = "26095be20a715ca0a2049a176afb9bed"
  _type = "inspection_realsense/moveBackwardGoal"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
#goal definition
float32 vel
int32 n_pasadas_ant
int32 n_imgs_ant

"""
  __slots__ = ['vel','n_pasadas_ant','n_imgs_ant']
  _slot_types = ['float32','int32','int32']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       vel,n_pasadas_ant,n_imgs_ant

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(moveBackwardGoal, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.vel is None:
        self.vel = 0.
      if self.n_pasadas_ant is None:
        self.n_pasadas_ant = 0
      if self.n_imgs_ant is None:
        self.n_imgs_ant = 0
    else:
      self.vel = 0.
      self.n_pasadas_ant = 0
      self.n_imgs_ant = 0

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
      _x = self
      buff.write(_get_struct_f2i().pack(_x.vel, _x.n_pasadas_ant, _x.n_imgs_ant))
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
      _x = self
      start = end
      end += 12
      (_x.vel, _x.n_pasadas_ant, _x.n_imgs_ant,) = _get_struct_f2i().unpack(str[start:end])
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
      _x = self
      buff.write(_get_struct_f2i().pack(_x.vel, _x.n_pasadas_ant, _x.n_imgs_ant))
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
      _x = self
      start = end
      end += 12
      (_x.vel, _x.n_pasadas_ant, _x.n_imgs_ant,) = _get_struct_f2i().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_f2i = None
def _get_struct_f2i():
    global _struct_f2i
    if _struct_f2i is None:
        _struct_f2i = struct.Struct("<f2i")
    return _struct_f2i
