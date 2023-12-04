# generated from rosidl_generator_py/resource/_idl.py.em
# with input from spatio_temporal_voxel_layer:srv/SaveGrid.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SaveGrid_Request(type):
    """Metaclass of message 'SaveGrid_Request'."""

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
            module = import_type_support('spatio_temporal_voxel_layer')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'spatio_temporal_voxel_layer.srv.SaveGrid_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__save_grid__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__save_grid__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__save_grid__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__save_grid__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__save_grid__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SaveGrid_Request(metaclass=Metaclass_SaveGrid_Request):
    """Message class 'SaveGrid_Request'."""

    __slots__ = [
        '_file_name',
    ]

    _fields_and_field_types = {
        'file_name': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.file_name = kwargs.get('file_name', str())

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
        if self.file_name != other.file_name:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def file_name(self):
        """Message field 'file_name'."""
        return self._file_name

    @file_name.setter
    def file_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'file_name' field must be of type 'str'"
        self._file_name = value


# Import statements for member types

# already imported above
# import builtins

import math  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_SaveGrid_Response(type):
    """Metaclass of message 'SaveGrid_Response'."""

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
            module = import_type_support('spatio_temporal_voxel_layer')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'spatio_temporal_voxel_layer.srv.SaveGrid_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__save_grid__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__save_grid__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__save_grid__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__save_grid__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__save_grid__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SaveGrid_Response(metaclass=Metaclass_SaveGrid_Response):
    """Message class 'SaveGrid_Response'."""

    __slots__ = [
        '_map_size_bytes',
        '_status',
    ]

    _fields_and_field_types = {
        'map_size_bytes': 'double',
        'status': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.map_size_bytes = kwargs.get('map_size_bytes', float())
        self.status = kwargs.get('status', bool())

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
        if self.map_size_bytes != other.map_size_bytes:
            return False
        if self.status != other.status:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def map_size_bytes(self):
        """Message field 'map_size_bytes'."""
        return self._map_size_bytes

    @map_size_bytes.setter
    def map_size_bytes(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'map_size_bytes' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'map_size_bytes' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._map_size_bytes = value

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'status' field must be of type 'bool'"
        self._status = value


class Metaclass_SaveGrid(type):
    """Metaclass of service 'SaveGrid'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('spatio_temporal_voxel_layer')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'spatio_temporal_voxel_layer.srv.SaveGrid')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__save_grid

            from spatio_temporal_voxel_layer.srv import _save_grid
            if _save_grid.Metaclass_SaveGrid_Request._TYPE_SUPPORT is None:
                _save_grid.Metaclass_SaveGrid_Request.__import_type_support__()
            if _save_grid.Metaclass_SaveGrid_Response._TYPE_SUPPORT is None:
                _save_grid.Metaclass_SaveGrid_Response.__import_type_support__()


class SaveGrid(metaclass=Metaclass_SaveGrid):
    from spatio_temporal_voxel_layer.srv._save_grid import SaveGrid_Request as Request
    from spatio_temporal_voxel_layer.srv._save_grid import SaveGrid_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
