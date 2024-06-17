# generated from rosidl_generator_py/resource/_idl.py.em
# with input from morai_msgs:msg/RadarDetection.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RadarDetection(type):
    """Metaclass of message 'RadarDetection'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('morai_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'morai_msgs.msg.RadarDetection')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__radar_detection
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__radar_detection
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__radar_detection
            cls._TYPE_SUPPORT = module.type_support_msg__msg__radar_detection
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__radar_detection

            from geometry_msgs.msg import Point
            if Point.__class__._TYPE_SUPPORT is None:
                Point.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RadarDetection(metaclass=Metaclass_RadarDetection):
    """Message class 'RadarDetection'."""

    __slots__ = [
        '_detection_id',
        '_position',
        '_azimuth',
        '_rangerate',
        '_amplitude',
    ]

    _fields_and_field_types = {
        'detection_id': 'uint16',
        'position': 'geometry_msgs/Point',
        'azimuth': 'float',
        'rangerate': 'float',
        'amplitude': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.detection_id = kwargs.get('detection_id', int())
        from geometry_msgs.msg import Point
        self.position = kwargs.get('position', Point())
        self.azimuth = kwargs.get('azimuth', float())
        self.rangerate = kwargs.get('rangerate', float())
        self.amplitude = kwargs.get('amplitude', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.detection_id != other.detection_id:
            return False
        if self.position != other.position:
            return False
        if self.azimuth != other.azimuth:
            return False
        if self.rangerate != other.rangerate:
            return False
        if self.amplitude != other.amplitude:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def detection_id(self):
        """Message field 'detection_id'."""
        return self._detection_id

    @detection_id.setter
    def detection_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'detection_id' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'detection_id' field must be an unsigned integer in [0, 65535]"
        self._detection_id = value

    @builtins.property
    def position(self):
        """Message field 'position'."""
        return self._position

    @position.setter
    def position(self, value):
        if __debug__:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'position' field must be a sub message of type 'Point'"
        self._position = value

    @builtins.property
    def azimuth(self):
        """Message field 'azimuth'."""
        return self._azimuth

    @azimuth.setter
    def azimuth(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'azimuth' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'azimuth' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._azimuth = value

    @builtins.property
    def rangerate(self):
        """Message field 'rangerate'."""
        return self._rangerate

    @rangerate.setter
    def rangerate(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rangerate' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'rangerate' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._rangerate = value

    @builtins.property
    def amplitude(self):
        """Message field 'amplitude'."""
        return self._amplitude

    @amplitude.setter
    def amplitude(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'amplitude' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'amplitude' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._amplitude = value
