# generated from rosidl_generator_py/resource/_idl.py.em
# with input from autoware_adapi_v1_msgs:msg/DoorLayout.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'roles'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DoorLayout(type):
    """Metaclass of message 'DoorLayout'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'GET_ON': 1,
        'GET_OFF': 2,
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
                'autoware_adapi_v1_msgs.msg.DoorLayout')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__door_layout
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__door_layout
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__door_layout
            cls._TYPE_SUPPORT = module.type_support_msg__msg__door_layout
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__door_layout

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'GET_ON': cls.__constants['GET_ON'],
            'GET_OFF': cls.__constants['GET_OFF'],
        }

    @property
    def GET_ON(self):
        """Message constant 'GET_ON'."""
        return Metaclass_DoorLayout.__constants['GET_ON']

    @property
    def GET_OFF(self):
        """Message constant 'GET_OFF'."""
        return Metaclass_DoorLayout.__constants['GET_OFF']


class DoorLayout(metaclass=Metaclass_DoorLayout):
    """
    Message class 'DoorLayout'.

    Constants:
      GET_ON
      GET_OFF
    """

    __slots__ = [
        '_roles',
        '_description',
    ]

    _fields_and_field_types = {
        'roles': 'sequence<uint8>',
        'description': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.roles = array.array('B', kwargs.get('roles', []))
        self.description = kwargs.get('description', str())

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
        if self.roles != other.roles:
            return False
        if self.description != other.description:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def roles(self):
        """Message field 'roles'."""
        return self._roles

    @roles.setter
    def roles(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'roles' array.array() must have the type code of 'B'"
            self._roles = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'roles' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._roles = array.array('B', value)

    @builtins.property
    def description(self):
        """Message field 'description'."""
        return self._description

    @description.setter
    def description(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'description' field must be of type 'str'"
        self._description = value
