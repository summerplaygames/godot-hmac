#ifndef GODOT_CPP_VISUALSHADERNODEVECTOROP_HPP
#define GODOT_CPP_VISUALSHADERNODEVECTOROP_HPP


#include <gdnative_api_struct.gen.h>
#include <stdint.h>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include "VisualShaderNodeVectorOp.hpp"

#include "VisualShaderNode.hpp"
namespace godot {


class VisualShaderNodeVectorOp : public VisualShaderNode {
public:

	static inline const char *___get_class_name() { return (const char *) "VisualShaderNodeVectorOp"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum Operator {
		OP_ADD = 0,
		OP_SUB = 1,
		OP_MUL = 2,
		OP_DIV = 3,
		OP_MOD = 4,
		OP_POW = 5,
		OP_MAX = 6,
		OP_MIN = 7,
		OP_CROSS = 8,
	};

	// constants


	static VisualShaderNodeVectorOp *_new();

	// methods
	void set_operator(const int64_t op);
	VisualShaderNodeVectorOp::Operator get_operator() const;

};

}

#endif