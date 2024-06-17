# generated from rosidl_generator_py/resource/_idl.py.em
# with input from morai_msgs:msg/CollisionData.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CollisionData(type):
    """Metaclass of message 'CollisionData'."""

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
                'morai_msgs.msg.CollisionData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__collision_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__collision_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__collision_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__collision_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__collision_data

            from morai_msgs.msg import ObjectStatus
            if ObjectStatus.__class__._TYPE_SUPPORT is None:
                ObjectStatus.__class__.__import_type_support__()

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


class CollisionData(metaclass=Metaclass_CollisionData):
    """Message class 'CollisionData'."""

    __slots__ = [
        '_header',
        '_global_offset_x',
        '_global_offset_y',
        '_global_offset_z',
        '_collision_object',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'global_offset_x': 'double',
        'global_offset_y': 'double',
        'global_offset_z': 'double',
        'collision_object': 'sequence<morai_msgs/ObjectStatus>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['morai_msgs', 'msg'], 'ObjectStatus')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.global_offset_x = kwargs.get('global_offset_x', float())
        self.global_offset_y = kwargs.get('global_offset_y', float())
        self.global_offset_z = kwargs.get('global_offset_z', float())
        self.collision_object = kwargs.get('collision_object', [])

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
        if self.global_offset_x != other.global_offset_x:
            return False
        if self.global_offset_y != other.global_offset_y:
            return False
        if self.global_offset_z != other.global_offset_z:
            return False
        if self.collision_object != other.collision_object:
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
    def global_offset_x(self):
        """Message field 'global_offset_x'."""
        return self._global_offset_x

    @global_offset_x.setter
    def global_offset_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'global_offset_x' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'global_offset_x' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._global_offset_x = value

    @builtins.property
    def global_offset_y(self):
        """Message field 'global_offset_y'."""
        return self._global_offset_y

    @global_offset_y.setter
    def global_offset_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'global_offset_y' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'global_offset_y' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._global_offset_y = value

    @builtins.property
    def global_offset_z(self):
        """Message field 'global_offset_z'."""
        return self._global_offset_z

    @global_offset_z.setter
    def global_offset_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'global_offset_z' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'global_offset_z' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._global_offset_z = value

    @builtins.property
    def collision_object(self):
        """Message field 'collision_object'."""
        return self._collision_object

    @collision_object.setter
    def collision_object(self, value):
        if __debug__:
            from morai_msgs.msg import ObjectStatus
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
                 all(isinstance(v, ObjectStatus) for v in value) and
                 True), \
                "The 'collision_object' field must be a set or sequence and each value of type 'ObjectStatus'"
        self._collision_object = value
