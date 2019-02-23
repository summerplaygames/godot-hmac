#ifndef GODOT_CPP_VISUALSHADERNODEVEC3CONSTANT_HPP
#define GODOT_CPP_VISUALSHADERNODEVEC3CONSTANT_HPP


#include <gdnative_api_struct.gen.h>
#include <stdint.h>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include "VisualShaderNode.hpp"
namespace godot {


class VisualShaderNodeVec3Constant : public VisualShaderNode {
public:

	static inline const char *___get_class_name() { return (const char *) "VisualShaderNodeVec3Constant"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static VisualShaderNodeVec3Constant *_new();

	// methods
	void set_constant(const Vector3 value);
	Vector3 get_constant() const;

};

}

#endif