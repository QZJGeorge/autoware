# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tier4_perception_msgs:msg/DetectedObjectWithFeature.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DetectedObjectWithFeature(type):
    """Metaclass of message 'DetectedObjectWithFeature'."""

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
                'tier4_perception_msgs.msg.DetectedObjectWithFeature')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__detected_object_with_feature
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__detected_object_with_feature
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__detected_object_with_feature
            cls._TYPE_SUPPORT = module.type_support_msg__msg__detected_object_with_feature
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__detected_object_with_feature

            from autoware_auto_perception_msgs.msg import DetectedObject
            if DetectedObject.__class__._TYPE_SUPPORT is None:
                DetectedObject.__class__.__import_type_support__()

            from tier4_perception_msgs.msg import Feature
            if Feature.__class__._TYPE_SUPPORT is None:
                Feature.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DetectedObjectWithFeature(metaclass=Metaclass_DetectedObjectWithFeature):
    """Message class 'DetectedObjectWithFeature'."""

    __slots__ = [
        '_object',
        '_feature',
    ]

    _fields_and_field_types = {
        'object': 'autoware_auto_perception_msgs/DetectedObject',
        'feature': 'tier4_perception_msgs/Feature',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['autoware_auto_perception_msgs', 'msg'], 'DetectedObject'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['tier4_perception_msgs', 'msg'], 'Feature'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from autoware_auto_perception_msgs.msg import DetectedObject
        self.object = kwargs.get('object', DetectedObject())
        from tier4_perception_msgs.msg import Feature
        self.feature = kwargs.get('feature', Feature())

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
        if self.object != other.object:
            return False
        if self.feature != other.feature:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property  # noqa: A003
    def object(self):  # noqa: A003
        """Message field 'object'."""
        return self._object

    @object.setter  # noqa: A003
    def object(self, value):  # noqa: A003
        if __debug__:
            from autoware_auto_perception_msgs.msg import DetectedObject
            assert \
                isinstance(value, DetectedObject), \
                "The 'object' field must be a sub message of type 'DetectedObject'"
        self._object = value

    @builtins.property
    def feature(self):
        """Message field 'feature'."""
        return self._feature

    @feature.setter
    def feature(self, value):
        if __debug__:
            from tier4_perception_msgs.msg import Feature
            assert \
                isinstance(value, Feature), \
                "The 'feature' field must be a sub message of type 'Feature'"
        self._feature = value
