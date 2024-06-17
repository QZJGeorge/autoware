# generated from rosidl_generator_py/resource/_idl.py.em
# with input from operation_mode_transition_manager:msg/OperationModeTransitionManagerDebug.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_OperationModeTransitionManagerDebug(type):
    """Metaclass of message 'OperationModeTransitionManagerDebug'."""

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
            module = import_type_support('operation_mode_transition_manager')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'operation_mode_transition_manager.msg.OperationModeTransitionManagerDebug')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__operation_mode_transition_manager_debug
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__operation_mode_transition_manager_debug
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__operation_mode_transition_manager_debug
            cls._TYPE_SUPPORT = module.type_support_msg__msg__operation_mode_transition_manager_debug
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__operation_mode_transition_manager_debug

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


class OperationModeTransitionManagerDebug(metaclass=Metaclass_OperationModeTransitionManagerDebug):
    """Message class 'OperationModeTransitionManagerDebug'."""

    __slots__ = [
        '_stamp',
        '_status',
        '_in_autoware_control',
        '_in_transition',
        '_is_all_ok',
        '_engage_allowed_for_stopped_vehicle',
        '_trajectory_available_ok',
        '_lateral_deviation_ok',
        '_yaw_deviation_ok',
        '_speed_upper_deviation_ok',
        '_speed_lower_deviation_ok',
        '_stop_ok',
        '_large_acceleration_ok',
        '_large_lateral_acceleration_ok',
        '_large_lateral_acceleration_diff_ok',
        '_current_speed',
        '_target_control_speed',
        '_target_planning_speed',
        '_target_control_acceleration',
        '_lateral_acceleration',
        '_lateral_acceleration_deviation',
        '_lateral_deviation',
        '_yaw_deviation',
        '_speed_deviation',
    ]

    _fields_and_field_types = {
        'stamp': 'builtin_interfaces/Time',
        'status': 'string',
        'in_autoware_control': 'boolean',
        'in_transition': 'boolean',
        'is_all_ok': 'boolean',
        'engage_allowed_for_stopped_vehicle': 'boolean',
        'trajectory_available_ok': 'boolean',
        'lateral_deviation_ok': 'boolean',
        'yaw_deviation_ok': 'boolean',
        'speed_upper_deviation_ok': 'boolean',
        'speed_lower_deviation_ok': 'boolean',
        'stop_ok': 'boolean',
        'large_acceleration_ok': 'boolean',
        'large_lateral_acceleration_ok': 'boolean',
        'large_lateral_acceleration_diff_ok': 'boolean',
        'current_speed': 'double',
        'target_control_speed': 'double',
        'target_planning_speed': 'double',
        'target_control_acceleration': 'double',
        'lateral_acceleration': 'double',
        'lateral_acceleration_deviation': 'double',
        'lateral_deviation': 'double',
        'yaw_deviation': 'double',
        'speed_deviation': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
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
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())
        self.status = kwargs.get('status', str())
        self.in_autoware_control = kwargs.get('in_autoware_control', bool())
        self.in_transition = kwargs.get('in_transition', bool())
        self.is_all_ok = kwargs.get('is_all_ok', bool())
        self.engage_allowed_for_stopped_vehicle = kwargs.get('engage_allowed_for_stopped_vehicle', bool())
        self.trajectory_available_ok = kwargs.get('trajectory_available_ok', bool())
        self.lateral_deviation_ok = kwargs.get('lateral_deviation_ok', bool())
        self.yaw_deviation_ok = kwargs.get('yaw_deviation_ok', bool())
        self.speed_upper_deviation_ok = kwargs.get('speed_upper_deviation_ok', bool())
        self.speed_lower_deviation_ok = kwargs.get('speed_lower_deviation_ok', bool())
        self.stop_ok = kwargs.get('stop_ok', bool())
        self.large_acceleration_ok = kwargs.get('large_acceleration_ok', bool())
        self.large_lateral_acceleration_ok = kwargs.get('large_lateral_acceleration_ok', bool())
        self.large_lateral_acceleration_diff_ok = kwargs.get('large_lateral_acceleration_diff_ok', bool())
        self.current_speed = kwargs.get('current_speed', float())
        self.target_control_speed = kwargs.get('target_control_speed', float())
        self.target_planning_speed = kwargs.get('target_planning_speed', float())
        self.target_control_acceleration = kwargs.get('target_control_acceleration', float())
        self.lateral_acceleration = kwargs.get('lateral_acceleration', float())
        self.lateral_acceleration_deviation = kwargs.get('lateral_acceleration_deviation', float())
        self.lateral_deviation = kwargs.get('lateral_deviation', float())
        self.yaw_deviation = kwargs.get('yaw_deviation', float())
        self.speed_deviation = kwargs.get('speed_deviation', float())

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
        if self.status != other.status:
            return False
        if self.in_autoware_control != other.in_autoware_control:
            return False
        if self.in_transition != other.in_transition:
            return False
        if self.is_all_ok != other.is_all_ok:
            return False
        if self.engage_allowed_for_stopped_vehicle != other.engage_allowed_for_stopped_vehicle:
            return False
        if self.trajectory_available_ok != other.trajectory_available_ok:
            return False
        if self.lateral_deviation_ok != other.lateral_deviation_ok:
            return False
        if self.yaw_deviation_ok != other.yaw_deviation_ok:
            return False
        if self.speed_upper_deviation_ok != other.speed_upper_deviation_ok:
            return False
        if self.speed_lower_deviation_ok != other.speed_lower_deviation_ok:
            return False
        if self.stop_ok != other.stop_ok:
            return False
        if self.large_acceleration_ok != other.large_acceleration_ok:
            return False
        if self.large_lateral_acceleration_ok != other.large_lateral_acceleration_ok:
            return False
        if self.large_lateral_acceleration_diff_ok != other.large_lateral_acceleration_diff_ok:
            return False
        if self.current_speed != other.current_speed:
            return False
        if self.target_control_speed != other.target_control_speed:
            return False
        if self.target_planning_speed != other.target_planning_speed:
            return False
        if self.target_control_acceleration != other.target_control_acceleration:
            return False
        if self.lateral_acceleration != other.lateral_acceleration:
            return False
        if self.lateral_acceleration_deviation != other.lateral_acceleration_deviation:
            return False
        if self.lateral_deviation != other.lateral_deviation:
            return False
        if self.yaw_deviation != other.yaw_deviation:
            return False
        if self.speed_deviation != other.speed_deviation:
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
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'status' field must be of type 'str'"
        self._status = value

    @builtins.property
    def in_autoware_control(self):
        """Message field 'in_autoware_control'."""
        return self._in_autoware_control

    @in_autoware_control.setter
    def in_autoware_control(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'in_autoware_control' field must be of type 'bool'"
        self._in_autoware_control = value

    @builtins.property
    def in_transition(self):
        """Message field 'in_transition'."""
        return self._in_transition

    @in_transition.setter
    def in_transition(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'in_transition' field must be of type 'bool'"
        self._in_transition = value

    @builtins.property
    def is_all_ok(self):
        """Message field 'is_all_ok'."""
        return self._is_all_ok

    @is_all_ok.setter
    def is_all_ok(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_all_ok' field must be of type 'bool'"
        self._is_all_ok = value

    @builtins.property
    def engage_allowed_for_stopped_vehicle(self):
        """Message field 'engage_allowed_for_stopped_vehicle'."""
        return self._engage_allowed_for_stopped_vehicle

    @engage_allowed_for_stopped_vehicle.setter
    def engage_allowed_for_stopped_vehicle(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'engage_allowed_for_stopped_vehicle' field must be of type 'bool'"
        self._engage_allowed_for_stopped_vehicle = value

    @builtins.property
    def trajectory_available_ok(self):
        """Message field 'trajectory_available_ok'."""
        return self._trajectory_available_ok

    @trajectory_available_ok.setter
    def trajectory_available_ok(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'trajectory_available_ok' field must be of type 'bool'"
        self._trajectory_available_ok = value

    @builtins.property
    def lateral_deviation_ok(self):
        """Message field 'lateral_deviation_ok'."""
        return self._lateral_deviation_ok

    @lateral_deviation_ok.setter
    def lateral_deviation_ok(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'lateral_deviation_ok' field must be of type 'bool'"
        self._lateral_deviation_ok = value

    @builtins.property
    def yaw_deviation_ok(self):
        """Message field 'yaw_deviation_ok'."""
        return self._yaw_deviation_ok

    @yaw_deviation_ok.setter
    def yaw_deviation_ok(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'yaw_deviation_ok' field must be of type 'bool'"
        self._yaw_deviation_ok = value

    @builtins.property
    def speed_upper_deviation_ok(self):
        """Message field 'speed_upper_deviation_ok'."""
        return self._speed_upper_deviation_ok

    @speed_upper_deviation_ok.setter
    def speed_upper_deviation_ok(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'speed_upper_deviation_ok' field must be of type 'bool'"
        self._speed_upper_deviation_ok = value

    @builtins.property
    def speed_lower_deviation_ok(self):
        """Message field 'speed_lower_deviation_ok'."""
        return self._speed_lower_deviation_ok

    @speed_lower_deviation_ok.setter
    def speed_lower_deviation_ok(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'speed_lower_deviation_ok' field must be of type 'bool'"
        self._speed_lower_deviation_ok = value

    @builtins.property
    def stop_ok(self):
        """Message field 'stop_ok'."""
        return self._stop_ok

    @stop_ok.setter
    def stop_ok(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'stop_ok' field must be of type 'bool'"
        self._stop_ok = value

    @builtins.property
    def large_acceleration_ok(self):
        """Message field 'large_acceleration_ok'."""
        return self._large_acceleration_ok

    @large_acceleration_ok.setter
    def large_acceleration_ok(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'large_acceleration_ok' field must be of type 'bool'"
        self._large_acceleration_ok = value

    @builtins.property
    def large_lateral_acceleration_ok(self):
        """Message field 'large_lateral_acceleration_ok'."""
        return self._large_lateral_acceleration_ok

    @large_lateral_acceleration_ok.setter
    def large_lateral_acceleration_ok(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'large_lateral_acceleration_ok' field must be of type 'bool'"
        self._large_lateral_acceleration_ok = value

    @builtins.property
    def large_lateral_acceleration_diff_ok(self):
        """Message field 'large_lateral_acceleration_diff_ok'."""
        return self._large_lateral_acceleration_diff_ok

    @large_lateral_acceleration_diff_ok.setter
    def large_lateral_acceleration_diff_ok(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'large_lateral_acceleration_diff_ok' field must be of type 'bool'"
        self._large_lateral_acceleration_diff_ok = value

    @builtins.property
    def current_speed(self):
        """Message field 'current_speed'."""
        return self._current_speed

    @current_speed.setter
    def current_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'current_speed' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'current_speed' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._current_speed = value

    @builtins.property
    def target_control_speed(self):
        """Message field 'target_control_speed'."""
        return self._target_control_speed

    @target_control_speed.setter
    def target_control_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'target_control_speed' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'target_control_speed' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._target_control_speed = value

    @builtins.property
    def target_planning_speed(self):
        """Message field 'target_planning_speed'."""
        return self._target_planning_speed

    @target_planning_speed.setter
    def target_planning_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'target_planning_speed' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'target_planning_speed' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._target_planning_speed = value

    @builtins.property
    def target_control_acceleration(self):
        """Message field 'target_control_acceleration'."""
        return self._target_control_acceleration

    @target_control_acceleration.setter
    def target_control_acceleration(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'target_control_acceleration' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'target_control_acceleration' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._target_control_acceleration = value

    @builtins.property
    def lateral_acceleration(self):
        """Message field 'lateral_acceleration'."""
        return self._lateral_acceleration

    @lateral_acceleration.setter
    def lateral_acceleration(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lateral_acceleration' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'lateral_acceleration' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._lateral_acceleration = value

    @builtins.property
    def lateral_acceleration_deviation(self):
        """Message field 'lateral_acceleration_deviation'."""
        return self._lateral_acceleration_deviation

    @lateral_acceleration_deviation.setter
    def lateral_acceleration_deviation(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lateral_acceleration_deviation' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'lateral_acceleration_deviation' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._lateral_acceleration_deviation = value

    @builtins.property
    def lateral_deviation(self):
        """Message field 'lateral_deviation'."""
        return self._lateral_deviation

    @lateral_deviation.setter
    def lateral_deviation(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lateral_deviation' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'lateral_deviation' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._lateral_deviation = value

    @builtins.property
    def yaw_deviation(self):
        """Message field 'yaw_deviation'."""
        return self._yaw_deviation

    @yaw_deviation.setter
    def yaw_deviation(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw_deviation' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'yaw_deviation' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._yaw_deviation = value

    @builtins.property
    def speed_deviation(self):
        """Message field 'speed_deviation'."""
        return self._speed_deviation

    @speed_deviation.setter
    def speed_deviation(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'speed_deviation' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'speed_deviation' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._speed_deviation = value
