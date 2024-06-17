# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tier4_rtc_msgs:srv/CooperateCommands.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CooperateCommands_Request(type):
    """Metaclass of message 'CooperateCommands_Request'."""

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
            module = import_type_support('tier4_rtc_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tier4_rtc_msgs.srv.CooperateCommands_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__cooperate_commands__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__cooperate_commands__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__cooperate_commands__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__cooperate_commands__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__cooperate_commands__request

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

            from tier4_rtc_msgs.msg import CooperateCommand
            if CooperateCommand.__class__._TYPE_SUPPORT is None:
                CooperateCommand.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CooperateCommands_Request(metaclass=Metaclass_CooperateCommands_Request):
    """Message class 'CooperateCommands_Request'."""

    __slots__ = [
        '_stamp',
        '_commands',
    ]

    _fields_and_field_types = {
        'stamp': 'builtin_interfaces/Time',
        'commands': 'sequence<tier4_rtc_msgs/CooperateCommand>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['tier4_rtc_msgs', 'msg'], 'CooperateCommand')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())
        self.commands = kwargs.get('commands', [])

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
        if self.commands != other.commands:
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

    @builtins.property
    def commands(self):
        """Message field 'commands'."""
        return self._commands

    @commands.setter
    def commands(self, value):
        if __debug__:
            from tier4_rtc_msgs.msg import CooperateCommand
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, CooperateCommand) for v in value) and
                 True), \
                "The 'commands' field must be a set or sequence and each value of type 'CooperateCommand'"
        self._commands = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_CooperateCommands_Response(type):
    """Metaclass of message 'CooperateCommands_Response'."""

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
            module = import_type_support('tier4_rtc_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tier4_rtc_msgs.srv.CooperateCommands_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__cooperate_commands__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__cooperate_commands__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__cooperate_commands__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__cooperate_commands__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__cooperate_commands__response

            from tier4_rtc_msgs.msg import CooperateResponse
            if CooperateResponse.__class__._TYPE_SUPPORT is None:
                CooperateResponse.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CooperateCommands_Response(metaclass=Metaclass_CooperateCommands_Response):
    """Message class 'CooperateCommands_Response'."""

    __slots__ = [
        '_responses',
    ]

    _fields_and_field_types = {
        'responses': 'sequence<tier4_rtc_msgs/CooperateResponse>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['tier4_rtc_msgs', 'msg'], 'CooperateResponse')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.responses = kwargs.get('responses', [])

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
        if self.responses != other.responses:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def responses(self):
        """Message field 'responses'."""
        return self._responses

    @responses.setter
    def responses(self, value):
        if __debug__:
            from tier4_rtc_msgs.msg import CooperateResponse
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, CooperateResponse) for v in value) and
                 True), \
                "The 'responses' field must be a set or sequence and each value of type 'CooperateResponse'"
        self._responses = value


class Metaclass_CooperateCommands(type):
    """Metaclass of service 'CooperateCommands'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('tier4_rtc_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tier4_rtc_msgs.srv.CooperateCommands')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__cooperate_commands

            from tier4_rtc_msgs.srv import _cooperate_commands
            if _cooperate_commands.Metaclass_CooperateCommands_Request._TYPE_SUPPORT is None:
                _cooperate_commands.Metaclass_CooperateCommands_Request.__import_type_support__()
            if _cooperate_commands.Metaclass_CooperateCommands_Response._TYPE_SUPPORT is None:
                _cooperate_commands.Metaclass_CooperateCommands_Response.__import_type_support__()


class CooperateCommands(metaclass=Metaclass_CooperateCommands):
    from tier4_rtc_msgs.srv._cooperate_commands import CooperateCommands_Request as Request
    from tier4_rtc_msgs.srv._cooperate_commands import CooperateCommands_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
