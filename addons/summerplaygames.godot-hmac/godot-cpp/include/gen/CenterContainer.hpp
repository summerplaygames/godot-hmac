#ifndef GODOT_CPP_CENTERCONTAINER_HPP
#define GODOT_CPP_CENTERCONTAINER_HPP


#include <gdnative_api_struct.gen.h>
#include <stdint.h>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include "Container.hpp"
namespace godot {


class CenterContainer : public Container {
public:

	static inline const char *___get_class_name() { return (const char *) "CenterContainer"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static CenterContainer *_new();

	// methods
	void set_use_top_left(const bool enable);
	bool is_using_top_left() const;

};

}

#endif