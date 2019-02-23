#ifndef GODOT_CPP_VISUALSHADERNODETRANSFORMUNIFORM_HPP
#define GODOT_CPP_VISUALSHADERNODETRANSFORMUNIFORM_HPP


#include <gdnative_api_struct.gen.h>
#include <stdint.h>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include "VisualShaderNodeUniform.hpp"
namespace godot {


class VisualShaderNodeTransformUniform : public VisualShaderNodeUniform {
public:

	static inline const char *___get_class_name() { return (const char *) "VisualShaderNodeTransformUniform"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static VisualShaderNodeTransformUniform *_new();

	// methods

};

}

#endif