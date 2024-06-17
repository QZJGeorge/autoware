# generated from rosidl_generator_py/resource/_idl.py.em
# with input from morai_msgs:msg/ReplayInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ReplayInfo(type):
    """Metaclass of message 'ReplayInfo'."""

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
                'morai_msgs.msg.ReplayInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__replay_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__replay_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__replay_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__replay_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__replay_info

            from geometry_msgs.msg import Quaternion
            if Quaternion.__class__._TYPE_SUPPORT is None:
                Quaternion.__class__.__import_type_support__()

            from geometry_msgs.msg import Vector3
            if Vector3.__class__._TYPE_SUPPORT is None:
                Vector3.__class__.__import_type_support__()

            from morai_msgs.msg import ObjectStatus
            if ObjectStatus.__class__._TYPE_SUPPORT is None:
                ObjectStatus.__class__.__import_type_support__()

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


class ReplayInfo(metaclass=Metaclass_ReplayInfo):
    """Message class 'ReplayInfo'."""

    __slots__ = [
        '_header',
        '_ego_acc',
        '_ego_brake',
        '_ego_steer',
        '_orientation',
        '_linear_acceleration',
        '_angular_velocity',
        '_num_of_npcs',
        '_num_of_pedestrian',
        '_num_of_obstacle',
        '_npc_list',
        '_pedestrian_list',
        '_obstacle_list',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'ego_acc': 'double',
        'ego_brake': 'double',
        'ego_steer': 'double',
        'orientation': 'geometry_msgs/Quaternion',
        'linear_acceleration': 'geometry_msgs/Vector3',
        'angular_velocity': 'geometry_msgs/Vector3',
        'num_of_npcs': 'int32',
        'num_of_pedestrian': 'int32',
        'num_of_obstacle': 'int32',
        'npc_list': 'sequence<morai_msgs/ObjectStatus>',
        'pedestrian_list': 'sequence<morai_msgs/ObjectStatus>',
        'obstacle_list': 'sequence<morai_msgs/ObjectStatus>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Quaternion'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['morai_msgs', 'msg'], 'ObjectStatus')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['morai_msgs', 'msg'], 'ObjectStatus')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['morai_msgs', 'msg'], 'ObjectStatus')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.ego_acc = kwargs.get('ego_acc', float())
        self.ego_brake = kwargs.get('ego_brake', float())
        self.ego_steer = kwargs.get('ego_steer', float())
        from geometry_msgs.msg import Quaternion
        self.orientation = kwargs.get('orientation', Quaternion())
        from geometry_msgs.msg import Vector3
        self.linear_acceleration = kwargs.get('linear_acceleration', Vector3())
        from geometry_msgs.msg import Vector3
        self.angular_velocity = kwargs.get('angular_velocity', Vector3())
        self.num_of_npcs = kwargs.get('num_of_npcs', int())
        self.num_of_pedestrian = kwargs.get('num_of_pedestrian', int())
        self.num_of_obstacle = kwargs.get('num_of_obstacle', int())
        self.npc_list = kwargs.get('npc_list', [])
        self.pedestrian_list = kwargs.get('pedestrian_list', [])
        self.obstacle_list = kwargs.get('obstacle_list', [])

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
        if self.ego_acc != other.ego_acc:
            return False
        if self.ego_brake != other.ego_brake:
            return False
        if self.ego_steer != other.ego_steer:
            return False
        if self.orientation != other.orientation:
            return False
        if self.linear_acceleration != other.linear_acceleration:
            return False
        if self.angular_velocity != other.angular_velocity:
            return False
        if self.num_of_npcs != other.num_of_npcs:
            return False
        if self.num_of_pedestrian != other.num_of_pedestrian:
            return False
        if self.num_of_obstacle != other.num_of_obstacle:
            return False
        if self.npc_list != other.npc_list:
            return False
        if self.pedestrian_list != other.pedestrian_list:
            return False
        if self.obstacle_list != other.obstacle_list:
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
    def ego_acc(self):
        """Message field 'ego_acc'."""
        return self._ego_acc

    @ego_acc.setter
    def ego_acc(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ego_acc' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'ego_acc' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._ego_acc = value

    @builtins.property
    def ego_brake(self):
        """Message field 'ego_brake'."""
        return self._ego_brake

    @ego_brake.setter
    def ego_brake(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ego_brake' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'ego_brake' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._ego_brake = value

    @builtins.property
    def ego_steer(self):
        """Message field 'ego_steer'."""
        return self._ego_steer

    @ego_steer.setter
    def ego_steer(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ego_steer' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'ego_steer' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._ego_steer = value

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
    def linear_acceleration(self):
        """Message field 'linear_acceleration'."""
        return self._linear_acceleration

    @linear_acceleration.setter
    def linear_acceleration(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'linear_acceleration' field must be a sub message of type 'Vector3'"
        self._linear_acceleration = value

    @builtins.property
    def angular_velocity(self):
        """Message field 'angular_velocity'."""
        return self._angular_velocity

    @angular_velocity.setter
    def angular_velocity(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'angular_velocity' field must be a sub message of type 'Vector3'"
        self._angular_velocity = value

    @builtins.property
    def num_of_npcs(self):
        """Message field 'num_of_npcs'."""
        return self._num_of_npcs

    @num_of_npcs.setter
    def num_of_npcs(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'num_of_npcs' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'num_of_npcs' field must be an integer in [-2147483648, 2147483647]"
        self._num_of_npcs = value

    @builtins.property
    def num_of_pedestrian(self):
        """Message field 'num_of_pedestrian'."""
        return self._num_of_pedestrian

    @num_of_pedestrian.setter
    def num_of_pedestrian(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'num_of_pedestrian' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'num_of_pedestrian' field must be an integer in [-2147483648, 2147483647]"
        self._num_of_pedestrian = value

    @builtins.property
    def num_of_obstacle(self):
        """Message field 'num_of_obstacle'."""
        return self._num_of_obstacle

    @num_of_obstacle.setter
    def num_of_obstacle(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'num_of_obstacle' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'num_of_obstacle' field must be an integer in [-2147483648, 2147483647]"
        self._num_of_obstacle = value

    @builtins.property
    def npc_list(self):
        """Message field 'npc_list'."""
        return self._npc_list

    @npc_list.setter
    def npc_list(self, value):
        if __debug__:
            from morai_msgs.msg import ObjectStatus
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
                 all(isinstance(v, ObjectStatus) for v in value) and
                 True), \
                "The 'npc_list' field must be a set or sequence and each value of type 'ObjectStatus'"
        self._npc_list = value

    @builtins.property
    def pedestrian_list(self):
        """Message field 'pedestrian_list'."""
        return self._pedestrian_list

    @pedestrian_list.setter
    def pedestrian_list(self, value):
        if __debug__:
            from morai_msgs.msg import ObjectStatus
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
                 all(isinstance(v, ObjectStatus) for v in value) and
                 True), \
                "The 'pedestrian_list' field must be a set or sequence and each value of type 'ObjectStatus'"
        self._pedestrian_list = value

    @builtins.property
    def obstacle_list(self):
        """Message field 'obstacle_list'."""
        return self._obstacle_list

    @obstacle_list.setter
    def obstacle_list(self, value):
        if __debug__:
            from morai_msgs.msg import ObjectStatus
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
                 all(isinstance(v, ObjectStatus) for v in value) and
                 True), \
                "The 'obstacle_list' field must be a set or sequence and each value of type 'ObjectStatus'"
        self._obstacle_list = value
