# generated from rosidl_generator_py/resource/_idl.py.em
# with input from control_validator:msg/ControlValidatorStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ControlValidatorStatus(type):
    """Metaclass of message 'ControlValidatorStatus'."""

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
            module = import_type_support('control_validator')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'control_validator.msg.ControlValidatorStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__control_validator_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__control_validator_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__control_validator_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__control_validator_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__control_validator_status

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ControlValidatorStatus(metaclass=Metaclass_ControlValidatorStatus):
    """Message class 'ControlValidatorStatus'."""

    __slots__ = [
        '_stamp',
        '_is_valid_max_distance_deviation',
        '_max_distance_deviation',
        '_invalid_count',
    ]

    _fields_and_field_types = {
        'stamp': 'builtin_interfaces/Time',
        'is_valid_max_distance_deviation': 'boolean',
        'max_distance_deviation': 'double',
        'invalid_count': 'int64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())
        self.is_valid_max_distance_deviation = kwargs.get('is_valid_max_distance_deviation', bool())
        self.max_distance_deviation = kwargs.get('max_distance_deviation', float())
        self.invalid_count = kwargs.get('invalid_count', int())

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
        if self.stamp != other.stamp:
            return False
        if self.is_valid_max_distance_deviation != other.is_valid_max_distance_deviation:
            return False
        if self.max_distance_deviation != other.max_distance_deviation:
            return False
        if self.invalid_count != other.invalid_count:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def stamp(self):
        """Message field 'stamp'."""
        return self._stamp

    @stamp.setter
    def stamp(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'stamp' field must be a sub message of type 'Time'"
        self._stamp = value

    @builtins.property
    def is_valid_max_distance_deviation(self):
        """Message field 'is_valid_max_distance_deviation'."""
        return self._is_valid_max_distance_deviation

    @is_valid_max_distance_deviation.setter
    def is_valid_max_distance_deviation(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_valid_max_distance_deviation' field must be of type 'bool'"
        self._is_valid_max_distance_deviation = value

    @builtins.property
    def max_distance_deviation(self):
        """Message field 'max_distance_deviation'."""
        return self._max_distance_deviation

    @max_distance_deviation.setter
    def max_distance_deviation(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_distance_deviation' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'max_distance_deviation' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._max_distance_deviation = value

    @builtins.property
    def invalid_count(self):
        """Message field 'invalid_count'."""
        return self._invalid_count

    @invalid_count.setter
    def invalid_count(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'invalid_count' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'invalid_count' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._invalid_count = value
