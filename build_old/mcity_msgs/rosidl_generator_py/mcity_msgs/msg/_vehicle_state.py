# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mcity_msgs:msg/VehicleState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_VehicleState(type):
    """Metaclass of message 'VehicleState'."""

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
            module = import_type_support('mcity_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mcity_msgs.msg.VehicleState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__vehicle_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__vehicle_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__vehicle_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__vehicle_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__vehicle_state

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class VehicleState(metaclass=Metaclass_VehicleState):
    """Message class 'VehicleState'."""

    __slots__ = [
        '_timestamp',
        '_x',
        '_y',
        '_z',
        '_speed_x',
        '_speed_y',
        '_speed_z',
        '_acc_x',
        '_acc_y',
        '_acc_z',
        '_heading',
        '_yaw_rate',
        '_by_wire_enabled',
        '_throttle_cmd',
        '_throttle_input',
        '_throttle_state',
        '_throttle_enabled',
        '_throttle_override',
        '_throttle_driver',
        '_throttle_timeout',
        '_brake_cmd',
        '_brake_input',
        '_brake_state',
        '_brake_torq_cmd',
        '_brake_torq_input',
        '_brake_torq_state',
        '_brake_boo_output',
        '_brake_enabled',
        '_brake_override',
        '_brake_driver',
        '_brake_timeout',
        '_steer_cmd',
        '_steer_state',
        '_steer_torque',
        '_steer_enabled',
        '_steer_override',
        '_steer_timeout',
        '_gear_pos',
        '_wheel_v_front_left',
        '_wheel_v_front_right',
        '_wheel_v_rear_left',
        '_wheel_v_rear_right',
    ]

    _fields_and_field_types = {
        'timestamp': 'double',
        'x': 'double',
        'y': 'double',
        'z': 'double',
        'speed_x': 'double',
        'speed_y': 'double',
        'speed_z': 'double',
        'acc_x': 'double',
        'acc_y': 'double',
        'acc_z': 'double',
        'heading': 'double',
        'yaw_rate': 'double',
        'by_wire_enabled': 'boolean',
        'throttle_cmd': 'double',
        'throttle_input': 'double',
        'throttle_state': 'double',
        'throttle_enabled': 'boolean',
        'throttle_override': 'boolean',
        'throttle_driver': 'boolean',
        'throttle_timeout': 'boolean',
        'brake_cmd': 'double',
        'brake_input': 'double',
        'brake_state': 'double',
        'brake_torq_cmd': 'double',
        'brake_torq_input': 'double',
        'brake_torq_state': 'double',
        'brake_boo_output': 'boolean',
        'brake_enabled': 'boolean',
        'brake_override': 'boolean',
        'brake_driver': 'boolean',
        'brake_timeout': 'boolean',
        'steer_cmd': 'double',
        'steer_state': 'double',
        'steer_torque': 'double',
        'steer_enabled': 'boolean',
        'steer_override': 'boolean',
        'steer_timeout': 'boolean',
        'gear_pos': 'int16',
        'wheel_v_front_left': 'double',
        'wheel_v_front_right': 'double',
        'wheel_v_rear_left': 'double',
        'wheel_v_rear_right': 'double',
    }

    SLOT_TYPES = (
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
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
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
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', float())
        self.x = kwargs.get('x', float())
        self.y = kwargs.get('y', float())
        self.z = kwargs.get('z', float())
        self.speed_x = kwargs.get('speed_x', float())
        self.speed_y = kwargs.get('speed_y', float())
        self.speed_z = kwargs.get('speed_z', float())
        self.acc_x = kwargs.get('acc_x', float())
        self.acc_y = kwargs.get('acc_y', float())
        self.acc_z = kwargs.get('acc_z', float())
        self.heading = kwargs.get('heading', float())
        self.yaw_rate = kwargs.get('yaw_rate', float())
        self.by_wire_enabled = kwargs.get('by_wire_enabled', bool())
        self.throttle_cmd = kwargs.get('throttle_cmd', float())
        self.throttle_input = kwargs.get('throttle_input', float())
        self.throttle_state = kwargs.get('throttle_state', float())
        self.throttle_enabled = kwargs.get('throttle_enabled', bool())
        self.throttle_override = kwargs.get('throttle_override', bool())
        self.throttle_driver = kwargs.get('throttle_driver', bool())
        self.throttle_timeout = kwargs.get('throttle_timeout', bool())
        self.brake_cmd = kwargs.get('brake_cmd', float())
        self.brake_input = kwargs.get('brake_input', float())
        self.brake_state = kwargs.get('brake_state', float())
        self.brake_torq_cmd = kwargs.get('brake_torq_cmd', float())
        self.brake_torq_input = kwargs.get('brake_torq_input', float())
        self.brake_torq_state = kwargs.get('brake_torq_state', float())
        self.brake_boo_output = kwargs.get('brake_boo_output', bool())
        self.brake_enabled = kwargs.get('brake_enabled', bool())
        self.brake_override = kwargs.get('brake_override', bool())
        self.brake_driver = kwargs.get('brake_driver', bool())
        self.brake_timeout = kwargs.get('brake_timeout', bool())
        self.steer_cmd = kwargs.get('steer_cmd', float())
        self.steer_state = kwargs.get('steer_state', float())
        self.steer_torque = kwargs.get('steer_torque', float())
        self.steer_enabled = kwargs.get('steer_enabled', bool())
        self.steer_override = kwargs.get('steer_override', bool())
        self.steer_timeout = kwargs.get('steer_timeout', bool())
        self.gear_pos = kwargs.get('gear_pos', int())
        self.wheel_v_front_left = kwargs.get('wheel_v_front_left', float())
        self.wheel_v_front_right = kwargs.get('wheel_v_front_right', float())
        self.wheel_v_rear_left = kwargs.get('wheel_v_rear_left', float())
        self.wheel_v_rear_right = kwargs.get('wheel_v_rear_right', float())

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
        if self.timestamp != other.timestamp:
            return False
        if self.x != other.x:
            return False
        if self.y != other.y:
            return False
        if self.z != other.z:
            return False
        if self.speed_x != other.speed_x:
            return False
        if self.speed_y != other.speed_y:
            return False
        if self.speed_z != other.speed_z:
            return False
        if self.acc_x != other.acc_x:
            return False
        if self.acc_y != other.acc_y:
            return False
        if self.acc_z != other.acc_z:
            return False
        if self.heading != other.heading:
            return False
        if self.yaw_rate != other.yaw_rate:
            return False
        if self.by_wire_enabled != other.by_wire_enabled:
            return False
        if self.throttle_cmd != other.throttle_cmd:
            return False
        if self.throttle_input != other.throttle_input:
            return False
        if self.throttle_state != other.throttle_state:
            return False
        if self.throttle_enabled != other.throttle_enabled:
            return False
        if self.throttle_override != other.throttle_override:
            return False
        if self.throttle_driver != other.throttle_driver:
            return False
        if self.throttle_timeout != other.throttle_timeout:
            return False
        if self.brake_cmd != other.brake_cmd:
            return False
        if self.brake_input != other.brake_input:
            return False
        if self.brake_state != other.brake_state:
            return False
        if self.brake_torq_cmd != other.brake_torq_cmd:
            return False
        if self.brake_torq_input != other.brake_torq_input:
            return False
        if self.brake_torq_state != other.brake_torq_state:
            return False
        if self.brake_boo_output != other.brake_boo_output:
            return False
        if self.brake_enabled != other.brake_enabled:
            return False
        if self.brake_override != other.brake_override:
            return False
        if self.brake_driver != other.brake_driver:
            return False
        if self.brake_timeout != other.brake_timeout:
            return False
        if self.steer_cmd != other.steer_cmd:
            return False
        if self.steer_state != other.steer_state:
            return False
        if self.steer_torque != other.steer_torque:
            return False
        if self.steer_enabled != other.steer_enabled:
            return False
        if self.steer_override != other.steer_override:
            return False
        if self.steer_timeout != other.steer_timeout:
            return False
        if self.gear_pos != other.gear_pos:
            return False
        if self.wheel_v_front_left != other.wheel_v_front_left:
            return False
        if self.wheel_v_front_right != other.wheel_v_front_right:
            return False
        if self.wheel_v_rear_left != other.wheel_v_rear_left:
            return False
        if self.wheel_v_rear_right != other.wheel_v_rear_right:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def timestamp(self):
        """Message field 'timestamp'."""
        return self._timestamp

    @timestamp.setter
    def timestamp(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'timestamp' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'timestamp' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._timestamp = value

    @builtins.property
    def x(self):
        """Message field 'x'."""
        return self._x

    @x.setter
    def x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'x' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._x = value

    @builtins.property
    def y(self):
        """Message field 'y'."""
        return self._y

    @y.setter
    def y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'y' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._y = value

    @builtins.property
    def z(self):
        """Message field 'z'."""
        return self._z

    @z.setter
    def z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'z' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'z' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._z = value

    @builtins.property
    def speed_x(self):
        """Message field 'speed_x'."""
        return self._speed_x

    @speed_x.setter
    def speed_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'speed_x' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'speed_x' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._speed_x = value

    @builtins.property
    def speed_y(self):
        """Message field 'speed_y'."""
        return self._speed_y

    @speed_y.setter
    def speed_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'speed_y' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'speed_y' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._speed_y = value

    @builtins.property
    def speed_z(self):
        """Message field 'speed_z'."""
        return self._speed_z

    @speed_z.setter
    def speed_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'speed_z' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'speed_z' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._speed_z = value

    @builtins.property
    def acc_x(self):
        """Message field 'acc_x'."""
        return self._acc_x

    @acc_x.setter
    def acc_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'acc_x' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'acc_x' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._acc_x = value

    @builtins.property
    def acc_y(self):
        """Message field 'acc_y'."""
        return self._acc_y

    @acc_y.setter
    def acc_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'acc_y' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'acc_y' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._acc_y = value

    @builtins.property
    def acc_z(self):
        """Message field 'acc_z'."""
        return self._acc_z

    @acc_z.setter
    def acc_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'acc_z' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'acc_z' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._acc_z = value

    @builtins.property
    def heading(self):
        """Message field 'heading'."""
        return self._heading

    @heading.setter
    def heading(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'heading' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'heading' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._heading = value

    @builtins.property
    def yaw_rate(self):
        """Message field 'yaw_rate'."""
        return self._yaw_rate

    @yaw_rate.setter
    def yaw_rate(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw_rate' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'yaw_rate' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._yaw_rate = value

    @builtins.property
    def by_wire_enabled(self):
        """Message field 'by_wire_enabled'."""
        return self._by_wire_enabled

    @by_wire_enabled.setter
    def by_wire_enabled(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'by_wire_enabled' field must be of type 'bool'"
        self._by_wire_enabled = value

    @builtins.property
    def throttle_cmd(self):
        """Message field 'throttle_cmd'."""
        return self._throttle_cmd

    @throttle_cmd.setter
    def throttle_cmd(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'throttle_cmd' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'throttle_cmd' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._throttle_cmd = value

    @builtins.property
    def throttle_input(self):
        """Message field 'throttle_input'."""
        return self._throttle_input

    @throttle_input.setter
    def throttle_input(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'throttle_input' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'throttle_input' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._throttle_input = value

    @builtins.property
    def throttle_state(self):
        """Message field 'throttle_state'."""
        return self._throttle_state

    @throttle_state.setter
    def throttle_state(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'throttle_state' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'throttle_state' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._throttle_state = value

    @builtins.property
    def throttle_enabled(self):
        """Message field 'throttle_enabled'."""
        return self._throttle_enabled

    @throttle_enabled.setter
    def throttle_enabled(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'throttle_enabled' field must be of type 'bool'"
        self._throttle_enabled = value

    @builtins.property
    def throttle_override(self):
        """Message field 'throttle_override'."""
        return self._throttle_override

    @throttle_override.setter
    def throttle_override(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'throttle_override' field must be of type 'bool'"
        self._throttle_override = value

    @builtins.property
    def throttle_driver(self):
        """Message field 'throttle_driver'."""
        return self._throttle_driver

    @throttle_driver.setter
    def throttle_driver(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'throttle_driver' field must be of type 'bool'"
        self._throttle_driver = value

    @builtins.property
    def throttle_timeout(self):
        """Message field 'throttle_timeout'."""
        return self._throttle_timeout

    @throttle_timeout.setter
    def throttle_timeout(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'throttle_timeout' field must be of type 'bool'"
        self._throttle_timeout = value

    @builtins.property
    def brake_cmd(self):
        """Message field 'brake_cmd'."""
        return self._brake_cmd

    @brake_cmd.setter
    def brake_cmd(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'brake_cmd' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'brake_cmd' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._brake_cmd = value

    @builtins.property
    def brake_input(self):
        """Message field 'brake_input'."""
        return self._brake_input

    @brake_input.setter
    def brake_input(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'brake_input' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'brake_input' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._brake_input = value

    @builtins.property
    def brake_state(self):
        """Message field 'brake_state'."""
        return self._brake_state

    @brake_state.setter
    def brake_state(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'brake_state' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'brake_state' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._brake_state = value

    @builtins.property
    def brake_torq_cmd(self):
        """Message field 'brake_torq_cmd'."""
        return self._brake_torq_cmd

    @brake_torq_cmd.setter
    def brake_torq_cmd(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'brake_torq_cmd' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'brake_torq_cmd' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._brake_torq_cmd = value

    @builtins.property
    def brake_torq_input(self):
        """Message field 'brake_torq_input'."""
        return self._brake_torq_input

    @brake_torq_input.setter
    def brake_torq_input(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'brake_torq_input' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'brake_torq_input' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._brake_torq_input = value

    @builtins.property
    def brake_torq_state(self):
        """Message field 'brake_torq_state'."""
        return self._brake_torq_state

    @brake_torq_state.setter
    def brake_torq_state(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'brake_torq_state' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'brake_torq_state' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._brake_torq_state = value

    @builtins.property
    def brake_boo_output(self):
        """Message field 'brake_boo_output'."""
        return self._brake_boo_output

    @brake_boo_output.setter
    def brake_boo_output(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'brake_boo_output' field must be of type 'bool'"
        self._brake_boo_output = value

    @builtins.property
    def brake_enabled(self):
        """Message field 'brake_enabled'."""
        return self._brake_enabled

    @brake_enabled.setter
    def brake_enabled(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'brake_enabled' field must be of type 'bool'"
        self._brake_enabled = value

    @builtins.property
    def brake_override(self):
        """Message field 'brake_override'."""
        return self._brake_override

    @brake_override.setter
    def brake_override(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'brake_override' field must be of type 'bool'"
        self._brake_override = value

    @builtins.property
    def brake_driver(self):
        """Message field 'brake_driver'."""
        return self._brake_driver

    @brake_driver.setter
    def brake_driver(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'brake_driver' field must be of type 'bool'"
        self._brake_driver = value

    @builtins.property
    def brake_timeout(self):
        """Message field 'brake_timeout'."""
        return self._brake_timeout

    @brake_timeout.setter
    def brake_timeout(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'brake_timeout' field must be of type 'bool'"
        self._brake_timeout = value

    @builtins.property
    def steer_cmd(self):
        """Message field 'steer_cmd'."""
        return self._steer_cmd

    @steer_cmd.setter
    def steer_cmd(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'steer_cmd' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'steer_cmd' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._steer_cmd = value

    @builtins.property
    def steer_state(self):
        """Message field 'steer_state'."""
        return self._steer_state

    @steer_state.setter
    def steer_state(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'steer_state' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'steer_state' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._steer_state = value

    @builtins.property
    def steer_torque(self):
        """Message field 'steer_torque'."""
        return self._steer_torque

    @steer_torque.setter
    def steer_torque(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'steer_torque' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'steer_torque' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._steer_torque = value

    @builtins.property
    def steer_enabled(self):
        """Message field 'steer_enabled'."""
        return self._steer_enabled

    @steer_enabled.setter
    def steer_enabled(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'steer_enabled' field must be of type 'bool'"
        self._steer_enabled = value

    @builtins.property
    def steer_override(self):
        """Message field 'steer_override'."""
        return self._steer_override

    @steer_override.setter
    def steer_override(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'steer_override' field must be of type 'bool'"
        self._steer_override = value

    @builtins.property
    def steer_timeout(self):
        """Message field 'steer_timeout'."""
        return self._steer_timeout

    @steer_timeout.setter
    def steer_timeout(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'steer_timeout' field must be of type 'bool'"
        self._steer_timeout = value

    @builtins.property
    def gear_pos(self):
        """Message field 'gear_pos'."""
        return self._gear_pos

    @gear_pos.setter
    def gear_pos(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gear_pos' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'gear_pos' field must be an integer in [-32768, 32767]"
        self._gear_pos = value

    @builtins.property
    def wheel_v_front_left(self):
        """Message field 'wheel_v_front_left'."""
        return self._wheel_v_front_left

    @wheel_v_front_left.setter
    def wheel_v_front_left(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'wheel_v_front_left' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'wheel_v_front_left' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._wheel_v_front_left = value

    @builtins.property
    def wheel_v_front_right(self):
        """Message field 'wheel_v_front_right'."""
        return self._wheel_v_front_right

    @wheel_v_front_right.setter
    def wheel_v_front_right(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'wheel_v_front_right' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'wheel_v_front_right' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._wheel_v_front_right = value

    @builtins.property
    def wheel_v_rear_left(self):
        """Message field 'wheel_v_rear_left'."""
        return self._wheel_v_rear_left

    @wheel_v_rear_left.setter
    def wheel_v_rear_left(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'wheel_v_rear_left' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'wheel_v_rear_left' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._wheel_v_rear_left = value

    @builtins.property
    def wheel_v_rear_right(self):
        """Message field 'wheel_v_rear_right'."""
        return self._wheel_v_rear_right

    @wheel_v_rear_right.setter
    def wheel_v_rear_right(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'wheel_v_rear_right' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'wheel_v_rear_right' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._wheel_v_rear_right = value
