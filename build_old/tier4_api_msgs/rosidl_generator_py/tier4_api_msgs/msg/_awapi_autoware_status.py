# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tier4_api_msgs:msg/AwapiAutowareStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AwapiAutowareStatus(type):
    """Metaclass of message 'AwapiAutowareStatus'."""

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
            module = import_type_support('tier4_api_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tier4_api_msgs.msg.AwapiAutowareStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__awapi_autoware_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__awapi_autoware_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__awapi_autoware_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__awapi_autoware_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__awapi_autoware_status

            from diagnostic_msgs.msg import DiagnosticStatus
            if DiagnosticStatus.__class__._TYPE_SUPPORT is None:
                DiagnosticStatus.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

            from tier4_planning_msgs.msg import StopReasonArray
            if StopReasonArray.__class__._TYPE_SUPPORT is None:
                StopReasonArray.__class__.__import_type_support__()

            from tier4_system_msgs.msg import HazardStatusStamped
            if HazardStatusStamped.__class__._TYPE_SUPPORT is None:
                HazardStatusStamped.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class AwapiAutowareStatus(metaclass=Metaclass_AwapiAutowareStatus):
    """Message class 'AwapiAutowareStatus'."""

    __slots__ = [
        '_header',
        '_autoware_state',
        '_control_mode',
        '_gate_mode',
        '_emergency_stopped',
        '_current_max_velocity',
        '_hazard_status',
        '_stop_reason',
        '_diagnostics',
        '_error_diagnostics',
        '_autonomous_overridden',
        '_arrived_goal',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'autoware_state': 'string',
        'control_mode': 'int32',
        'gate_mode': 'int32',
        'emergency_stopped': 'boolean',
        'current_max_velocity': 'float',
        'hazard_status': 'tier4_system_msgs/HazardStatusStamped',
        'stop_reason': 'tier4_planning_msgs/StopReasonArray',
        'diagnostics': 'sequence<diagnostic_msgs/DiagnosticStatus>',
        'error_diagnostics': 'sequence<diagnostic_msgs/DiagnosticStatus>',
        'autonomous_overridden': 'boolean',
        'arrived_goal': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['tier4_system_msgs', 'msg'], 'HazardStatusStamped'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['tier4_planning_msgs', 'msg'], 'StopReasonArray'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['diagnostic_msgs', 'msg'], 'DiagnosticStatus')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['diagnostic_msgs', 'msg'], 'DiagnosticStatus')),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.autoware_state = kwargs.get('autoware_state', str())
        self.control_mode = kwargs.get('control_mode', int())
        self.gate_mode = kwargs.get('gate_mode', int())
        self.emergency_stopped = kwargs.get('emergency_stopped', bool())
        self.current_max_velocity = kwargs.get('current_max_velocity', float())
        from tier4_system_msgs.msg import HazardStatusStamped
        self.hazard_status = kwargs.get('hazard_status', HazardStatusStamped())
        from tier4_planning_msgs.msg import StopReasonArray
        self.stop_reason = kwargs.get('stop_reason', StopReasonArray())
        self.diagnostics = kwargs.get('diagnostics', [])
        self.error_diagnostics = kwargs.get('error_diagnostics', [])
        self.autonomous_overridden = kwargs.get('autonomous_overridden', bool())
        self.arrived_goal = kwargs.get('arrived_goal', bool())

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
        if self.autoware_state != other.autoware_state:
            return False
        if self.control_mode != other.control_mode:
            return False
        if self.gate_mode != other.gate_mode:
            return False
        if self.emergency_stopped != other.emergency_stopped:
            return False
        if self.current_max_velocity != other.current_max_velocity:
            return False
        if self.hazard_status != other.hazard_status:
            return False
        if self.stop_reason != other.stop_reason:
            return False
        if self.diagnostics != other.diagnostics:
            return False
        if self.error_diagnostics != other.error_diagnostics:
            return False
        if self.autonomous_overridden != other.autonomous_overridden:
            return False
        if self.arrived_goal != other.arrived_goal:
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
    def autoware_state(self):
        """Message field 'autoware_state'."""
        return self._autoware_state

    @autoware_state.setter
    def autoware_state(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'autoware_state' field must be of type 'str'"
        self._autoware_state = value

    @builtins.property
    def control_mode(self):
        """Message field 'control_mode'."""
        return self._control_mode

    @control_mode.setter
    def control_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'control_mode' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'control_mode' field must be an integer in [-2147483648, 2147483647]"
        self._control_mode = value

    @builtins.property
    def gate_mode(self):
        """Message field 'gate_mode'."""
        return self._gate_mode

    @gate_mode.setter
    def gate_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gate_mode' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'gate_mode' field must be an integer in [-2147483648, 2147483647]"
        self._gate_mode = value

    @builtins.property
    def emergency_stopped(self):
        """Message field 'emergency_stopped'."""
        return self._emergency_stopped

    @emergency_stopped.setter
    def emergency_stopped(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'emergency_stopped' field must be of type 'bool'"
        self._emergency_stopped = value

    @builtins.property
    def current_max_velocity(self):
        """Message field 'current_max_velocity'."""
        return self._current_max_velocity

    @current_max_velocity.setter
    def current_max_velocity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'current_max_velocity' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'current_max_velocity' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._current_max_velocity = value

    @builtins.property
    def hazard_status(self):
        """Message field 'hazard_status'."""
        return self._hazard_status

    @hazard_status.setter
    def hazard_status(self, value):
        if __debug__:
            from tier4_system_msgs.msg import HazardStatusStamped
            assert \
                isinstance(value, HazardStatusStamped), \
                "The 'hazard_status' field must be a sub message of type 'HazardStatusStamped'"
        self._hazard_status = value

    @builtins.property
    def stop_reason(self):
        """Message field 'stop_reason'."""
        return self._stop_reason

    @stop_reason.setter
    def stop_reason(self, value):
        if __debug__:
            from tier4_planning_msgs.msg import StopReasonArray
            assert \
                isinstance(value, StopReasonArray), \
                "The 'stop_reason' field must be a sub message of type 'StopReasonArray'"
        self._stop_reason = value

    @builtins.property
    def diagnostics(self):
        """Message field 'diagnostics'."""
        return self._diagnostics

    @diagnostics.setter
    def diagnostics(self, value):
        if __debug__:
            from diagnostic_msgs.msg import DiagnosticStatus
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
                 all(isinstance(v, DiagnosticStatus) for v in value) and
                 True), \
                "The 'diagnostics' field must be a set or sequence and each value of type 'DiagnosticStatus'"
        self._diagnostics = value

    @builtins.property
    def error_diagnostics(self):
        """Message field 'error_diagnostics'."""
        return self._error_diagnostics

    @error_diagnostics.setter
    def error_diagnostics(self, value):
        if __debug__:
            from diagnostic_msgs.msg import DiagnosticStatus
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
                 all(isinstance(v, DiagnosticStatus) for v in value) and
                 True), \
                "The 'error_diagnostics' field must be a set or sequence and each value of type 'DiagnosticStatus'"
        self._error_diagnostics = value

    @builtins.property
    def autonomous_overridden(self):
        """Message field 'autonomous_overridden'."""
        return self._autonomous_overridden

    @autonomous_overridden.setter
    def autonomous_overridden(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'autonomous_overridden' field must be of type 'bool'"
        self._autonomous_overridden = value

    @builtins.property
    def arrived_goal(self):
        """Message field 'arrived_goal'."""
        return self._arrived_goal

    @arrived_goal.setter
    def arrived_goal(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'arrived_goal' field must be of type 'bool'"
        self._arrived_goal = value
