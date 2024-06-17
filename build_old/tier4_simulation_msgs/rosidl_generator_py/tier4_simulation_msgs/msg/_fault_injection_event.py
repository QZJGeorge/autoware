# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tier4_simulation_msgs:msg/FaultInjectionEvent.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_FaultInjectionEvent(type):
    """Metaclass of message 'FaultInjectionEvent'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'OK': 0,
        'WARN': 1,
        'ERROR': 2,
        'STALE': 3,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('tier4_simulation_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tier4_simulation_msgs.msg.FaultInjectionEvent')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__fault_injection_event
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__fault_injection_event
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__fault_injection_event
            cls._TYPE_SUPPORT = module.type_support_msg__msg__fault_injection_event
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__fault_injection_event

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'OK': cls.__constants['OK'],
            'WARN': cls.__constants['WARN'],
            'ERROR': cls.__constants['ERROR'],
            'STALE': cls.__constants['STALE'],
        }

    @property
    def OK(self):
        """Message constant 'OK'."""
        return Metaclass_FaultInjectionEvent.__constants['OK']

    @property
    def WARN(self):
        """Message constant 'WARN'."""
        return Metaclass_FaultInjectionEvent.__constants['WARN']

    @property
    def ERROR(self):
        """Message constant 'ERROR'."""
        return Metaclass_FaultInjectionEvent.__constants['ERROR']

    @property
    def STALE(self):
        """Message constant 'STALE'."""
        return Metaclass_FaultInjectionEvent.__constants['STALE']


class FaultInjectionEvent(metaclass=Metaclass_FaultInjectionEvent):
    """
    Message class 'FaultInjectionEvent'.

    Constants:
      OK
      WARN
      ERROR
      STALE
    """

    __slots__ = [
        '_level',
        '_name',
    ]

    _fields_and_field_types = {
        'level': 'int8',
        'name': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.level = kwargs.get('level', int())
        self.name = kwargs.get('name', str())

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
        if self.level != other.level:
            return False
        if self.name != other.name:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def level(self):
        """Message field 'level'."""
        return self._level

    @level.setter
    def level(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'level' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'level' field must be an integer in [-128, 127]"
        self._level = value

    @builtins.property
    def name(self):
        """Message field 'name'."""
        return self._name

    @name.setter
    def name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'name' field must be of type 'str'"
        self._name = value
