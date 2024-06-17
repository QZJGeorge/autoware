# generated from rosidl_generator_py/resource/_idl.py.em
# with input from morai_msgs:msg/IntersectionStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_IntersectionStatus(type):
    """Metaclass of message 'IntersectionStatus'."""

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
            module = import_type_support('morai_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'morai_msgs.msg.IntersectionStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__intersection_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__intersection_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__intersection_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__intersection_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__intersection_status

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class IntersectionStatus(metaclass=Metaclass_IntersectionStatus):
    """Message class 'IntersectionStatus'."""

    __slots__ = [
        '_header',
        '_intersection_index',
        '_intersection_status',
        '_intersection_status_time',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'intersection_index': 'int32',
        'intersection_status': 'int16',
        'intersection_status_time': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.intersection_index = kwargs.get('intersection_index', int())
        self.intersection_status = kwargs.get('intersection_status', int())
        self.intersection_status_time = kwargs.get('intersection_status_time', float())

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
        if self.header != other.header:
            return False
        if self.intersection_index != other.intersection_index:
            return False
        if self.intersection_status != other.intersection_status:
            return False
        if self.intersection_status_time != other.intersection_status_time:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def intersection_index(self):
        """Message field 'intersection_index'."""
        return self._intersection_index

    @intersection_index.setter
    def intersection_index(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'intersection_index' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'intersection_index' field must be an integer in [-2147483648, 2147483647]"
        self._intersection_index = value

    @builtins.property
    def intersection_status(self):
        """Message field 'intersection_status'."""
        return self._intersection_status

    @intersection_status.setter
    def intersection_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'intersection_status' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'intersection_status' field must be an integer in [-32768, 32767]"
        self._intersection_status = value

    @builtins.property
    def intersection_status_time(self):
        """Message field 'intersection_status_time'."""
        return self._intersection_status_time

    @intersection_status_time.setter
    def intersection_status_time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'intersection_status_time' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'intersection_status_time' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._intersection_status_time = value
