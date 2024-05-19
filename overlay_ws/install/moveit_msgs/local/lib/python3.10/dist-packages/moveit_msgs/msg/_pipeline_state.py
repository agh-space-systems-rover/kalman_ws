# generated from rosidl_generator_py/resource/_idl.py.em
# with input from moveit_msgs:msg/PipelineState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PipelineState(type):
    """Metaclass of message 'PipelineState'."""

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
                'moveit_msgs.msg.PipelineState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__pipeline_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__pipeline_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__pipeline_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__pipeline_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__pipeline_state

            from moveit_msgs.msg import MotionPlanRequest
            if MotionPlanRequest.__class__._TYPE_SUPPORT is None:
                MotionPlanRequest.__class__.__import_type_support__()

            from moveit_msgs.msg import MotionPlanResponse
            if MotionPlanResponse.__class__._TYPE_SUPPORT is None:
                MotionPlanResponse.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PipelineState(metaclass=Metaclass_PipelineState):
    """Message class 'PipelineState'."""

    __slots__ = [
        '_request',
        '_response',
        '_pipeline_stage',
    ]

    _fields_and_field_types = {
        'request': 'moveit_msgs/MotionPlanRequest',
        'response': 'moveit_msgs/MotionPlanResponse',
        'pipeline_stage': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['moveit_msgs', 'msg'], 'MotionPlanRequest'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['moveit_msgs', 'msg'], 'MotionPlanResponse'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from moveit_msgs.msg import MotionPlanRequest
        self.request = kwargs.get('request', MotionPlanRequest())
        from moveit_msgs.msg import MotionPlanResponse
        self.response = kwargs.get('response', MotionPlanResponse())
        self.pipeline_stage = kwargs.get('pipeline_stage', str())

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
        if self.request != other.request:
            return False
        if self.response != other.response:
            return False
        if self.pipeline_stage != other.pipeline_stage:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def request(self):
        """Message field 'request'."""
        return self._request

    @request.setter
    def request(self, value):
        if __debug__:
            from moveit_msgs.msg import MotionPlanRequest
            assert \
                isinstance(value, MotionPlanRequest), \
                "The 'request' field must be a sub message of type 'MotionPlanRequest'"
        self._request = value

    @builtins.property
    def response(self):
        """Message field 'response'."""
        return self._response

    @response.setter
    def response(self, value):
        if __debug__:
            from moveit_msgs.msg import MotionPlanResponse
            assert \
                isinstance(value, MotionPlanResponse), \
                "The 'response' field must be a sub message of type 'MotionPlanResponse'"
        self._response = value

    @builtins.property
    def pipeline_stage(self):
        """Message field 'pipeline_stage'."""
        return self._pipeline_stage

    @pipeline_stage.setter
    def pipeline_stage(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'pipeline_stage' field must be of type 'str'"
        self._pipeline_stage = value
