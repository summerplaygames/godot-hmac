#ifndef GODOT_CPP_VISUALSHADERNODE_HPP
#define GODOT_CPP_VISUALSHADERNODE_HPP


#include <gdnative_api_struct.gen.h>
#include <stdint.h>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include "Resource.hpp"
namespace godot {


class VisualShaderNode : public Resource {
public:

	static inline const char *___get_class_name() { return (const char *) "VisualShaderNode"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants

	// methods
	void set_output_port_for_preview(const int64_t port);
	int64_t get_output_port_for_preview() const;
	void set_input_port_default_value(const int64_t port, const Variant value);
	Variant get_input_port_default_value(const int64_t port) const;
	void _set_default_input_values(const Array values);
	Array _get_default_input_values() const;

};

}

#endif