# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rtklib_msgs:msg/RtklibNav.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RtklibNav(type):
    """Metaclass of message 'RtklibNav'."""

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
            module = import_type_support('rtklib_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'rtklib_msgs.msg.RtklibNav')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__rtklib_nav
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__rtklib_nav
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__rtklib_nav
            cls._TYPE_SUPPORT = module.type_support_msg__msg__rtklib_nav
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__rtklib_nav

            from geometry_msgs.msg import Point
            if Point.__class__._TYPE_SUPPORT is None:
                Point.__class__.__import_type_support__()

            from geometry_msgs.msg import Vector3
            if Vector3.__class__._TYPE_SUPPORT is None:
                Vector3.__class__.__import_type_support__()

            from sensor_msgs.msg import NavSatFix
            if NavSatFix.__class__._TYPE_SUPPORT is None:
                NavSatFix.__class__.__import_type_support__()

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


class RtklibNav(metaclass=Metaclass_RtklibNav):
    """Message class 'RtklibNav'."""

    __slots__ = [
        '_header',
        '_tow',
        '_ecef_pos',
        '_ecef_vel',
        '_status',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'tow': 'int64',
        'ecef_pos': 'geometry_msgs/Point',
        'ecef_vel': 'geometry_msgs/Vector3',
        'status': 'sensor_msgs/NavSatFix',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'NavSatFix'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.tow = kwargs.get('tow', int())
        from geometry_msgs.msg import Point
        self.ecef_pos = kwargs.get('ecef_pos', Point())
        from geometry_msgs.msg import Vector3
        self.ecef_vel = kwargs.get('ecef_vel', Vector3())
        from sensor_msgs.msg import NavSatFix
        self.status = kwargs.get('status', NavSatFix())

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
        if self.tow != other.tow:
            return False
        if self.ecef_pos != other.ecef_pos:
            return False
        if self.ecef_vel != other.ecef_vel:
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
    def tow(self):
        """Message field 'tow'."""
        return self._tow

    @tow.setter
    def tow(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'tow' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'tow' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._tow = value

    @builtins.property
    def ecef_pos(self):
        """Message field 'ecef_pos'."""
        return self._ecef_pos

    @ecef_pos.setter
    def ecef_pos(self, value):
        if __debug__:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'ecef_pos' field must be a sub message of type 'Point'"
        self._ecef_pos = value

    @builtins.property
    def ecef_vel(self):
        """Message field 'ecef_vel'."""
        return self._ecef_vel

    @ecef_vel.setter
    def ecef_vel(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'ecef_vel' field must be a sub message of type 'Vector3'"
        self._ecef_vel = value

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            from sensor_msgs.msg import NavSatFix
            assert \
                isinstance(value, NavSatFix), \
                "The 'status' field must be a sub message of type 'NavSatFix'"
        self._status = value
