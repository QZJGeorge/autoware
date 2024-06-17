# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tier4_planning_msgs:msg/AvoidanceDebugMsg.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AvoidanceDebugMsg(type):
    """Metaclass of message 'AvoidanceDebugMsg'."""

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
                'tier4_planning_msgs.msg.AvoidanceDebugMsg')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__avoidance_debug_msg
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__avoidance_debug_msg
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__avoidance_debug_msg
            cls._TYPE_SUPPORT = module.type_support_msg__msg__avoidance_debug_msg
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__avoidance_debug_msg

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class AvoidanceDebugMsg(metaclass=Metaclass_AvoidanceDebugMsg):
    """Message class 'AvoidanceDebugMsg'."""

    __slots__ = [
        '_object_id',
        '_allow_avoidance',
        '_longitudinal_distance',
        '_lateral_distance_from_centerline',
        '_to_furthest_linestring_distance',
        '_max_shift_length',
        '_required_jerk',
        '_maximum_jerk',
        '_failed_reason',
    ]

    _fields_and_field_types = {
        'object_id': 'string',
        'allow_avoidance': 'boolean',
        'longitudinal_distance': 'double',
        'lateral_distance_from_centerline': 'double',
        'to_furthest_linestring_distance': 'double',
        'max_shift_length': 'double',
        'required_jerk': 'double',
        'maximum_jerk': 'double',
        'failed_reason': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.object_id = kwargs.get('object_id', str())
        self.allow_avoidance = kwargs.get('allow_avoidance', bool())
        self.longitudinal_distance = kwargs.get('longitudinal_distance', float())
        self.lateral_distance_from_centerline = kwargs.get('lateral_distance_from_centerline', float())
        self.to_furthest_linestring_distance = kwargs.get('to_furthest_linestring_distance', float())
        self.max_shift_length = kwargs.get('max_shift_length', float())
        self.required_jerk = kwargs.get('required_jerk', float())
        self.maximum_jerk = kwargs.get('maximum_jerk', float())
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
        if self.allow_avoidance != other.allow_avoidance:
            return False
        if self.longitudinal_distance != other.longitudinal_distance:
            return False
        if self.lateral_distance_from_centerline != other.lateral_distance_from_centerline:
            return False
        if self.to_furthest_linestring_distance != other.to_furthest_linestring_distance:
            return False
        if self.max_shift_length != other.max_shift_length:
            return False
        if self.required_jerk != other.required_jerk:
            return False
        if self.maximum_jerk != other.maximum_jerk:
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
    def allow_avoidance(self):
        """Message field 'allow_avoidance'."""
        return self._allow_avoidance

    @allow_avoidance.setter
    def allow_avoidance(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'allow_avoidance' field must be of type 'bool'"
        self._allow_avoidance = value

    @builtins.property
    def longitudinal_distance(self):
        """Message field 'longitudinal_distance'."""
        return self._longitudinal_distance

    @longitudinal_distance.setter
    def longitudinal_distance(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'longitudinal_distance' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'longitudinal_distance' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._longitudinal_distance = value

    @builtins.property
    def lateral_distance_from_centerline(self):
        """Message field 'lateral_distance_from_centerline'."""
        return self._lateral_distance_from_centerline

    @lateral_distance_from_centerline.setter
    def lateral_distance_from_centerline(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lateral_distance_from_centerline' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'lateral_distance_from_centerline' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._lateral_distance_from_centerline = value

    @builtins.property
    def to_furthest_linestring_distance(self):
        """Message field 'to_furthest_linestring_distance'."""
        return self._to_furthest_linestring_distance

    @to_furthest_linestring_distance.setter
    def to_furthest_linestring_distance(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'to_furthest_linestring_distance' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'to_furthest_linestring_distance' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._to_furthest_linestring_distance = value

    @builtins.property
    def max_shift_length(self):
        """Message field 'max_shift_length'."""
        return self._max_shift_length

    @max_shift_length.setter
    def max_shift_length(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_shift_length' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'max_shift_length' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._max_shift_length = value

    @builtins.property
    def required_jerk(self):
        """Message field 'required_jerk'."""
        return self._required_jerk

    @required_jerk.setter
    def required_jerk(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'required_jerk' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'required_jerk' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._required_jerk = value

    @builtins.property
    def maximum_jerk(self):
        """Message field 'maximum_jerk'."""
        return self._maximum_jerk

    @maximum_jerk.setter
    def maximum_jerk(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'maximum_jerk' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'maximum_jerk' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._maximum_jerk = value

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
