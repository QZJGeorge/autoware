# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tier4_planning_msgs:msg/LaneChangeDebugMsg.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LaneChangeDebugMsg(type):
    """Metaclass of message 'LaneChangeDebugMsg'."""

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
                'tier4_planning_msgs.msg.LaneChangeDebugMsg')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__lane_change_debug_msg
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__lane_change_debug_msg
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__lane_change_debug_msg
            cls._TYPE_SUPPORT = module.type_support_msg__msg__lane_change_debug_msg
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__lane_change_debug_msg

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


class LaneChangeDebugMsg(metaclass=Metaclass_LaneChangeDebugMsg):
    """Message class 'LaneChangeDebugMsg'."""

    __slots__ = [
        '_object_id',
        '_allow_lane_change',
        '_is_front',
        '_relative_distance',
        '_velocity',
        '_failed_reason',
    ]

    _fields_and_field_types = {
        'object_id': 'string',
        'allow_lane_change': 'boolean',
        'is_front': 'boolean',
        'relative_distance': 'geometry_msgs/Pose',
        'velocity': 'double',
        'failed_reason': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.object_id = kwargs.get('object_id', str())
        self.allow_lane_change = kwargs.get('allow_lane_change', bool())
        self.is_front = kwargs.get('is_front', bool())
        from geometry_msgs.msg import Pose
        self.relative_distance = kwargs.get('relative_distance', Pose())
        self.velocity = kwargs.get('velocity', float())
        self.failed_reason = kwargs.get('failed_reason', str())

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
        if self.object_id != other.object_id:
            return False
        if self.allow_lane_change != other.allow_lane_change:
            return False
        if self.is_front != other.is_front:
            return False
        if self.relative_distance != other.relative_distance:
            return False
        if self.velocity != other.velocity:
            return False
        if self.failed_reason != other.failed_reason:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def object_id(self):
        """Message field 'object_id'."""
        return self._object_id

    @object_id.setter
    def object_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'object_id' field must be of type 'str'"
        self._object_id = value

    @builtins.property
    def allow_lane_change(self):
        """Message field 'allow_lane_change'."""
        return self._allow_lane_change

    @allow_lane_change.setter
    def allow_lane_change(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'allow_lane_change' field must be of type 'bool'"
        self._allow_lane_change = value

    @builtins.property
    def is_front(self):
        """Message field 'is_front'."""
        return self._is_front

    @is_front.setter
    def is_front(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_front' field must be of type 'bool'"
        self._is_front = value

    @builtins.property
    def relative_distance(self):
        """Message field 'relative_distance'."""
        return self._relative_distance

    @relative_distance.setter
    def relative_distance(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'relative_distance' field must be a sub message of type 'Pose'"
        self._relative_distance = value

    @builtins.property
    def velocity(self):
        """Message field 'velocity'."""
        return self._velocity

    @velocity.setter
    def velocity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'velocity' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'velocity' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._velocity = value

    @builtins.property
    def failed_reason(self):
        """Message field 'failed_reason'."""
        return self._failed_reason

    @failed_reason.setter
    def failed_reason(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'failed_reason' field must be of type 'str'"
        self._failed_reason = value
