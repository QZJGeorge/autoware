# generated from rosidl_generator_py/resource/_idl.py.em
# with input from autoware_adapi_v1_msgs:msg/VehicleStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_VehicleStatus(type):
    """Metaclass of message 'VehicleStatus'."""

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
            module = import_type_support('autoware_adapi_v1_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'autoware_adapi_v1_msgs.msg.VehicleStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__vehicle_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__vehicle_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__vehicle_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__vehicle_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__vehicle_status

            from autoware_adapi_v1_msgs.msg import Gear
            if Gear.__class__._TYPE_SUPPORT is None:
                Gear.__class__.__import_type_support__()

            from autoware_adapi_v1_msgs.msg import HazardLights
            if HazardLights.__class__._TYPE_SUPPORT is None:
                HazardLights.__class__.__import_type_support__()

            from autoware_adapi_v1_msgs.msg import TurnIndicators
            if TurnIndicators.__class__._TYPE_SUPPORT is None:
                TurnIndicators.__class__.__import_type_support__()

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


class VehicleStatus(metaclass=Metaclass_VehicleStatus):
    """Message class 'VehicleStatus'."""

    __slots__ = [
        '_stamp',
        '_gear',
        '_turn_indicators',
        '_hazard_lights',
        '_steering_tire_angle',
        '_energy_percentage',
    ]

    _fields_and_field_types = {
        'stamp': 'builtin_interfaces/Time',
        'gear': 'autoware_adapi_v1_msgs/Gear',
        'turn_indicators': 'autoware_adapi_v1_msgs/TurnIndicators',
        'hazard_lights': 'autoware_adapi_v1_msgs/HazardLights',
        'steering_tire_angle': 'double',
        'energy_percentage': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['autoware_adapi_v1_msgs', 'msg'], 'Gear'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['autoware_adapi_v1_msgs', 'msg'], 'TurnIndicators'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['autoware_adapi_v1_msgs', 'msg'], 'HazardLights'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())
        from autoware_adapi_v1_msgs.msg import Gear
        self.gear = kwargs.get('gear', Gear())
        from autoware_adapi_v1_msgs.msg import TurnIndicators
        self.turn_indicators = kwargs.get('turn_indicators', TurnIndicators())
        from autoware_adapi_v1_msgs.msg import HazardLights
        self.hazard_lights = kwargs.get('hazard_lights', HazardLights())
        self.steering_tire_angle = kwargs.get('steering_tire_angle', float())
        self.energy_percentage = kwargs.get('energy_percentage', float())

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
        if self.gear != other.gear:
            return False
        if self.turn_indicators != other.turn_indicators:
            return False
        if self.hazard_lights != other.hazard_lights:
            return False
        if self.steering_tire_angle != other.steering_tire_angle:
            return False
        if self.energy_percentage != other.energy_percentage:
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
    def gear(self):
        """Message field 'gear'."""
        return self._gear

    @gear.setter
    def gear(self, value):
        if __debug__:
            from autoware_adapi_v1_msgs.msg import Gear
            assert \
                isinstance(value, Gear), \
                "The 'gear' field must be a sub message of type 'Gear'"
        self._gear = value

    @builtins.property
    def turn_indicators(self):
        """Message field 'turn_indicators'."""
        return self._turn_indicators

    @turn_indicators.setter
    def turn_indicators(self, value):
        if __debug__:
            from autoware_adapi_v1_msgs.msg import TurnIndicators
            assert \
                isinstance(value, TurnIndicators), \
                "The 'turn_indicators' field must be a sub message of type 'TurnIndicators'"
        self._turn_indicators = value

    @builtins.property
    def hazard_lights(self):
        """Message field 'hazard_lights'."""
        return self._hazard_lights

    @hazard_lights.setter
    def hazard_lights(self, value):
        if __debug__:
            from autoware_adapi_v1_msgs.msg import HazardLights
            assert \
                isinstance(value, HazardLights), \
                "The 'hazard_lights' field must be a sub message of type 'HazardLights'"
        self._hazard_lights = value

    @builtins.property
    def steering_tire_angle(self):
        """Message field 'steering_tire_angle'."""
        return self._steering_tire_angle

    @steering_tire_angle.setter
    def steering_tire_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'steering_tire_angle' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'steering_tire_angle' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._steering_tire_angle = value

    @builtins.property
    def energy_percentage(self):
        """Message field 'energy_percentage'."""
        return self._energy_percentage

    @energy_percentage.setter
    def energy_percentage(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'energy_percentage' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'energy_percentage' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._energy_percentage = value
