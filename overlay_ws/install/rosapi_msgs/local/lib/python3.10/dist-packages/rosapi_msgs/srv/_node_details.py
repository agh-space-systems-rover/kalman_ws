# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rosapi_msgs:srv/NodeDetails.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_NodeDetails_Request(type):
    """Metaclass of message 'NodeDetails_Request'."""

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
                'rosapi_msgs.srv.NodeDetails_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__node_details__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__node_details__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__node_details__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__node_details__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__node_details__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class NodeDetails_Request(metaclass=Metaclass_NodeDetails_Request):
    """Message class 'NodeDetails_Request'."""

    __slots__ = [
        '_node',
    ]

    _fields_and_field_types = {
        'node': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.node = kwargs.get('node', str())

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
        if self.node != other.node:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def node(self):
        """Message field 'node'."""
        return self._node

    @node.setter
    def node(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'node' field must be of type 'str'"
        self._node = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_NodeDetails_Response(type):
    """Metaclass of message 'NodeDetails_Response'."""

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
                'rosapi_msgs.srv.NodeDetails_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__node_details__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__node_details__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__node_details__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__node_details__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__node_details__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class NodeDetails_Response(metaclass=Metaclass_NodeDetails_Response):
    """Message class 'NodeDetails_Response'."""

    __slots__ = [
        '_subscribing',
        '_publishing',
        '_services',
    ]

    _fields_and_field_types = {
        'subscribing': 'sequence<string>',
        'publishing': 'sequence<string>',
        'services': 'sequence<string>',
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
        self.subscribing = kwargs.get('subscribing', [])
        self.publishing = kwargs.get('publishing', [])
        self.services = kwargs.get('services', [])

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
        if self.subscribing != other.subscribing:
            return False
        if self.publishing != other.publishing:
            return False
        if self.services != other.services:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def subscribing(self):
        """Message field 'subscribing'."""
        return self._subscribing

    @subscribing.setter
    def subscribing(self, value):
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
                "The 'subscribing' field must be a set or sequence and each value of type 'str'"
        self._subscribing = value

    @builtins.property
    def publishing(self):
        """Message field 'publishing'."""
        return self._publishing

    @publishing.setter
    def publishing(self, value):
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
                "The 'publishing' field must be a set or sequence and each value of type 'str'"
        self._publishing = value

    @builtins.property
    def services(self):
        """Message field 'services'."""
        return self._services

    @services.setter
    def services(self, value):
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
                "The 'services' field must be a set or sequence and each value of type 'str'"
        self._services = value


class Metaclass_NodeDetails(type):
    """Metaclass of service 'NodeDetails'."""

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
                'rosapi_msgs.srv.NodeDetails')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__node_details

            from rosapi_msgs.srv import _node_details
            if _node_details.Metaclass_NodeDetails_Request._TYPE_SUPPORT is None:
                _node_details.Metaclass_NodeDetails_Request.__import_type_support__()
            if _node_details.Metaclass_NodeDetails_Response._TYPE_SUPPORT is None:
                _node_details.Metaclass_NodeDetails_Response.__import_type_support__()


class NodeDetails(metaclass=Metaclass_NodeDetails):
    from rosapi_msgs.srv._node_details import NodeDetails_Request as Request
    from rosapi_msgs.srv._node_details import NodeDetails_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
