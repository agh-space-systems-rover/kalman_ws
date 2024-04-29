# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rosapi_msgs:srv/TopicsAndRawTypes.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TopicsAndRawTypes_Request(type):
    """Metaclass of message 'TopicsAndRawTypes_Request'."""

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
                'rosapi_msgs.srv.TopicsAndRawTypes_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__topics_and_raw_types__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__topics_and_raw_types__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__topics_and_raw_types__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__topics_and_raw_types__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__topics_and_raw_types__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TopicsAndRawTypes_Request(metaclass=Metaclass_TopicsAndRawTypes_Request):
    """Message class 'TopicsAndRawTypes_Request'."""

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


class Metaclass_TopicsAndRawTypes_Response(type):
    """Metaclass of message 'TopicsAndRawTypes_Response'."""

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
                'rosapi_msgs.srv.TopicsAndRawTypes_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__topics_and_raw_types__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__topics_and_raw_types__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__topics_and_raw_types__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__topics_and_raw_types__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__topics_and_raw_types__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TopicsAndRawTypes_Response(metaclass=Metaclass_TopicsAndRawTypes_Response):
    """Message class 'TopicsAndRawTypes_Response'."""

    __slots__ = [
        '_topics',
        '_types',
        '_typedefs_full_text',
    ]

    _fields_and_field_types = {
        'topics': 'sequence<string>',
        'types': 'sequence<string>',
        'typedefs_full_text': 'sequence<string>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.topics = kwargs.get('topics', [])
        self.types = kwargs.get('types', [])
        self.typedefs_full_text = kwargs.get('typedefs_full_text', [])

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
        if self.topics != other.topics:
            return False
        if self.types != other.types:
            return False
        if self.typedefs_full_text != other.typedefs_full_text:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def topics(self):
        """Message field 'topics'."""
        return self._topics

    @topics.setter
    def topics(self, value):
        if __debug__:
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
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'topics' field must be a set or sequence and each value of type 'str'"
        self._topics = value

    @builtins.property
    def types(self):
        """Message field 'types'."""
        return self._types

    @types.setter
    def types(self, value):
        if __debug__:
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
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'types' field must be a set or sequence and each value of type 'str'"
        self._types = value

    @builtins.property
    def typedefs_full_text(self):
        """Message field 'typedefs_full_text'."""
        return self._typedefs_full_text

    @typedefs_full_text.setter
    def typedefs_full_text(self, value):
        if __debug__:
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
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'typedefs_full_text' field must be a set or sequence and each value of type 'str'"
        self._typedefs_full_text = value


class Metaclass_TopicsAndRawTypes(type):
    """Metaclass of service 'TopicsAndRawTypes'."""

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
                'rosapi_msgs.srv.TopicsAndRawTypes')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__topics_and_raw_types

            from rosapi_msgs.srv import _topics_and_raw_types
            if _topics_and_raw_types.Metaclass_TopicsAndRawTypes_Request._TYPE_SUPPORT is None:
                _topics_and_raw_types.Metaclass_TopicsAndRawTypes_Request.__import_type_support__()
            if _topics_and_raw_types.Metaclass_TopicsAndRawTypes_Response._TYPE_SUPPORT is None:
                _topics_and_raw_types.Metaclass_TopicsAndRawTypes_Response.__import_type_support__()


class TopicsAndRawTypes(metaclass=Metaclass_TopicsAndRawTypes):
    from rosapi_msgs.srv._topics_and_raw_types import TopicsAndRawTypes_Request as Request
    from rosapi_msgs.srv._topics_and_raw_types import TopicsAndRawTypes_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
