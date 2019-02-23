#ifndef GODOT_CPP_CONETWISTJOINT_HPP
#define GODOT_CPP_CONETWISTJOINT_HPP


#include <gdnative_api_struct.gen.h>
#include <stdint.h>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include "Joint.hpp"
namespace godot {


class ConeTwistJoint : public Joint {
public:

	static inline const char *___get_class_name() { return (const char *) "ConeTwistJoint"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum Param {
		PARAM_SWING_SPAN = 0,
		PARAM_TWIST_SPAN = 1,
		PARAM_BIAS = 2,
		PARAM_SOFTNESS = 3,
		PARAM_RELAXATION = 4,
		PARAM_MAX = 5,
	};

	// constants


	static ConeTwistJoint *_new();

	// methods
	void set_param(const int64_t param, const double value);
	double get_param(const int64_t param) const;
	void _set_swing_span(const double swing_span);
	double _get_swing_span() const;
	void _set_twist_span(const double twist_span);
	double _get_twist_span() const;

};

}

#endif