#ifndef GODOT_CPP_YSORT_HPP
#define GODOT_CPP_YSORT_HPP


#include <gdnative_api_struct.gen.h>
#include <stdint.h>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include "Node2D.hpp"
namespace godot {


class YSort : public Node2D {
public:

	static inline const char *___get_class_name() { return (const char *) "YSort"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static YSort *_new();

	// methods
	void set_sort_enabled(const bool enabled);
	bool is_sort_enabled() const;

};

}

#endif