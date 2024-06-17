# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tier4_perception_msgs:msg/DynamicObject.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DynamicObject(type):
    """Metaclass of message 'DynamicObject'."""

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
            module = import_type_support('tier4_perception_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tier4_perception_msgs.msg.DynamicObject')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__dynamic_object
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__dynamic_object
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__dynamic_object
            cls._TYPE_SUPPORT = module.type_support_msg__msg__dynamic_object
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__dynamic_object

            from tier4_perception_msgs.msg import Semantic
            if Semantic.__class__._TYPE_SUPPORT is None:
                Semantic.__class__.__import_type_support__()

            from tier4_perception_msgs.msg import Shape
            if Shape.__class__._TYPE_SUPPORT is None:
                Shape.__class__.__import_type_support__()

            from tier4_perception_msgs.msg import State
            if State.__class__._TYPE_SUPPORT is None:
                State.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DynamicObject(metaclass=Metaclass_DynamicObject):
    """Message class 'DynamicObject'."""

    __slots__ = [
        '_id',
        '_semantic',
        '_state',
        '_shape',
    ]

    _fields_and_field_types = {
        'id': 'unique_identifier_msgs/UUID',
        'semantic': 'tier4_perception_msgs/Semantic',
        'state': 'tier4_perception_msgs/State',
        'shape': 'tier4_perception_msgs/Shape',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['tier4_perception_msgs', 'msg'], 'Semantic'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['tier4_perception_msgs', 'msg'], 'State'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['tier4_perception_msgs', 'msg'], 'Shape'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.id = kwargs.get('id', UUID())
        from tier4_perception_msgs.msg import Semantic
        self.semantic = kwargs.get('semantic', Semantic())
        from tier4_perception_msgs.msg import State
        self.state = kwargs.get('state', State())
        from tier4_perception_msgs.msg import Shape
        self.shape = kwargs.get('shape', Shape())

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
        if self.id != other.id:
            return False
        if self.semantic != other.semantic:
            return False
        if self.state != other.state:
            return False
        if self.shape != other.shape:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

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
    def semantic(self):
        """Message field 'semantic'."""
        return self._semantic

    @semantic.setter
    def semantic(self, value):
        if __debug__:
            from tier4_perception_msgs.msg import Semantic
            assert \
                isinstance(value, Semantic), \
                "The 'semantic' field must be a sub message of type 'Semantic'"
        self._semantic = value

    @builtins.property
    def state(self):
        """Message field 'state'."""
        return self._state

    @state.setter
    def state(self, value):
        if __debug__:
            from tier4_perception_msgs.msg import State
            assert \
                isinstance(value, State), \
                "The 'state' field must be a sub message of type 'State'"
        self._state = value

    @builtins.property
    def shape(self):
        """Message field 'shape'."""
        return self._shape

    @shape.setter
    def shape(self, value):
        if __debug__:
            from tier4_perception_msgs.msg import Shape
            assert \
                isinstance(value, Shape), \
                "The 'shape' field must be a sub message of type 'Shape'"
        self._shape = value
