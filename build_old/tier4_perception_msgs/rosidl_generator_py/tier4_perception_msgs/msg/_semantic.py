# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tier4_perception_msgs:msg/Semantic.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Semantic(type):
    """Metaclass of message 'Semantic'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'UNKNOWN': 0,
        'CAR': 1,
        'TRUCK': 2,
        'BUS': 3,
        'BICYCLE': 4,
        'MOTORBIKE': 5,
        'PEDESTRIAN': 6,
        'ANIMAL': 7,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('tier4_perception_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tier4_perception_msgs.msg.Semantic')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__semantic
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__semantic
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__semantic
            cls._TYPE_SUPPORT = module.type_support_msg__msg__semantic
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__semantic

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'UNKNOWN': cls.__constants['UNKNOWN'],
            'CAR': cls.__constants['CAR'],
            'TRUCK': cls.__constants['TRUCK'],
            'BUS': cls.__constants['BUS'],
            'BICYCLE': cls.__constants['BICYCLE'],
            'MOTORBIKE': cls.__constants['MOTORBIKE'],
            'PEDESTRIAN': cls.__constants['PEDESTRIAN'],
            'ANIMAL': cls.__constants['ANIMAL'],
        }

    @property
    def UNKNOWN(self):
        """Message constant 'UNKNOWN'."""
        return Metaclass_Semantic.__constants['UNKNOWN']

    @property
    def CAR(self):
        """Message constant 'CAR'."""
        return Metaclass_Semantic.__constants['CAR']

    @property
    def TRUCK(self):
        """Message constant 'TRUCK'."""
        return Metaclass_Semantic.__constants['TRUCK']

    @property
    def BUS(self):
        """Message constant 'BUS'."""
        return Metaclass_Semantic.__constants['BUS']

    @property
    def BICYCLE(self):
        """Message constant 'BICYCLE'."""
        return Metaclass_Semantic.__constants['BICYCLE']

    @property
    def MOTORBIKE(self):
        """Message constant 'MOTORBIKE'."""
        return Metaclass_Semantic.__constants['MOTORBIKE']

    @property
    def PEDESTRIAN(self):
        """Message constant 'PEDESTRIAN'."""
        return Metaclass_Semantic.__constants['PEDESTRIAN']

    @property
    def ANIMAL(self):
        """Message constant 'ANIMAL'."""
        return Metaclass_Semantic.__constants['ANIMAL']


class Semantic(metaclass=Metaclass_Semantic):
    """
    Message class 'Semantic'.

    Constants:
      UNKNOWN
      CAR
      TRUCK
      BUS
      BICYCLE
      MOTORBIKE
      PEDESTRIAN
      ANIMAL
    """

    __slots__ = [
        '_type',
        '_confidence',
    ]

    _fields_and_field_types = {
        'type': 'uint32',
        'confidence': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.type = kwargs.get('type', int())
        self.confidence = kwargs.get('confidence', float())

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
        if self.confidence != other.confidence:
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
            assert value >= 0 and value < 4294967296, \
                "The 'type' field must be an unsigned integer in [0, 4294967295]"
        self._type = value

    @builtins.property
    def confidence(self):
        """Message field 'confidence'."""
        return self._confidence

    @confidence.setter
    def confidence(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'confidence' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'confidence' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._confidence = value
