# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tier4_system_msgs:msg/ServiceLog.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ServiceLog(type):
    """Metaclass of message 'ServiceLog'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'CLIENT_REQUEST': 1,
        'SERVER_REQUEST': 2,
        'SERVER_RESPONSE': 3,
        'CLIENT_RESPONSE': 4,
        'ERROR_UNREADY': 5,
        'ERROR_TIMEOUT': 6,
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
                'tier4_system_msgs.msg.ServiceLog')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__service_log
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__service_log
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__service_log
            cls._TYPE_SUPPORT = module.type_support_msg__msg__service_log
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__service_log

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'CLIENT_REQUEST': cls.__constants['CLIENT_REQUEST'],
            'SERVER_REQUEST': cls.__constants['SERVER_REQUEST'],
            'SERVER_RESPONSE': cls.__constants['SERVER_RESPONSE'],
            'CLIENT_RESPONSE': cls.__constants['CLIENT_RESPONSE'],
            'ERROR_UNREADY': cls.__constants['ERROR_UNREADY'],
            'ERROR_TIMEOUT': cls.__constants['ERROR_TIMEOUT'],
        }

    @property
    def CLIENT_REQUEST(self):
        """Message constant 'CLIENT_REQUEST'."""
        return Metaclass_ServiceLog.__constants['CLIENT_REQUEST']

    @property
    def SERVER_REQUEST(self):
        """Message constant 'SERVER_REQUEST'."""
        return Metaclass_ServiceLog.__constants['SERVER_REQUEST']

    @property
    def SERVER_RESPONSE(self):
        """Message constant 'SERVER_RESPONSE'."""
        return Metaclass_ServiceLog.__constants['SERVER_RESPONSE']

    @property
    def CLIENT_RESPONSE(self):
        """Message constant 'CLIENT_RESPONSE'."""
        return Metaclass_ServiceLog.__constants['CLIENT_RESPONSE']

    @property
    def ERROR_UNREADY(self):
        """Message constant 'ERROR_UNREADY'."""
        return Metaclass_ServiceLog.__constants['ERROR_UNREADY']

    @property
    def ERROR_TIMEOUT(self):
        """Message constant 'ERROR_TIMEOUT'."""
        return Metaclass_ServiceLog.__constants['ERROR_TIMEOUT']


class ServiceLog(metaclass=Metaclass_ServiceLog):
    """
    Message class 'ServiceLog'.

    Constants:
      CLIENT_REQUEST
      SERVER_REQUEST
      SERVER_RESPONSE
      CLIENT_RESPONSE
      ERROR_UNREADY
      ERROR_TIMEOUT
    """

    __slots__ = [
        '_stamp',
        '_type',
        '_name',
        '_node',
        '_yaml',
    ]

    _fields_and_field_types = {
        'stamp': 'builtin_interfaces/Time',
        'type': 'uint8',
        'name': 'string',
        'node': 'string',
        'yaml': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())
        self.type = kwargs.get('type', int())
        self.name = kwargs.get('name', str())
        self.node = kwargs.get('node', str())
        self.yaml = kwargs.get('yaml', str())

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
        if self.stamp != other.stamp:
            return False
        if self.type != other.type:
            return False
        if self.name != other.name:
            return False
        if self.node != other.node:
            return False
        if self.yaml != other.yaml:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def stamp(self):
        """Message field 'stamp'."""
        return self._stamp

    @stamp.setter
    def stamp(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'stamp' field must be a sub message of type 'Time'"
        self._stamp = value

    @builtins.property  # noqa: A003
    def type(self):  # noqa: A003
        """Message field 'type'."""
        return self._type

    @type.setter  # noqa: A003
    def type(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'type' field must be an unsigned integer in [0, 255]"
        self._type = value

    @builtins.property
    def name(self):
        """Message field 'name'."""
        return self._name

    @name.setter
    def name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'name' field must be of type 'str'"
        self._name = value

    @builtins.property
    def node(self):
        """Message field 'node'."""
        return self._node

    @node.setter
    def node(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'node' field must be of type 'str'"
        self._node = value

    @builtins.property
    def yaml(self):
        """Message field 'yaml'."""
        return self._yaml

    @yaml.setter
    def yaml(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'yaml' field must be of type 'str'"
        self._yaml = value
