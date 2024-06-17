# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tier4_hmi_msgs:srv/Announce.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Announce_Request(type):
    """Metaclass of message 'Announce_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'ENGAGE': 1,
        'RESTART_ENGAGE': 2,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('tier4_hmi_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tier4_hmi_msgs.srv.Announce_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__announce__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__announce__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__announce__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__announce__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__announce__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'ENGAGE': cls.__constants['ENGAGE'],
            'RESTART_ENGAGE': cls.__constants['RESTART_ENGAGE'],
        }

    @property
    def ENGAGE(self):
        """Message constant 'ENGAGE'."""
        return Metaclass_Announce_Request.__constants['ENGAGE']

    @property
    def RESTART_ENGAGE(self):
        """Message constant 'RESTART_ENGAGE'."""
        return Metaclass_Announce_Request.__constants['RESTART_ENGAGE']


class Announce_Request(metaclass=Metaclass_Announce_Request):
    """
    Message class 'Announce_Request'.

    Constants:
      ENGAGE
      RESTART_ENGAGE
    """

    __slots__ = [
        '_kind',
    ]

    _fields_and_field_types = {
        'kind': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.kind = kwargs.get('kind', int())

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
        if self.kind != other.kind:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def kind(self):
        """Message field 'kind'."""
        return self._kind

    @kind.setter
    def kind(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'kind' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'kind' field must be an unsigned integer in [0, 4294967295]"
        self._kind = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_Announce_Response(type):
    """Metaclass of message 'Announce_Response'."""

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
            module = import_type_support('tier4_hmi_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tier4_hmi_msgs.srv.Announce_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__announce__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__announce__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__announce__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__announce__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__announce__response

            from tier4_external_api_msgs.msg import ResponseStatus
            if ResponseStatus.__class__._TYPE_SUPPORT is None:
                ResponseStatus.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Announce_Response(metaclass=Metaclass_Announce_Response):
    """Message class 'Announce_Response'."""

    __slots__ = [
        '_status',
    ]

    _fields_and_field_types = {
        'status': 'tier4_external_api_msgs/ResponseStatus',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['tier4_external_api_msgs', 'msg'], 'ResponseStatus'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from tier4_external_api_msgs.msg import ResponseStatus
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
            from tier4_external_api_msgs.msg import ResponseStatus
            assert \
                isinstance(value, ResponseStatus), \
                "The 'status' field must be a sub message of type 'ResponseStatus'"
        self._status = value


class Metaclass_Announce(type):
    """Metaclass of service 'Announce'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('tier4_hmi_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tier4_hmi_msgs.srv.Announce')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__announce

            from tier4_hmi_msgs.srv import _announce
            if _announce.Metaclass_Announce_Request._TYPE_SUPPORT is None:
                _announce.Metaclass_Announce_Request.__import_type_support__()
            if _announce.Metaclass_Announce_Response._TYPE_SUPPORT is None:
                _announce.Metaclass_Announce_Response.__import_type_support__()


class Announce(metaclass=Metaclass_Announce):
    from tier4_hmi_msgs.srv._announce import Announce_Request as Request
    from tier4_hmi_msgs.srv._announce import Announce_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
