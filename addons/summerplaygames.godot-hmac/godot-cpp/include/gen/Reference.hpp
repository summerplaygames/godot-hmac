#ifndef GODOT_CPP_REFERENCE_HPP
#define GODOT_CPP_REFERENCE_HPP


#include <gdnative_api_struct.gen.h>
#include <stdint.h>

#include <core/CoreTypes.hpp>
#include <core/TagDB.hpp>

#include "Object.hpp"
namespace godot {


class Reference : public Object {
public:

	static inline const char *___get_class_name() { return (const char *) "Reference"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static Reference *_new();

	// methods
	bool init_ref();
	bool reference();
	bool unreference();

};

}

#endif