# generated from rosidl_generator_py/resource/_idl.py.em
# with input from autoware_adapi_v1_msgs:msg/CooperationStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CooperationStatus(type):
    """Metaclass of message 'CooperationStatus'."""

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
            module = import_type_support('autoware_adapi_v1_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'autoware_adapi_v1_msgs.msg.CooperationStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__cooperation_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__cooperation_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__cooperation_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__cooperation_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__cooperation_status

            from autoware_adapi_v1_msgs.msg import CooperationDecision
            if CooperationDecision.__class__._TYPE_SUPPORT is None:
                CooperationDecision.__class__.__import_type_support__()

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


class CooperationStatus(metaclass=Metaclass_CooperationStatus):
    """Message class 'CooperationStatus'."""

    __slots__ = [
        '_uuid',
        '_autonomous',
        '_cooperator',
        '_cancellable',
    ]

    _fields_and_field_types = {
        'uuid': 'unique_identifier_msgs/UUID',
        'autonomous': 'autoware_adapi_v1_msgs/CooperationDecision',
        'cooperator': 'autoware_adapi_v1_msgs/CooperationDecision',
        'cancellable': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['autoware_adapi_v1_msgs', 'msg'], 'CooperationDecision'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['autoware_adapi_v1_msgs', 'msg'], 'CooperationDecision'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.uuid = kwargs.get('uuid', UUID())
        from autoware_adapi_v1_msgs.msg import CooperationDecision
        self.autonomous = kwargs.get('autonomous', CooperationDecision())
        from autoware_adapi_v1_msgs.msg import CooperationDecision
        self.cooperator = kwargs.get('cooperator', CooperationDecision())
        self.cancellable = kwargs.get('cancellable', bool())

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
        if self.uuid != other.uuid:
            return False
        if self.autonomous != other.autonomous:
            return False
        if self.cooperator != other.cooperator:
            return False
        if self.cancellable != other.cancellable:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def uuid(self):
        """Message field 'uuid'."""
        return self._uuid

    @uuid.setter
    def uuid(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'uuid' field must be a sub message of type 'UUID'"
        self._uuid = value

    @builtins.property
    def autonomous(self):
        """Message field 'autonomous'."""
        return self._autonomous

    @autonomous.setter
    def autonomous(self, value):
        if __debug__:
            from autoware_adapi_v1_msgs.msg import CooperationDecision
            assert \
                isinstance(value, CooperationDecision), \
                "The 'autonomous' field must be a sub message of type 'CooperationDecision'"
        self._autonomous = value

    @builtins.property
    def cooperator(self):
        """Message field 'cooperator'."""
        return self._cooperator

    @cooperator.setter
    def cooperator(self, value):
        if __debug__:
            from autoware_adapi_v1_msgs.msg import CooperationDecision
            assert \
                isinstance(value, CooperationDecision), \
                "The 'cooperator' field must be a sub message of type 'CooperationDecision'"
        self._cooperator = value

    @builtins.property
    def cancellable(self):
        """Message field 'cancellable'."""
        return self._cancellable

    @cancellable.setter
    def cancellable(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'cancellable' field must be of type 'bool'"
        self._cancellable = value
