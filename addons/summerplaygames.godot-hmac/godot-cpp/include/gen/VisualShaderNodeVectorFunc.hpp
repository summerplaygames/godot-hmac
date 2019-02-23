#ifndef GODOT_CPP_VISUALSHADERNODEVECTORFUNC_HPP
#define GODOT_CPP_VISUALSHADERNODEVECTORFUNC_HPP


#include <gdnative_api_struct.gen.h>
#include <stdint.h>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include "VisualShaderNodeVectorFunc.hpp"

#include "VisualShaderNode.hpp"
namespace godot {


class VisualShaderNodeVectorFunc : public VisualShaderNode {
public:

	static inline const char *___get_class_name() { return (const char *) "VisualShaderNodeVectorFunc"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum Function {
		FUNC_NORMALIZE = 0,
		FUNC_SATURATE = 1,
		FUNC_NEGATE = 2,
		FUNC_RECIPROCAL = 3,
		FUNC_RGB2HSV = 4,
		FUNC_HSV2RGB = 5,
	};

	// constants


	static VisualShaderNodeVectorFunc *_new();

	// methods
	void set_function(const int64_t func);
	VisualShaderNodeVectorFunc::Function get_function() const;

};

}

#endif