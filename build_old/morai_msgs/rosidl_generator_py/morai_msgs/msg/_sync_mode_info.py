# generated from rosidl_generator_py/resource/_idl.py.em
# with input from morai_msgs:msg/SyncModeInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SyncModeInfo(type):
    """Metaclass of message 'SyncModeInfo'."""

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
                'morai_msgs.msg.SyncModeInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sync_mode_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sync_mode_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sync_mode_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sync_mode_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sync_mode_info

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SyncModeInfo(metaclass=Metaclass_SyncModeInfo):
    """Message class 'SyncModeInfo'."""

    __slots__ = [
        '_master_id',
        '_status',
        '_frame',
        '_can_send_tick',
    ]

    _fields_and_field_types = {
        'master_id': 'string',
        'status': 'boolean',
        'frame': 'uint64',
        'can_send_tick': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.master_id = kwargs.get('master_id', str())
        self.status = kwargs.get('status', bool())
        self.frame = kwargs.get('frame', int())
        self.can_send_tick = kwargs.get('can_send_tick', bool())

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
        if self.master_id != other.master_id:
            return False
        if self.status != other.status:
            return False
        if self.frame != other.frame:
            return False
        if self.can_send_tick != other.can_send_tick:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def master_id(self):
        """Message field 'master_id'."""
        return self._master_id

    @master_id.setter
    def master_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'master_id' field must be of type 'str'"
        self._master_id = value

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'status' field must be of type 'bool'"
        self._status = value

    @builtins.property
    def frame(self):
        """Message field 'frame'."""
        return self._frame

    @frame.setter
    def frame(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'frame' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'frame' field must be an unsigned integer in [0, 18446744073709551615]"
        self._frame = value

    @builtins.property
    def can_send_tick(self):
        """Message field 'can_send_tick'."""
        return self._can_send_tick

    @can_send_tick.setter
    def can_send_tick(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'can_send_tick' field must be of type 'bool'"
        self._can_send_tick = value
