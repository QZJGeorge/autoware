# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tier4_rtc_msgs:msg/Module.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Module(type):
    """Metaclass of message 'Module'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'NONE': 0,
        'LANE_CHANGE_LEFT': 1,
        'LANE_CHANGE_RIGHT': 2,
        'AVOIDANCE_LEFT': 3,
        'AVOIDANCE_RIGHT': 4,
        'GOAL_PLANNER': 5,
        'START_PLANNER': 6,
        'TRAFFIC_LIGHT': 7,
        'INTERSECTION': 8,
        'INTERSECTION_OCCLUSION': 9,
        'CROSSWALK': 10,
        'BLIND_SPOT': 11,
        'DETECTION_AREA': 12,
        'NO_STOPPING_AREA': 13,
        'OCCLUSION_SPOT': 14,
        'EXT_REQUEST_LANE_CHANGE_LEFT': 15,
        'EXT_REQUEST_LANE_CHANGE_RIGHT': 16,
        'AVOIDANCE_BY_LC_LEFT': 17,
        'AVOIDANCE_BY_LC_RIGHT': 18,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('tier4_rtc_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tier4_rtc_msgs.msg.Module')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__module
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__module
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__module
            cls._TYPE_SUPPORT = module.type_support_msg__msg__module
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__module

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'NONE': cls.__constants['NONE'],
            'LANE_CHANGE_LEFT': cls.__constants['LANE_CHANGE_LEFT'],
            'LANE_CHANGE_RIGHT': cls.__constants['LANE_CHANGE_RIGHT'],
            'AVOIDANCE_LEFT': cls.__constants['AVOIDANCE_LEFT'],
            'AVOIDANCE_RIGHT': cls.__constants['AVOIDANCE_RIGHT'],
            'GOAL_PLANNER': cls.__constants['GOAL_PLANNER'],
            'START_PLANNER': cls.__constants['START_PLANNER'],
            'TRAFFIC_LIGHT': cls.__constants['TRAFFIC_LIGHT'],
            'INTERSECTION': cls.__constants['INTERSECTION'],
            'INTERSECTION_OCCLUSION': cls.__constants['INTERSECTION_OCCLUSION'],
            'CROSSWALK': cls.__constants['CROSSWALK'],
            'BLIND_SPOT': cls.__constants['BLIND_SPOT'],
            'DETECTION_AREA': cls.__constants['DETECTION_AREA'],
            'NO_STOPPING_AREA': cls.__constants['NO_STOPPING_AREA'],
            'OCCLUSION_SPOT': cls.__constants['OCCLUSION_SPOT'],
            'EXT_REQUEST_LANE_CHANGE_LEFT': cls.__constants['EXT_REQUEST_LANE_CHANGE_LEFT'],
            'EXT_REQUEST_LANE_CHANGE_RIGHT': cls.__constants['EXT_REQUEST_LANE_CHANGE_RIGHT'],
            'AVOIDANCE_BY_LC_LEFT': cls.__constants['AVOIDANCE_BY_LC_LEFT'],
            'AVOIDANCE_BY_LC_RIGHT': cls.__constants['AVOIDANCE_BY_LC_RIGHT'],
        }

    @property
    def NONE(self):
        """Message constant 'NONE'."""
        return Metaclass_Module.__constants['NONE']

    @property
    def LANE_CHANGE_LEFT(self):
        """Message constant 'LANE_CHANGE_LEFT'."""
        return Metaclass_Module.__constants['LANE_CHANGE_LEFT']

    @property
    def LANE_CHANGE_RIGHT(self):
        """Message constant 'LANE_CHANGE_RIGHT'."""
        return Metaclass_Module.__constants['LANE_CHANGE_RIGHT']

    @property
    def AVOIDANCE_LEFT(self):
        """Message constant 'AVOIDANCE_LEFT'."""
        return Metaclass_Module.__constants['AVOIDANCE_LEFT']

    @property
    def AVOIDANCE_RIGHT(self):
        """Message constant 'AVOIDANCE_RIGHT'."""
        return Metaclass_Module.__constants['AVOIDANCE_RIGHT']

    @property
    def GOAL_PLANNER(self):
        """Message constant 'GOAL_PLANNER'."""
        return Metaclass_Module.__constants['GOAL_PLANNER']

    @property
    def START_PLANNER(self):
        """Message constant 'START_PLANNER'."""
        return Metaclass_Module.__constants['START_PLANNER']

    @property
    def TRAFFIC_LIGHT(self):
        """Message constant 'TRAFFIC_LIGHT'."""
        return Metaclass_Module.__constants['TRAFFIC_LIGHT']

    @property
    def INTERSECTION(self):
        """Message constant 'INTERSECTION'."""
        return Metaclass_Module.__constants['INTERSECTION']

    @property
    def INTERSECTION_OCCLUSION(self):
        """Message constant 'INTERSECTION_OCCLUSION'."""
        return Metaclass_Module.__constants['INTERSECTION_OCCLUSION']

    @property
    def CROSSWALK(self):
        """Message constant 'CROSSWALK'."""
        return Metaclass_Module.__constants['CROSSWALK']

    @property
    def BLIND_SPOT(self):
        """Message constant 'BLIND_SPOT'."""
        return Metaclass_Module.__constants['BLIND_SPOT']

    @property
    def DETECTION_AREA(self):
        """Message constant 'DETECTION_AREA'."""
        return Metaclass_Module.__constants['DETECTION_AREA']

    @property
    def NO_STOPPING_AREA(self):
        """Message constant 'NO_STOPPING_AREA'."""
        return Metaclass_Module.__constants['NO_STOPPING_AREA']

    @property
    def OCCLUSION_SPOT(self):
        """Message constant 'OCCLUSION_SPOT'."""
        return Metaclass_Module.__constants['OCCLUSION_SPOT']

    @property
    def EXT_REQUEST_LANE_CHANGE_LEFT(self):
        """Message constant 'EXT_REQUEST_LANE_CHANGE_LEFT'."""
        return Metaclass_Module.__constants['EXT_REQUEST_LANE_CHANGE_LEFT']

    @property
    def EXT_REQUEST_LANE_CHANGE_RIGHT(self):
        """Message constant 'EXT_REQUEST_LANE_CHANGE_RIGHT'."""
        return Metaclass_Module.__constants['EXT_REQUEST_LANE_CHANGE_RIGHT']

    @property
    def AVOIDANCE_BY_LC_LEFT(self):
        """Message constant 'AVOIDANCE_BY_LC_LEFT'."""
        return Metaclass_Module.__constants['AVOIDANCE_BY_LC_LEFT']

    @property
    def AVOIDANCE_BY_LC_RIGHT(self):
        """Message constant 'AVOIDANCE_BY_LC_RIGHT'."""
        return Metaclass_Module.__constants['AVOIDANCE_BY_LC_RIGHT']


class Module(metaclass=Metaclass_Module):
    """
    Message class 'Module'.

    Constants:
      NONE
      LANE_CHANGE_LEFT
      LANE_CHANGE_RIGHT
      AVOIDANCE_LEFT
      AVOIDANCE_RIGHT
      GOAL_PLANNER
      START_PLANNER
      TRAFFIC_LIGHT
      INTERSECTION
      INTERSECTION_OCCLUSION
      CROSSWALK
      BLIND_SPOT
      DETECTION_AREA
      NO_STOPPING_AREA
      OCCLUSION_SPOT
      EXT_REQUEST_LANE_CHANGE_LEFT
      EXT_REQUEST_LANE_CHANGE_RIGHT
      AVOIDANCE_BY_LC_LEFT
      AVOIDANCE_BY_LC_RIGHT
    """

    __slots__ = [
        '_type',
    ]

    _fields_and_field_types = {
        'type': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.type = kwargs.get('type', int())

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
        if self.type != other.type:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property  # noqa: A003
    def type(self):  # noqa: A003
        """Message field 'type'."""
        return self._type

    @type.setter  # noqa: A003
    def type(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'type' field must be an unsigned integer in [0, 255]"
        self._type = value
