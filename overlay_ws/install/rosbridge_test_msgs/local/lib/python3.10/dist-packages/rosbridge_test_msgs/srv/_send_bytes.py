# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rosbridge_test_msgs:srv/SendBytes.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SendBytes_Request(type):
    """Metaclass of message 'SendBytes_Request'."""

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
            module = import_type_support('rosbridge_test_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'rosbridge_test_msgs.srv.SendBytes_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__send_bytes__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__send_bytes__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__send_bytes__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__send_bytes__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__send_bytes__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SendBytes_Request(metaclass=Metaclass_SendBytes_Request):
    """Message class 'SendBytes_Request'."""

    __slots__ = [
        '_count',
    ]

    _fields_and_field_types = {
        'count': 'int64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.count = kwargs.get('count', int())

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
        if self.count != other.count:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def count(self):
        """Message field 'count'."""
        return self._count

    @count.setter
    def count(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'count' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'count' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._count = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SendBytes_Response(type):
    """Metaclass of message 'SendBytes_Response'."""

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
            module = import_type_support('rosbridge_test_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'rosbridge_test_msgs.srv.SendBytes_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__send_bytes__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__send_bytes__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__send_bytes__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__send_bytes__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__send_bytes__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SendBytes_Response(metaclass=Metaclass_SendBytes_Response):
    """Message class 'SendBytes_Response'."""

    __slots__ = [
        '_data',
    ]

    _fields_and_field_types = {
        'data': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.data = kwargs.get('data', str())

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
        if self.data != other.data:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def data(self):
        """Message field 'data'."""
        return self._data

    @data.setter
    def data(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'data' field must be of type 'str'"
        self._data = value


class Metaclass_SendBytes(type):
    """Metaclass of service 'SendBytes'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('rosbridge_test_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'rosbridge_test_msgs.srv.SendBytes')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__send_bytes

            from rosbridge_test_msgs.srv import _send_bytes
            if _send_bytes.Metaclass_SendBytes_Request._TYPE_SUPPORT is None:
                _send_bytes.Metaclass_SendBytes_Request.__import_type_support__()
            if _send_bytes.Metaclass_SendBytes_Response._TYPE_SUPPORT is None:
                _send_bytes.Metaclass_SendBytes_Response.__import_type_support__()


class SendBytes(metaclass=Metaclass_SendBytes):
    from rosbridge_test_msgs.srv._send_bytes import SendBytes_Request as Request
    from rosbridge_test_msgs.srv._send_bytes import SendBytes_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
