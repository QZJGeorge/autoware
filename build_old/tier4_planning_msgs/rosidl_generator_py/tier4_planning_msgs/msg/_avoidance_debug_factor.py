# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tier4_planning_msgs:msg/AvoidanceDebugFactor.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AvoidanceDebugFactor(type):
    """Metaclass of message 'AvoidanceDebugFactor'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'OBJECT_IS_NOT_TYPE': 'ObjectIsNotType',
        'OBJECT_IS_BEHIND_THRESHOLD': 'ObjectIsBehindThreshold',
        'OBJECT_IS_IN_FRONT_THRESHOLD': 'ObjectIsInFrontThreshold',
        'OBJECT_BEHIND_PATH_GOAL': 'ObjectBehindPathGoal',
        'NOT_PARKING_OBJECT': 'NotParkingObject',
        'MOVING_OBJECT': 'MovingObject',
        'SAME_DIRECTION_SHIFT': 'SameDirectionShift',
        'TOO_NEAR_TO_CENTERLINE': 'TooNearToCenterLine',
        'INSUFFICIENT_LATERAL_MARGIN': 'InsufficientLateralMargin',
        'REMAINING_DISTANCE_LESS_THAN_ZERO': 'RemainingDistanceLessThanZero',
        'TOO_LARGE_JERK': 'TooLargeJerk',
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
                'tier4_planning_msgs.msg.AvoidanceDebugFactor')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__avoidance_debug_factor
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__avoidance_debug_factor
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__avoidance_debug_factor
            cls._TYPE_SUPPORT = module.type_support_msg__msg__avoidance_debug_factor
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__avoidance_debug_factor

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'OBJECT_IS_NOT_TYPE': cls.__constants['OBJECT_IS_NOT_TYPE'],
            'OBJECT_IS_BEHIND_THRESHOLD': cls.__constants['OBJECT_IS_BEHIND_THRESHOLD'],
            'OBJECT_IS_IN_FRONT_THRESHOLD': cls.__constants['OBJECT_IS_IN_FRONT_THRESHOLD'],
            'OBJECT_BEHIND_PATH_GOAL': cls.__constants['OBJECT_BEHIND_PATH_GOAL'],
            'NOT_PARKING_OBJECT': cls.__constants['NOT_PARKING_OBJECT'],
            'MOVING_OBJECT': cls.__constants['MOVING_OBJECT'],
            'SAME_DIRECTION_SHIFT': cls.__constants['SAME_DIRECTION_SHIFT'],
            'TOO_NEAR_TO_CENTERLINE': cls.__constants['TOO_NEAR_TO_CENTERLINE'],
            'INSUFFICIENT_LATERAL_MARGIN': cls.__constants['INSUFFICIENT_LATERAL_MARGIN'],
            'REMAINING_DISTANCE_LESS_THAN_ZERO': cls.__constants['REMAINING_DISTANCE_LESS_THAN_ZERO'],
            'TOO_LARGE_JERK': cls.__constants['TOO_LARGE_JERK'],
        }

    @property
    def OBJECT_IS_NOT_TYPE(self):
        """Message constant 'OBJECT_IS_NOT_TYPE'."""
        return Metaclass_AvoidanceDebugFactor.__constants['OBJECT_IS_NOT_TYPE']

    @property
    def OBJECT_IS_BEHIND_THRESHOLD(self):
        """Message constant 'OBJECT_IS_BEHIND_THRESHOLD'."""
        return Metaclass_AvoidanceDebugFactor.__constants['OBJECT_IS_BEHIND_THRESHOLD']

    @property
    def OBJECT_IS_IN_FRONT_THRESHOLD(self):
        """Message constant 'OBJECT_IS_IN_FRONT_THRESHOLD'."""
        return Metaclass_AvoidanceDebugFactor.__constants['OBJECT_IS_IN_FRONT_THRESHOLD']

    @property
    def OBJECT_BEHIND_PATH_GOAL(self):
        """Message constant 'OBJECT_BEHIND_PATH_GOAL'."""
        return Metaclass_AvoidanceDebugFactor.__constants['OBJECT_BEHIND_PATH_GOAL']

    @property
    def NOT_PARKING_OBJECT(self):
        """Message constant 'NOT_PARKING_OBJECT'."""
        return Metaclass_AvoidanceDebugFactor.__constants['NOT_PARKING_OBJECT']

    @property
    def MOVING_OBJECT(self):
        """Message constant 'MOVING_OBJECT'."""
        return Metaclass_AvoidanceDebugFactor.__constants['MOVING_OBJECT']

    @property
    def SAME_DIRECTION_SHIFT(self):
        """Message constant 'SAME_DIRECTION_SHIFT'."""
        return Metaclass_AvoidanceDebugFactor.__constants['SAME_DIRECTION_SHIFT']

    @property
    def TOO_NEAR_TO_CENTERLINE(self):
        """Message constant 'TOO_NEAR_TO_CENTERLINE'."""
        return Metaclass_AvoidanceDebugFactor.__constants['TOO_NEAR_TO_CENTERLINE']

    @property
    def INSUFFICIENT_LATERAL_MARGIN(self):
        """Message constant 'INSUFFICIENT_LATERAL_MARGIN'."""
        return Metaclass_AvoidanceDebugFactor.__constants['INSUFFICIENT_LATERAL_MARGIN']

    @property
    def REMAINING_DISTANCE_LESS_THAN_ZERO(self):
        """Message constant 'REMAINING_DISTANCE_LESS_THAN_ZERO'."""
        return Metaclass_AvoidanceDebugFactor.__constants['REMAINING_DISTANCE_LESS_THAN_ZERO']

    @property
    def TOO_LARGE_JERK(self):
        """Message constant 'TOO_LARGE_JERK'."""
        return Metaclass_AvoidanceDebugFactor.__constants['TOO_LARGE_JERK']


class AvoidanceDebugFactor(metaclass=Metaclass_AvoidanceDebugFactor):
    """
    Message class 'AvoidanceDebugFactor'.

    Constants:
      OBJECT_IS_NOT_TYPE
      OBJECT_IS_BEHIND_THRESHOLD
      OBJECT_IS_IN_FRONT_THRESHOLD
      OBJECT_BEHIND_PATH_GOAL
      NOT_PARKING_OBJECT
      MOVING_OBJECT
      SAME_DIRECTION_SHIFT
      TOO_NEAR_TO_CENTERLINE
      INSUFFICIENT_LATERAL_MARGIN
      REMAINING_DISTANCE_LESS_THAN_ZERO
      TOO_LARGE_JERK
    """

    __slots__ = [
    ]

    _fields_and_field_types = {
    }

    SLOT_TYPES = (
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))

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
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)
