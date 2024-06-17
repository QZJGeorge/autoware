# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tier4_system_msgs:srv/ChangeAutowareControl.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ChangeAutowareControl_Request(type):
    """Metaclass of message 'ChangeAutowareControl_Request'."""

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
                'tier4_system_msgs.srv.ChangeAutowareControl_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__change_autoware_control__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__change_autoware_control__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__change_autoware_control__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__change_autoware_control__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__change_autoware_control__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ChangeAutowareControl_Request(metaclass=Metaclass_ChangeAutowareControl_Request):
    """Message class 'ChangeAutowareControl_Request'."""

    __slots__ = [
        '_autoware_control',
    ]

    _fields_and_field_types = {
        'autoware_control': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.autoware_control = kwargs.get('autoware_control', bool())

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
        if self.autoware_control != other.autoware_control:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def autoware_control(self):
        """Message field 'autoware_control'."""
        return self._autoware_control

    @autoware_control.setter
    def autoware_control(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'autoware_control' field must be of type 'bool'"
        self._autoware_control = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ChangeAutowareControl_Response(type):
    """Metaclass of message 'ChangeAutowareControl_Response'."""

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
                'tier4_system_msgs.srv.ChangeAutowareControl_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__change_autoware_control__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__change_autoware_control__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__change_autoware_control__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__change_autoware_control__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__change_autoware_control__response

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


class ChangeAutowareControl_Response(metaclass=Metaclass_ChangeAutowareControl_Response):
    """Message class 'ChangeAutowareControl_Response'."""

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


class Metaclass_ChangeAutowareControl(type):
    """Metaclass of service 'ChangeAutowareControl'."""

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
                'tier4_system_msgs.srv.ChangeAutowareControl')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__change_autoware_control

            from tier4_system_msgs.srv import _change_autoware_control
            if _change_autoware_control.Metaclass_ChangeAutowareControl_Request._TYPE_SUPPORT is None:
                _change_autoware_control.Metaclass_ChangeAutowareControl_Request.__import_type_support__()
            if _change_autoware_control.Metaclass_ChangeAutowareControl_Response._TYPE_SUPPORT is None:
                _change_autoware_control.Metaclass_ChangeAutowareControl_Response.__import_type_support__()


class ChangeAutowareControl(metaclass=Metaclass_ChangeAutowareControl):
    from tier4_system_msgs.srv._change_autoware_control import ChangeAutowareControl_Request as Request
    from tier4_system_msgs.srv._change_autoware_control import ChangeAutowareControl_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
