# generated from rosidl_generator_py/resource/_idl.py.em
# with input from vehicle_cmd_gate:msg/IsFilterActivated.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_IsFilterActivated(type):
    """Metaclass of message 'IsFilterActivated'."""

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
            module = import_type_support('vehicle_cmd_gate')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'vehicle_cmd_gate.msg.IsFilterActivated')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__is_filter_activated
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__is_filter_activated
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__is_filter_activated
            cls._TYPE_SUPPORT = module.type_support_msg__msg__is_filter_activated
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__is_filter_activated

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


class IsFilterActivated(metaclass=Metaclass_IsFilterActivated):
    """Message class 'IsFilterActivated'."""

    __slots__ = [
        '_stamp',
        '_is_activated',
        '_is_activated_on_steering',
        '_is_activated_on_steering_rate',
        '_is_activated_on_speed',
        '_is_activated_on_acceleration',
        '_is_activated_on_jerk',
    ]

    _fields_and_field_types = {
        'stamp': 'builtin_interfaces/Time',
        'is_activated': 'boolean',
        'is_activated_on_steering': 'boolean',
        'is_activated_on_steering_rate': 'boolean',
        'is_activated_on_speed': 'boolean',
        'is_activated_on_acceleration': 'boolean',
        'is_activated_on_jerk': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())
        self.is_activated = kwargs.get('is_activated', bool())
        self.is_activated_on_steering = kwargs.get('is_activated_on_steering', bool())
        self.is_activated_on_steering_rate = kwargs.get('is_activated_on_steering_rate', bool())
        self.is_activated_on_speed = kwargs.get('is_activated_on_speed', bool())
        self.is_activated_on_acceleration = kwargs.get('is_activated_on_acceleration', bool())
        self.is_activated_on_jerk = kwargs.get('is_activated_on_jerk', bool())

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
        if self.is_activated != other.is_activated:
            return False
        if self.is_activated_on_steering != other.is_activated_on_steering:
            return False
        if self.is_activated_on_steering_rate != other.is_activated_on_steering_rate:
            return False
        if self.is_activated_on_speed != other.is_activated_on_speed:
            return False
        if self.is_activated_on_acceleration != other.is_activated_on_acceleration:
            return False
        if self.is_activated_on_jerk != other.is_activated_on_jerk:
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
    def is_activated(self):
        """Message field 'is_activated'."""
        return self._is_activated

    @is_activated.setter
    def is_activated(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_activated' field must be of type 'bool'"
        self._is_activated = value

    @builtins.property
    def is_activated_on_steering(self):
        """Message field 'is_activated_on_steering'."""
        return self._is_activated_on_steering

    @is_activated_on_steering.setter
    def is_activated_on_steering(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_activated_on_steering' field must be of type 'bool'"
        self._is_activated_on_steering = value

    @builtins.property
    def is_activated_on_steering_rate(self):
        """Message field 'is_activated_on_steering_rate'."""
        return self._is_activated_on_steering_rate

    @is_activated_on_steering_rate.setter
    def is_activated_on_steering_rate(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_activated_on_steering_rate' field must be of type 'bool'"
        self._is_activated_on_steering_rate = value

    @builtins.property
    def is_activated_on_speed(self):
        """Message field 'is_activated_on_speed'."""
        return self._is_activated_on_speed

    @is_activated_on_speed.setter
    def is_activated_on_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_activated_on_speed' field must be of type 'bool'"
        self._is_activated_on_speed = value

    @builtins.property
    def is_activated_on_acceleration(self):
        """Message field 'is_activated_on_acceleration'."""
        return self._is_activated_on_acceleration

    @is_activated_on_acceleration.setter
    def is_activated_on_acceleration(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_activated_on_acceleration' field must be of type 'bool'"
        self._is_activated_on_acceleration = value

    @builtins.property
    def is_activated_on_jerk(self):
        """Message field 'is_activated_on_jerk'."""
        return self._is_activated_on_jerk

    @is_activated_on_jerk.setter
    def is_activated_on_jerk(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_activated_on_jerk' field must be of type 'bool'"
        self._is_activated_on_jerk = value
