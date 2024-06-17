# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tier4_external_api_msgs:msg/CpuStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CpuStatus(type):
    """Metaclass of message 'CpuStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'OK': 0,
        'HIGH_LOAD': 1,
        'VERY_HIGH_LOAD': 2,
        'STALE': 3,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('tier4_external_api_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tier4_external_api_msgs.msg.CpuStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__cpu_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__cpu_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__cpu_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__cpu_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__cpu_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'OK': cls.__constants['OK'],
            'HIGH_LOAD': cls.__constants['HIGH_LOAD'],
            'VERY_HIGH_LOAD': cls.__constants['VERY_HIGH_LOAD'],
            'STALE': cls.__constants['STALE'],
        }

    @property
    def OK(self):
        """Message constant 'OK'."""
        return Metaclass_CpuStatus.__constants['OK']

    @property
    def HIGH_LOAD(self):
        """Message constant 'HIGH_LOAD'."""
        return Metaclass_CpuStatus.__constants['HIGH_LOAD']

    @property
    def VERY_HIGH_LOAD(self):
        """Message constant 'VERY_HIGH_LOAD'."""
        return Metaclass_CpuStatus.__constants['VERY_HIGH_LOAD']

    @property
    def STALE(self):
        """Message constant 'STALE'."""
        return Metaclass_CpuStatus.__constants['STALE']


class CpuStatus(metaclass=Metaclass_CpuStatus):
    """
    Message class 'CpuStatus'.

    Constants:
      OK
      HIGH_LOAD
      VERY_HIGH_LOAD
      STALE
    """

    __slots__ = [
        '_status',
        '_total',
        '_usr',
        '_nice',
        '_sys',
        '_idle',
    ]

    _fields_and_field_types = {
        'status': 'uint8',
        'total': 'float',
        'usr': 'float',
        'nice': 'float',
        'sys': 'float',
        'idle': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.status = kwargs.get('status', int())
        self.total = kwargs.get('total', float())
        self.usr = kwargs.get('usr', float())
        self.nice = kwargs.get('nice', float())
        self.sys = kwargs.get('sys', float())
        self.idle = kwargs.get('idle', float())

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
        if self.status != other.status:
            return False
        if self.total != other.total:
            return False
        if self.usr != other.usr:
            return False
        if self.nice != other.nice:
            return False
        if self.sys != other.sys:
            return False
        if self.idle != other.idle:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'status' field must be an unsigned integer in [0, 255]"
        self._status = value

    @builtins.property
    def total(self):
        """Message field 'total'."""
        return self._total

    @total.setter
    def total(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'total' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'total' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._total = value

    @builtins.property
    def usr(self):
        """Message field 'usr'."""
        return self._usr

    @usr.setter
    def usr(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'usr' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'usr' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._usr = value

    @builtins.property
    def nice(self):
        """Message field 'nice'."""
        return self._nice

    @nice.setter
    def nice(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'nice' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'nice' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._nice = value

    @builtins.property
    def sys(self):
        """Message field 'sys'."""
        return self._sys

    @sys.setter
    def sys(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'sys' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'sys' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._sys = value

    @builtins.property
    def idle(self):
        """Message field 'idle'."""
        return self._idle

    @idle.setter
    def idle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'idle' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'idle' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._idle = value
