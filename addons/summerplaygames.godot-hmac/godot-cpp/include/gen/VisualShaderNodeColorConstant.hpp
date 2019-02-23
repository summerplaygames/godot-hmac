#ifndef GODOT_CPP_VISUALSHADERNODECOLORCONSTANT_HPP
#define GODOT_CPP_VISUALSHADERNODECOLORCONSTANT_HPP


#include <gdnative_api_struct.gen.h>
#include <stdint.h>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include "VisualShaderNode.hpp"
namespace godot {


class VisualShaderNodeColorConstant : public VisualShaderNode {
public:

	static inline const char *___get_class_name() { return (const char *) "VisualShaderNodeColorConstant"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static VisualShaderNodeColorConstant *_new();

	// methods
	void set_constant(const Color value);
	Color get_constant() const;

};

}

#endif