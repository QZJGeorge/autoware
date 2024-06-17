# generated from rosidl_generator_py/resource/_idl.py.em
# with input from autoware_adapi_version_msgs:srv/InterfaceVersion.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_InterfaceVersion_Request(type):
    """Metaclass of message 'InterfaceVersion_Request'."""

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
            module = import_type_support('autoware_adapi_version_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'autoware_adapi_version_msgs.srv.InterfaceVersion_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__interface_version__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__interface_version__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__interface_version__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__interface_version__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__interface_version__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class InterfaceVersion_Request(metaclass=Metaclass_InterfaceVersion_Request):
    """Message class 'InterfaceVersion_Request'."""

    __slots__ = [
    ]

    _fields_and_field_types = {
    }

    SLOT_TYPES = (
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))

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
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)


# Import statements for member types

import builtins  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_InterfaceVersion_Response(type):
    """Metaclass of message 'InterfaceVersion_Response'."""

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
            module = import_type_support('autoware_adapi_version_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'autoware_adapi_version_msgs.srv.InterfaceVersion_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__interface_version__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__interface_version__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__interface_version__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__interface_version__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__interface_version__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class InterfaceVersion_Response(metaclass=Metaclass_InterfaceVersion_Response):
    """Message class 'InterfaceVersion_Response'."""

    __slots__ = [
        '_major',
        '_minor',
        '_patch',
    ]

    _fields_and_field_types = {
        'major': 'uint16',
        'minor': 'uint16',
        'patch': 'uint16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.major = kwargs.get('major', int())
        self.minor = kwargs.get('minor', int())
        self.patch = kwargs.get('patch', int())

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
        if self.major != other.major:
            return False
        if self.minor != other.minor:
            return False
        if self.patch != other.patch:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def major(self):
        """Message field 'major'."""
        return self._major

    @major.setter
    def major(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'major' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'major' field must be an unsigned integer in [0, 65535]"
        self._major = value

    @builtins.property
    def minor(self):
        """Message field 'minor'."""
        return self._minor

    @minor.setter
    def minor(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'minor' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'minor' field must be an unsigned integer in [0, 65535]"
        self._minor = value

    @builtins.property
    def patch(self):
        """Message field 'patch'."""
        return self._patch

    @patch.setter
    def patch(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'patch' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'patch' field must be an unsigned integer in [0, 65535]"
        self._patch = value


class Metaclass_InterfaceVersion(type):
    """Metaclass of service 'InterfaceVersion'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('autoware_adapi_version_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'autoware_adapi_version_msgs.srv.InterfaceVersion')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__interface_version

            from autoware_adapi_version_msgs.srv import _interface_version
            if _interface_version.Metaclass_InterfaceVersion_Request._TYPE_SUPPORT is None:
                _interface_version.Metaclass_InterfaceVersion_Request.__import_type_support__()
            if _interface_version.Metaclass_InterfaceVersion_Response._TYPE_SUPPORT is None:
                _interface_version.Metaclass_InterfaceVersion_Response.__import_type_support__()


class InterfaceVersion(metaclass=Metaclass_InterfaceVersion):
    from autoware_adapi_version_msgs.srv._interface_version import InterfaceVersion_Request as Request
    from autoware_adapi_version_msgs.srv._interface_version import InterfaceVersion_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
