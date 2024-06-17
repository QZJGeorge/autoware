# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tier4_external_api_msgs:msg/DoorStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DoorStatus(type):
    """Metaclass of message 'DoorStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'NOT_SUPPORTED': -1,
        'UNKNOWN': 0,
        'OPENED': 1,
        'CLOSED': 2,
        'OPENING': 3,
        'CLOSING': 4,
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
                'tier4_external_api_msgs.msg.DoorStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__door_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__door_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__door_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__door_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__door_status

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'NOT_SUPPORTED': cls.__constants['NOT_SUPPORTED'],
            'UNKNOWN': cls.__constants['UNKNOWN'],
            'OPENED': cls.__constants['OPENED'],
            'CLOSED': cls.__constants['CLOSED'],
            'OPENING': cls.__constants['OPENING'],
            'CLOSING': cls.__constants['CLOSING'],
        }

    @property
    def NOT_SUPPORTED(self):
        """Message constant 'NOT_SUPPORTED'."""
        return Metaclass_DoorStatus.__constants['NOT_SUPPORTED']

    @property
    def UNKNOWN(self):
        """Message constant 'UNKNOWN'."""
        return Metaclass_DoorStatus.__constants['UNKNOWN']

    @property
    def OPENED(self):
        """Message constant 'OPENED'."""
        return Metaclass_DoorStatus.__constants['OPENED']

    @property
    def CLOSED(self):
        """Message constant 'CLOSED'."""
        return Metaclass_DoorStatus.__constants['CLOSED']

    @property
    def OPENING(self):
        """Message constant 'OPENING'."""
        return Metaclass_DoorStatus.__constants['OPENING']

    @property
    def CLOSING(self):
        """Message constant 'CLOSING'."""
        return Metaclass_DoorStatus.__constants['CLOSING']


class DoorStatus(metaclass=Metaclass_DoorStatus):
    """
    Message class 'DoorStatus'.

    Constants:
      NOT_SUPPORTED
      UNKNOWN
      OPENED
      CLOSED
      OPENING
      CLOSING
    """

    __slots__ = [
        '_stamp',
        '_status',
    ]

    _fields_and_field_types = {
        'stamp': 'builtin_interfaces/Time',
        'status': 'int8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())
        self.status = kwargs.get('status', int())

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
        if self.status != other.status:
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
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'status' field must be an integer in [-128, 127]"
        self._status = value
