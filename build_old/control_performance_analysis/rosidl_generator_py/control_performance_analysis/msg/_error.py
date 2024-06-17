# generated from rosidl_generator_py/resource/_idl.py.em
# with input from control_performance_analysis:msg/Error.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Error(type):
    """Metaclass of message 'Error'."""

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
                'control_performance_analysis.msg.Error')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__error
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__error
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__error
            cls._TYPE_SUPPORT = module.type_support_msg__msg__error
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__error

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Error(metaclass=Metaclass_Error):
    """Message class 'Error'."""

    __slots__ = [
        '_lateral_error',
        '_lateral_error_velocity',
        '_lateral_error_acceleration',
        '_longitudinal_error',
        '_longitudinal_error_velocity',
        '_longitudinal_error_acceleration',
        '_heading_error',
        '_heading_error_velocity',
        '_control_effort_energy',
        '_error_energy',
        '_value_approximation',
        '_curvature_estimate',
        '_curvature_estimate_pp',
        '_vehicle_velocity_error',
        '_tracking_curvature_discontinuity_ability',
    ]

    _fields_and_field_types = {
        'lateral_error': 'double',
        'lateral_error_velocity': 'double',
        'lateral_error_acceleration': 'double',
        'longitudinal_error': 'double',
        'longitudinal_error_velocity': 'double',
        'longitudinal_error_acceleration': 'double',
        'heading_error': 'double',
        'heading_error_velocity': 'double',
        'control_effort_energy': 'double',
        'error_energy': 'double',
        'value_approximation': 'double',
        'curvature_estimate': 'double',
        'curvature_estimate_pp': 'double',
        'vehicle_velocity_error': 'double',
        'tracking_curvature_discontinuity_ability': 'double',
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
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.lateral_error = kwargs.get('lateral_error', float())
        self.lateral_error_velocity = kwargs.get('lateral_error_velocity', float())
        self.lateral_error_acceleration = kwargs.get('lateral_error_acceleration', float())
        self.longitudinal_error = kwargs.get('longitudinal_error', float())
        self.longitudinal_error_velocity = kwargs.get('longitudinal_error_velocity', float())
        self.longitudinal_error_acceleration = kwargs.get('longitudinal_error_acceleration', float())
        self.heading_error = kwargs.get('heading_error', float())
        self.heading_error_velocity = kwargs.get('heading_error_velocity', float())
        self.control_effort_energy = kwargs.get('control_effort_energy', float())
        self.error_energy = kwargs.get('error_energy', float())
        self.value_approximation = kwargs.get('value_approximation', float())
        self.curvature_estimate = kwargs.get('curvature_estimate', float())
        self.curvature_estimate_pp = kwargs.get('curvature_estimate_pp', float())
        self.vehicle_velocity_error = kwargs.get('vehicle_velocity_error', float())
        self.tracking_curvature_discontinuity_ability = kwargs.get('tracking_curvature_discontinuity_ability', float())

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
        if self.lateral_error != other.lateral_error:
            return False
        if self.lateral_error_velocity != other.lateral_error_velocity:
            return False
        if self.lateral_error_acceleration != other.lateral_error_acceleration:
            return False
        if self.longitudinal_error != other.longitudinal_error:
            return False
        if self.longitudinal_error_velocity != other.longitudinal_error_velocity:
            return False
        if self.longitudinal_error_acceleration != other.longitudinal_error_acceleration:
            return False
        if self.heading_error != other.heading_error:
            return False
        if self.heading_error_velocity != other.heading_error_velocity:
            return False
        if self.control_effort_energy != other.control_effort_energy:
            return False
        if self.error_energy != other.error_energy:
            return False
        if self.value_approximation != other.value_approximation:
            return False
        if self.curvature_estimate != other.curvature_estimate:
            return False
        if self.curvature_estimate_pp != other.curvature_estimate_pp:
            return False
        if self.vehicle_velocity_error != other.vehicle_velocity_error:
            return False
        if self.tracking_curvature_discontinuity_ability != other.tracking_curvature_discontinuity_ability:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def lateral_error(self):
        """Message field 'lateral_error'."""
        return self._lateral_error

    @lateral_error.setter
    def lateral_error(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lateral_error' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'lateral_error' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._lateral_error = value

    @builtins.property
    def lateral_error_velocity(self):
        """Message field 'lateral_error_velocity'."""
        return self._lateral_error_velocity

    @lateral_error_velocity.setter
    def lateral_error_velocity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lateral_error_velocity' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'lateral_error_velocity' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._lateral_error_velocity = value

    @builtins.property
    def lateral_error_acceleration(self):
        """Message field 'lateral_error_acceleration'."""
        return self._lateral_error_acceleration

    @lateral_error_acceleration.setter
    def lateral_error_acceleration(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lateral_error_acceleration' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'lateral_error_acceleration' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._lateral_error_acceleration = value

    @builtins.property
    def longitudinal_error(self):
        """Message field 'longitudinal_error'."""
        return self._longitudinal_error

    @longitudinal_error.setter
    def longitudinal_error(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'longitudinal_error' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'longitudinal_error' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._longitudinal_error = value

    @builtins.property
    def longitudinal_error_velocity(self):
        """Message field 'longitudinal_error_velocity'."""
        return self._longitudinal_error_velocity

    @longitudinal_error_velocity.setter
    def longitudinal_error_velocity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'longitudinal_error_velocity' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'longitudinal_error_velocity' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._longitudinal_error_velocity = value

    @builtins.property
    def longitudinal_error_acceleration(self):
        """Message field 'longitudinal_error_acceleration'."""
        return self._longitudinal_error_acceleration

    @longitudinal_error_acceleration.setter
    def longitudinal_error_acceleration(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'longitudinal_error_acceleration' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'longitudinal_error_acceleration' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._longitudinal_error_acceleration = value

    @builtins.property
    def heading_error(self):
        """Message field 'heading_error'."""
        return self._heading_error

    @heading_error.setter
    def heading_error(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'heading_error' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'heading_error' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._heading_error = value

    @builtins.property
    def heading_error_velocity(self):
        """Message field 'heading_error_velocity'."""
        return self._heading_error_velocity

    @heading_error_velocity.setter
    def heading_error_velocity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'heading_error_velocity' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'heading_error_velocity' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._heading_error_velocity = value

    @builtins.property
    def control_effort_energy(self):
        """Message field 'control_effort_energy'."""
        return self._control_effort_energy

    @control_effort_energy.setter
    def control_effort_energy(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'control_effort_energy' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'control_effort_energy' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._control_effort_energy = value

    @builtins.property
    def error_energy(self):
        """Message field 'error_energy'."""
        return self._error_energy

    @error_energy.setter
    def error_energy(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'error_energy' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'error_energy' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._error_energy = value

    @builtins.property
    def value_approximation(self):
        """Message field 'value_approximation'."""
        return self._value_approximation

    @value_approximation.setter
    def value_approximation(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'value_approximation' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'value_approximation' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._value_approximation = value

    @builtins.property
    def curvature_estimate(self):
        """Message field 'curvature_estimate'."""
        return self._curvature_estimate

    @curvature_estimate.setter
    def curvature_estimate(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'curvature_estimate' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'curvature_estimate' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._curvature_estimate = value

    @builtins.property
    def curvature_estimate_pp(self):
        """Message field 'curvature_estimate_pp'."""
        return self._curvature_estimate_pp

    @curvature_estimate_pp.setter
    def curvature_estimate_pp(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'curvature_estimate_pp' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'curvature_estimate_pp' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._curvature_estimate_pp = value

    @builtins.property
    def vehicle_velocity_error(self):
        """Message field 'vehicle_velocity_error'."""
        return self._vehicle_velocity_error

    @vehicle_velocity_error.setter
    def vehicle_velocity_error(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vehicle_velocity_error' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'vehicle_velocity_error' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._vehicle_velocity_error = value

    @builtins.property
    def tracking_curvature_discontinuity_ability(self):
        """Message field 'tracking_curvature_discontinuity_ability'."""
        return self._tracking_curvature_discontinuity_ability

    @tracking_curvature_discontinuity_ability.setter
    def tracking_curvature_discontinuity_ability(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'tracking_curvature_discontinuity_ability' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'tracking_curvature_discontinuity_ability' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._tracking_curvature_discontinuity_ability = value
