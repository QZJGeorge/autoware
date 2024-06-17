# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mcity_msgs:msg/PlannedPath.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'x_vector'
# Member 'y_vector'
# Member 'vd_vector'
# Member 'ori_vector'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PlannedPath(type):
    """Metaclass of message 'PlannedPath'."""

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
            module = import_type_support('mcity_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mcity_msgs.msg.PlannedPath')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__planned_path
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__planned_path
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__planned_path
            cls._TYPE_SUPPORT = module.type_support_msg__msg__planned_path
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__planned_path

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PlannedPath(metaclass=Metaclass_PlannedPath):
    """Message class 'PlannedPath'."""

    __slots__ = [
        '_timestamp',
        '_time_resolution',
        '_go',
        '_estop',
        '_x_vector',
        '_y_vector',
        '_vd_vector',
        '_ori_vector',
    ]

    _fields_and_field_types = {
        'timestamp': 'double',
        'time_resolution': 'double',
        'go': 'int16',
        'estop': 'int16',
        'x_vector': 'sequence<double>',
        'y_vector': 'sequence<double>',
        'vd_vector': 'sequence<double>',
        'ori_vector': 'sequence<double>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', float())
        self.time_resolution = kwargs.get('time_resolution', float())
        self.go = kwargs.get('go', int())
        self.estop = kwargs.get('estop', int())
        self.x_vector = array.array('d', kwargs.get('x_vector', []))
        self.y_vector = array.array('d', kwargs.get('y_vector', []))
        self.vd_vector = array.array('d', kwargs.get('vd_vector', []))
        self.ori_vector = array.array('d', kwargs.get('ori_vector', []))

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
        if self.timestamp != other.timestamp:
            return False
        if self.time_resolution != other.time_resolution:
            return False
        if self.go != other.go:
            return False
        if self.estop != other.estop:
            return False
        if self.x_vector != other.x_vector:
            return False
        if self.y_vector != other.y_vector:
            return False
        if self.vd_vector != other.vd_vector:
            return False
        if self.ori_vector != other.ori_vector:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def timestamp(self):
        """Message field 'timestamp'."""
        return self._timestamp

    @timestamp.setter
    def timestamp(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'timestamp' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'timestamp' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._timestamp = value

    @builtins.property
    def time_resolution(self):
        """Message field 'time_resolution'."""
        return self._time_resolution

    @time_resolution.setter
    def time_resolution(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'time_resolution' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'time_resolution' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._time_resolution = value

    @builtins.property
    def go(self):
        """Message field 'go'."""
        return self._go

    @go.setter
    def go(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'go' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'go' field must be an integer in [-32768, 32767]"
        self._go = value

    @builtins.property
    def estop(self):
        """Message field 'estop'."""
        return self._estop

    @estop.setter
    def estop(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'estop' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'estop' field must be an integer in [-32768, 32767]"
        self._estop = value

    @builtins.property
    def x_vector(self):
        """Message field 'x_vector'."""
        return self._x_vector

    @x_vector.setter
    def x_vector(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'x_vector' array.array() must have the type code of 'd'"
            self._x_vector = value
            return
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'x_vector' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._x_vector = array.array('d', value)

    @builtins.property
    def y_vector(self):
        """Message field 'y_vector'."""
        return self._y_vector

    @y_vector.setter
    def y_vector(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'y_vector' array.array() must have the type code of 'd'"
            self._y_vector = value
            return
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'y_vector' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._y_vector = array.array('d', value)

    @builtins.property
    def vd_vector(self):
        """Message field 'vd_vector'."""
        return self._vd_vector

    @vd_vector.setter
    def vd_vector(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'vd_vector' array.array() must have the type code of 'd'"
            self._vd_vector = value
            return
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'vd_vector' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._vd_vector = array.array('d', value)

    @builtins.property
    def ori_vector(self):
        """Message field 'ori_vector'."""
        return self._ori_vector

    @ori_vector.setter
    def ori_vector(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'ori_vector' array.array() must have the type code of 'd'"
            self._ori_vector = value
            return
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'ori_vector' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._ori_vector = array.array('d', value)
