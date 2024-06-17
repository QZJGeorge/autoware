# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tier4_api_msgs:msg/DoorStatus.idl
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
        'UNKNOWN': 0,
        'DOOR_OPENED': 1,
        'DOOR_CLOSED': 2,
        'DOOR_OPENING': 3,
        'DOOR_CLOSING': 4,
        'NOT_APPLICABLE': 5,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('tier4_api_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tier4_api_msgs.msg.DoorStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__door_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__door_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__door_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__door_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__door_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'UNKNOWN': cls.__constants['UNKNOWN'],
            'DOOR_OPENED': cls.__constants['DOOR_OPENED'],
            'DOOR_CLOSED': cls.__constants['DOOR_CLOSED'],
            'DOOR_OPENING': cls.__constants['DOOR_OPENING'],
            'DOOR_CLOSING': cls.__constants['DOOR_CLOSING'],
            'NOT_APPLICABLE': cls.__constants['NOT_APPLICABLE'],
        }

    @property
    def UNKNOWN(self):
        """Message constant 'UNKNOWN'."""
        return Metaclass_DoorStatus.__constants['UNKNOWN']

    @property
    def DOOR_OPENED(self):
        """Message constant 'DOOR_OPENED'."""
        return Metaclass_DoorStatus.__constants['DOOR_OPENED']

    @property
    def DOOR_CLOSED(self):
        """Message constant 'DOOR_CLOSED'."""
        return Metaclass_DoorStatus.__constants['DOOR_CLOSED']

    @property
    def DOOR_OPENING(self):
        """Message constant 'DOOR_OPENING'."""
        return Metaclass_DoorStatus.__constants['DOOR_OPENING']

    @property
    def DOOR_CLOSING(self):
        """Message constant 'DOOR_CLOSING'."""
        return Metaclass_DoorStatus.__constants['DOOR_CLOSING']

    @property
    def NOT_APPLICABLE(self):
        """Message constant 'NOT_APPLICABLE'."""
        return Metaclass_DoorStatus.__constants['NOT_APPLICABLE']


class DoorStatus(metaclass=Metaclass_DoorStatus):
    """
    Message class 'DoorStatus'.

    Constants:
      UNKNOWN
      DOOR_OPENED
      DOOR_CLOSED
      DOOR_OPENING
      DOOR_CLOSING
      NOT_APPLICABLE
    """

    __slots__ = [
        '_status',
    ]

    _fields_and_field_types = {
        'status': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
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
        if self.status != other.status:
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
            assert value >= -2147483648 and value < 2147483648, \
                "The 'status' field must be an integer in [-2147483648, 2147483647]"
        self._status = value
