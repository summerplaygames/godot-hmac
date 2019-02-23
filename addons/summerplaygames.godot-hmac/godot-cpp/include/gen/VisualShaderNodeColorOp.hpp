#ifndef GODOT_CPP_VISUALSHADERNODECOLOROP_HPP
#define GODOT_CPP_VISUALSHADERNODECOLOROP_HPP


#include <gdnative_api_struct.gen.h>
#include <stdint.h>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include "VisualShaderNodeColorOp.hpp"

#include "VisualShaderNode.hpp"
namespace godot {


class VisualShaderNodeColorOp : public VisualShaderNode {
public:

	static inline const char *___get_class_name() { return (const char *) "VisualShaderNodeColorOp"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum Operator {
		OP_SCREEN = 0,
		OP_DIFFERENCE = 1,
		OP_DARKEN = 2,
		OP_LIGHTEN = 3,
		OP_OVERLAY = 4,
		OP_DODGE = 5,
		OP_BURN = 6,
		OP_SOFT_LIGHT = 7,
		OP_HARD_LIGHT = 8,
	};

	// constants


	static VisualShaderNodeColorOp *_new();

	// methods
	void set_operator(const int64_t op);
	VisualShaderNodeColorOp::Operator get_operator() const;

};

}

#endif