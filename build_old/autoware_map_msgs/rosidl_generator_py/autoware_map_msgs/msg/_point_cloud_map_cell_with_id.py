# generated from rosidl_generator_py/resource/_idl.py.em
# with input from autoware_map_msgs:msg/PointCloudMapCellWithID.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PointCloudMapCellWithID(type):
    """Metaclass of message 'PointCloudMapCellWithID'."""

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
                'autoware_map_msgs.msg.PointCloudMapCellWithID')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__point_cloud_map_cell_with_id
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__point_cloud_map_cell_with_id
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__point_cloud_map_cell_with_id
            cls._TYPE_SUPPORT = module.type_support_msg__msg__point_cloud_map_cell_with_id
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__point_cloud_map_cell_with_id

            from autoware_map_msgs.msg import PointCloudMapCellMetaData
            if PointCloudMapCellMetaData.__class__._TYPE_SUPPORT is None:
                PointCloudMapCellMetaData.__class__.__import_type_support__()

            from sensor_msgs.msg import PointCloud2
            if PointCloud2.__class__._TYPE_SUPPORT is None:
                PointCloud2.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PointCloudMapCellWithID(metaclass=Metaclass_PointCloudMapCellWithID):
    """Message class 'PointCloudMapCellWithID'."""

    __slots__ = [
        '_cell_id',
        '_pointcloud',
        '_metadata',
    ]

    _fields_and_field_types = {
        'cell_id': 'string',
        'pointcloud': 'sensor_msgs/PointCloud2',
        'metadata': 'autoware_map_msgs/PointCloudMapCellMetaData',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'PointCloud2'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['autoware_map_msgs', 'msg'], 'PointCloudMapCellMetaData'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.cell_id = kwargs.get('cell_id', str())
        from sensor_msgs.msg import PointCloud2
        self.pointcloud = kwargs.get('pointcloud', PointCloud2())
        from autoware_map_msgs.msg import PointCloudMapCellMetaData
        self.metadata = kwargs.get('metadata', PointCloudMapCellMetaData())

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
        if self.cell_id != other.cell_id:
            return False
        if self.pointcloud != other.pointcloud:
            return False
        if self.metadata != other.metadata:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def cell_id(self):
        """Message field 'cell_id'."""
        return self._cell_id

    @cell_id.setter
    def cell_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'cell_id' field must be of type 'str'"
        self._cell_id = value

    @builtins.property
    def pointcloud(self):
        """Message field 'pointcloud'."""
        return self._pointcloud

    @pointcloud.setter
    def pointcloud(self, value):
        if __debug__:
            from sensor_msgs.msg import PointCloud2
            assert \
                isinstance(value, PointCloud2), \
                "The 'pointcloud' field must be a sub message of type 'PointCloud2'"
        self._pointcloud = value

    @builtins.property
    def metadata(self):
        """Message field 'metadata'."""
        return self._metadata

    @metadata.setter
    def metadata(self, value):
        if __debug__:
            from autoware_map_msgs.msg import PointCloudMapCellMetaData
            assert \
                isinstance(value, PointCloudMapCellMetaData), \
                "The 'metadata' field must be a sub message of type 'PointCloudMapCellMetaData'"
        self._metadata = value
