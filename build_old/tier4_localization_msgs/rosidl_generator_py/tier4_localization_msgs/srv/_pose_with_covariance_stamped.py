# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tier4_localization_msgs:srv/PoseWithCovarianceStamped.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PoseWithCovarianceStamped_Request(type):
    """Metaclass of message 'PoseWithCovarianceStamped_Request'."""

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
            module = import_type_support('tier4_localization_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tier4_localization_msgs.srv.PoseWithCovarianceStamped_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__pose_with_covariance_stamped__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__pose_with_covariance_stamped__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__pose_with_covariance_stamped__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__pose_with_covariance_stamped__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__pose_with_covariance_stamped__request

            from geometry_msgs.msg import PoseWithCovarianceStamped
            if PoseWithCovarianceStamped.__class__._TYPE_SUPPORT is None:
                PoseWithCovarianceStamped.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PoseWithCovarianceStamped_Request(metaclass=Metaclass_PoseWithCovarianceStamped_Request):
    """Message class 'PoseWithCovarianceStamped_Request'."""

    __slots__ = [
        '_pose_with_covariance',
    ]

    _fields_and_field_types = {
        'pose_with_covariance': 'geometry_msgs/PoseWithCovarianceStamped',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'PoseWithCovarianceStamped'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from geometry_msgs.msg import PoseWithCovarianceStamped
        self.pose_with_covariance = kwargs.get('pose_with_covariance', PoseWithCovarianceStamped())

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
        if self.pose_with_covariance != other.pose_with_covariance:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def pose_with_covariance(self):
        """Message field 'pose_with_covariance'."""
        return self._pose_with_covariance

    @pose_with_covariance.setter
    def pose_with_covariance(self, value):
        if __debug__:
            from geometry_msgs.msg import PoseWithCovarianceStamped
            assert \
                isinstance(value, PoseWithCovarianceStamped), \
                "The 'pose_with_covariance' field must be a sub message of type 'PoseWithCovarianceStamped'"
        self._pose_with_covariance = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_PoseWithCovarianceStamped_Response(type):
    """Metaclass of message 'PoseWithCovarianceStamped_Response'."""

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
            module = import_type_support('tier4_localization_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tier4_localization_msgs.srv.PoseWithCovarianceStamped_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__pose_with_covariance_stamped__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__pose_with_covariance_stamped__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__pose_with_covariance_stamped__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__pose_with_covariance_stamped__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__pose_with_covariance_stamped__response

            from geometry_msgs.msg import PoseWithCovarianceStamped
            if PoseWithCovarianceStamped.__class__._TYPE_SUPPORT is None:
                PoseWithCovarianceStamped.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PoseWithCovarianceStamped_Response(metaclass=Metaclass_PoseWithCovarianceStamped_Response):
    """Message class 'PoseWithCovarianceStamped_Response'."""

    __slots__ = [
        '_success',
        '_pose_with_covariance',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'pose_with_covariance': 'geometry_msgs/PoseWithCovarianceStamped',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'PoseWithCovarianceStamped'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())
        from geometry_msgs.msg import PoseWithCovarianceStamped
        self.pose_with_covariance = kwargs.get('pose_with_covariance', PoseWithCovarianceStamped())

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
        if self.success != other.success:
            return False
        if self.pose_with_covariance != other.pose_with_covariance:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value

    @builtins.property
    def pose_with_covariance(self):
        """Message field 'pose_with_covariance'."""
        return self._pose_with_covariance

    @pose_with_covariance.setter
    def pose_with_covariance(self, value):
        if __debug__:
            from geometry_msgs.msg import PoseWithCovarianceStamped
            assert \
                isinstance(value, PoseWithCovarianceStamped), \
                "The 'pose_with_covariance' field must be a sub message of type 'PoseWithCovarianceStamped'"
        self._pose_with_covariance = value


class Metaclass_PoseWithCovarianceStamped(type):
    """Metaclass of service 'PoseWithCovarianceStamped'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('tier4_localization_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tier4_localization_msgs.srv.PoseWithCovarianceStamped')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__pose_with_covariance_stamped

            from tier4_localization_msgs.srv import _pose_with_covariance_stamped
            if _pose_with_covariance_stamped.Metaclass_PoseWithCovarianceStamped_Request._TYPE_SUPPORT is None:
                _pose_with_covariance_stamped.Metaclass_PoseWithCovarianceStamped_Request.__import_type_support__()
            if _pose_with_covariance_stamped.Metaclass_PoseWithCovarianceStamped_Response._TYPE_SUPPORT is None:
                _pose_with_covariance_stamped.Metaclass_PoseWithCovarianceStamped_Response.__import_type_support__()


class PoseWithCovarianceStamped(metaclass=Metaclass_PoseWithCovarianceStamped):
    from tier4_localization_msgs.srv._pose_with_covariance_stamped import PoseWithCovarianceStamped_Request as Request
    from tier4_localization_msgs.srv._pose_with_covariance_stamped import PoseWithCovarianceStamped_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
