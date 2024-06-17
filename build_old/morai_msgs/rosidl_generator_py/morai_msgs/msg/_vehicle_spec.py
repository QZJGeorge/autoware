# generated from rosidl_generator_py/resource/_idl.py.em
# with input from morai_msgs:msg/VehicleSpec.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_VehicleSpec(type):
    """Metaclass of message 'VehicleSpec'."""

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
                'morai_msgs.msg.VehicleSpec')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__vehicle_spec
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__vehicle_spec
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__vehicle_spec
            cls._TYPE_SUPPORT = module.type_support_msg__msg__vehicle_spec
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__vehicle_spec

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


class VehicleSpec(metaclass=Metaclass_VehicleSpec):
    """Message class 'VehicleSpec'."""

    __slots__ = [
        '_size',
        '_wheel_base',
        '_max_steering',
        '_overhang',
        '_rear_overhang',
    ]

    _fields_and_field_types = {
        'size': 'geometry_msgs/Vector3',
        'wheel_base': 'float',
        'max_steering': 'double',
        'overhang': 'float',
        'rear_overhang': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from geometry_msgs.msg import Vector3
        self.size = kwargs.get('size', Vector3())
        self.wheel_base = kwargs.get('wheel_base', float())
        self.max_steering = kwargs.get('max_steering', float())
        self.overhang = kwargs.get('overhang', float())
        self.rear_overhang = kwargs.get('rear_overhang', float())

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
        if self.size != other.size:
            return False
        if self.wheel_base != other.wheel_base:
            return False
        if self.max_steering != other.max_steering:
            return False
        if self.overhang != other.overhang:
            return False
        if self.rear_overhang != other.rear_overhang:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def size(self):
        """Message field 'size'."""
        return self._size

    @size.setter
    def size(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'size' field must be a sub message of type 'Vector3'"
        self._size = value

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
    def max_steering(self):
        """Message field 'max_steering'."""
        return self._max_steering

    @max_steering.setter
    def max_steering(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_steering' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'max_steering' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._max_steering = value

    @builtins.property
    def overhang(self):
        """Message field 'overhang'."""
        return self._overhang

    @overhang.setter
    def overhang(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'overhang' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'overhang' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._overhang = value

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
