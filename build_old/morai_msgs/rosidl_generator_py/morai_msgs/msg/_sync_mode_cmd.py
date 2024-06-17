# generated from rosidl_generator_py/resource/_idl.py.em
# with input from morai_msgs:msg/SyncModeCmd.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SyncModeCmd(type):
    """Metaclass of message 'SyncModeCmd'."""

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
                'morai_msgs.msg.SyncModeCmd')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sync_mode_cmd
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sync_mode_cmd
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sync_mode_cmd
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sync_mode_cmd
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sync_mode_cmd

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SyncModeCmd(metaclass=Metaclass_SyncModeCmd):
    """Message class 'SyncModeCmd'."""

    __slots__ = [
        '_user_id',
        '_start_sync_mode',
        '_time_step',
    ]

    _fields_and_field_types = {
        'user_id': 'string',
        'start_sync_mode': 'boolean',
        'time_step': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.user_id = kwargs.get('user_id', str())
        self.start_sync_mode = kwargs.get('start_sync_mode', bool())
        self.time_step = kwargs.get('time_step', int())

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
        if self.user_id != other.user_id:
            return False
        if self.start_sync_mode != other.start_sync_mode:
            return False
        if self.time_step != other.time_step:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def user_id(self):
        """Message field 'user_id'."""
        return self._user_id

    @user_id.setter
    def user_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'user_id' field must be of type 'str'"
        self._user_id = value

    @builtins.property
    def start_sync_mode(self):
        """Message field 'start_sync_mode'."""
        return self._start_sync_mode

    @start_sync_mode.setter
    def start_sync_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'start_sync_mode' field must be of type 'bool'"
        self._start_sync_mode = value

    @builtins.property
    def time_step(self):
        """Message field 'time_step'."""
        return self._time_step

    @time_step.setter
    def time_step(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'time_step' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'time_step' field must be an unsigned integer in [0, 4294967295]"
        self._time_step = value
