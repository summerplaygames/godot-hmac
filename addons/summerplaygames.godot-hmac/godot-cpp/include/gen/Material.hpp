#ifndef GODOT_CPP_MATERIAL_HPP
#define GODOT_CPP_MATERIAL_HPP


#include <gdnative_api_struct.gen.h>
#include <stdint.h>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include "Resource.hpp"
namespace godot {

class Material;

class Material : public Resource {
public:

	static inline const char *___get_class_name() { return (const char *) "Material"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants
	const static int RENDER_PRIORITY_MAX = 127;
	const static int RENDER_PRIORITY_MIN = -128;

	// methods
	void set_next_pass(const Ref<Material> next_pass);
	Ref<Material> get_next_pass() const;
	void set_render_priority(const int64_t priority);
	int64_t get_render_priority() const;

};

}

#endif