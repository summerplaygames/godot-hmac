#ifndef GODOT_CPP_VISUALSHADERNODETRANSFORMVECMULT_HPP
#define GODOT_CPP_VISUALSHADERNODETRANSFORMVECMULT_HPP


#include <gdnative_api_struct.gen.h>
#include <stdint.h>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include "VisualShaderNodeTransformVecMult.hpp"

#include "VisualShaderNode.hpp"
namespace godot {


class VisualShaderNodeTransformVecMult : public VisualShaderNode {
public:

	static inline const char *___get_class_name() { return (const char *) "VisualShaderNodeTransformVecMult"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum Operator {
		OP_AxB = 0,
		OP_BxA = 1,
		OP_3x3_AxB = 2,
		OP_3x3_BxA = 3,
	};

	// constants


	static VisualShaderNodeTransformVecMult *_new();

	// methods
	void set_operator(const int64_t op);
	VisualShaderNodeTransformVecMult::Operator get_operator() const;

};

}

#endif