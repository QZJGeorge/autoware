# generated from rosidl_generator_py/resource/_idl.py.em
# with input from autoware_adapi_v1_msgs:msg/CooperationPolicy.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CooperationPolicy(type):
    """Metaclass of message 'CooperationPolicy'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'OPTIONAL': 1,
        'REQUIRED': 2,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('autoware_adapi_v1_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'autoware_adapi_v1_msgs.msg.CooperationPolicy')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__cooperation_policy
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__cooperation_policy
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__cooperation_policy
            cls._TYPE_SUPPORT = module.type_support_msg__msg__cooperation_policy
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__cooperation_policy

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'OPTIONAL': cls.__constants['OPTIONAL'],
            'REQUIRED': cls.__constants['REQUIRED'],
        }

    @property
    def OPTIONAL(self):
        """Message constant 'OPTIONAL'."""
        return Metaclass_CooperationPolicy.__constants['OPTIONAL']

    @property
    def REQUIRED(self):
        """Message constant 'REQUIRED'."""
        return Metaclass_CooperationPolicy.__constants['REQUIRED']


class CooperationPolicy(metaclass=Metaclass_CooperationPolicy):
    """
    Message class 'CooperationPolicy'.

    Constants:
      OPTIONAL
      REQUIRED
    """

    __slots__ = [
        '_behavior',
        '_sequence',
        '_policy',
    ]

    _fields_and_field_types = {
        'behavior': 'string',
        'sequence': 'string',
        'policy': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.behavior = kwargs.get('behavior', str())
        self.sequence = kwargs.get('sequence', str())
        self.policy = kwargs.get('policy', int())

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
        if self.behavior != other.behavior:
            return False
        if self.sequence != other.sequence:
            return False
        if self.policy != other.policy:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def behavior(self):
        """Message field 'behavior'."""
        return self._behavior

    @behavior.setter
    def behavior(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'behavior' field must be of type 'str'"
        self._behavior = value

    @builtins.property
    def sequence(self):
        """Message field 'sequence'."""
        return self._sequence

    @sequence.setter
    def sequence(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'sequence' field must be of type 'str'"
        self._sequence = value

    @builtins.property
    def policy(self):
        """Message field 'policy'."""
        return self._policy

    @policy.setter
    def policy(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'policy' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'policy' field must be an unsigned integer in [0, 255]"
        self._policy = value
