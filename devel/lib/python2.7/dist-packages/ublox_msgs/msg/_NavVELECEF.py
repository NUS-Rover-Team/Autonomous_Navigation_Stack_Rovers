# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from ublox_msgs/NavVELECEF.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class NavVELECEF(genpy.Message):
  _md5sum = "97299f597364a39a6c0e96ed2ee4e702"
  _type = "ublox_msgs/NavVELECEF"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """# NAV-VELECEF (0x01 0x11)
# Velocity Solution in ECEF
#
# See important comments concerning validity of velocity given in section
# Navigation Output Filters.
#

uint8 CLASS_ID = 1
uint8 MESSAGE_ID = 17

uint32 iTOW             # GPS Millisecond time of week [ms]

int32 ecefVX            # ECEF X velocity [cm/s]
int32 ecefVY            # ECEF Y velocity [cm/s]
int32 ecefVZ            # ECEF Z velocity [cm/s]
uint32 sAcc             # Speed Accuracy Estimate [cm/s]
"""
  # Pseudo-constants
  CLASS_ID = 1
  MESSAGE_ID = 17

  __slots__ = ['iTOW','ecefVX','ecefVY','ecefVZ','sAcc']
  _slot_types = ['uint32','int32','int32','int32','uint32']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       iTOW,ecefVX,ecefVY,ecefVZ,sAcc

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(NavVELECEF, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.iTOW is None:
        self.iTOW = 0
      if self.ecefVX is None:
        self.ecefVX = 0
      if self.ecefVY is None:
        self.ecefVY = 0
      if self.ecefVZ is None:
        self.ecefVZ = 0
      if self.sAcc is None:
        self.sAcc = 0
    else:
      self.iTOW = 0
      self.ecefVX = 0
      self.ecefVY = 0
      self.ecefVZ = 0
      self.sAcc = 0

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
      buff.write(_get_struct_I3iI().pack(_x.iTOW, _x.ecefVX, _x.ecefVY, _x.ecefVZ, _x.sAcc))
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
      end += 20
      (_x.iTOW, _x.ecefVX, _x.ecefVY, _x.ecefVZ, _x.sAcc,) = _get_struct_I3iI().unpack(str[start:end])
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
      buff.write(_get_struct_I3iI().pack(_x.iTOW, _x.ecefVX, _x.ecefVY, _x.ecefVZ, _x.sAcc))
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
      end += 20
      (_x.iTOW, _x.ecefVX, _x.ecefVY, _x.ecefVZ, _x.sAcc,) = _get_struct_I3iI().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_I3iI = None
def _get_struct_I3iI():
    global _struct_I3iI
    if _struct_I3iI is None:
        _struct_I3iI = struct.Struct("<I3iI")
    return _struct_I3iI
