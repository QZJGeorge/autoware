# generated from rosidl_generator_py/resource/_idl.py.em
# with input from morai_msgs:msg/ScenarioLoad.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ScenarioLoad(type):
    """Metaclass of message 'ScenarioLoad'."""

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
                'morai_msgs.msg.ScenarioLoad')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__scenario_load
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__scenario_load
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__scenario_load
            cls._TYPE_SUPPORT = module.type_support_msg__msg__scenario_load
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__scenario_load

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ScenarioLoad(metaclass=Metaclass_ScenarioLoad):
    """Message class 'ScenarioLoad'."""

    __slots__ = [
        '_file_name',
        '_load_network_connection_data',
        '_delete_all',
        '_load_ego_vehicle_data',
        '_load_surrounding_vehicle_data',
        '_load_pedestrian_data',
        '_load_obstacle_data',
        '_set_pause',
    ]

    _fields_and_field_types = {
        'file_name': 'string',
        'load_network_connection_data': 'boolean',
        'delete_all': 'boolean',
        'load_ego_vehicle_data': 'boolean',
        'load_surrounding_vehicle_data': 'boolean',
        'load_pedestrian_data': 'boolean',
        'load_obstacle_data': 'boolean',
        'set_pause': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
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
        self.file_name = kwargs.get('file_name', str())
        self.load_network_connection_data = kwargs.get('load_network_connection_data', bool())
        self.delete_all = kwargs.get('delete_all', bool())
        self.load_ego_vehicle_data = kwargs.get('load_ego_vehicle_data', bool())
        self.load_surrounding_vehicle_data = kwargs.get('load_surrounding_vehicle_data', bool())
        self.load_pedestrian_data = kwargs.get('load_pedestrian_data', bool())
        self.load_obstacle_data = kwargs.get('load_obstacle_data', bool())
        self.set_pause = kwargs.get('set_pause', bool())

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
        if self.file_name != other.file_name:
            return False
        if self.load_network_connection_data != other.load_network_connection_data:
            return False
        if self.delete_all != other.delete_all:
            return False
        if self.load_ego_vehicle_data != other.load_ego_vehicle_data:
            return False
        if self.load_surrounding_vehicle_data != other.load_surrounding_vehicle_data:
            return False
        if self.load_pedestrian_data != other.load_pedestrian_data:
            return False
        if self.load_obstacle_data != other.load_obstacle_data:
            return False
        if self.set_pause != other.set_pause:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def file_name(self):
        """Message field 'file_name'."""
        return self._file_name

    @file_name.setter
    def file_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'file_name' field must be of type 'str'"
        self._file_name = value

    @builtins.property
    def load_network_connection_data(self):
        """Message field 'load_network_connection_data'."""
        return self._load_network_connection_data

    @load_network_connection_data.setter
    def load_network_connection_data(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'load_network_connection_data' field must be of type 'bool'"
        self._load_network_connection_data = value

    @builtins.property
    def delete_all(self):
        """Message field 'delete_all'."""
        return self._delete_all

    @delete_all.setter
    def delete_all(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'delete_all' field must be of type 'bool'"
        self._delete_all = value

    @builtins.property
    def load_ego_vehicle_data(self):
        """Message field 'load_ego_vehicle_data'."""
        return self._load_ego_vehicle_data

    @load_ego_vehicle_data.setter
    def load_ego_vehicle_data(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'load_ego_vehicle_data' field must be of type 'bool'"
        self._load_ego_vehicle_data = value

    @builtins.property
    def load_surrounding_vehicle_data(self):
        """Message field 'load_surrounding_vehicle_data'."""
        return self._load_surrounding_vehicle_data

    @load_surrounding_vehicle_data.setter
    def load_surrounding_vehicle_data(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'load_surrounding_vehicle_data' field must be of type 'bool'"
        self._load_surrounding_vehicle_data = value

    @builtins.property
    def load_pedestrian_data(self):
        """Message field 'load_pedestrian_data'."""
        return self._load_pedestrian_data

    @load_pedestrian_data.setter
    def load_pedestrian_data(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'load_pedestrian_data' field must be of type 'bool'"
        self._load_pedestrian_data = value

    @builtins.property
    def load_obstacle_data(self):
        """Message field 'load_obstacle_data'."""
        return self._load_obstacle_data

    @load_obstacle_data.setter
    def load_obstacle_data(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'load_obstacle_data' field must be of type 'bool'"
        self._load_obstacle_data = value

    @builtins.property
    def set_pause(self):
        """Message field 'set_pause'."""
        return self._set_pause

    @set_pause.setter
    def set_pause(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'set_pause' field must be of type 'bool'"
        self._set_pause = value
