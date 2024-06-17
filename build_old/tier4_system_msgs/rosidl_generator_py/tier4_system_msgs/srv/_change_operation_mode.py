# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tier4_system_msgs:srv/ChangeOperationMode.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ChangeOperationMode_Request(type):
    """Metaclass of message 'ChangeOperationMode_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'STOP': 1,
        'AUTONOMOUS': 2,
        'LOCAL': 3,
        'REMOTE': 4,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('tier4_system_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tier4_system_msgs.srv.ChangeOperationMode_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__change_operation_mode__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__change_operation_mode__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__change_operation_mode__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__change_operation_mode__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__change_operation_mode__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'STOP': cls.__constants['STOP'],
            'AUTONOMOUS': cls.__constants['AUTONOMOUS'],
            'LOCAL': cls.__constants['LOCAL'],
            'REMOTE': cls.__constants['REMOTE'],
        }

    @property
    def STOP(self):
        """Message constant 'STOP'."""
        return Metaclass_ChangeOperationMode_Request.__constants['STOP']

    @property
    def AUTONOMOUS(self):
        """Message constant 'AUTONOMOUS'."""
        return Metaclass_ChangeOperationMode_Request.__constants['AUTONOMOUS']

    @property
    def LOCAL(self):
        """Message constant 'LOCAL'."""
        return Metaclass_ChangeOperationMode_Request.__constants['LOCAL']

    @property
    def REMOTE(self):
        """Message constant 'REMOTE'."""
        return Metaclass_ChangeOperationMode_Request.__constants['REMOTE']


class ChangeOperationMode_Request(metaclass=Metaclass_ChangeOperationMode_Request):
    """
    Message class 'ChangeOperationMode_Request'.

    Constants:
      STOP
      AUTONOMOUS
      LOCAL
      REMOTE
    """

    __slots__ = [
        '_mode',
    ]

    _fields_and_field_types = {
        'mode': 'uint16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.mode = kwargs.get('mode', int())

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
        if self.mode != other.mode:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def mode(self):
        """Message field 'mode'."""
        return self._mode

    @mode.setter
    def mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mode' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'mode' field must be an unsigned integer in [0, 65535]"
        self._mode = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ChangeOperationMode_Response(type):
    """Metaclass of message 'ChangeOperationMode_Response'."""

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
            module = import_type_support('tier4_system_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tier4_system_msgs.srv.ChangeOperationMode_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__change_operation_mode__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__change_operation_mode__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__change_operation_mode__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__change_operation_mode__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__change_operation_mode__response

            from autoware_common_msgs.msg import ResponseStatus
            if ResponseStatus.__class__._TYPE_SUPPORT is None:
                ResponseStatus.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ChangeOperationMode_Response(metaclass=Metaclass_ChangeOperationMode_Response):
    """Message class 'ChangeOperationMode_Response'."""

    __slots__ = [
        '_status',
    ]

    _fields_and_field_types = {
        'status': 'autoware_common_msgs/ResponseStatus',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['autoware_common_msgs', 'msg'], 'ResponseStatus'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from autoware_common_msgs.msg import ResponseStatus
        self.status = kwargs.get('status', ResponseStatus())

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
        if self.status != other.status:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            from autoware_common_msgs.msg import ResponseStatus
            assert \
                isinstance(value, ResponseStatus), \
                "The 'status' field must be a sub message of type 'ResponseStatus'"
        self._status = value


class Metaclass_ChangeOperationMode(type):
    """Metaclass of service 'ChangeOperationMode'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('tier4_system_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tier4_system_msgs.srv.ChangeOperationMode')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__change_operation_mode

            from tier4_system_msgs.srv import _change_operation_mode
            if _change_operation_mode.Metaclass_ChangeOperationMode_Request._TYPE_SUPPORT is None:
                _change_operation_mode.Metaclass_ChangeOperationMode_Request.__import_type_support__()
            if _change_operation_mode.Metaclass_ChangeOperationMode_Response._TYPE_SUPPORT is None:
                _change_operation_mode.Metaclass_ChangeOperationMode_Response.__import_type_support__()


class ChangeOperationMode(metaclass=Metaclass_ChangeOperationMode):
    from tier4_system_msgs.srv._change_operation_mode import ChangeOperationMode_Request as Request
    from tier4_system_msgs.srv._change_operation_mode import ChangeOperationMode_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
