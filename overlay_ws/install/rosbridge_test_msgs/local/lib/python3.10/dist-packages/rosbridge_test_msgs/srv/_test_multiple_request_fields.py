# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rosbridge_test_msgs:srv/TestMultipleRequestFields.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TestMultipleRequestFields_Request(type):
    """Metaclass of message 'TestMultipleRequestFields_Request'."""

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
                'rosbridge_test_msgs.srv.TestMultipleRequestFields_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__test_multiple_request_fields__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__test_multiple_request_fields__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__test_multiple_request_fields__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__test_multiple_request_fields__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__test_multiple_request_fields__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TestMultipleRequestFields_Request(metaclass=Metaclass_TestMultipleRequestFields_Request):
    """Message class 'TestMultipleRequestFields_Request'."""

    __slots__ = [
        '_int_value',
        '_float_value',
        '_string',
        '_bool_value',
    ]

    _fields_and_field_types = {
        'int_value': 'int32',
        'float_value': 'float',
        'string': 'string',
        'bool_value': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.int_value = kwargs.get('int_value', int())
        self.float_value = kwargs.get('float_value', float())
        self.string = kwargs.get('string', str())
        self.bool_value = kwargs.get('bool_value', bool())

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
        if self.int_value != other.int_value:
            return False
        if self.float_value != other.float_value:
            return False
        if self.string != other.string:
            return False
        if self.bool_value != other.bool_value:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def int_value(self):
        """Message field 'int_value'."""
        return self._int_value

    @int_value.setter
    def int_value(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'int_value' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'int_value' field must be an integer in [-2147483648, 2147483647]"
        self._int_value = value

    @builtins.property
    def float_value(self):
        """Message field 'float_value'."""
        return self._float_value

    @float_value.setter
    def float_value(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'float_value' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'float_value' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._float_value = value

    @builtins.property
    def string(self):
        """Message field 'string'."""
        return self._string

    @string.setter
    def string(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'string' field must be of type 'str'"
        self._string = value

    @builtins.property
    def bool_value(self):
        """Message field 'bool_value'."""
        return self._bool_value

    @bool_value.setter
    def bool_value(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'bool_value' field must be of type 'bool'"
        self._bool_value = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_TestMultipleRequestFields_Response(type):
    """Metaclass of message 'TestMultipleRequestFields_Response'."""

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
                'rosbridge_test_msgs.srv.TestMultipleRequestFields_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__test_multiple_request_fields__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__test_multiple_request_fields__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__test_multiple_request_fields__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__test_multiple_request_fields__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__test_multiple_request_fields__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TestMultipleRequestFields_Response(metaclass=Metaclass_TestMultipleRequestFields_Response):
    """Message class 'TestMultipleRequestFields_Response'."""

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


class Metaclass_TestMultipleRequestFields(type):
    """Metaclass of service 'TestMultipleRequestFields'."""

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
                'rosbridge_test_msgs.srv.TestMultipleRequestFields')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__test_multiple_request_fields

            from rosbridge_test_msgs.srv import _test_multiple_request_fields
            if _test_multiple_request_fields.Metaclass_TestMultipleRequestFields_Request._TYPE_SUPPORT is None:
                _test_multiple_request_fields.Metaclass_TestMultipleRequestFields_Request.__import_type_support__()
            if _test_multiple_request_fields.Metaclass_TestMultipleRequestFields_Response._TYPE_SUPPORT is None:
                _test_multiple_request_fields.Metaclass_TestMultipleRequestFields_Response.__import_type_support__()


class TestMultipleRequestFields(metaclass=Metaclass_TestMultipleRequestFields):
    from rosbridge_test_msgs.srv._test_multiple_request_fields import TestMultipleRequestFields_Request as Request
    from rosbridge_test_msgs.srv._test_multiple_request_fields import TestMultipleRequestFields_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
