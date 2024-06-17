# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tier4_planning_msgs:msg/StopReason.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_StopReason(type):
    """Metaclass of message 'StopReason'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'INTERSECTION': 'Intersection',
        'MERGE_FROM_PRIVATE_ROAD': 'MergeFromPrivateRoad',
        'CROSSWALK': 'Crosswalk',
        'WALKWAY': 'Walkway',
        'STOP_LINE': 'StopLine',
        'DETECTION_AREA': 'DetectionArea',
        'NO_STOPPING_AREA': 'NoStoppingArea',
        'TRAFFIC_LIGHT': 'TrafficLight',
        'OBSTACLE_STOP': 'ObstacleStop',
        'SURROUND_OBSTACLE_CHECK': 'SurroundObstacleCheck',
        'BLIND_SPOT': 'BlindSpot',
        'BLOCKED_BY_OBSTACLE': 'BlockedByObstacle',
        'STOPPING_LANE_CHANGE': 'StoppingLaneChange',
        'REMOTE_EMERGENCY_STOP': 'RemoteEmergencyStop',
        'VIRTUAL_TRAFFIC_LIGHT': 'VirtualTrafficLight',
        'OUT_OF_LANE': 'OutOfLane',
        'NO_DRIVABLE_LANE': 'NoDrivableLane',
        'AVOIDANCE': 'Avoidance',
        'AVOIDANCE_BY_LANE_CHANGE': 'AvoidanceByLaneChange',
        'EXTERNAL_LANE_CHANGE': 'ExternalLaneChange',
        'LANE_CHANGE': 'LaneChange',
        'GOAL_PLANNER': 'GoalPlanner',
        'START_PLANNER': 'StartPlanner',
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('tier4_planning_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tier4_planning_msgs.msg.StopReason')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__stop_reason
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__stop_reason
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__stop_reason
            cls._TYPE_SUPPORT = module.type_support_msg__msg__stop_reason
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__stop_reason

            from tier4_planning_msgs.msg import StopFactor
            if StopFactor.__class__._TYPE_SUPPORT is None:
                StopFactor.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'INTERSECTION': cls.__constants['INTERSECTION'],
            'MERGE_FROM_PRIVATE_ROAD': cls.__constants['MERGE_FROM_PRIVATE_ROAD'],
            'CROSSWALK': cls.__constants['CROSSWALK'],
            'WALKWAY': cls.__constants['WALKWAY'],
            'STOP_LINE': cls.__constants['STOP_LINE'],
            'DETECTION_AREA': cls.__constants['DETECTION_AREA'],
            'NO_STOPPING_AREA': cls.__constants['NO_STOPPING_AREA'],
            'TRAFFIC_LIGHT': cls.__constants['TRAFFIC_LIGHT'],
            'OBSTACLE_STOP': cls.__constants['OBSTACLE_STOP'],
            'SURROUND_OBSTACLE_CHECK': cls.__constants['SURROUND_OBSTACLE_CHECK'],
            'BLIND_SPOT': cls.__constants['BLIND_SPOT'],
            'BLOCKED_BY_OBSTACLE': cls.__constants['BLOCKED_BY_OBSTACLE'],
            'STOPPING_LANE_CHANGE': cls.__constants['STOPPING_LANE_CHANGE'],
            'REMOTE_EMERGENCY_STOP': cls.__constants['REMOTE_EMERGENCY_STOP'],
            'VIRTUAL_TRAFFIC_LIGHT': cls.__constants['VIRTUAL_TRAFFIC_LIGHT'],
            'OUT_OF_LANE': cls.__constants['OUT_OF_LANE'],
            'NO_DRIVABLE_LANE': cls.__constants['NO_DRIVABLE_LANE'],
            'AVOIDANCE': cls.__constants['AVOIDANCE'],
            'AVOIDANCE_BY_LANE_CHANGE': cls.__constants['AVOIDANCE_BY_LANE_CHANGE'],
            'EXTERNAL_LANE_CHANGE': cls.__constants['EXTERNAL_LANE_CHANGE'],
            'LANE_CHANGE': cls.__constants['LANE_CHANGE'],
            'GOAL_PLANNER': cls.__constants['GOAL_PLANNER'],
            'START_PLANNER': cls.__constants['START_PLANNER'],
        }

    @property
    def INTERSECTION(self):
        """Message constant 'INTERSECTION'."""
        return Metaclass_StopReason.__constants['INTERSECTION']

    @property
    def MERGE_FROM_PRIVATE_ROAD(self):
        """Message constant 'MERGE_FROM_PRIVATE_ROAD'."""
        return Metaclass_StopReason.__constants['MERGE_FROM_PRIVATE_ROAD']

    @property
    def CROSSWALK(self):
        """Message constant 'CROSSWALK'."""
        return Metaclass_StopReason.__constants['CROSSWALK']

    @property
    def WALKWAY(self):
        """Message constant 'WALKWAY'."""
        return Metaclass_StopReason.__constants['WALKWAY']

    @property
    def STOP_LINE(self):
        """Message constant 'STOP_LINE'."""
        return Metaclass_StopReason.__constants['STOP_LINE']

    @property
    def DETECTION_AREA(self):
        """Message constant 'DETECTION_AREA'."""
        return Metaclass_StopReason.__constants['DETECTION_AREA']

    @property
    def NO_STOPPING_AREA(self):
        """Message constant 'NO_STOPPING_AREA'."""
        return Metaclass_StopReason.__constants['NO_STOPPING_AREA']

    @property
    def TRAFFIC_LIGHT(self):
        """Message constant 'TRAFFIC_LIGHT'."""
        return Metaclass_StopReason.__constants['TRAFFIC_LIGHT']

    @property
    def OBSTACLE_STOP(self):
        """Message constant 'OBSTACLE_STOP'."""
        return Metaclass_StopReason.__constants['OBSTACLE_STOP']

    @property
    def SURROUND_OBSTACLE_CHECK(self):
        """Message constant 'SURROUND_OBSTACLE_CHECK'."""
        return Metaclass_StopReason.__constants['SURROUND_OBSTACLE_CHECK']

    @property
    def BLIND_SPOT(self):
        """Message constant 'BLIND_SPOT'."""
        return Metaclass_StopReason.__constants['BLIND_SPOT']

    @property
    def BLOCKED_BY_OBSTACLE(self):
        """Message constant 'BLOCKED_BY_OBSTACLE'."""
        return Metaclass_StopReason.__constants['BLOCKED_BY_OBSTACLE']

    @property
    def STOPPING_LANE_CHANGE(self):
        """Message constant 'STOPPING_LANE_CHANGE'."""
        return Metaclass_StopReason.__constants['STOPPING_LANE_CHANGE']

    @property
    def REMOTE_EMERGENCY_STOP(self):
        """Message constant 'REMOTE_EMERGENCY_STOP'."""
        return Metaclass_StopReason.__constants['REMOTE_EMERGENCY_STOP']

    @property
    def VIRTUAL_TRAFFIC_LIGHT(self):
        """Message constant 'VIRTUAL_TRAFFIC_LIGHT'."""
        return Metaclass_StopReason.__constants['VIRTUAL_TRAFFIC_LIGHT']

    @property
    def OUT_OF_LANE(self):
        """Message constant 'OUT_OF_LANE'."""
        return Metaclass_StopReason.__constants['OUT_OF_LANE']

    @property
    def NO_DRIVABLE_LANE(self):
        """Message constant 'NO_DRIVABLE_LANE'."""
        return Metaclass_StopReason.__constants['NO_DRIVABLE_LANE']

    @property
    def AVOIDANCE(self):
        """Message constant 'AVOIDANCE'."""
        return Metaclass_StopReason.__constants['AVOIDANCE']

    @property
    def AVOIDANCE_BY_LANE_CHANGE(self):
        """Message constant 'AVOIDANCE_BY_LANE_CHANGE'."""
        return Metaclass_StopReason.__constants['AVOIDANCE_BY_LANE_CHANGE']

    @property
    def EXTERNAL_LANE_CHANGE(self):
        """Message constant 'EXTERNAL_LANE_CHANGE'."""
        return Metaclass_StopReason.__constants['EXTERNAL_LANE_CHANGE']

    @property
    def LANE_CHANGE(self):
        """Message constant 'LANE_CHANGE'."""
        return Metaclass_StopReason.__constants['LANE_CHANGE']

    @property
    def GOAL_PLANNER(self):
        """Message constant 'GOAL_PLANNER'."""
        return Metaclass_StopReason.__constants['GOAL_PLANNER']

    @property
    def START_PLANNER(self):
        """Message constant 'START_PLANNER'."""
        return Metaclass_StopReason.__constants['START_PLANNER']


class StopReason(metaclass=Metaclass_StopReason):
    """
    Message class 'StopReason'.

    Constants:
      INTERSECTION
      MERGE_FROM_PRIVATE_ROAD
      CROSSWALK
      WALKWAY
      STOP_LINE
      DETECTION_AREA
      NO_STOPPING_AREA
      TRAFFIC_LIGHT
      OBSTACLE_STOP
      SURROUND_OBSTACLE_CHECK
      BLIND_SPOT
      BLOCKED_BY_OBSTACLE
      STOPPING_LANE_CHANGE
      REMOTE_EMERGENCY_STOP
      VIRTUAL_TRAFFIC_LIGHT
      OUT_OF_LANE
      NO_DRIVABLE_LANE
      AVOIDANCE
      AVOIDANCE_BY_LANE_CHANGE
      EXTERNAL_LANE_CHANGE
      LANE_CHANGE
      GOAL_PLANNER
      START_PLANNER
    """

    __slots__ = [
        '_reason',
        '_stop_factors',
    ]

    _fields_and_field_types = {
        'reason': 'string',
        'stop_factors': 'sequence<tier4_planning_msgs/StopFactor>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['tier4_planning_msgs', 'msg'], 'StopFactor')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.reason = kwargs.get('reason', str())
        self.stop_factors = kwargs.get('stop_factors', [])

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
        if self.reason != other.reason:
            return False
        if self.stop_factors != other.stop_factors:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def reason(self):
        """Message field 'reason'."""
        return self._reason

    @reason.setter
    def reason(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'reason' field must be of type 'str'"
        self._reason = value

    @builtins.property
    def stop_factors(self):
        """Message field 'stop_factors'."""
        return self._stop_factors

    @stop_factors.setter
    def stop_factors(self, value):
        if __debug__:
            from tier4_planning_msgs.msg import StopFactor
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
                 all(isinstance(v, StopFactor) for v in value) and
                 True), \
                "The 'stop_factors' field must be a set or sequence and each value of type 'StopFactor'"
        self._stop_factors = value
