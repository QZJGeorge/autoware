# generated from rosidl_generator_py/resource/_idl.py.em
# with input from morai_msgs:msg/MapSpec.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MapSpec(type):
    """Metaclass of message 'MapSpec'."""

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
                'morai_msgs.msg.MapSpec')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__map_spec
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__map_spec
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__map_spec
            cls._TYPE_SUPPORT = module.type_support_msg__msg__map_spec
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__map_spec

            from geometry_msgs.msg import Vector3
            if Vector3.__class__._TYPE_SUPPORT is None:
                Vector3.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MapSpec(metaclass=Metaclass_MapSpec):
    """Message class 'MapSpec'."""

    __slots__ = [
        '_plane_coordinate_system',
        '_utm_num',
        '_utm_offset',
        '_ellipse',
        '_central_latitude',
        '_central_meridian',
        '_scale_factor',
        '_false_easting',
        '_false_northing',
    ]

    _fields_and_field_types = {
        'plane_coordinate_system': 'int32',
        'utm_num': 'int32',
        'utm_offset': 'geometry_msgs/Vector3',
        'ellipse': 'string',
        'central_latitude': 'double',
        'central_meridian': 'double',
        'scale_factor': 'double',
        'false_easting': 'double',
        'false_northing': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.plane_coordinate_system = kwargs.get('plane_coordinate_system', int())
        self.utm_num = kwargs.get('utm_num', int())
        from geometry_msgs.msg import Vector3
        self.utm_offset = kwargs.get('utm_offset', Vector3())
        self.ellipse = kwargs.get('ellipse', str())
        self.central_latitude = kwargs.get('central_latitude', float())
        self.central_meridian = kwargs.get('central_meridian', float())
        self.scale_factor = kwargs.get('scale_factor', float())
        self.false_easting = kwargs.get('false_easting', float())
        self.false_northing = kwargs.get('false_northing', float())

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
        if self.plane_coordinate_system != other.plane_coordinate_system:
            return False
        if self.utm_num != other.utm_num:
            return False
        if self.utm_offset != other.utm_offset:
            return False
        if self.ellipse != other.ellipse:
            return False
        if self.central_latitude != other.central_latitude:
            return False
        if self.central_meridian != other.central_meridian:
            return False
        if self.scale_factor != other.scale_factor:
            return False
        if self.false_easting != other.false_easting:
            return False
        if self.false_northing != other.false_northing:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def plane_coordinate_system(self):
        """Message field 'plane_coordinate_system'."""
        return self._plane_coordinate_system

    @plane_coordinate_system.setter
    def plane_coordinate_system(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'plane_coordinate_system' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'plane_coordinate_system' field must be an integer in [-2147483648, 2147483647]"
        self._plane_coordinate_system = value

    @builtins.property
    def utm_num(self):
        """Message field 'utm_num'."""
        return self._utm_num

    @utm_num.setter
    def utm_num(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'utm_num' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'utm_num' field must be an integer in [-2147483648, 2147483647]"
        self._utm_num = value

    @builtins.property
    def utm_offset(self):
        """Message field 'utm_offset'."""
        return self._utm_offset

    @utm_offset.setter
    def utm_offset(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'utm_offset' field must be a sub message of type 'Vector3'"
        self._utm_offset = value

    @builtins.property
    def ellipse(self):
        """Message field 'ellipse'."""
        return self._ellipse

    @ellipse.setter
    def ellipse(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'ellipse' field must be of type 'str'"
        self._ellipse = value

    @builtins.property
    def central_latitude(self):
        """Message field 'central_latitude'."""
        return self._central_latitude

    @central_latitude.setter
    def central_latitude(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'central_latitude' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'central_latitude' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._central_latitude = value

    @builtins.property
    def central_meridian(self):
        """Message field 'central_meridian'."""
        return self._central_meridian

    @central_meridian.setter
    def central_meridian(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'central_meridian' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'central_meridian' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._central_meridian = value

    @builtins.property
    def scale_factor(self):
        """Message field 'scale_factor'."""
        return self._scale_factor

    @scale_factor.setter
    def scale_factor(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'scale_factor' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'scale_factor' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._scale_factor = value

    @builtins.property
    def false_easting(self):
        """Message field 'false_easting'."""
        return self._false_easting

    @false_easting.setter
    def false_easting(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'false_easting' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'false_easting' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._false_easting = value

    @builtins.property
    def false_northing(self):
        """Message field 'false_northing'."""
        return self._false_northing

    @false_northing.setter
    def false_northing(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'false_northing' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'false_northing' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._false_northing = value
