# generated from rosidl_generator_py/resource/_idl.py.em
# with input from control_performance_analysis:msg/DrivingMonitorStamped.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DrivingMonitorStamped(type):
    """Metaclass of message 'DrivingMonitorStamped'."""

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
            module = import_type_support('control_performance_analysis')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'control_performance_analysis.msg.DrivingMonitorStamped')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__driving_monitor_stamped
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__driving_monitor_stamped
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__driving_monitor_stamped
            cls._TYPE_SUPPORT = module.type_support_msg__msg__driving_monitor_stamped
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__driving_monitor_stamped

            from control_performance_analysis.msg import FloatStamped
            if FloatStamped.__class__._TYPE_SUPPORT is None:
                FloatStamped.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DrivingMonitorStamped(metaclass=Metaclass_DrivingMonitorStamped):
    """Message class 'DrivingMonitorStamped'."""

    __slots__ = [
        '_longitudinal_acceleration',
        '_longitudinal_jerk',
        '_lateral_acceleration',
        '_lateral_jerk',
        '_desired_steering_angle',
        '_controller_processing_time',
    ]

    _fields_and_field_types = {
        'longitudinal_acceleration': 'control_performance_analysis/FloatStamped',
        'longitudinal_jerk': 'control_performance_analysis/FloatStamped',
        'lateral_acceleration': 'control_performance_analysis/FloatStamped',
        'lateral_jerk': 'control_performance_analysis/FloatStamped',
        'desired_steering_angle': 'control_performance_analysis/FloatStamped',
        'controller_processing_time': 'control_performance_analysis/FloatStamped',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['control_performance_analysis', 'msg'], 'FloatStamped'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['control_performance_analysis', 'msg'], 'FloatStamped'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['control_performance_analysis', 'msg'], 'FloatStamped'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['control_performance_analysis', 'msg'], 'FloatStamped'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['control_performance_analysis', 'msg'], 'FloatStamped'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['control_performance_analysis', 'msg'], 'FloatStamped'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from control_performance_analysis.msg import FloatStamped
        self.longitudinal_acceleration = kwargs.get('longitudinal_acceleration', FloatStamped())
        from control_performance_analysis.msg import FloatStamped
        self.longitudinal_jerk = kwargs.get('longitudinal_jerk', FloatStamped())
        from control_performance_analysis.msg import FloatStamped
        self.lateral_acceleration = kwargs.get('lateral_acceleration', FloatStamped())
        from control_performance_analysis.msg import FloatStamped
        self.lateral_jerk = kwargs.get('lateral_jerk', FloatStamped())
        from control_performance_analysis.msg import FloatStamped
        self.desired_steering_angle = kwargs.get('desired_steering_angle', FloatStamped())
        from control_performance_analysis.msg import FloatStamped
        self.controller_processing_time = kwargs.get('controller_processing_time', FloatStamped())

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
        if self.longitudinal_acceleration != other.longitudinal_acceleration:
            return False
        if self.longitudinal_jerk != other.longitudinal_jerk:
            return False
        if self.lateral_acceleration != other.lateral_acceleration:
            return False
        if self.lateral_jerk != other.lateral_jerk:
            return False
        if self.desired_steering_angle != other.desired_steering_angle:
            return False
        if self.controller_processing_time != other.controller_processing_time:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def longitudinal_acceleration(self):
        """Message field 'longitudinal_acceleration'."""
        return self._longitudinal_acceleration

    @longitudinal_acceleration.setter
    def longitudinal_acceleration(self, value):
        if __debug__:
            from control_performance_analysis.msg import FloatStamped
            assert \
                isinstance(value, FloatStamped), \
                "The 'longitudinal_acceleration' field must be a sub message of type 'FloatStamped'"
        self._longitudinal_acceleration = value

    @builtins.property
    def longitudinal_jerk(self):
        """Message field 'longitudinal_jerk'."""
        return self._longitudinal_jerk

    @longitudinal_jerk.setter
    def longitudinal_jerk(self, value):
        if __debug__:
            from control_performance_analysis.msg import FloatStamped
            assert \
                isinstance(value, FloatStamped), \
                "The 'longitudinal_jerk' field must be a sub message of type 'FloatStamped'"
        self._longitudinal_jerk = value

    @builtins.property
    def lateral_acceleration(self):
        """Message field 'lateral_acceleration'."""
        return self._lateral_acceleration

    @lateral_acceleration.setter
    def lateral_acceleration(self, value):
        if __debug__:
            from control_performance_analysis.msg import FloatStamped
            assert \
                isinstance(value, FloatStamped), \
                "The 'lateral_acceleration' field must be a sub message of type 'FloatStamped'"
        self._lateral_acceleration = value

    @builtins.property
    def lateral_jerk(self):
        """Message field 'lateral_jerk'."""
        return self._lateral_jerk

    @lateral_jerk.setter
    def lateral_jerk(self, value):
        if __debug__:
            from control_performance_analysis.msg import FloatStamped
            assert \
                isinstance(value, FloatStamped), \
                "The 'lateral_jerk' field must be a sub message of type 'FloatStamped'"
        self._lateral_jerk = value

    @builtins.property
    def desired_steering_angle(self):
        """Message field 'desired_steering_angle'."""
        return self._desired_steering_angle

    @desired_steering_angle.setter
    def desired_steering_angle(self, value):
        if __debug__:
            from control_performance_analysis.msg import FloatStamped
            assert \
                isinstance(value, FloatStamped), \
                "The 'desired_steering_angle' field must be a sub message of type 'FloatStamped'"
        self._desired_steering_angle = value

    @builtins.property
    def controller_processing_time(self):
        """Message field 'controller_processing_time'."""
        return self._controller_processing_time

    @controller_processing_time.setter
    def controller_processing_time(self, value):
        if __debug__:
            from control_performance_analysis.msg import FloatStamped
            assert \
                isinstance(value, FloatStamped), \
                "The 'controller_processing_time' field must be a sub message of type 'FloatStamped'"
        self._controller_processing_time = value
