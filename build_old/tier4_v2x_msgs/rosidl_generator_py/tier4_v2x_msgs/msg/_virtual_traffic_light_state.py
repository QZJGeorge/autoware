# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tier4_v2x_msgs:msg/VirtualTrafficLightState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_VirtualTrafficLightState(type):
    """Metaclass of message 'VirtualTrafficLightState'."""

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
            module = import_type_support('tier4_v2x_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tier4_v2x_msgs.msg.VirtualTrafficLightState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__virtual_traffic_light_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__virtual_traffic_light_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__virtual_traffic_light_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__virtual_traffic_light_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__virtual_traffic_light_state

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class VirtualTrafficLightState(metaclass=Metaclass_VirtualTrafficLightState):
    """Message class 'VirtualTrafficLightState'."""

    __slots__ = [
        '_stamp',
        '_type',
        '_id',
        '_approval',
        '_is_finalized',
    ]

    _fields_and_field_types = {
        'stamp': 'builtin_interfaces/Time',
        'type': 'string',
        'id': 'string',
        'approval': 'boolean',
        'is_finalized': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())
        self.type = kwargs.get('type', str())
        self.id = kwargs.get('id', str())
        self.approval = kwargs.get('approval', bool())
        self.is_finalized = kwargs.get('is_finalized', bool())

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
        if self.id != other.id:
            return False
        if self.approval != other.approval:
            return False
        if self.is_finalized != other.is_finalized:
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
                isinstance(value, str), \
                "The 'type' field must be of type 'str'"
        self._type = value

    @builtins.property  # noqa: A003
    def id(self):  # noqa: A003
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'id' field must be of type 'str'"
        self._id = value

    @builtins.property
    def approval(self):
        """Message field 'approval'."""
        return self._approval

    @approval.setter
    def approval(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'approval' field must be of type 'bool'"
        self._approval = value

    @builtins.property
    def is_finalized(self):
        """Message field 'is_finalized'."""
        return self._is_finalized

    @is_finalized.setter
    def is_finalized(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_finalized' field must be of type 'bool'"
        self._is_finalized = value
