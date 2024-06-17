# generated from rosidl_generator_py/resource/_idl.py.em
# with input from static_centerline_optimizer:srv/PlanPath.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'route'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PlanPath_Request(type):
    """Metaclass of message 'PlanPath_Request'."""

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
            module = import_type_support('static_centerline_optimizer')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'static_centerline_optimizer.srv.PlanPath_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__plan_path__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__plan_path__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__plan_path__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__plan_path__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__plan_path__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PlanPath_Request(metaclass=Metaclass_PlanPath_Request):
    """Message class 'PlanPath_Request'."""

    __slots__ = [
        '_map_id',
        '_route',
    ]

    _fields_and_field_types = {
        'map_id': 'uint32',
        'route': 'sequence<uint32>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint32')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.map_id = kwargs.get('map_id', int())
        self.route = array.array('I', kwargs.get('route', []))

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
        if self.map_id != other.map_id:
            return False
        if self.route != other.route:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def map_id(self):
        """Message field 'map_id'."""
        return self._map_id

    @map_id.setter
    def map_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'map_id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'map_id' field must be an unsigned integer in [0, 4294967295]"
        self._map_id = value

    @builtins.property
    def route(self):
        """Message field 'route'."""
        return self._route

    @route.setter
    def route(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'I', \
                "The 'route' array.array() must have the type code of 'I'"
            self._route = value
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
                 all(val >= 0 and val < 4294967296 for val in value)), \
                "The 'route' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 4294967295]"
        self._route = array.array('I', value)


# Import statements for member types

# Member 'unconnected_lane_ids'
# already imported above
# import array

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_PlanPath_Response(type):
    """Metaclass of message 'PlanPath_Response'."""

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
            module = import_type_support('static_centerline_optimizer')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'static_centerline_optimizer.srv.PlanPath_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__plan_path__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__plan_path__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__plan_path__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__plan_path__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__plan_path__response

            from static_centerline_optimizer.msg import PointsWithLaneId
            if PointsWithLaneId.__class__._TYPE_SUPPORT is None:
                PointsWithLaneId.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PlanPath_Response(metaclass=Metaclass_PlanPath_Response):
    """Message class 'PlanPath_Response'."""

    __slots__ = [
        '_points_with_lane_ids',
        '_message',
        '_unconnected_lane_ids',
    ]

    _fields_and_field_types = {
        'points_with_lane_ids': 'sequence<static_centerline_optimizer/PointsWithLaneId>',
        'message': 'string',
        'unconnected_lane_ids': 'sequence<uint32>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['static_centerline_optimizer', 'msg'], 'PointsWithLaneId')),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint32')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.points_with_lane_ids = kwargs.get('points_with_lane_ids', [])
        self.message = kwargs.get('message', str())
        self.unconnected_lane_ids = array.array('I', kwargs.get('unconnected_lane_ids', []))

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
        if self.points_with_lane_ids != other.points_with_lane_ids:
            return False
        if self.message != other.message:
            return False
        if self.unconnected_lane_ids != other.unconnected_lane_ids:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def points_with_lane_ids(self):
        """Message field 'points_with_lane_ids'."""
        return self._points_with_lane_ids

    @points_with_lane_ids.setter
    def points_with_lane_ids(self, value):
        if __debug__:
            from static_centerline_optimizer.msg import PointsWithLaneId
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
                 all(isinstance(v, PointsWithLaneId) for v in value) and
                 True), \
                "The 'points_with_lane_ids' field must be a set or sequence and each value of type 'PointsWithLaneId'"
        self._points_with_lane_ids = value

    @builtins.property
    def message(self):
        """Message field 'message'."""
        return self._message

    @message.setter
    def message(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'message' field must be of type 'str'"
        self._message = value

    @builtins.property
    def unconnected_lane_ids(self):
        """Message field 'unconnected_lane_ids'."""
        return self._unconnected_lane_ids

    @unconnected_lane_ids.setter
    def unconnected_lane_ids(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'I', \
                "The 'unconnected_lane_ids' array.array() must have the type code of 'I'"
            self._unconnected_lane_ids = value
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
                 all(val >= 0 and val < 4294967296 for val in value)), \
                "The 'unconnected_lane_ids' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 4294967295]"
        self._unconnected_lane_ids = array.array('I', value)


class Metaclass_PlanPath(type):
    """Metaclass of service 'PlanPath'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('static_centerline_optimizer')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'static_centerline_optimizer.srv.PlanPath')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__plan_path

            from static_centerline_optimizer.srv import _plan_path
            if _plan_path.Metaclass_PlanPath_Request._TYPE_SUPPORT is None:
                _plan_path.Metaclass_PlanPath_Request.__import_type_support__()
            if _plan_path.Metaclass_PlanPath_Response._TYPE_SUPPORT is None:
                _plan_path.Metaclass_PlanPath_Response.__import_type_support__()


class PlanPath(metaclass=Metaclass_PlanPath):
    from static_centerline_optimizer.srv._plan_path import PlanPath_Request as Request
    from static_centerline_optimizer.srv._plan_path import PlanPath_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
