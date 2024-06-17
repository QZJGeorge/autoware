# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tier4_perception_msgs:msg/State.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_State(type):
    """Metaclass of message 'State'."""

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
            module = import_type_support('tier4_perception_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tier4_perception_msgs.msg.State')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__state

            from geometry_msgs.msg import AccelWithCovariance
            if AccelWithCovariance.__class__._TYPE_SUPPORT is None:
                AccelWithCovariance.__class__.__import_type_support__()

            from geometry_msgs.msg import PoseWithCovariance
            if PoseWithCovariance.__class__._TYPE_SUPPORT is None:
                PoseWithCovariance.__class__.__import_type_support__()

            from geometry_msgs.msg import TwistWithCovariance
            if TwistWithCovariance.__class__._TYPE_SUPPORT is None:
                TwistWithCovariance.__class__.__import_type_support__()

            from tier4_perception_msgs.msg import PredictedPath
            if PredictedPath.__class__._TYPE_SUPPORT is None:
                PredictedPath.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class State(metaclass=Metaclass_State):
    """Message class 'State'."""

    __slots__ = [
        '_pose_covariance',
        '_orientation_reliable',
        '_twist_covariance',
        '_twist_reliable',
        '_acceleration_covariance',
        '_acceleration_reliable',
        '_predicted_paths',
    ]

    _fields_and_field_types = {
        'pose_covariance': 'geometry_msgs/PoseWithCovariance',
        'orientation_reliable': 'boolean',
        'twist_covariance': 'geometry_msgs/TwistWithCovariance',
        'twist_reliable': 'boolean',
        'acceleration_covariance': 'geometry_msgs/AccelWithCovariance',
        'acceleration_reliable': 'boolean',
        'predicted_paths': 'sequence<tier4_perception_msgs/PredictedPath>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'PoseWithCovariance'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'TwistWithCovariance'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'AccelWithCovariance'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['tier4_perception_msgs', 'msg'], 'PredictedPath')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from geometry_msgs.msg import PoseWithCovariance
        self.pose_covariance = kwargs.get('pose_covariance', PoseWithCovariance())
        self.orientation_reliable = kwargs.get('orientation_reliable', bool())
        from geometry_msgs.msg import TwistWithCovariance
        self.twist_covariance = kwargs.get('twist_covariance', TwistWithCovariance())
        self.twist_reliable = kwargs.get('twist_reliable', bool())
        from geometry_msgs.msg import AccelWithCovariance
        self.acceleration_covariance = kwargs.get('acceleration_covariance', AccelWithCovariance())
        self.acceleration_reliable = kwargs.get('acceleration_reliable', bool())
        self.predicted_paths = kwargs.get('predicted_paths', [])

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
        if self.orientation_reliable != other.orientation_reliable:
            return False
        if self.twist_covariance != other.twist_covariance:
            return False
        if self.twist_reliable != other.twist_reliable:
            return False
        if self.acceleration_covariance != other.acceleration_covariance:
            return False
        if self.acceleration_reliable != other.acceleration_reliable:
            return False
        if self.predicted_paths != other.predicted_paths:
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
    def orientation_reliable(self):
        """Message field 'orientation_reliable'."""
        return self._orientation_reliable

    @orientation_reliable.setter
    def orientation_reliable(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'orientation_reliable' field must be of type 'bool'"
        self._orientation_reliable = value

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
    def twist_reliable(self):
        """Message field 'twist_reliable'."""
        return self._twist_reliable

    @twist_reliable.setter
    def twist_reliable(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'twist_reliable' field must be of type 'bool'"
        self._twist_reliable = value

    @builtins.property
    def acceleration_covariance(self):
        """Message field 'acceleration_covariance'."""
        return self._acceleration_covariance

    @acceleration_covariance.setter
    def acceleration_covariance(self, value):
        if __debug__:
            from geometry_msgs.msg import AccelWithCovariance
            assert \
                isinstance(value, AccelWithCovariance), \
                "The 'acceleration_covariance' field must be a sub message of type 'AccelWithCovariance'"
        self._acceleration_covariance = value

    @builtins.property
    def acceleration_reliable(self):
        """Message field 'acceleration_reliable'."""
        return self._acceleration_reliable

    @acceleration_reliable.setter
    def acceleration_reliable(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'acceleration_reliable' field must be of type 'bool'"
        self._acceleration_reliable = value

    @builtins.property
    def predicted_paths(self):
        """Message field 'predicted_paths'."""
        return self._predicted_paths

    @predicted_paths.setter
    def predicted_paths(self, value):
        if __debug__:
            from tier4_perception_msgs.msg import PredictedPath
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
                 all(isinstance(v, PredictedPath) for v in value) and
                 True), \
                "The 'predicted_paths' field must be a set or sequence and each value of type 'PredictedPath'"
        self._predicted_paths = value
