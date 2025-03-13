# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mensaje:srv/Kinematics.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Kinematics_Request(type):
    """Metaclass of message 'Kinematics_Request'."""

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
            module = import_type_support('mensaje')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mensaje.srv.Kinematics_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__kinematics__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__kinematics__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__kinematics__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__kinematics__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__kinematics__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Kinematics_Request(metaclass=Metaclass_Kinematics_Request):
    """Message class 'Kinematics_Request'."""

    __slots__ = [
        '_theta1',
        '_theta2',
        '_theta3',
        '_theta4',
    ]

    _fields_and_field_types = {
        'theta1': 'double',
        'theta2': 'double',
        'theta3': 'double',
        'theta4': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.theta1 = kwargs.get('theta1', float())
        self.theta2 = kwargs.get('theta2', float())
        self.theta3 = kwargs.get('theta3', float())
        self.theta4 = kwargs.get('theta4', float())

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
        if self.theta1 != other.theta1:
            return False
        if self.theta2 != other.theta2:
            return False
        if self.theta3 != other.theta3:
            return False
        if self.theta4 != other.theta4:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def theta1(self):
        """Message field 'theta1'."""
        return self._theta1

    @theta1.setter
    def theta1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'theta1' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'theta1' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._theta1 = value

    @builtins.property
    def theta2(self):
        """Message field 'theta2'."""
        return self._theta2

    @theta2.setter
    def theta2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'theta2' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'theta2' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._theta2 = value

    @builtins.property
    def theta3(self):
        """Message field 'theta3'."""
        return self._theta3

    @theta3.setter
    def theta3(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'theta3' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'theta3' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._theta3 = value

    @builtins.property
    def theta4(self):
        """Message field 'theta4'."""
        return self._theta4

    @theta4.setter
    def theta4(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'theta4' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'theta4' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._theta4 = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_Kinematics_Response(type):
    """Metaclass of message 'Kinematics_Response'."""

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
            module = import_type_support('mensaje')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mensaje.srv.Kinematics_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__kinematics__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__kinematics__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__kinematics__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__kinematics__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__kinematics__response

            from geometry_msgs.msg import Pose
            if Pose.__class__._TYPE_SUPPORT is None:
                Pose.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Kinematics_Response(metaclass=Metaclass_Kinematics_Response):
    """Message class 'Kinematics_Response'."""

    __slots__ = [
        '_pose',
    ]

    _fields_and_field_types = {
        'pose': 'geometry_msgs/Pose',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from geometry_msgs.msg import Pose
        self.pose = kwargs.get('pose', Pose())

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
        if self.pose != other.pose:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def pose(self):
        """Message field 'pose'."""
        return self._pose

    @pose.setter
    def pose(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'pose' field must be a sub message of type 'Pose'"
        self._pose = value


class Metaclass_Kinematics(type):
    """Metaclass of service 'Kinematics'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('mensaje')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mensaje.srv.Kinematics')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__kinematics

            from mensaje.srv import _kinematics
            if _kinematics.Metaclass_Kinematics_Request._TYPE_SUPPORT is None:
                _kinematics.Metaclass_Kinematics_Request.__import_type_support__()
            if _kinematics.Metaclass_Kinematics_Response._TYPE_SUPPORT is None:
                _kinematics.Metaclass_Kinematics_Response.__import_type_support__()


class Kinematics(metaclass=Metaclass_Kinematics):
    from mensaje.srv._kinematics import Kinematics_Request as Request
    from mensaje.srv._kinematics import Kinematics_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
