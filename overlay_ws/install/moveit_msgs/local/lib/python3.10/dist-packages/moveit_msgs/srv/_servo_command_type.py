# generated from rosidl_generator_py/resource/_idl.py.em
# with input from moveit_msgs:srv/ServoCommandType.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ServoCommandType_Request(type):
    """Metaclass of message 'ServoCommandType_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'JOINT_JOG': 0,
        'TWIST': 1,
        'POSE': 2,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('moveit_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'moveit_msgs.srv.ServoCommandType_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__servo_command_type__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__servo_command_type__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__servo_command_type__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__servo_command_type__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__servo_command_type__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'JOINT_JOG': cls.__constants['JOINT_JOG'],
            'TWIST': cls.__constants['TWIST'],
            'POSE': cls.__constants['POSE'],
        }

    @property
    def JOINT_JOG(self):
        """Message constant 'JOINT_JOG'."""
        return Metaclass_ServoCommandType_Request.__constants['JOINT_JOG']

    @property
    def TWIST(self):
        """Message constant 'TWIST'."""
        return Metaclass_ServoCommandType_Request.__constants['TWIST']

    @property
    def POSE(self):
        """Message constant 'POSE'."""
        return Metaclass_ServoCommandType_Request.__constants['POSE']


class ServoCommandType_Request(metaclass=Metaclass_ServoCommandType_Request):
    """
    Message class 'ServoCommandType_Request'.

    Constants:
      JOINT_JOG
      TWIST
      POSE
    """

    __slots__ = [
        '_command_type',
    ]

    _fields_and_field_types = {
        'command_type': 'int8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.command_type = kwargs.get('command_type', int())

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
        if self.command_type != other.command_type:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def command_type(self):
        """Message field 'command_type'."""
        return self._command_type

    @command_type.setter
    def command_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'command_type' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'command_type' field must be an integer in [-128, 127]"
        self._command_type = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ServoCommandType_Response(type):
    """Metaclass of message 'ServoCommandType_Response'."""

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
            module = import_type_support('moveit_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'moveit_msgs.srv.ServoCommandType_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__servo_command_type__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__servo_command_type__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__servo_command_type__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__servo_command_type__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__servo_command_type__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ServoCommandType_Response(metaclass=Metaclass_ServoCommandType_Response):
    """Message class 'ServoCommandType_Response'."""

    __slots__ = [
        '_success',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())

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


class Metaclass_ServoCommandType(type):
    """Metaclass of service 'ServoCommandType'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('moveit_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'moveit_msgs.srv.ServoCommandType')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__servo_command_type

            from moveit_msgs.srv import _servo_command_type
            if _servo_command_type.Metaclass_ServoCommandType_Request._TYPE_SUPPORT is None:
                _servo_command_type.Metaclass_ServoCommandType_Request.__import_type_support__()
            if _servo_command_type.Metaclass_ServoCommandType_Response._TYPE_SUPPORT is None:
                _servo_command_type.Metaclass_ServoCommandType_Response.__import_type_support__()


class ServoCommandType(metaclass=Metaclass_ServoCommandType):
    from moveit_msgs.srv._servo_command_type import ServoCommandType_Request as Request
    from moveit_msgs.srv._servo_command_type import ServoCommandType_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
