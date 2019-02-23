#ifndef GODOT_CPP_SCENETREETIMER_HPP
#define GODOT_CPP_SCENETREETIMER_HPP


#include <gdnative_api_struct.gen.h>
#include <stdint.h>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include "Reference.hpp"
namespace godot {


class SceneTreeTimer : public Reference {
public:

	static inline const char *___get_class_name() { return (const char *) "SceneTreeTimer"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants

	// methods
	void set_time_left(const double time);
	double get_time_left() const;

};

}

#endif