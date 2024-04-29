# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rosbridge_test_msgs:action/TestMultipleGoalFields.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TestMultipleGoalFields_Goal(type):
    """Metaclass of message 'TestMultipleGoalFields_Goal'."""

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
                'rosbridge_test_msgs.action.TestMultipleGoalFields_Goal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__test_multiple_goal_fields__goal
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__test_multiple_goal_fields__goal
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__test_multiple_goal_fields__goal
            cls._TYPE_SUPPORT = module.type_support_msg__action__test_multiple_goal_fields__goal
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__test_multiple_goal_fields__goal

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TestMultipleGoalFields_Goal(metaclass=Metaclass_TestMultipleGoalFields_Goal):
    """Message class 'TestMultipleGoalFields_Goal'."""

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


class Metaclass_TestMultipleGoalFields_Result(type):
    """Metaclass of message 'TestMultipleGoalFields_Result'."""

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
                'rosbridge_test_msgs.action.TestMultipleGoalFields_Result')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__test_multiple_goal_fields__result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__test_multiple_goal_fields__result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__test_multiple_goal_fields__result
            cls._TYPE_SUPPORT = module.type_support_msg__action__test_multiple_goal_fields__result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__test_multiple_goal_fields__result

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TestMultipleGoalFields_Result(metaclass=Metaclass_TestMultipleGoalFields_Result):
    """Message class 'TestMultipleGoalFields_Result'."""

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

# already imported above
# import rosidl_parser.definition


class Metaclass_TestMultipleGoalFields_Feedback(type):
    """Metaclass of message 'TestMultipleGoalFields_Feedback'."""

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
                'rosbridge_test_msgs.action.TestMultipleGoalFields_Feedback')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__test_multiple_goal_fields__feedback
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__test_multiple_goal_fields__feedback
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__test_multiple_goal_fields__feedback
            cls._TYPE_SUPPORT = module.type_support_msg__action__test_multiple_goal_fields__feedback
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__test_multiple_goal_fields__feedback

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TestMultipleGoalFields_Feedback(metaclass=Metaclass_TestMultipleGoalFields_Feedback):
    """Message class 'TestMultipleGoalFields_Feedback'."""

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

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_TestMultipleGoalFields_SendGoal_Request(type):
    """Metaclass of message 'TestMultipleGoalFields_SendGoal_Request'."""

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
                'rosbridge_test_msgs.action.TestMultipleGoalFields_SendGoal_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__test_multiple_goal_fields__send_goal__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__test_multiple_goal_fields__send_goal__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__test_multiple_goal_fields__send_goal__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__test_multiple_goal_fields__send_goal__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__test_multiple_goal_fields__send_goal__request

            from rosbridge_test_msgs.action import TestMultipleGoalFields
            if TestMultipleGoalFields.Goal.__class__._TYPE_SUPPORT is None:
                TestMultipleGoalFields.Goal.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TestMultipleGoalFields_SendGoal_Request(metaclass=Metaclass_TestMultipleGoalFields_SendGoal_Request):
    """Message class 'TestMultipleGoalFields_SendGoal_Request'."""

    __slots__ = [
        '_goal_id',
        '_goal',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'goal': 'rosbridge_test_msgs/TestMultipleGoalFields_Goal',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['rosbridge_test_msgs', 'action'], 'TestMultipleGoalFields_Goal'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from rosbridge_test_msgs.action._test_multiple_goal_fields import TestMultipleGoalFields_Goal
        self.goal = kwargs.get('goal', TestMultipleGoalFields_Goal())

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
        if self.goal_id != other.goal_id:
            return False
        if self.goal != other.goal:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @builtins.property
    def goal(self):
        """Message field 'goal'."""
        return self._goal

    @goal.setter
    def goal(self, value):
        if __debug__:
            from rosbridge_test_msgs.action._test_multiple_goal_fields import TestMultipleGoalFields_Goal
            assert \
                isinstance(value, TestMultipleGoalFields_Goal), \
                "The 'goal' field must be a sub message of type 'TestMultipleGoalFields_Goal'"
        self._goal = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_TestMultipleGoalFields_SendGoal_Response(type):
    """Metaclass of message 'TestMultipleGoalFields_SendGoal_Response'."""

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
                'rosbridge_test_msgs.action.TestMultipleGoalFields_SendGoal_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__test_multiple_goal_fields__send_goal__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__test_multiple_goal_fields__send_goal__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__test_multiple_goal_fields__send_goal__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__test_multiple_goal_fields__send_goal__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__test_multiple_goal_fields__send_goal__response

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TestMultipleGoalFields_SendGoal_Response(metaclass=Metaclass_TestMultipleGoalFields_SendGoal_Response):
    """Message class 'TestMultipleGoalFields_SendGoal_Response'."""

    __slots__ = [
        '_accepted',
        '_stamp',
    ]

    _fields_and_field_types = {
        'accepted': 'boolean',
        'stamp': 'builtin_interfaces/Time',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.accepted = kwargs.get('accepted', bool())
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())

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
        if self.accepted != other.accepted:
            return False
        if self.stamp != other.stamp:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def accepted(self):
        """Message field 'accepted'."""
        return self._accepted

    @accepted.setter
    def accepted(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'accepted' field must be of type 'bool'"
        self._accepted = value

    @builtins.property
    def stamp(self):
        """Message field 'stamp'."""
        return self._stamp

    @stamp.setter
    def stamp(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'stamp' field must be a sub message of type 'Time'"
        self._stamp = value


class Metaclass_TestMultipleGoalFields_SendGoal(type):
    """Metaclass of service 'TestMultipleGoalFields_SendGoal'."""

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
                'rosbridge_test_msgs.action.TestMultipleGoalFields_SendGoal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__test_multiple_goal_fields__send_goal

            from rosbridge_test_msgs.action import _test_multiple_goal_fields
            if _test_multiple_goal_fields.Metaclass_TestMultipleGoalFields_SendGoal_Request._TYPE_SUPPORT is None:
                _test_multiple_goal_fields.Metaclass_TestMultipleGoalFields_SendGoal_Request.__import_type_support__()
            if _test_multiple_goal_fields.Metaclass_TestMultipleGoalFields_SendGoal_Response._TYPE_SUPPORT is None:
                _test_multiple_goal_fields.Metaclass_TestMultipleGoalFields_SendGoal_Response.__import_type_support__()


class TestMultipleGoalFields_SendGoal(metaclass=Metaclass_TestMultipleGoalFields_SendGoal):
    from rosbridge_test_msgs.action._test_multiple_goal_fields import TestMultipleGoalFields_SendGoal_Request as Request
    from rosbridge_test_msgs.action._test_multiple_goal_fields import TestMultipleGoalFields_SendGoal_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_TestMultipleGoalFields_GetResult_Request(type):
    """Metaclass of message 'TestMultipleGoalFields_GetResult_Request'."""

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
                'rosbridge_test_msgs.action.TestMultipleGoalFields_GetResult_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__test_multiple_goal_fields__get_result__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__test_multiple_goal_fields__get_result__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__test_multiple_goal_fields__get_result__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__test_multiple_goal_fields__get_result__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__test_multiple_goal_fields__get_result__request

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TestMultipleGoalFields_GetResult_Request(metaclass=Metaclass_TestMultipleGoalFields_GetResult_Request):
    """Message class 'TestMultipleGoalFields_GetResult_Request'."""

    __slots__ = [
        '_goal_id',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())

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
        if self.goal_id != other.goal_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_TestMultipleGoalFields_GetResult_Response(type):
    """Metaclass of message 'TestMultipleGoalFields_GetResult_Response'."""

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
                'rosbridge_test_msgs.action.TestMultipleGoalFields_GetResult_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__test_multiple_goal_fields__get_result__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__test_multiple_goal_fields__get_result__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__test_multiple_goal_fields__get_result__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__test_multiple_goal_fields__get_result__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__test_multiple_goal_fields__get_result__response

            from rosbridge_test_msgs.action import TestMultipleGoalFields
            if TestMultipleGoalFields.Result.__class__._TYPE_SUPPORT is None:
                TestMultipleGoalFields.Result.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TestMultipleGoalFields_GetResult_Response(metaclass=Metaclass_TestMultipleGoalFields_GetResult_Response):
    """Message class 'TestMultipleGoalFields_GetResult_Response'."""

    __slots__ = [
        '_status',
        '_result',
    ]

    _fields_and_field_types = {
        'status': 'int8',
        'result': 'rosbridge_test_msgs/TestMultipleGoalFields_Result',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['rosbridge_test_msgs', 'action'], 'TestMultipleGoalFields_Result'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.status = kwargs.get('status', int())
        from rosbridge_test_msgs.action._test_multiple_goal_fields import TestMultipleGoalFields_Result
        self.result = kwargs.get('result', TestMultipleGoalFields_Result())

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
        if self.result != other.result:
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
            assert value >= -128 and value < 128, \
                "The 'status' field must be an integer in [-128, 127]"
        self._status = value

    @builtins.property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            from rosbridge_test_msgs.action._test_multiple_goal_fields import TestMultipleGoalFields_Result
            assert \
                isinstance(value, TestMultipleGoalFields_Result), \
                "The 'result' field must be a sub message of type 'TestMultipleGoalFields_Result'"
        self._result = value


class Metaclass_TestMultipleGoalFields_GetResult(type):
    """Metaclass of service 'TestMultipleGoalFields_GetResult'."""

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
                'rosbridge_test_msgs.action.TestMultipleGoalFields_GetResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__test_multiple_goal_fields__get_result

            from rosbridge_test_msgs.action import _test_multiple_goal_fields
            if _test_multiple_goal_fields.Metaclass_TestMultipleGoalFields_GetResult_Request._TYPE_SUPPORT is None:
                _test_multiple_goal_fields.Metaclass_TestMultipleGoalFields_GetResult_Request.__import_type_support__()
            if _test_multiple_goal_fields.Metaclass_TestMultipleGoalFields_GetResult_Response._TYPE_SUPPORT is None:
                _test_multiple_goal_fields.Metaclass_TestMultipleGoalFields_GetResult_Response.__import_type_support__()


class TestMultipleGoalFields_GetResult(metaclass=Metaclass_TestMultipleGoalFields_GetResult):
    from rosbridge_test_msgs.action._test_multiple_goal_fields import TestMultipleGoalFields_GetResult_Request as Request
    from rosbridge_test_msgs.action._test_multiple_goal_fields import TestMultipleGoalFields_GetResult_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_TestMultipleGoalFields_FeedbackMessage(type):
    """Metaclass of message 'TestMultipleGoalFields_FeedbackMessage'."""

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
                'rosbridge_test_msgs.action.TestMultipleGoalFields_FeedbackMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__test_multiple_goal_fields__feedback_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__test_multiple_goal_fields__feedback_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__test_multiple_goal_fields__feedback_message
            cls._TYPE_SUPPORT = module.type_support_msg__action__test_multiple_goal_fields__feedback_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__test_multiple_goal_fields__feedback_message

            from rosbridge_test_msgs.action import TestMultipleGoalFields
            if TestMultipleGoalFields.Feedback.__class__._TYPE_SUPPORT is None:
                TestMultipleGoalFields.Feedback.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TestMultipleGoalFields_FeedbackMessage(metaclass=Metaclass_TestMultipleGoalFields_FeedbackMessage):
    """Message class 'TestMultipleGoalFields_FeedbackMessage'."""

    __slots__ = [
        '_goal_id',
        '_feedback',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'feedback': 'rosbridge_test_msgs/TestMultipleGoalFields_Feedback',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['rosbridge_test_msgs', 'action'], 'TestMultipleGoalFields_Feedback'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from rosbridge_test_msgs.action._test_multiple_goal_fields import TestMultipleGoalFields_Feedback
        self.feedback = kwargs.get('feedback', TestMultipleGoalFields_Feedback())

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
        if self.goal_id != other.goal_id:
            return False
        if self.feedback != other.feedback:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @builtins.property
    def feedback(self):
        """Message field 'feedback'."""
        return self._feedback

    @feedback.setter
    def feedback(self, value):
        if __debug__:
            from rosbridge_test_msgs.action._test_multiple_goal_fields import TestMultipleGoalFields_Feedback
            assert \
                isinstance(value, TestMultipleGoalFields_Feedback), \
                "The 'feedback' field must be a sub message of type 'TestMultipleGoalFields_Feedback'"
        self._feedback = value


class Metaclass_TestMultipleGoalFields(type):
    """Metaclass of action 'TestMultipleGoalFields'."""

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
                'rosbridge_test_msgs.action.TestMultipleGoalFields')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_action__action__test_multiple_goal_fields

            from action_msgs.msg import _goal_status_array
            if _goal_status_array.Metaclass_GoalStatusArray._TYPE_SUPPORT is None:
                _goal_status_array.Metaclass_GoalStatusArray.__import_type_support__()
            from action_msgs.srv import _cancel_goal
            if _cancel_goal.Metaclass_CancelGoal._TYPE_SUPPORT is None:
                _cancel_goal.Metaclass_CancelGoal.__import_type_support__()

            from rosbridge_test_msgs.action import _test_multiple_goal_fields
            if _test_multiple_goal_fields.Metaclass_TestMultipleGoalFields_SendGoal._TYPE_SUPPORT is None:
                _test_multiple_goal_fields.Metaclass_TestMultipleGoalFields_SendGoal.__import_type_support__()
            if _test_multiple_goal_fields.Metaclass_TestMultipleGoalFields_GetResult._TYPE_SUPPORT is None:
                _test_multiple_goal_fields.Metaclass_TestMultipleGoalFields_GetResult.__import_type_support__()
            if _test_multiple_goal_fields.Metaclass_TestMultipleGoalFields_FeedbackMessage._TYPE_SUPPORT is None:
                _test_multiple_goal_fields.Metaclass_TestMultipleGoalFields_FeedbackMessage.__import_type_support__()


class TestMultipleGoalFields(metaclass=Metaclass_TestMultipleGoalFields):

    # The goal message defined in the action definition.
    from rosbridge_test_msgs.action._test_multiple_goal_fields import TestMultipleGoalFields_Goal as Goal
    # The result message defined in the action definition.
    from rosbridge_test_msgs.action._test_multiple_goal_fields import TestMultipleGoalFields_Result as Result
    # The feedback message defined in the action definition.
    from rosbridge_test_msgs.action._test_multiple_goal_fields import TestMultipleGoalFields_Feedback as Feedback

    class Impl:

        # The send_goal service using a wrapped version of the goal message as a request.
        from rosbridge_test_msgs.action._test_multiple_goal_fields import TestMultipleGoalFields_SendGoal as SendGoalService
        # The get_result service using a wrapped version of the result message as a response.
        from rosbridge_test_msgs.action._test_multiple_goal_fields import TestMultipleGoalFields_GetResult as GetResultService
        # The feedback message with generic fields which wraps the feedback message.
        from rosbridge_test_msgs.action._test_multiple_goal_fields import TestMultipleGoalFields_FeedbackMessage as FeedbackMessage

        # The generic service to cancel a goal.
        from action_msgs.srv._cancel_goal import CancelGoal as CancelGoalService
        # The generic message for get the status of a goal.
        from action_msgs.msg._goal_status_array import GoalStatusArray as GoalStatusMessage

    def __init__(self):
        raise NotImplementedError('Action classes can not be instantiated')
