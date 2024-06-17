# generated from rosidl_generator_py/resource/_idl.py.em
# with input from morai_msgs:msg/MultiEgoSetting.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'ego_index'
# Member 'global_position_x'
# Member 'global_position_y'
# Member 'global_position_z'
# Member 'global_roll'
# Member 'global_pitch'
# Member 'global_yaw'
# Member 'velocity'
# Member 'gear'
# Member 'ctrl_mode'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MultiEgoSetting(type):
    """Metaclass of message 'MultiEgoSetting'."""

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
                'morai_msgs.msg.MultiEgoSetting')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__multi_ego_setting
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__multi_ego_setting
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__multi_ego_setting
            cls._TYPE_SUPPORT = module.type_support_msg__msg__multi_ego_setting
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__multi_ego_setting

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MultiEgoSetting(metaclass=Metaclass_MultiEgoSetting):
    """Message class 'MultiEgoSetting'."""

    __slots__ = [
        '_number_of_ego_vehicle',
        '_camera_index',
        '_ego_index',
        '_global_position_x',
        '_global_position_y',
        '_global_position_z',
        '_global_roll',
        '_global_pitch',
        '_global_yaw',
        '_velocity',
        '_gear',
        '_ctrl_mode',
    ]

    _fields_and_field_types = {
        'number_of_ego_vehicle': 'int32',
        'camera_index': 'int32',
        'ego_index': 'sequence<int32>',
        'global_position_x': 'sequence<double>',
        'global_position_y': 'sequence<double>',
        'global_position_z': 'sequence<double>',
        'global_roll': 'sequence<float>',
        'global_pitch': 'sequence<float>',
        'global_yaw': 'sequence<float>',
        'velocity': 'sequence<float>',
        'gear': 'sequence<int8>',
        'ctrl_mode': 'sequence<int8>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int8')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int8')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.number_of_ego_vehicle = kwargs.get('number_of_ego_vehicle', int())
        self.camera_index = kwargs.get('camera_index', int())
        self.ego_index = array.array('i', kwargs.get('ego_index', []))
        self.global_position_x = array.array('d', kwargs.get('global_position_x', []))
        self.global_position_y = array.array('d', kwargs.get('global_position_y', []))
        self.global_position_z = array.array('d', kwargs.get('global_position_z', []))
        self.global_roll = array.array('f', kwargs.get('global_roll', []))
        self.global_pitch = array.array('f', kwargs.get('global_pitch', []))
        self.global_yaw = array.array('f', kwargs.get('global_yaw', []))
        self.velocity = array.array('f', kwargs.get('velocity', []))
        self.gear = array.array('b', kwargs.get('gear', []))
        self.ctrl_mode = array.array('b', kwargs.get('ctrl_mode', []))

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
        if self.number_of_ego_vehicle != other.number_of_ego_vehicle:
            return False
        if self.camera_index != other.camera_index:
            return False
        if self.ego_index != other.ego_index:
            return False
        if self.global_position_x != other.global_position_x:
            return False
        if self.global_position_y != other.global_position_y:
            return False
        if self.global_position_z != other.global_position_z:
            return False
        if self.global_roll != other.global_roll:
            return False
        if self.global_pitch != other.global_pitch:
            return False
        if self.global_yaw != other.global_yaw:
            return False
        if self.velocity != other.velocity:
            return False
        if self.gear != other.gear:
            return False
        if self.ctrl_mode != other.ctrl_mode:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def number_of_ego_vehicle(self):
        """Message field 'number_of_ego_vehicle'."""
        return self._number_of_ego_vehicle

    @number_of_ego_vehicle.setter
    def number_of_ego_vehicle(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'number_of_ego_vehicle' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'number_of_ego_vehicle' field must be an integer in [-2147483648, 2147483647]"
        self._number_of_ego_vehicle = value

    @builtins.property
    def camera_index(self):
        """Message field 'camera_index'."""
        return self._camera_index

    @camera_index.setter
    def camera_index(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'camera_index' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'camera_index' field must be an integer in [-2147483648, 2147483647]"
        self._camera_index = value

    @builtins.property
    def ego_index(self):
        """Message field 'ego_index'."""
        return self._ego_index

    @ego_index.setter
    def ego_index(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'ego_index' array.array() must have the type code of 'i'"
            self._ego_index = value
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'ego_index' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._ego_index = array.array('i', value)

    @builtins.property
    def global_position_x(self):
        """Message field 'global_position_x'."""
        return self._global_position_x

    @global_position_x.setter
    def global_position_x(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'global_position_x' array.array() must have the type code of 'd'"
            self._global_position_x = value
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
                "The 'global_position_x' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._global_position_x = array.array('d', value)

    @builtins.property
    def global_position_y(self):
        """Message field 'global_position_y'."""
        return self._global_position_y

    @global_position_y.setter
    def global_position_y(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'global_position_y' array.array() must have the type code of 'd'"
            self._global_position_y = value
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
                "The 'global_position_y' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._global_position_y = array.array('d', value)

    @builtins.property
    def global_position_z(self):
        """Message field 'global_position_z'."""
        return self._global_position_z

    @global_position_z.setter
    def global_position_z(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'global_position_z' array.array() must have the type code of 'd'"
            self._global_position_z = value
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
                "The 'global_position_z' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._global_position_z = array.array('d', value)

    @builtins.property
    def global_roll(self):
        """Message field 'global_roll'."""
        return self._global_roll

    @global_roll.setter
    def global_roll(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'global_roll' array.array() must have the type code of 'f'"
            self._global_roll = value
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
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'global_roll' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._global_roll = array.array('f', value)

    @builtins.property
    def global_pitch(self):
        """Message field 'global_pitch'."""
        return self._global_pitch

    @global_pitch.setter
    def global_pitch(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'global_pitch' array.array() must have the type code of 'f'"
            self._global_pitch = value
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
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'global_pitch' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._global_pitch = array.array('f', value)

    @builtins.property
    def global_yaw(self):
        """Message field 'global_yaw'."""
        return self._global_yaw

    @global_yaw.setter
    def global_yaw(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'global_yaw' array.array() must have the type code of 'f'"
            self._global_yaw = value
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
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'global_yaw' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._global_yaw = array.array('f', value)

    @builtins.property
    def velocity(self):
        """Message field 'velocity'."""
        return self._velocity

    @velocity.setter
    def velocity(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'velocity' array.array() must have the type code of 'f'"
            self._velocity = value
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
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'velocity' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._velocity = array.array('f', value)

    @builtins.property
    def gear(self):
        """Message field 'gear'."""
        return self._gear

    @gear.setter
    def gear(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'b', \
                "The 'gear' array.array() must have the type code of 'b'"
            self._gear = value
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= -128 and val < 128 for val in value)), \
                "The 'gear' field must be a set or sequence and each value of type 'int' and each integer in [-128, 127]"
        self._gear = array.array('b', value)

    @builtins.property
    def ctrl_mode(self):
        """Message field 'ctrl_mode'."""
        return self._ctrl_mode

    @ctrl_mode.setter
    def ctrl_mode(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'b', \
                "The 'ctrl_mode' array.array() must have the type code of 'b'"
            self._ctrl_mode = value
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= -128 and val < 128 for val in value)), \
                "The 'ctrl_mode' field must be a set or sequence and each value of type 'int' and each integer in [-128, 127]"
        self._ctrl_mode = array.array('b', value)
