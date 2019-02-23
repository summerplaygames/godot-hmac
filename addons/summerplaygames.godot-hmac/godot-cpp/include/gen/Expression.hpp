#ifndef GODOT_CPP_EXPRESSION_HPP
#define GODOT_CPP_EXPRESSION_HPP


#include <gdnative_api_struct.gen.h>
#include <stdint.h>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include "Reference.hpp"
namespace godot {

class Object;

class Expression : public Reference {
public:

	static inline const char *___get_class_name() { return (const char *) "Expression"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static Expression *_new();

	// methods
	Error parse(const String expression, const PoolStringArray input_names = PoolStringArray());
	Variant execute(const Array inputs = Array(), const Object *base_instance = nullptr, const bool show_error = true);
	bool has_execute_failed() const;
	String get_error_text() const;

};

}

#endif