# generated from rosidl_generator_py/resource/_idl.py.em
# with input from morai_msgs:msg/MoraiSimProcHandle.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MoraiSimProcHandle(type):
    """Metaclass of message 'MoraiSimProcHandle'."""

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
                'morai_msgs.msg.MoraiSimProcHandle')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__morai_sim_proc_handle
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__morai_sim_proc_handle
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__morai_sim_proc_handle
            cls._TYPE_SUPPORT = module.type_support_msg__msg__morai_sim_proc_handle
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__morai_sim_proc_handle

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MoraiSimProcHandle(metaclass=Metaclass_MoraiSimProcHandle):
    """Message class 'MoraiSimProcHandle'."""

    __slots__ = [
        '_sim_process_status',
        '_replay_option',
        '_rosbag_file_name',
        '_replay_target_option',
        '_replay_speed',
        '_start_time',
    ]

    _fields_and_field_types = {
        'sim_process_status': 'uint8',
        'replay_option': 'int16',
        'rosbag_file_name': 'string',
        'replay_target_option': 'int16',
        'replay_speed': 'int32',
        'start_time': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.sim_process_status = kwargs.get('sim_process_status', int())
        self.replay_option = kwargs.get('replay_option', int())
        self.rosbag_file_name = kwargs.get('rosbag_file_name', str())
        self.replay_target_option = kwargs.get('replay_target_option', int())
        self.replay_speed = kwargs.get('replay_speed', int())
        self.start_time = kwargs.get('start_time', int())

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
        if self.sim_process_status != other.sim_process_status:
            return False
        if self.replay_option != other.replay_option:
            return False
        if self.rosbag_file_name != other.rosbag_file_name:
            return False
        if self.replay_target_option != other.replay_target_option:
            return False
        if self.replay_speed != other.replay_speed:
            return False
        if self.start_time != other.start_time:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def sim_process_status(self):
        """Message field 'sim_process_status'."""
        return self._sim_process_status

    @sim_process_status.setter
    def sim_process_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sim_process_status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'sim_process_status' field must be an unsigned integer in [0, 255]"
        self._sim_process_status = value

    @builtins.property
    def replay_option(self):
        """Message field 'replay_option'."""
        return self._replay_option

    @replay_option.setter
    def replay_option(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'replay_option' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'replay_option' field must be an integer in [-32768, 32767]"
        self._replay_option = value

    @builtins.property
    def rosbag_file_name(self):
        """Message field 'rosbag_file_name'."""
        return self._rosbag_file_name

    @rosbag_file_name.setter
    def rosbag_file_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'rosbag_file_name' field must be of type 'str'"
        self._rosbag_file_name = value

    @builtins.property
    def replay_target_option(self):
        """Message field 'replay_target_option'."""
        return self._replay_target_option

    @replay_target_option.setter
    def replay_target_option(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'replay_target_option' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'replay_target_option' field must be an integer in [-32768, 32767]"
        self._replay_target_option = value

    @builtins.property
    def replay_speed(self):
        """Message field 'replay_speed'."""
        return self._replay_speed

    @replay_speed.setter
    def replay_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'replay_speed' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'replay_speed' field must be an integer in [-2147483648, 2147483647]"
        self._replay_speed = value

    @builtins.property
    def start_time(self):
        """Message field 'start_time'."""
        return self._start_time

    @start_time.setter
    def start_time(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'start_time' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'start_time' field must be an integer in [-2147483648, 2147483647]"
        self._start_time = value
