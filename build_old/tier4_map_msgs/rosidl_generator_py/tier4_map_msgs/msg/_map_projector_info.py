# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tier4_map_msgs:msg/MapProjectorInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MapProjectorInfo(type):
    """Metaclass of message 'MapProjectorInfo'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'LOCAL': 'local',
        'LOCAL_CARTESIAN_UTM': 'LocalCartesianUTM',
        'MGRS': 'MGRS',
        'TRANSVERSE_MERCATOR': 'TransverseMercator',
        'WGS84': 'WGS84',
        'EGM2008': 'EGM2008',
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('tier4_map_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tier4_map_msgs.msg.MapProjectorInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__map_projector_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__map_projector_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__map_projector_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__map_projector_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__map_projector_info

            from geographic_msgs.msg import GeoPoint
            if GeoPoint.__class__._TYPE_SUPPORT is None:
                GeoPoint.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'LOCAL': cls.__constants['LOCAL'],
            'LOCAL_CARTESIAN_UTM': cls.__constants['LOCAL_CARTESIAN_UTM'],
            'MGRS': cls.__constants['MGRS'],
            'TRANSVERSE_MERCATOR': cls.__constants['TRANSVERSE_MERCATOR'],
            'WGS84': cls.__constants['WGS84'],
            'EGM2008': cls.__constants['EGM2008'],
        }

    @property
    def LOCAL(self):
        """Message constant 'LOCAL'."""
        return Metaclass_MapProjectorInfo.__constants['LOCAL']

    @property
    def LOCAL_CARTESIAN_UTM(self):
        """Message constant 'LOCAL_CARTESIAN_UTM'."""
        return Metaclass_MapProjectorInfo.__constants['LOCAL_CARTESIAN_UTM']

    @property
    def MGRS(self):
        """Message constant 'MGRS'."""
        return Metaclass_MapProjectorInfo.__constants['MGRS']

    @property
    def TRANSVERSE_MERCATOR(self):
        """Message constant 'TRANSVERSE_MERCATOR'."""
        return Metaclass_MapProjectorInfo.__constants['TRANSVERSE_MERCATOR']

    @property
    def WGS84(self):
        """Message constant 'WGS84'."""
        return Metaclass_MapProjectorInfo.__constants['WGS84']

    @property
    def EGM2008(self):
        """Message constant 'EGM2008'."""
        return Metaclass_MapProjectorInfo.__constants['EGM2008']


class MapProjectorInfo(metaclass=Metaclass_MapProjectorInfo):
    """
    Message class 'MapProjectorInfo'.

    Constants:
      LOCAL
      LOCAL_CARTESIAN_UTM
      MGRS
      TRANSVERSE_MERCATOR
      WGS84
      EGM2008
    """

    __slots__ = [
        '_projector_type',
        '_vertical_datum',
        '_mgrs_grid',
        '_map_origin',
    ]

    _fields_and_field_types = {
        'projector_type': 'string',
        'vertical_datum': 'string',
        'mgrs_grid': 'string',
        'map_origin': 'geographic_msgs/GeoPoint',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geographic_msgs', 'msg'], 'GeoPoint'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.projector_type = kwargs.get('projector_type', str())
        self.vertical_datum = kwargs.get('vertical_datum', str())
        self.mgrs_grid = kwargs.get('mgrs_grid', str())
        from geographic_msgs.msg import GeoPoint
        self.map_origin = kwargs.get('map_origin', GeoPoint())

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
        if self.projector_type != other.projector_type:
            return False
        if self.vertical_datum != other.vertical_datum:
            return False
        if self.mgrs_grid != other.mgrs_grid:
            return False
        if self.map_origin != other.map_origin:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def projector_type(self):
        """Message field 'projector_type'."""
        return self._projector_type

    @projector_type.setter
    def projector_type(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'projector_type' field must be of type 'str'"
        self._projector_type = value

    @builtins.property
    def vertical_datum(self):
        """Message field 'vertical_datum'."""
        return self._vertical_datum

    @vertical_datum.setter
    def vertical_datum(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'vertical_datum' field must be of type 'str'"
        self._vertical_datum = value

    @builtins.property
    def mgrs_grid(self):
        """Message field 'mgrs_grid'."""
        return self._mgrs_grid

    @mgrs_grid.setter
    def mgrs_grid(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'mgrs_grid' field must be of type 'str'"
        self._mgrs_grid = value

    @builtins.property
    def map_origin(self):
        """Message field 'map_origin'."""
        return self._map_origin

    @map_origin.setter
    def map_origin(self, value):
        if __debug__:
            from geographic_msgs.msg import GeoPoint
            assert \
                isinstance(value, GeoPoint), \
                "The 'map_origin' field must be a sub message of type 'GeoPoint'"
        self._map_origin = value
