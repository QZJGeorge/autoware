# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tier4_external_api_msgs:msg/CpuUsage.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CpuUsage(type):
    """Metaclass of message 'CpuUsage'."""

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
            module = import_type_support('tier4_external_api_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tier4_external_api_msgs.msg.CpuUsage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__cpu_usage
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__cpu_usage
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__cpu_usage
            cls._TYPE_SUPPORT = module.type_support_msg__msg__cpu_usage
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__cpu_usage

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

            from tier4_external_api_msgs.msg import CpuStatus
            if CpuStatus.__class__._TYPE_SUPPORT is None:
                CpuStatus.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CpuUsage(metaclass=Metaclass_CpuUsage):
    """Message class 'CpuUsage'."""

    __slots__ = [
        '_stamp',
        '_all',
        '_cpus',
    ]

    _fields_and_field_types = {
        'stamp': 'builtin_interfaces/Time',
        'all': 'tier4_external_api_msgs/CpuStatus',
        'cpus': 'sequence<tier4_external_api_msgs/CpuStatus>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['tier4_external_api_msgs', 'msg'], 'CpuStatus'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['tier4_external_api_msgs', 'msg'], 'CpuStatus')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())
        from tier4_external_api_msgs.msg import CpuStatus
        self.all = kwargs.get('all', CpuStatus())
        self.cpus = kwargs.get('cpus', [])

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
        if self.all != other.all:
            return False
        if self.cpus != other.cpus:
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
    def all(self):  # noqa: A003
        """Message field 'all'."""
        return self._all

    @all.setter  # noqa: A003
    def all(self, value):  # noqa: A003
        if __debug__:
            from tier4_external_api_msgs.msg import CpuStatus
            assert \
                isinstance(value, CpuStatus), \
                "The 'all' field must be a sub message of type 'CpuStatus'"
        self._all = value

    @builtins.property
    def cpus(self):
        """Message field 'cpus'."""
        return self._cpus

    @cpus.setter
    def cpus(self, value):
        if __debug__:
            from tier4_external_api_msgs.msg import CpuStatus
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
                 all(isinstance(v, CpuStatus) for v in value) and
                 True), \
                "The 'cpus' field must be a set or sequence and each value of type 'CpuStatus'"
        self._cpus = value
