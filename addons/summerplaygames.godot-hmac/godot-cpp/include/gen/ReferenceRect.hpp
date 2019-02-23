#ifndef GODOT_CPP_REFERENCERECT_HPP
#define GODOT_CPP_REFERENCERECT_HPP


#include <gdnative_api_struct.gen.h>
#include <stdint.h>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include "Control.hpp"
namespace godot {


class ReferenceRect : public Control {
public:

	static inline const char *___get_class_name() { return (const char *) "ReferenceRect"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static ReferenceRect *_new();

	// methods
	Color get_border_color() const;
	void set_border_color(const Color color);

};

}

#endif