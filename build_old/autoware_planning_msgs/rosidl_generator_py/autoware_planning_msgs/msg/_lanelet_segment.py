# generated from rosidl_generator_py/resource/_idl.py.em
# with input from autoware_planning_msgs:msg/LaneletSegment.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LaneletSegment(type):
    """Metaclass of message 'LaneletSegment'."""

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
            module = import_type_support('autoware_planning_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'autoware_planning_msgs.msg.LaneletSegment')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__lanelet_segment
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__lanelet_segment
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__lanelet_segment
            cls._TYPE_SUPPORT = module.type_support_msg__msg__lanelet_segment
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__lanelet_segment

            from autoware_planning_msgs.msg import LaneletPrimitive
            if LaneletPrimitive.__class__._TYPE_SUPPORT is None:
                LaneletPrimitive.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class LaneletSegment(metaclass=Metaclass_LaneletSegment):
    """Message class 'LaneletSegment'."""

    __slots__ = [
        '_preferred_primitive',
        '_primitives',
    ]

    _fields_and_field_types = {
        'preferred_primitive': 'autoware_planning_msgs/LaneletPrimitive',
        'primitives': 'sequence<autoware_planning_msgs/LaneletPrimitive>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['autoware_planning_msgs', 'msg'], 'LaneletPrimitive'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['autoware_planning_msgs', 'msg'], 'LaneletPrimitive')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from autoware_planning_msgs.msg import LaneletPrimitive
        self.preferred_primitive = kwargs.get('preferred_primitive', LaneletPrimitive())
        self.primitives = kwargs.get('primitives', [])

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
        if self.preferred_primitive != other.preferred_primitive:
            return False
        if self.primitives != other.primitives:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def preferred_primitive(self):
        """Message field 'preferred_primitive'."""
        return self._preferred_primitive

    @preferred_primitive.setter
    def preferred_primitive(self, value):
        if __debug__:
            from autoware_planning_msgs.msg import LaneletPrimitive
            assert \
                isinstance(value, LaneletPrimitive), \
                "The 'preferred_primitive' field must be a sub message of type 'LaneletPrimitive'"
        self._preferred_primitive = value

    @builtins.property
    def primitives(self):
        """Message field 'primitives'."""
        return self._primitives

    @primitives.setter
    def primitives(self, value):
        if __debug__:
            from autoware_planning_msgs.msg import LaneletPrimitive
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
                 all(isinstance(v, LaneletPrimitive) for v in value) and
                 True), \
                "The 'primitives' field must be a set or sequence and each value of type 'LaneletPrimitive'"
        self._primitives = value
