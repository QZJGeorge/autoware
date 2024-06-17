# generated from rosidl_generator_py/resource/_idl.py.em
# with input from eagleye_msgs:msg/AngularVelocityOffset.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AngularVelocityOffset(type):
    """Metaclass of message 'AngularVelocityOffset'."""

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
            module = import_type_support('eagleye_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'eagleye_msgs.msg.AngularVelocityOffset')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__angular_velocity_offset
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__angular_velocity_offset
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__angular_velocity_offset
            cls._TYPE_SUPPORT = module.type_support_msg__msg__angular_velocity_offset
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__angular_velocity_offset

            from eagleye_msgs.msg import Status
            if Status.__class__._TYPE_SUPPORT is None:
                Status.__class__.__import_type_support__()

            from geometry_msgs.msg import Vector3
            if Vector3.__class__._TYPE_SUPPORT is None:
                Vector3.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class AngularVelocityOffset(metaclass=Metaclass_AngularVelocityOffset):
    """Message class 'AngularVelocityOffset'."""

    __slots__ = [
        '_header',
        '_angular_velocity_offset',
        '_status',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'angular_velocity_offset': 'geometry_msgs/Vector3',
        'status': 'eagleye_msgs/Status',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['eagleye_msgs', 'msg'], 'Status'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        from geometry_msgs.msg import Vector3
        self.angular_velocity_offset = kwargs.get('angular_velocity_offset', Vector3())
        from eagleye_msgs.msg import Status
        self.status = kwargs.get('status', Status())

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
        if self.header != other.header:
            return False
        if self.angular_velocity_offset != other.angular_velocity_offset:
            return False
        if self.status != other.status:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def angular_velocity_offset(self):
        """Message field 'angular_velocity_offset'."""
        return self._angular_velocity_offset

    @angular_velocity_offset.setter
    def angular_velocity_offset(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'angular_velocity_offset' field must be a sub message of type 'Vector3'"
        self._angular_velocity_offset = value

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            from eagleye_msgs.msg import Status
            assert \
                isinstance(value, Status), \
                "The 'status' field must be a sub message of type 'Status'"
        self._status = value
