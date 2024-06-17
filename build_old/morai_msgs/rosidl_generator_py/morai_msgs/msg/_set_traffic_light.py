# generated from rosidl_generator_py/resource/_idl.py.em
# with input from morai_msgs:msg/SetTrafficLight.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SetTrafficLight(type):
    """Metaclass of message 'SetTrafficLight'."""

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
            module = import_type_support('morai_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'morai_msgs.msg.SetTrafficLight')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__set_traffic_light
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__set_traffic_light
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__set_traffic_light
            cls._TYPE_SUPPORT = module.type_support_msg__msg__set_traffic_light
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__set_traffic_light

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetTrafficLight(metaclass=Metaclass_SetTrafficLight):
    """Message class 'SetTrafficLight'."""

    __slots__ = [
        '_traffic_light_index',
        '_traffic_light_status',
    ]

    _fields_and_field_types = {
        'traffic_light_index': 'string',
        'traffic_light_status': 'int16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.traffic_light_index = kwargs.get('traffic_light_index', str())
        self.traffic_light_status = kwargs.get('traffic_light_status', int())

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
        if self.traffic_light_index != other.traffic_light_index:
            return False
        if self.traffic_light_status != other.traffic_light_status:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def traffic_light_index(self):
        """Message field 'traffic_light_index'."""
        return self._traffic_light_index

    @traffic_light_index.setter
    def traffic_light_index(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'traffic_light_index' field must be of type 'str'"
        self._traffic_light_index = value

    @builtins.property
    def traffic_light_status(self):
        """Message field 'traffic_light_status'."""
        return self._traffic_light_status

    @traffic_light_status.setter
    def traffic_light_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'traffic_light_status' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'traffic_light_status' field must be an integer in [-32768, 32767]"
        self._traffic_light_status = value
