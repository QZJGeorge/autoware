# generated from rosidl_generator_py/resource/_idl.py.em
# with input from morai_msgs:msg/MoraiSimConfig.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MoraiSimConfig(type):
    """Metaclass of message 'MoraiSimConfig'."""

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
            module = import_type_support('morai_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'morai_msgs.msg.MoraiSimConfig')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__morai_sim_config
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__morai_sim_config
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__morai_sim_config
            cls._TYPE_SUPPORT = module.type_support_msg__msg__morai_sim_config
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__morai_sim_config

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MoraiSimConfig(metaclass=Metaclass_MoraiSimConfig):
    """Message class 'MoraiSimConfig'."""

    __slots__ = [
        '_sensor_config_file_name',
        '_publisher_list',
        '_subscriber_list',
        '_service_list',
        '_camera_list',
        '_gps_list',
        '_imu_list',
        '_lidar_list',
        '_radar_list',
    ]

    _fields_and_field_types = {
        'sensor_config_file_name': 'string',
        'publisher_list': 'string',
        'subscriber_list': 'string',
        'service_list': 'string',
        'camera_list': 'string',
        'gps_list': 'string',
        'imu_list': 'string',
        'lidar_list': 'string',
        'radar_list': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.sensor_config_file_name = kwargs.get('sensor_config_file_name', str())
        self.publisher_list = kwargs.get('publisher_list', str())
        self.subscriber_list = kwargs.get('subscriber_list', str())
        self.service_list = kwargs.get('service_list', str())
        self.camera_list = kwargs.get('camera_list', str())
        self.gps_list = kwargs.get('gps_list', str())
        self.imu_list = kwargs.get('imu_list', str())
        self.lidar_list = kwargs.get('lidar_list', str())
        self.radar_list = kwargs.get('radar_list', str())

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
        if self.sensor_config_file_name != other.sensor_config_file_name:
            return False
        if self.publisher_list != other.publisher_list:
            return False
        if self.subscriber_list != other.subscriber_list:
            return False
        if self.service_list != other.service_list:
            return False
        if self.camera_list != other.camera_list:
            return False
        if self.gps_list != other.gps_list:
            return False
        if self.imu_list != other.imu_list:
            return False
        if self.lidar_list != other.lidar_list:
            return False
        if self.radar_list != other.radar_list:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def sensor_config_file_name(self):
        """Message field 'sensor_config_file_name'."""
        return self._sensor_config_file_name

    @sensor_config_file_name.setter
    def sensor_config_file_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'sensor_config_file_name' field must be of type 'str'"
        self._sensor_config_file_name = value

    @builtins.property
    def publisher_list(self):
        """Message field 'publisher_list'."""
        return self._publisher_list

    @publisher_list.setter
    def publisher_list(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'publisher_list' field must be of type 'str'"
        self._publisher_list = value

    @builtins.property
    def subscriber_list(self):
        """Message field 'subscriber_list'."""
        return self._subscriber_list

    @subscriber_list.setter
    def subscriber_list(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'subscriber_list' field must be of type 'str'"
        self._subscriber_list = value

    @builtins.property
    def service_list(self):
        """Message field 'service_list'."""
        return self._service_list

    @service_list.setter
    def service_list(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'service_list' field must be of type 'str'"
        self._service_list = value

    @builtins.property
    def camera_list(self):
        """Message field 'camera_list'."""
        return self._camera_list

    @camera_list.setter
    def camera_list(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'camera_list' field must be of type 'str'"
        self._camera_list = value

    @builtins.property
    def gps_list(self):
        """Message field 'gps_list'."""
        return self._gps_list

    @gps_list.setter
    def gps_list(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'gps_list' field must be of type 'str'"
        self._gps_list = value

    @builtins.property
    def imu_list(self):
        """Message field 'imu_list'."""
        return self._imu_list

    @imu_list.setter
    def imu_list(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'imu_list' field must be of type 'str'"
        self._imu_list = value

    @builtins.property
    def lidar_list(self):
        """Message field 'lidar_list'."""
        return self._lidar_list

    @lidar_list.setter
    def lidar_list(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'lidar_list' field must be of type 'str'"
        self._lidar_list = value

    @builtins.property
    def radar_list(self):
        """Message field 'radar_list'."""
        return self._radar_list

    @radar_list.setter
    def radar_list(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'radar_list' field must be of type 'str'"
        self._radar_list = value
