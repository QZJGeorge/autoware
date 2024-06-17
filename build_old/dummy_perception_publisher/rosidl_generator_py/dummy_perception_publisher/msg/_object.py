# generated from rosidl_generator_py/resource/_idl.py.em
# with input from dummy_perception_publisher:msg/Object.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Object(type):
    """Metaclass of message 'Object'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'ADD': 0,
        'MODIFY': 1,
        'DELETE': 2,
        'DELETEALL': 3,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('dummy_perception_publisher')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'dummy_perception_publisher.msg.Object')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__object
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__object
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__object
            cls._TYPE_SUPPORT = module.type_support_msg__msg__object
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__object

            from autoware_auto_perception_msgs.msg import ObjectClassification
            if ObjectClassification.__class__._TYPE_SUPPORT is None:
                ObjectClassification.__class__.__import_type_support__()

            from autoware_auto_perception_msgs.msg import Shape
            if Shape.__class__._TYPE_SUPPORT is None:
                Shape.__class__.__import_type_support__()

            from dummy_perception_publisher.msg import InitialState
            if InitialState.__class__._TYPE_SUPPORT is None:
                InitialState.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'ADD': cls.__constants['ADD'],
            'MODIFY': cls.__constants['MODIFY'],
            'DELETE': cls.__constants['DELETE'],
            'DELETEALL': cls.__constants['DELETEALL'],
        }

    @property
    def ADD(self):
        """Message constant 'ADD'."""
        return Metaclass_Object.__constants['ADD']

    @property
    def MODIFY(self):
        """Message constant 'MODIFY'."""
        return Metaclass_Object.__constants['MODIFY']

    @property
    def DELETE(self):
        """Message constant 'DELETE'."""
        return Metaclass_Object.__constants['DELETE']

    @property
    def DELETEALL(self):
        """Message constant 'DELETEALL'."""
        return Metaclass_Object.__constants['DELETEALL']


class Object(metaclass=Metaclass_Object):
    """
    Message class 'Object'.

    Constants:
      ADD
      MODIFY
      DELETE
      DELETEALL
    """

    __slots__ = [
        '_header',
        '_id',
        '_initial_state',
        '_classification',
        '_shape',
        '_max_velocity',
        '_min_velocity',
        '_action',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'id': 'unique_identifier_msgs/UUID',
        'initial_state': 'dummy_perception_publisher/InitialState',
        'classification': 'autoware_auto_perception_msgs/ObjectClassification',
        'shape': 'autoware_auto_perception_msgs/Shape',
        'max_velocity': 'float',
        'min_velocity': 'float',
        'action': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['dummy_perception_publisher', 'msg'], 'InitialState'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['autoware_auto_perception_msgs', 'msg'], 'ObjectClassification'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['autoware_auto_perception_msgs', 'msg'], 'Shape'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        from unique_identifier_msgs.msg import UUID
        self.id = kwargs.get('id', UUID())
        from dummy_perception_publisher.msg import InitialState
        self.initial_state = kwargs.get('initial_state', InitialState())
        from autoware_auto_perception_msgs.msg import ObjectClassification
        self.classification = kwargs.get('classification', ObjectClassification())
        from autoware_auto_perception_msgs.msg import Shape
        self.shape = kwargs.get('shape', Shape())
        self.max_velocity = kwargs.get('max_velocity', float())
        self.min_velocity = kwargs.get('min_velocity', float())
        self.action = kwargs.get('action', int())

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
        if self.id != other.id:
            return False
        if self.initial_state != other.initial_state:
            return False
        if self.classification != other.classification:
            return False
        if self.shape != other.shape:
            return False
        if self.max_velocity != other.max_velocity:
            return False
        if self.min_velocity != other.min_velocity:
            return False
        if self.action != other.action:
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

    @builtins.property  # noqa: A003
    def id(self):  # noqa: A003
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value):  # noqa: A003
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'id' field must be a sub message of type 'UUID'"
        self._id = value

    @builtins.property
    def initial_state(self):
        """Message field 'initial_state'."""
        return self._initial_state

    @initial_state.setter
    def initial_state(self, value):
        if __debug__:
            from dummy_perception_publisher.msg import InitialState
            assert \
                isinstance(value, InitialState), \
                "The 'initial_state' field must be a sub message of type 'InitialState'"
        self._initial_state = value

    @builtins.property
    def classification(self):
        """Message field 'classification'."""
        return self._classification

    @classification.setter
    def classification(self, value):
        if __debug__:
            from autoware_auto_perception_msgs.msg import ObjectClassification
            assert \
                isinstance(value, ObjectClassification), \
                "The 'classification' field must be a sub message of type 'ObjectClassification'"
        self._classification = value

    @builtins.property
    def shape(self):
        """Message field 'shape'."""
        return self._shape

    @shape.setter
    def shape(self, value):
        if __debug__:
            from autoware_auto_perception_msgs.msg import Shape
            assert \
                isinstance(value, Shape), \
                "The 'shape' field must be a sub message of type 'Shape'"
        self._shape = value

    @builtins.property
    def max_velocity(self):
        """Message field 'max_velocity'."""
        return self._max_velocity

    @max_velocity.setter
    def max_velocity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_velocity' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'max_velocity' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._max_velocity = value

    @builtins.property
    def min_velocity(self):
        """Message field 'min_velocity'."""
        return self._min_velocity

    @min_velocity.setter
    def min_velocity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'min_velocity' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'min_velocity' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._min_velocity = value

    @builtins.property
    def action(self):
        """Message field 'action'."""
        return self._action

    @action.setter
    def action(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'action' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'action' field must be an integer in [-2147483648, 2147483647]"
        self._action = value
