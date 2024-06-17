# generated from rosidl_generator_py/resource/_idl.py.em
# with input from morai_msgs:msg/SaveSensorData.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SaveSensorData(type):
    """Metaclass of message 'SaveSensorData'."""

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
                'morai_msgs.msg.SaveSensorData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__save_sensor_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__save_sensor_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__save_sensor_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__save_sensor_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__save_sensor_data

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SaveSensorData(metaclass=Metaclass_SaveSensorData):
    """Message class 'SaveSensorData'."""

    __slots__ = [
        '_is_custom_file_name',
        '_custom_file_name',
        '_file_dir',
    ]

    _fields_and_field_types = {
        'is_custom_file_name': 'boolean',
        'custom_file_name': 'string',
        'file_dir': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.is_custom_file_name = kwargs.get('is_custom_file_name', bool())
        self.custom_file_name = kwargs.get('custom_file_name', str())
        self.file_dir = kwargs.get('file_dir', str())

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
        if self.is_custom_file_name != other.is_custom_file_name:
            return False
        if self.custom_file_name != other.custom_file_name:
            return False
        if self.file_dir != other.file_dir:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def is_custom_file_name(self):
        """Message field 'is_custom_file_name'."""
        return self._is_custom_file_name

    @is_custom_file_name.setter
    def is_custom_file_name(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_custom_file_name' field must be of type 'bool'"
        self._is_custom_file_name = value

    @builtins.property
    def custom_file_name(self):
        """Message field 'custom_file_name'."""
        return self._custom_file_name

    @custom_file_name.setter
    def custom_file_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'custom_file_name' field must be of type 'str'"
        self._custom_file_name = value

    @builtins.property
    def file_dir(self):
        """Message field 'file_dir'."""
        return self._file_dir

    @file_dir.setter
    def file_dir(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'file_dir' field must be of type 'str'"
        self._file_dir = value
