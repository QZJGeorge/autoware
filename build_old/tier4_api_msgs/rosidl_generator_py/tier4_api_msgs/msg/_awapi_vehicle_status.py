# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tier4_api_msgs:msg/AwapiVehicleStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AwapiVehicleStatus(type):
    """Metaclass of message 'AwapiVehicleStatus'."""

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
            module = import_type_support('tier4_api_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tier4_api_msgs.msg.AwapiVehicleStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__awapi_vehicle_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__awapi_vehicle_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__awapi_vehicle_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__awapi_vehicle_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__awapi_vehicle_status

            from geographic_msgs.msg import GeoPoint
            if GeoPoint.__class__._TYPE_SUPPORT is None:
                GeoPoint.__class__.__import_type_support__()

            from geometry_msgs.msg import Pose
            if Pose.__class__._TYPE_SUPPORT is None:
                Pose.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

            from tier4_api_msgs.msg import Euler
            if Euler.__class__._TYPE_SUPPORT is None:
                Euler.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class AwapiVehicleStatus(metaclass=Metaclass_AwapiVehicleStatus):
    """Message class 'AwapiVehicleStatus'."""

    __slots__ = [
        '_header',
        '_pose',
        '_eulerangle',
        '_geo_point',
        '_velocity',
        '_acceleration',
        '_steering',
        '_steering_velocity',
        '_angular_velocity',
        '_gear',
        '_energy_level',
        '_turn_signal',
        '_target_velocity',
        '_target_acceleration',
        '_target_steering',
        '_target_steering_velocity',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'pose': 'geometry_msgs/Pose',
        'eulerangle': 'tier4_api_msgs/Euler',
        'geo_point': 'geographic_msgs/GeoPoint',
        'velocity': 'double',
        'acceleration': 'double',
        'steering': 'double',
        'steering_velocity': 'double',
        'angular_velocity': 'double',
        'gear': 'int32',
        'energy_level': 'float',
        'turn_signal': 'int32',
        'target_velocity': 'double',
        'target_acceleration': 'double',
        'target_steering': 'double',
        'target_steering_velocity': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['tier4_api_msgs', 'msg'], 'Euler'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geographic_msgs', 'msg'], 'GeoPoint'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        from geometry_msgs.msg import Pose
        self.pose = kwargs.get('pose', Pose())
        from tier4_api_msgs.msg import Euler
        self.eulerangle = kwargs.get('eulerangle', Euler())
        from geographic_msgs.msg import GeoPoint
        self.geo_point = kwargs.get('geo_point', GeoPoint())
        self.velocity = kwargs.get('velocity', float())
        self.acceleration = kwargs.get('acceleration', float())
        self.steering = kwargs.get('steering', float())
        self.steering_velocity = kwargs.get('steering_velocity', float())
        self.angular_velocity = kwargs.get('angular_velocity', float())
        self.gear = kwargs.get('gear', int())
        self.energy_level = kwargs.get('energy_level', float())
        self.turn_signal = kwargs.get('turn_signal', int())
        self.target_velocity = kwargs.get('target_velocity', float())
        self.target_acceleration = kwargs.get('target_acceleration', float())
        self.target_steering = kwargs.get('target_steering', float())
        self.target_steering_velocity = kwargs.get('target_steering_velocity', float())

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
        if self.header != other.header:
            return False
        if self.pose != other.pose:
            return False
        if self.eulerangle != other.eulerangle:
            return False
        if self.geo_point != other.geo_point:
            return False
        if self.velocity != other.velocity:
            return False
        if self.acceleration != other.acceleration:
            return False
        if self.steering != other.steering:
            return False
        if self.steering_velocity != other.steering_velocity:
            return False
        if self.angular_velocity != other.angular_velocity:
            return False
        if self.gear != other.gear:
            return False
        if self.energy_level != other.energy_level:
            return False
        if self.turn_signal != other.turn_signal:
            return False
        if self.target_velocity != other.target_velocity:
            return False
        if self.target_acceleration != other.target_acceleration:
            return False
        if self.target_steering != other.target_steering:
            return False
        if self.target_steering_velocity != other.target_steering_velocity:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def pose(self):
        """Message field 'pose'."""
        return self._pose

    @pose.setter
    def pose(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'pose' field must be a sub message of type 'Pose'"
        self._pose = value

    @builtins.property
    def eulerangle(self):
        """Message field 'eulerangle'."""
        return self._eulerangle

    @eulerangle.setter
    def eulerangle(self, value):
        if __debug__:
            from tier4_api_msgs.msg import Euler
            assert \
                isinstance(value, Euler), \
                "The 'eulerangle' field must be a sub message of type 'Euler'"
        self._eulerangle = value

    @builtins.property
    def geo_point(self):
        """Message field 'geo_point'."""
        return self._geo_point

    @geo_point.setter
    def geo_point(self, value):
        if __debug__:
            from geographic_msgs.msg import GeoPoint
            assert \
                isinstance(value, GeoPoint), \
                "The 'geo_point' field must be a sub message of type 'GeoPoint'"
        self._geo_point = value

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
    def acceleration(self):
        """Message field 'acceleration'."""
        return self._acceleration

    @acceleration.setter
    def acceleration(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'acceleration' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'acceleration' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._acceleration = value

    @builtins.property
    def steering(self):
        """Message field 'steering'."""
        return self._steering

    @steering.setter
    def steering(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'steering' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'steering' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._steering = value

    @builtins.property
    def steering_velocity(self):
        """Message field 'steering_velocity'."""
        return self._steering_velocity

    @steering_velocity.setter
    def steering_velocity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'steering_velocity' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'steering_velocity' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._steering_velocity = value

    @builtins.property
    def angular_velocity(self):
        """Message field 'angular_velocity'."""
        return self._angular_velocity

    @angular_velocity.setter
    def angular_velocity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'angular_velocity' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'angular_velocity' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._angular_velocity = value

    @builtins.property
    def gear(self):
        """Message field 'gear'."""
        return self._gear

    @gear.setter
    def gear(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gear' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'gear' field must be an integer in [-2147483648, 2147483647]"
        self._gear = value

    @builtins.property
    def energy_level(self):
        """Message field 'energy_level'."""
        return self._energy_level

    @energy_level.setter
    def energy_level(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'energy_level' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'energy_level' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._energy_level = value

    @builtins.property
    def turn_signal(self):
        """Message field 'turn_signal'."""
        return self._turn_signal

    @turn_signal.setter
    def turn_signal(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'turn_signal' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'turn_signal' field must be an integer in [-2147483648, 2147483647]"
        self._turn_signal = value

    @builtins.property
    def target_velocity(self):
        """Message field 'target_velocity'."""
        return self._target_velocity

    @target_velocity.setter
    def target_velocity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'target_velocity' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'target_velocity' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._target_velocity = value

    @builtins.property
    def target_acceleration(self):
        """Message field 'target_acceleration'."""
        return self._target_acceleration

    @target_acceleration.setter
    def target_acceleration(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'target_acceleration' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'target_acceleration' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._target_acceleration = value

    @builtins.property
    def target_steering(self):
        """Message field 'target_steering'."""
        return self._target_steering

    @target_steering.setter
    def target_steering(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'target_steering' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'target_steering' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._target_steering = value

    @builtins.property
    def target_steering_velocity(self):
        """Message field 'target_steering_velocity'."""
        return self._target_steering_velocity

    @target_steering_velocity.setter
    def target_steering_velocity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'target_steering_velocity' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'target_steering_velocity' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._target_steering_velocity = value
