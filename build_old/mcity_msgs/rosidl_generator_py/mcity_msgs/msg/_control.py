# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mcity_msgs:msg/Control.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Control(type):
    """Metaclass of message 'Control'."""

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
            module = import_type_support('mcity_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mcity_msgs.msg.Control')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__control
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__control
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__control
            cls._TYPE_SUPPORT = module.type_support_msg__msg__control
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__control

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Control(metaclass=Metaclass_Control):
    """Message class 'Control'."""

    __slots__ = [
        '_timestamp',
        '_count',
        '_brake_cmd',
        '_throttle_cmd',
        '_steering_cmd',
        '_gear_cmd',
        '_turn_signal_cmd',
    ]

    _fields_and_field_types = {
        'timestamp': 'double',
        'count': 'int32',
        'brake_cmd': 'double',
        'throttle_cmd': 'double',
        'steering_cmd': 'double',
        'gear_cmd': 'int16',
        'turn_signal_cmd': 'int16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', float())
        self.count = kwargs.get('count', int())
        self.brake_cmd = kwargs.get('brake_cmd', float())
        self.throttle_cmd = kwargs.get('throttle_cmd', float())
        self.steering_cmd = kwargs.get('steering_cmd', float())
        self.gear_cmd = kwargs.get('gear_cmd', int())
        self.turn_signal_cmd = kwargs.get('turn_signal_cmd', int())

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
        if self.timestamp != other.timestamp:
            return False
        if self.count != other.count:
            return False
        if self.brake_cmd != other.brake_cmd:
            return False
        if self.throttle_cmd != other.throttle_cmd:
            return False
        if self.steering_cmd != other.steering_cmd:
            return False
        if self.gear_cmd != other.gear_cmd:
            return False
        if self.turn_signal_cmd != other.turn_signal_cmd:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def timestamp(self):
        """Message field 'timestamp'."""
        return self._timestamp

    @timestamp.setter
    def timestamp(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'timestamp' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'timestamp' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._timestamp = value

    @builtins.property
    def count(self):
        """Message field 'count'."""
        return self._count

    @count.setter
    def count(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'count' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'count' field must be an integer in [-2147483648, 2147483647]"
        self._count = value

    @builtins.property
    def brake_cmd(self):
        """Message field 'brake_cmd'."""
        return self._brake_cmd

    @brake_cmd.setter
    def brake_cmd(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'brake_cmd' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'brake_cmd' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._brake_cmd = value

    @builtins.property
    def throttle_cmd(self):
        """Message field 'throttle_cmd'."""
        return self._throttle_cmd

    @throttle_cmd.setter
    def throttle_cmd(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'throttle_cmd' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'throttle_cmd' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._throttle_cmd = value

    @builtins.property
    def steering_cmd(self):
        """Message field 'steering_cmd'."""
        return self._steering_cmd

    @steering_cmd.setter
    def steering_cmd(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'steering_cmd' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'steering_cmd' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._steering_cmd = value

    @builtins.property
    def gear_cmd(self):
        """Message field 'gear_cmd'."""
        return self._gear_cmd

    @gear_cmd.setter
    def gear_cmd(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gear_cmd' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'gear_cmd' field must be an integer in [-32768, 32767]"
        self._gear_cmd = value

    @builtins.property
    def turn_signal_cmd(self):
        """Message field 'turn_signal_cmd'."""
        return self._turn_signal_cmd

    @turn_signal_cmd.setter
    def turn_signal_cmd(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'turn_signal_cmd' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'turn_signal_cmd' field must be an integer in [-32768, 32767]"
        self._turn_signal_cmd = value
