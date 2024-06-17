# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tier4_planning_msgs:msg/Scenario.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Scenario(type):
    """Metaclass of message 'Scenario'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'EMPTY': 'Empty',
        'LANEDRIVING': 'LaneDriving',
        'PARKING': 'Parking',
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
                'tier4_planning_msgs.msg.Scenario')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__scenario
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__scenario
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__scenario
            cls._TYPE_SUPPORT = module.type_support_msg__msg__scenario
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__scenario

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'EMPTY': cls.__constants['EMPTY'],
            'LANEDRIVING': cls.__constants['LANEDRIVING'],
            'PARKING': cls.__constants['PARKING'],
        }

    @property
    def EMPTY(self):
        """Message constant 'EMPTY'."""
        return Metaclass_Scenario.__constants['EMPTY']

    @property
    def LANEDRIVING(self):
        """Message constant 'LANEDRIVING'."""
        return Metaclass_Scenario.__constants['LANEDRIVING']

    @property
    def PARKING(self):
        """Message constant 'PARKING'."""
        return Metaclass_Scenario.__constants['PARKING']


class Scenario(metaclass=Metaclass_Scenario):
    """
    Message class 'Scenario'.

    Constants:
      EMPTY
      LANEDRIVING
      PARKING
    """

    __slots__ = [
        '_current_scenario',
        '_activating_scenarios',
    ]

    _fields_and_field_types = {
        'current_scenario': 'string',
        'activating_scenarios': 'sequence<string>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.current_scenario = kwargs.get('current_scenario', str())
        self.activating_scenarios = kwargs.get('activating_scenarios', [])

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
        if self.current_scenario != other.current_scenario:
            return False
        if self.activating_scenarios != other.activating_scenarios:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def current_scenario(self):
        """Message field 'current_scenario'."""
        return self._current_scenario

    @current_scenario.setter
    def current_scenario(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'current_scenario' field must be of type 'str'"
        self._current_scenario = value

    @builtins.property
    def activating_scenarios(self):
        """Message field 'activating_scenarios'."""
        return self._activating_scenarios

    @activating_scenarios.setter
    def activating_scenarios(self, value):
        if __debug__:
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
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'activating_scenarios' field must be a set or sequence and each value of type 'str'"
        self._activating_scenarios = value
