# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tier4_v2x_msgs:msg/InfrastructureCommand.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_InfrastructureCommand(type):
    """Metaclass of message 'InfrastructureCommand'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'NONE': 0,
        'REQUESTING': 1,
        'PASSING': 2,
        'FINALIZING': 3,
        'FINALIZED': 4,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('tier4_v2x_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tier4_v2x_msgs.msg.InfrastructureCommand')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__infrastructure_command
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__infrastructure_command
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__infrastructure_command
            cls._TYPE_SUPPORT = module.type_support_msg__msg__infrastructure_command
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__infrastructure_command

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

            from tier4_v2x_msgs.msg import KeyValue
            if KeyValue.__class__._TYPE_SUPPORT is None:
                KeyValue.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'NONE': cls.__constants['NONE'],
            'REQUESTING': cls.__constants['REQUESTING'],
            'PASSING': cls.__constants['PASSING'],
            'FINALIZING': cls.__constants['FINALIZING'],
            'FINALIZED': cls.__constants['FINALIZED'],
        }

    @property
    def NONE(self):
        """Message constant 'NONE'."""
        return Metaclass_InfrastructureCommand.__constants['NONE']

    @property
    def REQUESTING(self):
        """Message constant 'REQUESTING'."""
        return Metaclass_InfrastructureCommand.__constants['REQUESTING']

    @property
    def PASSING(self):
        """Message constant 'PASSING'."""
        return Metaclass_InfrastructureCommand.__constants['PASSING']

    @property
    def FINALIZING(self):
        """Message constant 'FINALIZING'."""
        return Metaclass_InfrastructureCommand.__constants['FINALIZING']

    @property
    def FINALIZED(self):
        """Message constant 'FINALIZED'."""
        return Metaclass_InfrastructureCommand.__constants['FINALIZED']


class InfrastructureCommand(metaclass=Metaclass_InfrastructureCommand):
    """
    Message class 'InfrastructureCommand'.

    Constants:
      NONE
      REQUESTING
      PASSING
      FINALIZING
      FINALIZED
    """

    __slots__ = [
        '_stamp',
        '_type',
        '_id',
        '_custom_tags',
        '_state',
    ]

    _fields_and_field_types = {
        'stamp': 'builtin_interfaces/Time',
        'type': 'string',
        'id': 'string',
        'custom_tags': 'sequence<tier4_v2x_msgs/KeyValue>',
        'state': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['tier4_v2x_msgs', 'msg'], 'KeyValue')),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())
        self.type = kwargs.get('type', str())
        self.id = kwargs.get('id', str())
        self.custom_tags = kwargs.get('custom_tags', [])
        self.state = kwargs.get('state', int())

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
        if self.type != other.type:
            return False
        if self.id != other.id:
            return False
        if self.custom_tags != other.custom_tags:
            return False
        if self.state != other.state:
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

    @builtins.property  # noqa: A003
    def type(self):  # noqa: A003
        """Message field 'type'."""
        return self._type

    @type.setter  # noqa: A003
    def type(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'type' field must be of type 'str'"
        self._type = value

    @builtins.property  # noqa: A003
    def id(self):  # noqa: A003
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'id' field must be of type 'str'"
        self._id = value

    @builtins.property
    def custom_tags(self):
        """Message field 'custom_tags'."""
        return self._custom_tags

    @custom_tags.setter
    def custom_tags(self, value):
        if __debug__:
            from tier4_v2x_msgs.msg import KeyValue
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
                 all(isinstance(v, KeyValue) for v in value) and
                 True), \
                "The 'custom_tags' field must be a set or sequence and each value of type 'KeyValue'"
        self._custom_tags = value

    @builtins.property
    def state(self):
        """Message field 'state'."""
        return self._state

    @state.setter
    def state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'state' field must be an unsigned integer in [0, 255]"
        self._state = value
