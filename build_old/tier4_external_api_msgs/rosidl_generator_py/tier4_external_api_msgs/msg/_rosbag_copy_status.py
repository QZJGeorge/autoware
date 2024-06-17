# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tier4_external_api_msgs:msg/RosbagCopyStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RosbagCopyStatus(type):
    """Metaclass of message 'RosbagCopyStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'NONE': 0,
        'NOT_COPIED': 1,
        'IN_PROGRESS': 2,
        'SUCCESS': 3,
        'FAILED': 4,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('tier4_external_api_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tier4_external_api_msgs.msg.RosbagCopyStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__rosbag_copy_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__rosbag_copy_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__rosbag_copy_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__rosbag_copy_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__rosbag_copy_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'NONE': cls.__constants['NONE'],
            'NOT_COPIED': cls.__constants['NOT_COPIED'],
            'IN_PROGRESS': cls.__constants['IN_PROGRESS'],
            'SUCCESS': cls.__constants['SUCCESS'],
            'FAILED': cls.__constants['FAILED'],
        }

    @property
    def NONE(self):
        """Message constant 'NONE'."""
        return Metaclass_RosbagCopyStatus.__constants['NONE']

    @property
    def NOT_COPIED(self):
        """Message constant 'NOT_COPIED'."""
        return Metaclass_RosbagCopyStatus.__constants['NOT_COPIED']

    @property
    def IN_PROGRESS(self):
        """Message constant 'IN_PROGRESS'."""
        return Metaclass_RosbagCopyStatus.__constants['IN_PROGRESS']

    @property
    def SUCCESS(self):
        """Message constant 'SUCCESS'."""
        return Metaclass_RosbagCopyStatus.__constants['SUCCESS']

    @property
    def FAILED(self):
        """Message constant 'FAILED'."""
        return Metaclass_RosbagCopyStatus.__constants['FAILED']


class RosbagCopyStatus(metaclass=Metaclass_RosbagCopyStatus):
    """
    Message class 'RosbagCopyStatus'.

    Constants:
      NONE
      NOT_COPIED
      IN_PROGRESS
      SUCCESS
      FAILED
    """

    __slots__ = [
        '_status',
        '_progress_percentage',
        '_project_id',
        '_vehicle_id',
        '_date',
        '_message',
    ]

    _fields_and_field_types = {
        'status': 'uint8',
        'progress_percentage': 'uint8',
        'project_id': 'string',
        'vehicle_id': 'string',
        'date': 'string',
        'message': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.status = kwargs.get('status', int())
        self.progress_percentage = kwargs.get('progress_percentage', int())
        self.project_id = kwargs.get('project_id', str())
        self.vehicle_id = kwargs.get('vehicle_id', str())
        self.date = kwargs.get('date', str())
        self.message = kwargs.get('message', str())

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
        if self.progress_percentage != other.progress_percentage:
            return False
        if self.project_id != other.project_id:
            return False
        if self.vehicle_id != other.vehicle_id:
            return False
        if self.date != other.date:
            return False
        if self.message != other.message:
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
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'status' field must be an unsigned integer in [0, 255]"
        self._status = value

    @builtins.property
    def progress_percentage(self):
        """Message field 'progress_percentage'."""
        return self._progress_percentage

    @progress_percentage.setter
    def progress_percentage(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'progress_percentage' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'progress_percentage' field must be an unsigned integer in [0, 255]"
        self._progress_percentage = value

    @builtins.property
    def project_id(self):
        """Message field 'project_id'."""
        return self._project_id

    @project_id.setter
    def project_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'project_id' field must be of type 'str'"
        self._project_id = value

    @builtins.property
    def vehicle_id(self):
        """Message field 'vehicle_id'."""
        return self._vehicle_id

    @vehicle_id.setter
    def vehicle_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'vehicle_id' field must be of type 'str'"
        self._vehicle_id = value

    @builtins.property
    def date(self):
        """Message field 'date'."""
        return self._date

    @date.setter
    def date(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'date' field must be of type 'str'"
        self._date = value

    @builtins.property
    def message(self):
        """Message field 'message'."""
        return self._message

    @message.setter
    def message(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'message' field must be of type 'str'"
        self._message = value
