# generated from rosidl_generator_py/resource/_idl.py.em
# with input from planning_validator:msg/PlanningValidatorStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PlanningValidatorStatus(type):
    """Metaclass of message 'PlanningValidatorStatus'."""

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
            module = import_type_support('planning_validator')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'planning_validator.msg.PlanningValidatorStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__planning_validator_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__planning_validator_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__planning_validator_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__planning_validator_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__planning_validator_status

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PlanningValidatorStatus(metaclass=Metaclass_PlanningValidatorStatus):
    """Message class 'PlanningValidatorStatus'."""

    __slots__ = [
        '_stamp',
        '_is_valid_finite_value',
        '_is_valid_interval',
        '_is_valid_relative_angle',
        '_is_valid_curvature',
        '_is_valid_lateral_acc',
        '_is_valid_longitudinal_max_acc',
        '_is_valid_longitudinal_min_acc',
        '_is_valid_steering',
        '_is_valid_steering_rate',
        '_is_valid_velocity_deviation',
        '_is_valid_distance_deviation',
        '_max_interval_distance',
        '_max_relative_angle',
        '_max_curvature',
        '_max_lateral_acc',
        '_max_longitudinal_acc',
        '_min_longitudinal_acc',
        '_max_steering',
        '_max_steering_rate',
        '_velocity_deviation',
        '_distance_deviation',
        '_invalid_count',
    ]

    _fields_and_field_types = {
        'stamp': 'builtin_interfaces/Time',
        'is_valid_finite_value': 'boolean',
        'is_valid_interval': 'boolean',
        'is_valid_relative_angle': 'boolean',
        'is_valid_curvature': 'boolean',
        'is_valid_lateral_acc': 'boolean',
        'is_valid_longitudinal_max_acc': 'boolean',
        'is_valid_longitudinal_min_acc': 'boolean',
        'is_valid_steering': 'boolean',
        'is_valid_steering_rate': 'boolean',
        'is_valid_velocity_deviation': 'boolean',
        'is_valid_distance_deviation': 'boolean',
        'max_interval_distance': 'double',
        'max_relative_angle': 'double',
        'max_curvature': 'double',
        'max_lateral_acc': 'double',
        'max_longitudinal_acc': 'double',
        'min_longitudinal_acc': 'double',
        'max_steering': 'double',
        'max_steering_rate': 'double',
        'velocity_deviation': 'double',
        'distance_deviation': 'double',
        'invalid_count': 'int64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())
        self.is_valid_finite_value = kwargs.get('is_valid_finite_value', bool())
        self.is_valid_interval = kwargs.get('is_valid_interval', bool())
        self.is_valid_relative_angle = kwargs.get('is_valid_relative_angle', bool())
        self.is_valid_curvature = kwargs.get('is_valid_curvature', bool())
        self.is_valid_lateral_acc = kwargs.get('is_valid_lateral_acc', bool())
        self.is_valid_longitudinal_max_acc = kwargs.get('is_valid_longitudinal_max_acc', bool())
        self.is_valid_longitudinal_min_acc = kwargs.get('is_valid_longitudinal_min_acc', bool())
        self.is_valid_steering = kwargs.get('is_valid_steering', bool())
        self.is_valid_steering_rate = kwargs.get('is_valid_steering_rate', bool())
        self.is_valid_velocity_deviation = kwargs.get('is_valid_velocity_deviation', bool())
        self.is_valid_distance_deviation = kwargs.get('is_valid_distance_deviation', bool())
        self.max_interval_distance = kwargs.get('max_interval_distance', float())
        self.max_relative_angle = kwargs.get('max_relative_angle', float())
        self.max_curvature = kwargs.get('max_curvature', float())
        self.max_lateral_acc = kwargs.get('max_lateral_acc', float())
        self.max_longitudinal_acc = kwargs.get('max_longitudinal_acc', float())
        self.min_longitudinal_acc = kwargs.get('min_longitudinal_acc', float())
        self.max_steering = kwargs.get('max_steering', float())
        self.max_steering_rate = kwargs.get('max_steering_rate', float())
        self.velocity_deviation = kwargs.get('velocity_deviation', float())
        self.distance_deviation = kwargs.get('distance_deviation', float())
        self.invalid_count = kwargs.get('invalid_count', int())

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
        if self.is_valid_finite_value != other.is_valid_finite_value:
            return False
        if self.is_valid_interval != other.is_valid_interval:
            return False
        if self.is_valid_relative_angle != other.is_valid_relative_angle:
            return False
        if self.is_valid_curvature != other.is_valid_curvature:
            return False
        if self.is_valid_lateral_acc != other.is_valid_lateral_acc:
            return False
        if self.is_valid_longitudinal_max_acc != other.is_valid_longitudinal_max_acc:
            return False
        if self.is_valid_longitudinal_min_acc != other.is_valid_longitudinal_min_acc:
            return False
        if self.is_valid_steering != other.is_valid_steering:
            return False
        if self.is_valid_steering_rate != other.is_valid_steering_rate:
            return False
        if self.is_valid_velocity_deviation != other.is_valid_velocity_deviation:
            return False
        if self.is_valid_distance_deviation != other.is_valid_distance_deviation:
            return False
        if self.max_interval_distance != other.max_interval_distance:
            return False
        if self.max_relative_angle != other.max_relative_angle:
            return False
        if self.max_curvature != other.max_curvature:
            return False
        if self.max_lateral_acc != other.max_lateral_acc:
            return False
        if self.max_longitudinal_acc != other.max_longitudinal_acc:
            return False
        if self.min_longitudinal_acc != other.min_longitudinal_acc:
            return False
        if self.max_steering != other.max_steering:
            return False
        if self.max_steering_rate != other.max_steering_rate:
            return False
        if self.velocity_deviation != other.velocity_deviation:
            return False
        if self.distance_deviation != other.distance_deviation:
            return False
        if self.invalid_count != other.invalid_count:
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

    @builtins.property
    def is_valid_finite_value(self):
        """Message field 'is_valid_finite_value'."""
        return self._is_valid_finite_value

    @is_valid_finite_value.setter
    def is_valid_finite_value(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_valid_finite_value' field must be of type 'bool'"
        self._is_valid_finite_value = value

    @builtins.property
    def is_valid_interval(self):
        """Message field 'is_valid_interval'."""
        return self._is_valid_interval

    @is_valid_interval.setter
    def is_valid_interval(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_valid_interval' field must be of type 'bool'"
        self._is_valid_interval = value

    @builtins.property
    def is_valid_relative_angle(self):
        """Message field 'is_valid_relative_angle'."""
        return self._is_valid_relative_angle

    @is_valid_relative_angle.setter
    def is_valid_relative_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_valid_relative_angle' field must be of type 'bool'"
        self._is_valid_relative_angle = value

    @builtins.property
    def is_valid_curvature(self):
        """Message field 'is_valid_curvature'."""
        return self._is_valid_curvature

    @is_valid_curvature.setter
    def is_valid_curvature(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_valid_curvature' field must be of type 'bool'"
        self._is_valid_curvature = value

    @builtins.property
    def is_valid_lateral_acc(self):
        """Message field 'is_valid_lateral_acc'."""
        return self._is_valid_lateral_acc

    @is_valid_lateral_acc.setter
    def is_valid_lateral_acc(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_valid_lateral_acc' field must be of type 'bool'"
        self._is_valid_lateral_acc = value

    @builtins.property
    def is_valid_longitudinal_max_acc(self):
        """Message field 'is_valid_longitudinal_max_acc'."""
        return self._is_valid_longitudinal_max_acc

    @is_valid_longitudinal_max_acc.setter
    def is_valid_longitudinal_max_acc(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_valid_longitudinal_max_acc' field must be of type 'bool'"
        self._is_valid_longitudinal_max_acc = value

    @builtins.property
    def is_valid_longitudinal_min_acc(self):
        """Message field 'is_valid_longitudinal_min_acc'."""
        return self._is_valid_longitudinal_min_acc

    @is_valid_longitudinal_min_acc.setter
    def is_valid_longitudinal_min_acc(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_valid_longitudinal_min_acc' field must be of type 'bool'"
        self._is_valid_longitudinal_min_acc = value

    @builtins.property
    def is_valid_steering(self):
        """Message field 'is_valid_steering'."""
        return self._is_valid_steering

    @is_valid_steering.setter
    def is_valid_steering(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_valid_steering' field must be of type 'bool'"
        self._is_valid_steering = value

    @builtins.property
    def is_valid_steering_rate(self):
        """Message field 'is_valid_steering_rate'."""
        return self._is_valid_steering_rate

    @is_valid_steering_rate.setter
    def is_valid_steering_rate(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_valid_steering_rate' field must be of type 'bool'"
        self._is_valid_steering_rate = value

    @builtins.property
    def is_valid_velocity_deviation(self):
        """Message field 'is_valid_velocity_deviation'."""
        return self._is_valid_velocity_deviation

    @is_valid_velocity_deviation.setter
    def is_valid_velocity_deviation(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_valid_velocity_deviation' field must be of type 'bool'"
        self._is_valid_velocity_deviation = value

    @builtins.property
    def is_valid_distance_deviation(self):
        """Message field 'is_valid_distance_deviation'."""
        return self._is_valid_distance_deviation

    @is_valid_distance_deviation.setter
    def is_valid_distance_deviation(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_valid_distance_deviation' field must be of type 'bool'"
        self._is_valid_distance_deviation = value

    @builtins.property
    def max_interval_distance(self):
        """Message field 'max_interval_distance'."""
        return self._max_interval_distance

    @max_interval_distance.setter
    def max_interval_distance(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_interval_distance' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'max_interval_distance' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._max_interval_distance = value

    @builtins.property
    def max_relative_angle(self):
        """Message field 'max_relative_angle'."""
        return self._max_relative_angle

    @max_relative_angle.setter
    def max_relative_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_relative_angle' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'max_relative_angle' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._max_relative_angle = value

    @builtins.property
    def max_curvature(self):
        """Message field 'max_curvature'."""
        return self._max_curvature

    @max_curvature.setter
    def max_curvature(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_curvature' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'max_curvature' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._max_curvature = value

    @builtins.property
    def max_lateral_acc(self):
        """Message field 'max_lateral_acc'."""
        return self._max_lateral_acc

    @max_lateral_acc.setter
    def max_lateral_acc(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_lateral_acc' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'max_lateral_acc' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._max_lateral_acc = value

    @builtins.property
    def max_longitudinal_acc(self):
        """Message field 'max_longitudinal_acc'."""
        return self._max_longitudinal_acc

    @max_longitudinal_acc.setter
    def max_longitudinal_acc(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_longitudinal_acc' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'max_longitudinal_acc' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._max_longitudinal_acc = value

    @builtins.property
    def min_longitudinal_acc(self):
        """Message field 'min_longitudinal_acc'."""
        return self._min_longitudinal_acc

    @min_longitudinal_acc.setter
    def min_longitudinal_acc(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'min_longitudinal_acc' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'min_longitudinal_acc' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._min_longitudinal_acc = value

    @builtins.property
    def max_steering(self):
        """Message field 'max_steering'."""
        return self._max_steering

    @max_steering.setter
    def max_steering(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_steering' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'max_steering' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._max_steering = value

    @builtins.property
    def max_steering_rate(self):
        """Message field 'max_steering_rate'."""
        return self._max_steering_rate

    @max_steering_rate.setter
    def max_steering_rate(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_steering_rate' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'max_steering_rate' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._max_steering_rate = value

    @builtins.property
    def velocity_deviation(self):
        """Message field 'velocity_deviation'."""
        return self._velocity_deviation

    @velocity_deviation.setter
    def velocity_deviation(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'velocity_deviation' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'velocity_deviation' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._velocity_deviation = value

    @builtins.property
    def distance_deviation(self):
        """Message field 'distance_deviation'."""
        return self._distance_deviation

    @distance_deviation.setter
    def distance_deviation(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'distance_deviation' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'distance_deviation' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._distance_deviation = value

    @builtins.property
    def invalid_count(self):
        """Message field 'invalid_count'."""
        return self._invalid_count

    @invalid_count.setter
    def invalid_count(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'invalid_count' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'invalid_count' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._invalid_count = value
