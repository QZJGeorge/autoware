# generated from rosidl_generator_py/resource/_idl.py.em
# with input from morai_msgs:msg/PRCtrlCmd.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PRCtrlCmd(type):
    """Metaclass of message 'PRCtrlCmd'."""

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
            module = import_type_support('morai_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'morai_msgs.msg.PRCtrlCmd')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__pr_ctrl_cmd
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__pr_ctrl_cmd
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__pr_ctrl_cmd
            cls._TYPE_SUPPORT = module.type_support_msg__msg__pr_ctrl_cmd
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__pr_ctrl_cmd

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PRCtrlCmd(metaclass=Metaclass_PRCtrlCmd):
    """Message class 'PRCtrlCmd'."""

    __slots__ = [
        '_longitudinal_velocity',
        '_latitudinal_velocity',
        '_angular_velocity',
    ]

    _fields_and_field_types = {
        'longitudinal_velocity': 'double',
        'latitudinal_velocity': 'double',
        'angular_velocity': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.longitudinal_velocity = kwargs.get('longitudinal_velocity', float())
        self.latitudinal_velocity = kwargs.get('latitudinal_velocity', float())
        self.angular_velocity = kwargs.get('angular_velocity', float())

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
        if self.longitudinal_velocity != other.longitudinal_velocity:
            return False
        if self.latitudinal_velocity != other.latitudinal_velocity:
            return False
        if self.angular_velocity != other.angular_velocity:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def longitudinal_velocity(self):
        """Message field 'longitudinal_velocity'."""
        return self._longitudinal_velocity

    @longitudinal_velocity.setter
    def longitudinal_velocity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'longitudinal_velocity' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'longitudinal_velocity' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._longitudinal_velocity = value

    @builtins.property
    def latitudinal_velocity(self):
        """Message field 'latitudinal_velocity'."""
        return self._latitudinal_velocity

    @latitudinal_velocity.setter
    def latitudinal_velocity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'latitudinal_velocity' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'latitudinal_velocity' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._latitudinal_velocity = value

    @builtins.property
    def angular_velocity(self):
        """Message field 'angular_velocity'."""
        return self._angular_velocity

    @angular_velocity.setter
    def angular_velocity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'angular_velocity' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'angular_velocity' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._angular_velocity = value
