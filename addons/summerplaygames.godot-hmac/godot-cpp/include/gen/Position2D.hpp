#ifndef GODOT_CPP_POSITION2D_HPP
#define GODOT_CPP_POSITION2D_HPP


#include <gdnative_api_struct.gen.h>
#include <stdint.h>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include "Node2D.hpp"
namespace godot {


class Position2D : public Node2D {
public:

	static inline const char *___get_class_name() { return (const char *) "Position2D"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static Position2D *_new();

	// methods

};

}

#endif