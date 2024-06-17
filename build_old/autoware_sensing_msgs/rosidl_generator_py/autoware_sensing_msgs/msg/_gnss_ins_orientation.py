# generated from rosidl_generator_py/resource/_idl.py.em
# with input from autoware_sensing_msgs:msg/GnssInsOrientation.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GnssInsOrientation(type):
    """Metaclass of message 'GnssInsOrientation'."""

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
            module = import_type_support('autoware_sensing_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'autoware_sensing_msgs.msg.GnssInsOrientation')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__gnss_ins_orientation
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__gnss_ins_orientation
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__gnss_ins_orientation
            cls._TYPE_SUPPORT = module.type_support_msg__msg__gnss_ins_orientation
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__gnss_ins_orientation

            from geometry_msgs.msg import Quaternion
            if Quaternion.__class__._TYPE_SUPPORT is None:
                Quaternion.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GnssInsOrientation(metaclass=Metaclass_GnssInsOrientation):
    """Message class 'GnssInsOrientation'."""

    __slots__ = [
        '_orientation',
        '_rmse_rotation_x',
        '_rmse_rotation_y',
        '_rmse_rotation_z',
    ]

    _fields_and_field_types = {
        'orientation': 'geometry_msgs/Quaternion',
        'rmse_rotation_x': 'float',
        'rmse_rotation_y': 'float',
        'rmse_rotation_z': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Quaternion'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from geometry_msgs.msg import Quaternion
        self.orientation = kwargs.get('orientation', Quaternion())
        self.rmse_rotation_x = kwargs.get('rmse_rotation_x', float())
        self.rmse_rotation_y = kwargs.get('rmse_rotation_y', float())
        self.rmse_rotation_z = kwargs.get('rmse_rotation_z', float())

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
        if self.orientation != other.orientation:
            return False
        if self.rmse_rotation_x != other.rmse_rotation_x:
            return False
        if self.rmse_rotation_y != other.rmse_rotation_y:
            return False
        if self.rmse_rotation_z != other.rmse_rotation_z:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def orientation(self):
        """Message field 'orientation'."""
        return self._orientation

    @orientation.setter
    def orientation(self, value):
        if __debug__:
            from geometry_msgs.msg import Quaternion
            assert \
                isinstance(value, Quaternion), \
                "The 'orientation' field must be a sub message of type 'Quaternion'"
        self._orientation = value

    @builtins.property
    def rmse_rotation_x(self):
        """Message field 'rmse_rotation_x'."""
        return self._rmse_rotation_x

    @rmse_rotation_x.setter
    def rmse_rotation_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rmse_rotation_x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'rmse_rotation_x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._rmse_rotation_x = value

    @builtins.property
    def rmse_rotation_y(self):
        """Message field 'rmse_rotation_y'."""
        return self._rmse_rotation_y

    @rmse_rotation_y.setter
    def rmse_rotation_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rmse_rotation_y' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'rmse_rotation_y' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._rmse_rotation_y = value

    @builtins.property
    def rmse_rotation_z(self):
        """Message field 'rmse_rotation_z'."""
        return self._rmse_rotation_z

    @rmse_rotation_z.setter
    def rmse_rotation_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rmse_rotation_z' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'rmse_rotation_z' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._rmse_rotation_z = value
