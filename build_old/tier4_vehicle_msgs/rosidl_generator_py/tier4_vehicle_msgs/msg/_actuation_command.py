# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tier4_vehicle_msgs:msg/ActuationCommand.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ActuationCommand(type):
    """Metaclass of message 'ActuationCommand'."""

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
            module = import_type_support('tier4_vehicle_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tier4_vehicle_msgs.msg.ActuationCommand')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__actuation_command
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__actuation_command
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__actuation_command
            cls._TYPE_SUPPORT = module.type_support_msg__msg__actuation_command
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__actuation_command

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ActuationCommand(metaclass=Metaclass_ActuationCommand):
    """Message class 'ActuationCommand'."""

    __slots__ = [
        '_accel_cmd',
        '_brake_cmd',
        '_steer_cmd',
    ]

    _fields_and_field_types = {
        'accel_cmd': 'double',
        'brake_cmd': 'double',
        'steer_cmd': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.accel_cmd = kwargs.get('accel_cmd', float())
        self.brake_cmd = kwargs.get('brake_cmd', float())
        self.steer_cmd = kwargs.get('steer_cmd', float())

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
        if self.accel_cmd != other.accel_cmd:
            return False
        if self.brake_cmd != other.brake_cmd:
            return False
        if self.steer_cmd != other.steer_cmd:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def accel_cmd(self):
        """Message field 'accel_cmd'."""
        return self._accel_cmd

    @accel_cmd.setter
    def accel_cmd(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'accel_cmd' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'accel_cmd' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._accel_cmd = value

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
    def steer_cmd(self):
        """Message field 'steer_cmd'."""
        return self._steer_cmd

    @steer_cmd.setter
    def steer_cmd(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'steer_cmd' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'steer_cmd' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._steer_cmd = value
