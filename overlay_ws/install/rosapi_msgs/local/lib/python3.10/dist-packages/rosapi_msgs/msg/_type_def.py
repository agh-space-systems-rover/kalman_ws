# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rosapi_msgs:msg/TypeDef.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'fieldarraylen'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TypeDef(type):
    """Metaclass of message 'TypeDef'."""

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
                'rosapi_msgs.msg.TypeDef')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__type_def
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__type_def
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__type_def
            cls._TYPE_SUPPORT = module.type_support_msg__msg__type_def
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__type_def

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TypeDef(metaclass=Metaclass_TypeDef):
    """Message class 'TypeDef'."""

    __slots__ = [
        '_type',
        '_fieldnames',
        '_fieldtypes',
        '_fieldarraylen',
        '_examples',
        '_constnames',
        '_constvalues',
    ]

    _fields_and_field_types = {
        'type': 'string',
        'fieldnames': 'sequence<string>',
        'fieldtypes': 'sequence<string>',
        'fieldarraylen': 'sequence<int32>',
        'examples': 'sequence<string>',
        'constnames': 'sequence<string>',
        'constvalues': 'sequence<string>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.type = kwargs.get('type', str())
        self.fieldnames = kwargs.get('fieldnames', [])
        self.fieldtypes = kwargs.get('fieldtypes', [])
        self.fieldarraylen = array.array('i', kwargs.get('fieldarraylen', []))
        self.examples = kwargs.get('examples', [])
        self.constnames = kwargs.get('constnames', [])
        self.constvalues = kwargs.get('constvalues', [])

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
        if self.fieldnames != other.fieldnames:
            return False
        if self.fieldtypes != other.fieldtypes:
            return False
        if self.fieldarraylen != other.fieldarraylen:
            return False
        if self.examples != other.examples:
            return False
        if self.constnames != other.constnames:
            return False
        if self.constvalues != other.constvalues:
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

    @builtins.property
    def fieldnames(self):
        """Message field 'fieldnames'."""
        return self._fieldnames

    @fieldnames.setter
    def fieldnames(self, value):
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
                "The 'fieldnames' field must be a set or sequence and each value of type 'str'"
        self._fieldnames = value

    @builtins.property
    def fieldtypes(self):
        """Message field 'fieldtypes'."""
        return self._fieldtypes

    @fieldtypes.setter
    def fieldtypes(self, value):
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
                "The 'fieldtypes' field must be a set or sequence and each value of type 'str'"
        self._fieldtypes = value

    @builtins.property
    def fieldarraylen(self):
        """Message field 'fieldarraylen'."""
        return self._fieldarraylen

    @fieldarraylen.setter
    def fieldarraylen(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'fieldarraylen' array.array() must have the type code of 'i'"
            self._fieldarraylen = value
            return
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'fieldarraylen' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._fieldarraylen = array.array('i', value)

    @builtins.property
    def examples(self):
        """Message field 'examples'."""
        return self._examples

    @examples.setter
    def examples(self, value):
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
                "The 'examples' field must be a set or sequence and each value of type 'str'"
        self._examples = value

    @builtins.property
    def constnames(self):
        """Message field 'constnames'."""
        return self._constnames

    @constnames.setter
    def constnames(self, value):
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
                "The 'constnames' field must be a set or sequence and each value of type 'str'"
        self._constnames = value

    @builtins.property
    def constvalues(self):
        """Message field 'constvalues'."""
        return self._constvalues

    @constvalues.setter
    def constvalues(self, value):
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
                "The 'constvalues' field must be a set or sequence and each value of type 'str'"
        self._constvalues = value
