# generated from rosidl_generator_py/resource/_idl.py.em
# with input from dummy_perception_publisher:msg/InitialState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_InitialState(type):
    """Metaclass of message 'InitialState'."""

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
            module = import_type_support('dummy_perception_publisher')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'dummy_perception_publisher.msg.InitialState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__initial_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__initial_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__initial_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__initial_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__initial_state

            from geometry_msgs.msg import AccelWithCovariance
            if AccelWithCovariance.__class__._TYPE_SUPPORT is None:
                AccelWithCovariance.__class__.__import_type_support__()

            from geometry_msgs.msg import PoseWithCovariance
            if PoseWithCovariance.__class__._TYPE_SUPPORT is None:
                PoseWithCovariance.__class__.__import_type_support__()

            from geometry_msgs.msg import TwistWithCovariance
            if TwistWithCovariance.__class__._TYPE_SUPPORT is None:
                TwistWithCovariance.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class InitialState(metaclass=Metaclass_InitialState):
    """Message class 'InitialState'."""

    __slots__ = [
        '_pose_covariance',
        '_twist_covariance',
        '_accel_covariance',
    ]

    _fields_and_field_types = {
        'pose_covariance': 'geometry_msgs/PoseWithCovariance',
        'twist_covariance': 'geometry_msgs/TwistWithCovariance',
        'accel_covariance': 'geometry_msgs/AccelWithCovariance',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'PoseWithCovariance'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'TwistWithCovariance'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'AccelWithCovariance'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from geometry_msgs.msg import PoseWithCovariance
        self.pose_covariance = kwargs.get('pose_covariance', PoseWithCovariance())
        from geometry_msgs.msg import TwistWithCovariance
        self.twist_covariance = kwargs.get('twist_covariance', TwistWithCovariance())
        from geometry_msgs.msg import AccelWithCovariance
        self.accel_covariance = kwargs.get('accel_covariance', AccelWithCovariance())

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
        if self.pose_covariance != other.pose_covariance:
            return False
        if self.twist_covariance != other.twist_covariance:
            return False
        if self.accel_covariance != other.accel_covariance:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def pose_covariance(self):
        """Message field 'pose_covariance'."""
        return self._pose_covariance

    @pose_covariance.setter
    def pose_covariance(self, value):
        if __debug__:
            from geometry_msgs.msg import PoseWithCovariance
            assert \
                isinstance(value, PoseWithCovariance), \
                "The 'pose_covariance' field must be a sub message of type 'PoseWithCovariance'"
        self._pose_covariance = value

    @builtins.property
    def twist_covariance(self):
        """Message field 'twist_covariance'."""
        return self._twist_covariance

    @twist_covariance.setter
    def twist_covariance(self, value):
        if __debug__:
            from geometry_msgs.msg import TwistWithCovariance
            assert \
                isinstance(value, TwistWithCovariance), \
                "The 'twist_covariance' field must be a sub message of type 'TwistWithCovariance'"
        self._twist_covariance = value

    @builtins.property
    def accel_covariance(self):
        """Message field 'accel_covariance'."""
        return self._accel_covariance

    @accel_covariance.setter
    def accel_covariance(self, value):
        if __debug__:
            from geometry_msgs.msg import AccelWithCovariance
            assert \
                isinstance(value, AccelWithCovariance), \
                "The 'accel_covariance' field must be a sub message of type 'AccelWithCovariance'"
        self._accel_covariance = value
