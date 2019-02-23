#ifndef GODOT_CPP_VISUALSHADERNODESCALARFUNC_HPP
#define GODOT_CPP_VISUALSHADERNODESCALARFUNC_HPP


#include <gdnative_api_struct.gen.h>
#include <stdint.h>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include "VisualShaderNodeScalarFunc.hpp"

#include "VisualShaderNode.hpp"
namespace godot {


class VisualShaderNodeScalarFunc : public VisualShaderNode {
public:

	static inline const char *___get_class_name() { return (const char *) "VisualShaderNodeScalarFunc"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum Function {
		FUNC_SIN = 0,
		FUNC_COS = 1,
		FUNC_TAN = 2,
		FUNC_ASIN = 3,
		FUNC_ACOS = 4,
		FUNC_ATAN = 5,
		FUNC_SINH = 6,
		FUNC_COSH = 7,
		FUNC_TANH = 8,
		FUNC_LOG = 9,
		FUNC_EXP = 10,
		FUNC_SQRT = 11,
		FUNC_ABS = 12,
		FUNC_SIGN = 13,
		FUNC_FLOOR = 14,
		FUNC_ROUND = 15,
		FUNC_CEIL = 16,
		FUNC_FRAC = 17,
		FUNC_SATURATE = 18,
		FUNC_NEGATE = 19,
	};

	// constants


	static VisualShaderNodeScalarFunc *_new();

	// methods
	void set_function(const int64_t func);
	VisualShaderNodeScalarFunc::Function get_function() const;

};

}

#endif