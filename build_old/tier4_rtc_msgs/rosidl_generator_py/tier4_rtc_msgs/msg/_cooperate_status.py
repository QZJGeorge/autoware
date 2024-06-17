# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tier4_rtc_msgs:msg/CooperateStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CooperateStatus(type):
    """Metaclass of message 'CooperateStatus'."""

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
            module = import_type_support('tier4_rtc_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tier4_rtc_msgs.msg.CooperateStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__cooperate_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__cooperate_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__cooperate_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__cooperate_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__cooperate_status

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

            from tier4_rtc_msgs.msg import Command
            if Command.__class__._TYPE_SUPPORT is None:
                Command.__class__.__import_type_support__()

            from tier4_rtc_msgs.msg import Module
            if Module.__class__._TYPE_SUPPORT is None:
                Module.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CooperateStatus(metaclass=Metaclass_CooperateStatus):
    """Message class 'CooperateStatus'."""

    __slots__ = [
        '_stamp',
        '_uuid',
        '_module',
        '_safe',
        '_command_status',
        '_auto_mode',
        '_start_distance',
        '_finish_distance',
    ]

    _fields_and_field_types = {
        'stamp': 'builtin_interfaces/Time',
        'uuid': 'unique_identifier_msgs/UUID',
        'module': 'tier4_rtc_msgs/Module',
        'safe': 'boolean',
        'command_status': 'tier4_rtc_msgs/Command',
        'auto_mode': 'boolean',
        'start_distance': 'float',
        'finish_distance': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['tier4_rtc_msgs', 'msg'], 'Module'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['tier4_rtc_msgs', 'msg'], 'Command'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())
        from unique_identifier_msgs.msg import UUID
        self.uuid = kwargs.get('uuid', UUID())
        from tier4_rtc_msgs.msg import Module
        self.module = kwargs.get('module', Module())
        self.safe = kwargs.get('safe', bool())
        from tier4_rtc_msgs.msg import Command
        self.command_status = kwargs.get('command_status', Command())
        self.auto_mode = kwargs.get('auto_mode', bool())
        self.start_distance = kwargs.get('start_distance', float())
        self.finish_distance = kwargs.get('finish_distance', float())

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
        if self.uuid != other.uuid:
            return False
        if self.module != other.module:
            return False
        if self.safe != other.safe:
            return False
        if self.command_status != other.command_status:
            return False
        if self.auto_mode != other.auto_mode:
            return False
        if self.start_distance != other.start_distance:
            return False
        if self.finish_distance != other.finish_distance:
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
    def uuid(self):
        """Message field 'uuid'."""
        return self._uuid

    @uuid.setter
    def uuid(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'uuid' field must be a sub message of type 'UUID'"
        self._uuid = value

    @builtins.property
    def module(self):
        """Message field 'module'."""
        return self._module

    @module.setter
    def module(self, value):
        if __debug__:
            from tier4_rtc_msgs.msg import Module
            assert \
                isinstance(value, Module), \
                "The 'module' field must be a sub message of type 'Module'"
        self._module = value

    @builtins.property
    def safe(self):
        """Message field 'safe'."""
        return self._safe

    @safe.setter
    def safe(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'safe' field must be of type 'bool'"
        self._safe = value

    @builtins.property
    def command_status(self):
        """Message field 'command_status'."""
        return self._command_status

    @command_status.setter
    def command_status(self, value):
        if __debug__:
            from tier4_rtc_msgs.msg import Command
            assert \
                isinstance(value, Command), \
                "The 'command_status' field must be a sub message of type 'Command'"
        self._command_status = value

    @builtins.property
    def auto_mode(self):
        """Message field 'auto_mode'."""
        return self._auto_mode

    @auto_mode.setter
    def auto_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'auto_mode' field must be of type 'bool'"
        self._auto_mode = value

    @builtins.property
    def start_distance(self):
        """Message field 'start_distance'."""
        return self._start_distance

    @start_distance.setter
    def start_distance(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'start_distance' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'start_distance' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._start_distance = value

    @builtins.property
    def finish_distance(self):
        """Message field 'finish_distance'."""
        return self._finish_distance

    @finish_distance.setter
    def finish_distance(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'finish_distance' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'finish_distance' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._finish_distance = value
