# generated from rosidl_generator_py/resource/_idl.py.em
# with input from autoware_adapi_v1_msgs:srv/GetVehicleDimensions.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GetVehicleDimensions_Request(type):
    """Metaclass of message 'GetVehicleDimensions_Request'."""

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
                'autoware_adapi_v1_msgs.srv.GetVehicleDimensions_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_vehicle_dimensions__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_vehicle_dimensions__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_vehicle_dimensions__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_vehicle_dimensions__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_vehicle_dimensions__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetVehicleDimensions_Request(metaclass=Metaclass_GetVehicleDimensions_Request):
    """Message class 'GetVehicleDimensions_Request'."""

    __slots__ = [
    ]

    _fields_and_field_types = {
    }

    SLOT_TYPES = (
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))

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
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)


# Import statements for member types

import builtins  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_GetVehicleDimensions_Response(type):
    """Metaclass of message 'GetVehicleDimensions_Response'."""

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
                'autoware_adapi_v1_msgs.srv.GetVehicleDimensions_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_vehicle_dimensions__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_vehicle_dimensions__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_vehicle_dimensions__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_vehicle_dimensions__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_vehicle_dimensions__response

            from autoware_adapi_v1_msgs.msg import ResponseStatus
            if ResponseStatus.__class__._TYPE_SUPPORT is None:
                ResponseStatus.__class__.__import_type_support__()

            from autoware_adapi_v1_msgs.msg import VehicleDimensions
            if VehicleDimensions.__class__._TYPE_SUPPORT is None:
                VehicleDimensions.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetVehicleDimensions_Response(metaclass=Metaclass_GetVehicleDimensions_Response):
    """Message class 'GetVehicleDimensions_Response'."""

    __slots__ = [
        '_status',
        '_dimensions',
    ]

    _fields_and_field_types = {
        'status': 'autoware_adapi_v1_msgs/ResponseStatus',
        'dimensions': 'autoware_adapi_v1_msgs/VehicleDimensions',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['autoware_adapi_v1_msgs', 'msg'], 'ResponseStatus'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['autoware_adapi_v1_msgs', 'msg'], 'VehicleDimensions'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from autoware_adapi_v1_msgs.msg import ResponseStatus
        self.status = kwargs.get('status', ResponseStatus())
        from autoware_adapi_v1_msgs.msg import VehicleDimensions
        self.dimensions = kwargs.get('dimensions', VehicleDimensions())

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
        if self.status != other.status:
            return False
        if self.dimensions != other.dimensions:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            from autoware_adapi_v1_msgs.msg import ResponseStatus
            assert \
                isinstance(value, ResponseStatus), \
                "The 'status' field must be a sub message of type 'ResponseStatus'"
        self._status = value

    @builtins.property
    def dimensions(self):
        """Message field 'dimensions'."""
        return self._dimensions

    @dimensions.setter
    def dimensions(self, value):
        if __debug__:
            from autoware_adapi_v1_msgs.msg import VehicleDimensions
            assert \
                isinstance(value, VehicleDimensions), \
                "The 'dimensions' field must be a sub message of type 'VehicleDimensions'"
        self._dimensions = value


class Metaclass_GetVehicleDimensions(type):
    """Metaclass of service 'GetVehicleDimensions'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('autoware_adapi_v1_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'autoware_adapi_v1_msgs.srv.GetVehicleDimensions')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__get_vehicle_dimensions

            from autoware_adapi_v1_msgs.srv import _get_vehicle_dimensions
            if _get_vehicle_dimensions.Metaclass_GetVehicleDimensions_Request._TYPE_SUPPORT is None:
                _get_vehicle_dimensions.Metaclass_GetVehicleDimensions_Request.__import_type_support__()
            if _get_vehicle_dimensions.Metaclass_GetVehicleDimensions_Response._TYPE_SUPPORT is None:
                _get_vehicle_dimensions.Metaclass_GetVehicleDimensions_Response.__import_type_support__()


class GetVehicleDimensions(metaclass=Metaclass_GetVehicleDimensions):
    from autoware_adapi_v1_msgs.srv._get_vehicle_dimensions import GetVehicleDimensions_Request as Request
    from autoware_adapi_v1_msgs.srv._get_vehicle_dimensions import GetVehicleDimensions_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
