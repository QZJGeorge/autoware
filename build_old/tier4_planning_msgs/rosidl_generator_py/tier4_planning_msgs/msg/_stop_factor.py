# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tier4_planning_msgs:msg/StopFactor.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_StopFactor(type):
    """Metaclass of message 'StopFactor'."""

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
            module = import_type_support('tier4_planning_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tier4_planning_msgs.msg.StopFactor')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__stop_factor
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__stop_factor
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__stop_factor
            cls._TYPE_SUPPORT = module.type_support_msg__msg__stop_factor
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__stop_factor

            from geometry_msgs.msg import Point
            if Point.__class__._TYPE_SUPPORT is None:
                Point.__class__.__import_type_support__()

            from geometry_msgs.msg import Pose
            if Pose.__class__._TYPE_SUPPORT is None:
                Pose.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class StopFactor(metaclass=Metaclass_StopFactor):
    """Message class 'StopFactor'."""

    __slots__ = [
        '_stop_pose',
        '_dist_to_stop_pose',
        '_stop_factor_points',
    ]

    _fields_and_field_types = {
        'stop_pose': 'geometry_msgs/Pose',
        'dist_to_stop_pose': 'double',
        'stop_factor_points': 'sequence<geometry_msgs/Point>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from geometry_msgs.msg import Pose
        self.stop_pose = kwargs.get('stop_pose', Pose())
        self.dist_to_stop_pose = kwargs.get('dist_to_stop_pose', float())
        self.stop_factor_points = kwargs.get('stop_factor_points', [])

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
        if self.stop_pose != other.stop_pose:
            return False
        if self.dist_to_stop_pose != other.dist_to_stop_pose:
            return False
        if self.stop_factor_points != other.stop_factor_points:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def stop_pose(self):
        """Message field 'stop_pose'."""
        return self._stop_pose

    @stop_pose.setter
    def stop_pose(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'stop_pose' field must be a sub message of type 'Pose'"
        self._stop_pose = value

    @builtins.property
    def dist_to_stop_pose(self):
        """Message field 'dist_to_stop_pose'."""
        return self._dist_to_stop_pose

    @dist_to_stop_pose.setter
    def dist_to_stop_pose(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'dist_to_stop_pose' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'dist_to_stop_pose' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._dist_to_stop_pose = value

    @builtins.property
    def stop_factor_points(self):
        """Message field 'stop_factor_points'."""
        return self._stop_factor_points

    @stop_factor_points.setter
    def stop_factor_points(self, value):
        if __debug__:
            from geometry_msgs.msg import Point
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
                 all(isinstance(v, Point) for v in value) and
                 True), \
                "The 'stop_factor_points' field must be a set or sequence and each value of type 'Point'"
        self._stop_factor_points = value
