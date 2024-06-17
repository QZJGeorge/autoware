# generated from rosidl_generator_py/resource/_idl.py.em
# with input from autoware_map_msgs:srv/GetSelectedPointCloudMap.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GetSelectedPointCloudMap_Request(type):
    """Metaclass of message 'GetSelectedPointCloudMap_Request'."""

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
            module = import_type_support('autoware_map_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'autoware_map_msgs.srv.GetSelectedPointCloudMap_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_selected_point_cloud_map__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_selected_point_cloud_map__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_selected_point_cloud_map__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_selected_point_cloud_map__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_selected_point_cloud_map__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetSelectedPointCloudMap_Request(metaclass=Metaclass_GetSelectedPointCloudMap_Request):
    """Message class 'GetSelectedPointCloudMap_Request'."""

    __slots__ = [
        '_cell_ids',
    ]

    _fields_and_field_types = {
        'cell_ids': 'sequence<string>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.cell_ids = kwargs.get('cell_ids', [])

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
        if self.cell_ids != other.cell_ids:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def cell_ids(self):
        """Message field 'cell_ids'."""
        return self._cell_ids

    @cell_ids.setter
    def cell_ids(self, value):
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
                "The 'cell_ids' field must be a set or sequence and each value of type 'str'"
        self._cell_ids = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_GetSelectedPointCloudMap_Response(type):
    """Metaclass of message 'GetSelectedPointCloudMap_Response'."""

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
            module = import_type_support('autoware_map_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'autoware_map_msgs.srv.GetSelectedPointCloudMap_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_selected_point_cloud_map__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_selected_point_cloud_map__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_selected_point_cloud_map__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_selected_point_cloud_map__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_selected_point_cloud_map__response

            from autoware_map_msgs.msg import PointCloudMapCellWithID
            if PointCloudMapCellWithID.__class__._TYPE_SUPPORT is None:
                PointCloudMapCellWithID.__class__.__import_type_support__()

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


class GetSelectedPointCloudMap_Response(metaclass=Metaclass_GetSelectedPointCloudMap_Response):
    """Message class 'GetSelectedPointCloudMap_Response'."""

    __slots__ = [
        '_header',
        '_new_pointcloud_with_ids',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'new_pointcloud_with_ids': 'sequence<autoware_map_msgs/PointCloudMapCellWithID>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['autoware_map_msgs', 'msg'], 'PointCloudMapCellWithID')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.new_pointcloud_with_ids = kwargs.get('new_pointcloud_with_ids', [])

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
        if self.new_pointcloud_with_ids != other.new_pointcloud_with_ids:
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
    def new_pointcloud_with_ids(self):
        """Message field 'new_pointcloud_with_ids'."""
        return self._new_pointcloud_with_ids

    @new_pointcloud_with_ids.setter
    def new_pointcloud_with_ids(self, value):
        if __debug__:
            from autoware_map_msgs.msg import PointCloudMapCellWithID
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
                 all(isinstance(v, PointCloudMapCellWithID) for v in value) and
                 True), \
                "The 'new_pointcloud_with_ids' field must be a set or sequence and each value of type 'PointCloudMapCellWithID'"
        self._new_pointcloud_with_ids = value


class Metaclass_GetSelectedPointCloudMap(type):
    """Metaclass of service 'GetSelectedPointCloudMap'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('autoware_map_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'autoware_map_msgs.srv.GetSelectedPointCloudMap')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__get_selected_point_cloud_map

            from autoware_map_msgs.srv import _get_selected_point_cloud_map
            if _get_selected_point_cloud_map.Metaclass_GetSelectedPointCloudMap_Request._TYPE_SUPPORT is None:
                _get_selected_point_cloud_map.Metaclass_GetSelectedPointCloudMap_Request.__import_type_support__()
            if _get_selected_point_cloud_map.Metaclass_GetSelectedPointCloudMap_Response._TYPE_SUPPORT is None:
                _get_selected_point_cloud_map.Metaclass_GetSelectedPointCloudMap_Response.__import_type_support__()


class GetSelectedPointCloudMap(metaclass=Metaclass_GetSelectedPointCloudMap):
    from autoware_map_msgs.srv._get_selected_point_cloud_map import GetSelectedPointCloudMap_Request as Request
    from autoware_map_msgs.srv._get_selected_point_cloud_map import GetSelectedPointCloudMap_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
