# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rosapi_msgs:srv/ServiceResponseDetails.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ServiceResponseDetails_Request(type):
    """Metaclass of message 'ServiceResponseDetails_Request'."""

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
            module = import_type_support('rosapi_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'rosapi_msgs.srv.ServiceResponseDetails_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__service_response_details__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__service_response_details__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__service_response_details__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__service_response_details__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__service_response_details__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ServiceResponseDetails_Request(metaclass=Metaclass_ServiceResponseDetails_Request):
    """Message class 'ServiceResponseDetails_Request'."""

    __slots__ = [
        '_type',
    ]

    _fields_and_field_types = {
        'type': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.type = kwargs.get('type', str())

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
        if self.type != other.type:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property  # noqa: A003
    def type(self):  # noqa: A003
        """Message field 'type'."""
        return self._type

    @type.setter  # noqa: A003
    def type(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'type' field must be of type 'str'"
        self._type = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ServiceResponseDetails_Response(type):
    """Metaclass of message 'ServiceResponseDetails_Response'."""

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
            module = import_type_support('rosapi_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'rosapi_msgs.srv.ServiceResponseDetails_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__service_response_details__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__service_response_details__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__service_response_details__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__service_response_details__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__service_response_details__response

            from rosapi_msgs.msg import TypeDef
            if TypeDef.__class__._TYPE_SUPPORT is None:
                TypeDef.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ServiceResponseDetails_Response(metaclass=Metaclass_ServiceResponseDetails_Response):
    """Message class 'ServiceResponseDetails_Response'."""

    __slots__ = [
        '_typedefs',
    ]

    _fields_and_field_types = {
        'typedefs': 'sequence<rosapi_msgs/TypeDef>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['rosapi_msgs', 'msg'], 'TypeDef')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.typedefs = kwargs.get('typedefs', [])

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
        if self.typedefs != other.typedefs:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def typedefs(self):
        """Message field 'typedefs'."""
        return self._typedefs

    @typedefs.setter
    def typedefs(self, value):
        if __debug__:
            from rosapi_msgs.msg import TypeDef
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, TypeDef) for v in value) and
                 True), \
                "The 'typedefs' field must be a set or sequence and each value of type 'TypeDef'"
        self._typedefs = value


class Metaclass_ServiceResponseDetails(type):
    """Metaclass of service 'ServiceResponseDetails'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('rosapi_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'rosapi_msgs.srv.ServiceResponseDetails')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__service_response_details

            from rosapi_msgs.srv import _service_response_details
            if _service_response_details.Metaclass_ServiceResponseDetails_Request._TYPE_SUPPORT is None:
                _service_response_details.Metaclass_ServiceResponseDetails_Request.__import_type_support__()
            if _service_response_details.Metaclass_ServiceResponseDetails_Response._TYPE_SUPPORT is None:
                _service_response_details.Metaclass_ServiceResponseDetails_Response.__import_type_support__()


class ServiceResponseDetails(metaclass=Metaclass_ServiceResponseDetails):
    from rosapi_msgs.srv._service_response_details import ServiceResponseDetails_Request as Request
    from rosapi_msgs.srv._service_response_details import ServiceResponseDetails_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
