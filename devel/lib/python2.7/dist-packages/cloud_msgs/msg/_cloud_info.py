# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from cloud_msgs/cloud_info.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import std_msgs.msg

class cloud_info(genpy.Message):
  _md5sum = "af8fdf3af62b4ae75761d0e92aa4cf43"
  _type = "cloud_msgs/cloud_info"
  _has_header = True  # flag to mark the presence of a Header object
  _full_text = """Header header 

int32[] startRingIndex
int32[] endRingIndex

float32 startOrientation
float32 endOrientation
float32 orientationDiff

bool[]    segmentedCloudGroundFlag # true - ground point, false - other points
uint32[]  segmentedCloudColInd # point column index in range image
float32[] segmentedCloudRange # point range 





================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
string frame_id
"""
  __slots__ = ['header','startRingIndex','endRingIndex','startOrientation','endOrientation','orientationDiff','segmentedCloudGroundFlag','segmentedCloudColInd','segmentedCloudRange']
  _slot_types = ['std_msgs/Header','int32[]','int32[]','float32','float32','float32','bool[]','uint32[]','float32[]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       header,startRingIndex,endRingIndex,startOrientation,endOrientation,orientationDiff,segmentedCloudGroundFlag,segmentedCloudColInd,segmentedCloudRange

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(cloud_info, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.startRingIndex is None:
        self.startRingIndex = []
      if self.endRingIndex is None:
        self.endRingIndex = []
      if self.startOrientation is None:
        self.startOrientation = 0.
      if self.endOrientation is None:
        self.endOrientation = 0.
      if self.orientationDiff is None:
        self.orientationDiff = 0.
      if self.segmentedCloudGroundFlag is None:
        self.segmentedCloudGroundFlag = []
      if self.segmentedCloudColInd is None:
        self.segmentedCloudColInd = []
      if self.segmentedCloudRange is None:
        self.segmentedCloudRange = []
    else:
      self.header = std_msgs.msg.Header()
      self.startRingIndex = []
      self.endRingIndex = []
      self.startOrientation = 0.
      self.endOrientation = 0.
      self.orientationDiff = 0.
      self.segmentedCloudGroundFlag = []
      self.segmentedCloudColInd = []
      self.segmentedCloudRange = []

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
      buff.write(_get_struct_3I().pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      length = len(self.startRingIndex)
      buff.write(_struct_I.pack(length))
      pattern = '<%si'%length
      buff.write(struct.Struct(pattern).pack(*self.startRingIndex))
      length = len(self.endRingIndex)
      buff.write(_struct_I.pack(length))
      pattern = '<%si'%length
      buff.write(struct.Struct(pattern).pack(*self.endRingIndex))
      _x = self
      buff.write(_get_struct_3f().pack(_x.startOrientation, _x.endOrientation, _x.orientationDiff))
      length = len(self.segmentedCloudGroundFlag)
      buff.write(_struct_I.pack(length))
      pattern = '<%sB'%length
      buff.write(struct.Struct(pattern).pack(*self.segmentedCloudGroundFlag))
      length = len(self.segmentedCloudColInd)
      buff.write(_struct_I.pack(length))
      pattern = '<%sI'%length
      buff.write(struct.Struct(pattern).pack(*self.segmentedCloudColInd))
      length = len(self.segmentedCloudRange)
      buff.write(_struct_I.pack(length))
      pattern = '<%sf'%length
      buff.write(struct.Struct(pattern).pack(*self.segmentedCloudRange))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.header.frame_id = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%si'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.startRingIndex = s.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%si'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.endRingIndex = s.unpack(str[start:end])
      _x = self
      start = end
      end += 12
      (_x.startOrientation, _x.endOrientation, _x.orientationDiff,) = _get_struct_3f().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sB'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.segmentedCloudGroundFlag = s.unpack(str[start:end])
      self.segmentedCloudGroundFlag = list(map(bool, self.segmentedCloudGroundFlag))
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sI'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.segmentedCloudColInd = s.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sf'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.segmentedCloudRange = s.unpack(str[start:end])
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
      buff.write(_get_struct_3I().pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      length = len(self.startRingIndex)
      buff.write(_struct_I.pack(length))
      pattern = '<%si'%length
      buff.write(self.startRingIndex.tostring())
      length = len(self.endRingIndex)
      buff.write(_struct_I.pack(length))
      pattern = '<%si'%length
      buff.write(self.endRingIndex.tostring())
      _x = self
      buff.write(_get_struct_3f().pack(_x.startOrientation, _x.endOrientation, _x.orientationDiff))
      length = len(self.segmentedCloudGroundFlag)
      buff.write(_struct_I.pack(length))
      pattern = '<%sB'%length
      buff.write(self.segmentedCloudGroundFlag.tostring())
      length = len(self.segmentedCloudColInd)
      buff.write(_struct_I.pack(length))
      pattern = '<%sI'%length
      buff.write(self.segmentedCloudColInd.tostring())
      length = len(self.segmentedCloudRange)
      buff.write(_struct_I.pack(length))
      pattern = '<%sf'%length
      buff.write(self.segmentedCloudRange.tostring())
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
      if self.header is None:
        self.header = std_msgs.msg.Header()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.header.frame_id = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%si'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.startRingIndex = numpy.frombuffer(str[start:end], dtype=numpy.int32, count=length)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%si'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.endRingIndex = numpy.frombuffer(str[start:end], dtype=numpy.int32, count=length)
      _x = self
      start = end
      end += 12
      (_x.startOrientation, _x.endOrientation, _x.orientationDiff,) = _get_struct_3f().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sB'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.segmentedCloudGroundFlag = numpy.frombuffer(str[start:end], dtype=numpy.bool, count=length)
      self.segmentedCloudGroundFlag = list(map(bool, self.segmentedCloudGroundFlag))
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sI'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.segmentedCloudColInd = numpy.frombuffer(str[start:end], dtype=numpy.uint32, count=length)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sf'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.segmentedCloudRange = numpy.frombuffer(str[start:end], dtype=numpy.float32, count=length)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_3I = None
def _get_struct_3I():
    global _struct_3I
    if _struct_3I is None:
        _struct_3I = struct.Struct("<3I")
    return _struct_3I
_struct_3f = None
def _get_struct_3f():
    global _struct_3f
    if _struct_3f is None:
        _struct_3f = struct.Struct("<3f")
    return _struct_3f
