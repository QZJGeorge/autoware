# generated from rosidl_generator_py/resource/_idl.py.em
# with input from autoware_adapi_v1_msgs:msg/VehicleDimensions.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_VehicleDimensions(type):
    """Metaclass of message 'VehicleDimensions'."""

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
            module = import_type_support('autoware_adapi_v1_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'autoware_adapi_v1_msgs.msg.VehicleDimensions')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__vehicle_dimensions
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__vehicle_dimensions
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__vehicle_dimensions
            cls._TYPE_SUPPORT = module.type_support_msg__msg__vehicle_dimensions
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__vehicle_dimensions

            from geometry_msgs.msg import Polygon
            if Polygon.__class__._TYPE_SUPPORT is None:
                Polygon.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class VehicleDimensions(metaclass=Metaclass_VehicleDimensions):
    """Message class 'VehicleDimensions'."""

    __slots__ = [
        '_wheel_radius',
        '_wheel_width',
        '_wheel_base',
        '_wheel_tread',
        '_front_overhang',
        '_rear_overhang',
        '_left_overhang',
        '_right_overhang',
        '_height',
        '_footprint',
    ]

    _fields_and_field_types = {
        'wheel_radius': 'float',
        'wheel_width': 'float',
        'wheel_base': 'float',
        'wheel_tread': 'float',
        'front_overhang': 'float',
        'rear_overhang': 'float',
        'left_overhang': 'float',
        'right_overhang': 'float',
        'height': 'float',
        'footprint': 'geometry_msgs/Polygon',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Polygon'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.wheel_radius = kwargs.get('wheel_radius', float())
        self.wheel_width = kwargs.get('wheel_width', float())
        self.wheel_base = kwargs.get('wheel_base', float())
        self.wheel_tread = kwargs.get('wheel_tread', float())
        self.front_overhang = kwargs.get('front_overhang', float())
        self.rear_overhang = kwargs.get('rear_overhang', float())
        self.left_overhang = kwargs.get('left_overhang', float())
        self.right_overhang = kwargs.get('right_overhang', float())
        self.height = kwargs.get('height', float())
        from geometry_msgs.msg import Polygon
        self.footprint = kwargs.get('footprint', Polygon())

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
        if self.wheel_radius != other.wheel_radius:
            return False
        if self.wheel_width != other.wheel_width:
            return False
        if self.wheel_base != other.wheel_base:
            return False
        if self.wheel_tread != other.wheel_tread:
            return False
        if self.front_overhang != other.front_overhang:
            return False
        if self.rear_overhang != other.rear_overhang:
            return False
        if self.left_overhang != other.left_overhang:
            return False
        if self.right_overhang != other.right_overhang:
            return False
        if self.height != other.height:
            return False
        if self.footprint != other.footprint:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def wheel_radius(self):
        """Message field 'wheel_radius'."""
        return self._wheel_radius

    @wheel_radius.setter
    def wheel_radius(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'wheel_radius' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'wheel_radius' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._wheel_radius = value

    @builtins.property
    def wheel_width(self):
        """Message field 'wheel_width'."""
        return self._wheel_width

    @wheel_width.setter
    def wheel_width(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'wheel_width' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'wheel_width' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._wheel_width = value

    @builtins.property
    def wheel_base(self):
        """Message field 'wheel_base'."""
        return self._wheel_base

    @wheel_base.setter
    def wheel_base(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'wheel_base' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'wheel_base' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._wheel_base = value

    @builtins.property
    def wheel_tread(self):
        """Message field 'wheel_tread'."""
        return self._wheel_tread

    @wheel_tread.setter
    def wheel_tread(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'wheel_tread' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'wheel_tread' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._wheel_tread = value

    @builtins.property
    def front_overhang(self):
        """Message field 'front_overhang'."""
        return self._front_overhang

    @front_overhang.setter
    def front_overhang(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'front_overhang' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'front_overhang' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._front_overhang = value

    @builtins.property
    def rear_overhang(self):
        """Message field 'rear_overhang'."""
        return self._rear_overhang

    @rear_overhang.setter
    def rear_overhang(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rear_overhang' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'rear_overhang' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._rear_overhang = value

    @builtins.property
    def left_overhang(self):
        """Message field 'left_overhang'."""
        return self._left_overhang

    @left_overhang.setter
    def left_overhang(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'left_overhang' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'left_overhang' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._left_overhang = value

    @builtins.property
    def right_overhang(self):
        """Message field 'right_overhang'."""
        return self._right_overhang

    @right_overhang.setter
    def right_overhang(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'right_overhang' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'right_overhang' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._right_overhang = value

    @builtins.property
    def height(self):
        """Message field 'height'."""
        return self._height

    @height.setter
    def height(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'height' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'height' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._height = value

    @builtins.property
    def footprint(self):
        """Message field 'footprint'."""
        return self._footprint

    @footprint.setter
    def footprint(self, value):
        if __debug__:
            from geometry_msgs.msg import Polygon
            assert \
                isinstance(value, Polygon), \
                "The 'footprint' field must be a sub message of type 'Polygon'"
        self._footprint = value
