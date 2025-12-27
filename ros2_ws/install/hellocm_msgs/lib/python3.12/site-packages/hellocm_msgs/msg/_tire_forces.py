# generated from rosidl_generator_py/resource/_idl.py.em
# with input from hellocm_msgs:msg/TireForces.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TireForces(type):
    """Metaclass of message 'TireForces'."""

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
            module = import_type_support('hellocm_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'hellocm_msgs.msg.TireForces')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__tire_forces
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__tire_forces
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__tire_forces
            cls._TYPE_SUPPORT = module.type_support_msg__msg__tire_forces
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__tire_forces

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TireForces(metaclass=Metaclass_TireForces):
    """Message class 'TireForces'."""

    __slots__ = [
        '_header',
        '_tire_index',
        '_fx',
        '_fy',
        '_fz',
        '_mx',
        '_my',
        '_mz',
        '_slip_angle',
        '_long_slip',
        '_turn_slip',
        '_inclination_angle',
        '_effective_radius',
        '_belt_velocity',
        '_contact_point_x',
        '_contact_point_y',
        '_contact_point_z',
        '_mu_road',
        '_on_road',
        '_rim_rotation_speed',
        '_angular_velocity',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'tire_index': 'uint8',
        'fx': 'double',
        'fy': 'double',
        'fz': 'double',
        'mx': 'double',
        'my': 'double',
        'mz': 'double',
        'slip_angle': 'double',
        'long_slip': 'double',
        'turn_slip': 'double',
        'inclination_angle': 'double',
        'effective_radius': 'double',
        'belt_velocity': 'double',
        'contact_point_x': 'double',
        'contact_point_y': 'double',
        'contact_point_z': 'double',
        'mu_road': 'double',
        'on_road': 'boolean',
        'rim_rotation_speed': 'double',
        'angular_velocity': 'double',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.tire_index = kwargs.get('tire_index', int())
        self.fx = kwargs.get('fx', float())
        self.fy = kwargs.get('fy', float())
        self.fz = kwargs.get('fz', float())
        self.mx = kwargs.get('mx', float())
        self.my = kwargs.get('my', float())
        self.mz = kwargs.get('mz', float())
        self.slip_angle = kwargs.get('slip_angle', float())
        self.long_slip = kwargs.get('long_slip', float())
        self.turn_slip = kwargs.get('turn_slip', float())
        self.inclination_angle = kwargs.get('inclination_angle', float())
        self.effective_radius = kwargs.get('effective_radius', float())
        self.belt_velocity = kwargs.get('belt_velocity', float())
        self.contact_point_x = kwargs.get('contact_point_x', float())
        self.contact_point_y = kwargs.get('contact_point_y', float())
        self.contact_point_z = kwargs.get('contact_point_z', float())
        self.mu_road = kwargs.get('mu_road', float())
        self.on_road = kwargs.get('on_road', bool())
        self.rim_rotation_speed = kwargs.get('rim_rotation_speed', float())
        self.angular_velocity = kwargs.get('angular_velocity', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
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
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.header != other.header:
            return False
        if self.tire_index != other.tire_index:
            return False
        if self.fx != other.fx:
            return False
        if self.fy != other.fy:
            return False
        if self.fz != other.fz:
            return False
        if self.mx != other.mx:
            return False
        if self.my != other.my:
            return False
        if self.mz != other.mz:
            return False
        if self.slip_angle != other.slip_angle:
            return False
        if self.long_slip != other.long_slip:
            return False
        if self.turn_slip != other.turn_slip:
            return False
        if self.inclination_angle != other.inclination_angle:
            return False
        if self.effective_radius != other.effective_radius:
            return False
        if self.belt_velocity != other.belt_velocity:
            return False
        if self.contact_point_x != other.contact_point_x:
            return False
        if self.contact_point_y != other.contact_point_y:
            return False
        if self.contact_point_z != other.contact_point_z:
            return False
        if self.mu_road != other.mu_road:
            return False
        if self.on_road != other.on_road:
            return False
        if self.rim_rotation_speed != other.rim_rotation_speed:
            return False
        if self.angular_velocity != other.angular_velocity:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if self._check_fields:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def tire_index(self):
        """Message field 'tire_index'."""
        return self._tire_index

    @tire_index.setter
    def tire_index(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'tire_index' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'tire_index' field must be an unsigned integer in [0, 255]"
        self._tire_index = value

    @builtins.property
    def fx(self):
        """Message field 'fx'."""
        return self._fx

    @fx.setter
    def fx(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'fx' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'fx' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._fx = value

    @builtins.property
    def fy(self):
        """Message field 'fy'."""
        return self._fy

    @fy.setter
    def fy(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'fy' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'fy' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._fy = value

    @builtins.property
    def fz(self):
        """Message field 'fz'."""
        return self._fz

    @fz.setter
    def fz(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'fz' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'fz' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._fz = value

    @builtins.property
    def mx(self):
        """Message field 'mx'."""
        return self._mx

    @mx.setter
    def mx(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'mx' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'mx' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._mx = value

    @builtins.property
    def my(self):
        """Message field 'my'."""
        return self._my

    @my.setter
    def my(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'my' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'my' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._my = value

    @builtins.property
    def mz(self):
        """Message field 'mz'."""
        return self._mz

    @mz.setter
    def mz(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'mz' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'mz' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._mz = value

    @builtins.property
    def slip_angle(self):
        """Message field 'slip_angle'."""
        return self._slip_angle

    @slip_angle.setter
    def slip_angle(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'slip_angle' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'slip_angle' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._slip_angle = value

    @builtins.property
    def long_slip(self):
        """Message field 'long_slip'."""
        return self._long_slip

    @long_slip.setter
    def long_slip(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'long_slip' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'long_slip' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._long_slip = value

    @builtins.property
    def turn_slip(self):
        """Message field 'turn_slip'."""
        return self._turn_slip

    @turn_slip.setter
    def turn_slip(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'turn_slip' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'turn_slip' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._turn_slip = value

    @builtins.property
    def inclination_angle(self):
        """Message field 'inclination_angle'."""
        return self._inclination_angle

    @inclination_angle.setter
    def inclination_angle(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'inclination_angle' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'inclination_angle' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._inclination_angle = value

    @builtins.property
    def effective_radius(self):
        """Message field 'effective_radius'."""
        return self._effective_radius

    @effective_radius.setter
    def effective_radius(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'effective_radius' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'effective_radius' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._effective_radius = value

    @builtins.property
    def belt_velocity(self):
        """Message field 'belt_velocity'."""
        return self._belt_velocity

    @belt_velocity.setter
    def belt_velocity(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'belt_velocity' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'belt_velocity' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._belt_velocity = value

    @builtins.property
    def contact_point_x(self):
        """Message field 'contact_point_x'."""
        return self._contact_point_x

    @contact_point_x.setter
    def contact_point_x(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'contact_point_x' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'contact_point_x' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._contact_point_x = value

    @builtins.property
    def contact_point_y(self):
        """Message field 'contact_point_y'."""
        return self._contact_point_y

    @contact_point_y.setter
    def contact_point_y(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'contact_point_y' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'contact_point_y' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._contact_point_y = value

    @builtins.property
    def contact_point_z(self):
        """Message field 'contact_point_z'."""
        return self._contact_point_z

    @contact_point_z.setter
    def contact_point_z(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'contact_point_z' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'contact_point_z' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._contact_point_z = value

    @builtins.property
    def mu_road(self):
        """Message field 'mu_road'."""
        return self._mu_road

    @mu_road.setter
    def mu_road(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'mu_road' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'mu_road' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._mu_road = value

    @builtins.property
    def on_road(self):
        """Message field 'on_road'."""
        return self._on_road

    @on_road.setter
    def on_road(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'on_road' field must be of type 'bool'"
        self._on_road = value

    @builtins.property
    def rim_rotation_speed(self):
        """Message field 'rim_rotation_speed'."""
        return self._rim_rotation_speed

    @rim_rotation_speed.setter
    def rim_rotation_speed(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'rim_rotation_speed' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'rim_rotation_speed' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._rim_rotation_speed = value

    @builtins.property
    def angular_velocity(self):
        """Message field 'angular_velocity'."""
        return self._angular_velocity

    @angular_velocity.setter
    def angular_velocity(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'angular_velocity' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'angular_velocity' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._angular_velocity = value
