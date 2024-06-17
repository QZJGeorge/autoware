# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tier4_external_api_msgs:srv/GetAccelBrakeMapCalibrationData.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GetAccelBrakeMapCalibrationData_Request(type):
    """Metaclass of message 'GetAccelBrakeMapCalibrationData_Request'."""

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
            module = import_type_support('tier4_external_api_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tier4_external_api_msgs.srv.GetAccelBrakeMapCalibrationData_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_accel_brake_map_calibration_data__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_accel_brake_map_calibration_data__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_accel_brake_map_calibration_data__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_accel_brake_map_calibration_data__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_accel_brake_map_calibration_data__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetAccelBrakeMapCalibrationData_Request(metaclass=Metaclass_GetAccelBrakeMapCalibrationData_Request):
    """Message class 'GetAccelBrakeMapCalibrationData_Request'."""

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


# Import statements for member types

# Member 'graph_image'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_GetAccelBrakeMapCalibrationData_Response(type):
    """Metaclass of message 'GetAccelBrakeMapCalibrationData_Response'."""

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
            module = import_type_support('tier4_external_api_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tier4_external_api_msgs.srv.GetAccelBrakeMapCalibrationData_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_accel_brake_map_calibration_data__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_accel_brake_map_calibration_data__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_accel_brake_map_calibration_data__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_accel_brake_map_calibration_data__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_accel_brake_map_calibration_data__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetAccelBrakeMapCalibrationData_Response(metaclass=Metaclass_GetAccelBrakeMapCalibrationData_Response):
    """Message class 'GetAccelBrakeMapCalibrationData_Response'."""

    __slots__ = [
        '_graph_image',
        '_accel_map',
        '_brake_map',
    ]

    _fields_and_field_types = {
        'graph_image': 'sequence<uint8>',
        'accel_map': 'string',
        'brake_map': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.graph_image = array.array('B', kwargs.get('graph_image', []))
        self.accel_map = kwargs.get('accel_map', str())
        self.brake_map = kwargs.get('brake_map', str())

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
        if self.graph_image != other.graph_image:
            return False
        if self.accel_map != other.accel_map:
            return False
        if self.brake_map != other.brake_map:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def graph_image(self):
        """Message field 'graph_image'."""
        return self._graph_image

    @graph_image.setter
    def graph_image(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'graph_image' array.array() must have the type code of 'B'"
            self._graph_image = value
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
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'graph_image' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._graph_image = array.array('B', value)

    @builtins.property
    def accel_map(self):
        """Message field 'accel_map'."""
        return self._accel_map

    @accel_map.setter
    def accel_map(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'accel_map' field must be of type 'str'"
        self._accel_map = value

    @builtins.property
    def brake_map(self):
        """Message field 'brake_map'."""
        return self._brake_map

    @brake_map.setter
    def brake_map(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'brake_map' field must be of type 'str'"
        self._brake_map = value


class Metaclass_GetAccelBrakeMapCalibrationData(type):
    """Metaclass of service 'GetAccelBrakeMapCalibrationData'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('tier4_external_api_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tier4_external_api_msgs.srv.GetAccelBrakeMapCalibrationData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__get_accel_brake_map_calibration_data

            from tier4_external_api_msgs.srv import _get_accel_brake_map_calibration_data
            if _get_accel_brake_map_calibration_data.Metaclass_GetAccelBrakeMapCalibrationData_Request._TYPE_SUPPORT is None:
                _get_accel_brake_map_calibration_data.Metaclass_GetAccelBrakeMapCalibrationData_Request.__import_type_support__()
            if _get_accel_brake_map_calibration_data.Metaclass_GetAccelBrakeMapCalibrationData_Response._TYPE_SUPPORT is None:
                _get_accel_brake_map_calibration_data.Metaclass_GetAccelBrakeMapCalibrationData_Response.__import_type_support__()


class GetAccelBrakeMapCalibrationData(metaclass=Metaclass_GetAccelBrakeMapCalibrationData):
    from tier4_external_api_msgs.srv._get_accel_brake_map_calibration_data import GetAccelBrakeMapCalibrationData_Request as Request
    from tier4_external_api_msgs.srv._get_accel_brake_map_calibration_data import GetAccelBrakeMapCalibrationData_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
