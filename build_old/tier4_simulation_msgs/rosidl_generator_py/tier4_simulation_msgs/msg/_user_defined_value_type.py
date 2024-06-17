# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tier4_simulation_msgs:msg/UserDefinedValueType.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_UserDefinedValueType(type):
    """Metaclass of message 'UserDefinedValueType'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'BOOLEAN': 0,
        'DATE_TIME': 1,
        'DOUBLE': 2,
        'INTEGER': 3,
        'STRING': 4,
        'UNSIGNED_INT': 5,
        'UNSIGNED_SHORT': 6,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('tier4_simulation_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tier4_simulation_msgs.msg.UserDefinedValueType')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__user_defined_value_type
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__user_defined_value_type
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__user_defined_value_type
            cls._TYPE_SUPPORT = module.type_support_msg__msg__user_defined_value_type
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__user_defined_value_type

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'BOOLEAN': cls.__constants['BOOLEAN'],
            'DATE_TIME': cls.__constants['DATE_TIME'],
            'DOUBLE': cls.__constants['DOUBLE'],
            'INTEGER': cls.__constants['INTEGER'],
            'STRING': cls.__constants['STRING'],
            'UNSIGNED_INT': cls.__constants['UNSIGNED_INT'],
            'UNSIGNED_SHORT': cls.__constants['UNSIGNED_SHORT'],
        }

    @property
    def BOOLEAN(self):
        """Message constant 'BOOLEAN'."""
        return Metaclass_UserDefinedValueType.__constants['BOOLEAN']

    @property
    def DATE_TIME(self):
        """Message constant 'DATE_TIME'."""
        return Metaclass_UserDefinedValueType.__constants['DATE_TIME']

    @property
    def DOUBLE(self):
        """Message constant 'DOUBLE'."""
        return Metaclass_UserDefinedValueType.__constants['DOUBLE']

    @property
    def INTEGER(self):
        """Message constant 'INTEGER'."""
        return Metaclass_UserDefinedValueType.__constants['INTEGER']

    @property
    def STRING(self):
        """Message constant 'STRING'."""
        return Metaclass_UserDefinedValueType.__constants['STRING']

    @property
    def UNSIGNED_INT(self):
        """Message constant 'UNSIGNED_INT'."""
        return Metaclass_UserDefinedValueType.__constants['UNSIGNED_INT']

    @property
    def UNSIGNED_SHORT(self):
        """Message constant 'UNSIGNED_SHORT'."""
        return Metaclass_UserDefinedValueType.__constants['UNSIGNED_SHORT']


class UserDefinedValueType(metaclass=Metaclass_UserDefinedValueType):
    """
    Message class 'UserDefinedValueType'.

    Constants:
      BOOLEAN
      DATE_TIME
      DOUBLE
      INTEGER
      STRING
      UNSIGNED_INT
      UNSIGNED_SHORT
    """

    __slots__ = [
        '_data',
    ]

    _fields_and_field_types = {
        'data': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.data = kwargs.get('data', int())

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
        if self.data != other.data:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def data(self):
        """Message field 'data'."""
        return self._data

    @data.setter
    def data(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'data' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'data' field must be an unsigned integer in [0, 255]"
        self._data = value
