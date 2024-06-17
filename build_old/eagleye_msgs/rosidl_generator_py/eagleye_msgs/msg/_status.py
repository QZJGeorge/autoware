# generated from rosidl_generator_py/resource/_idl.py.em
# with input from eagleye_msgs:msg/Status.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Status(type):
    """Metaclass of message 'Status'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'NAN_OR_INFINITE': 0,
        'TOO_LARGE_OR_SMALL': 1,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('eagleye_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'eagleye_msgs.msg.Status')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'NAN_OR_INFINITE': cls.__constants['NAN_OR_INFINITE'],
            'TOO_LARGE_OR_SMALL': cls.__constants['TOO_LARGE_OR_SMALL'],
        }

    @property
    def NAN_OR_INFINITE(self):
        """Message constant 'NAN_OR_INFINITE'."""
        return Metaclass_Status.__constants['NAN_OR_INFINITE']

    @property
    def TOO_LARGE_OR_SMALL(self):
        """Message constant 'TOO_LARGE_OR_SMALL'."""
        return Metaclass_Status.__constants['TOO_LARGE_OR_SMALL']


class Status(metaclass=Metaclass_Status):
    """
    Message class 'Status'.

    Constants:
      NAN_OR_INFINITE
      TOO_LARGE_OR_SMALL
    """

    __slots__ = [
        '_enabled_status',
        '_estimate_status',
        '_is_abnormal',
        '_error_code',
    ]

    _fields_and_field_types = {
        'enabled_status': 'boolean',
        'estimate_status': 'boolean',
        'is_abnormal': 'boolean',
        'error_code': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.enabled_status = kwargs.get('enabled_status', bool())
        self.estimate_status = kwargs.get('estimate_status', bool())
        self.is_abnormal = kwargs.get('is_abnormal', bool())
        self.error_code = kwargs.get('error_code', int())

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
        if self.enabled_status != other.enabled_status:
            return False
        if self.estimate_status != other.estimate_status:
            return False
        if self.is_abnormal != other.is_abnormal:
            return False
        if self.error_code != other.error_code:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def enabled_status(self):
        """Message field 'enabled_status'."""
        return self._enabled_status

    @enabled_status.setter
    def enabled_status(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'enabled_status' field must be of type 'bool'"
        self._enabled_status = value

    @builtins.property
    def estimate_status(self):
        """Message field 'estimate_status'."""
        return self._estimate_status

    @estimate_status.setter
    def estimate_status(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'estimate_status' field must be of type 'bool'"
        self._estimate_status = value

    @builtins.property
    def is_abnormal(self):
        """Message field 'is_abnormal'."""
        return self._is_abnormal

    @is_abnormal.setter
    def is_abnormal(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_abnormal' field must be of type 'bool'"
        self._is_abnormal = value

    @builtins.property
    def error_code(self):
        """Message field 'error_code'."""
        return self._error_code

    @error_code.setter
    def error_code(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'error_code' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'error_code' field must be an unsigned integer in [0, 255]"
        self._error_code = value
