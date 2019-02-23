#ifndef GODOT_CPP_GENERIC6DOFJOINT_HPP
#define GODOT_CPP_GENERIC6DOFJOINT_HPP


#include <gdnative_api_struct.gen.h>
#include <stdint.h>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include "Joint.hpp"
namespace godot {


class Generic6DOFJoint : public Joint {
public:

	static inline const char *___get_class_name() { return (const char *) "Generic6DOFJoint"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum Param {
		PARAM_LINEAR_LOWER_LIMIT = 0,
		PARAM_LINEAR_UPPER_LIMIT = 1,
		PARAM_LINEAR_LIMIT_SOFTNESS = 2,
		PARAM_LINEAR_RESTITUTION = 3,
		PARAM_LINEAR_DAMPING = 4,
		PARAM_LINEAR_MOTOR_TARGET_VELOCITY = 5,
		PARAM_LINEAR_MOTOR_FORCE_LIMIT = 6,
		PARAM_ANGULAR_LOWER_LIMIT = 10,
		PARAM_ANGULAR_UPPER_LIMIT = 11,
		PARAM_ANGULAR_LIMIT_SOFTNESS = 12,
		PARAM_ANGULAR_DAMPING = 13,
		PARAM_ANGULAR_RESTITUTION = 14,
		PARAM_ANGULAR_FORCE_LIMIT = 15,
		PARAM_ANGULAR_ERP = 16,
		PARAM_ANGULAR_MOTOR_TARGET_VELOCITY = 17,
		PARAM_ANGULAR_MOTOR_FORCE_LIMIT = 18,
		PARAM_MAX = 22,
	};
	enum Flag {
		FLAG_ENABLE_LINEAR_LIMIT = 0,
		FLAG_ENABLE_ANGULAR_LIMIT = 1,
		FLAG_ENABLE_ANGULAR_SPRING = 2,
		FLAG_ENABLE_LINEAR_SPRING = 3,
		FLAG_ENABLE_MOTOR = 4,
		FLAG_ENABLE_LINEAR_MOTOR = 5,
		FLAG_MAX = 6,
	};

	// constants


	static Generic6DOFJoint *_new();

	// methods
	void _set_angular_hi_limit_x(const double angle);
	double _get_angular_hi_limit_x() const;
	void _set_angular_lo_limit_x(const double angle);
	double _get_angular_lo_limit_x() const;
	void _set_angular_hi_limit_y(const double angle);
	double _get_angular_hi_limit_y() const;
	void _set_angular_lo_limit_y(const double angle);
	double _get_angular_lo_limit_y() const;
	void _set_angular_hi_limit_z(const double angle);
	double _get_angular_hi_limit_z() const;
	void _set_angular_lo_limit_z(const double angle);
	double _get_angular_lo_limit_z() const;
	void set_param_x(const int64_t param, const double value);
	double get_param_x(const int64_t param) const;
	void set_param_y(const int64_t param, const double value);
	double get_param_y(const int64_t param) const;
	void set_param_z(const int64_t param, const double value);
	double get_param_z(const int64_t param) const;
	void set_flag_x(const int64_t flag, const bool value);
	bool get_flag_x(const int64_t flag) const;
	void set_flag_y(const int64_t flag, const bool value);
	bool get_flag_y(const int64_t flag) const;
	void set_flag_z(const int64_t flag, const bool value);
	bool get_flag_z(const int64_t flag) const;

};

}

#endif