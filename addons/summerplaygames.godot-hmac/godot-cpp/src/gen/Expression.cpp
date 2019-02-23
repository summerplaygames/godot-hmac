#include "Expression.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"


#include "Object.hpp"


namespace godot {


Expression *Expression::_new()
{
	return (Expression *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"Expression")());
}
Error Expression::parse(const String expression, const PoolStringArray input_names) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("Expression", "parse");
	}
	return (Error) ___godot_icall_int_String_PoolStringArray(mb, (const Object *) this, expression, input_names);
}

Variant Expression::execute(const Array inputs, const Object *base_instance, const bool show_error) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("Expression", "execute");
	}
	return ___godot_icall_Variant_Array_Object_bool(mb, (const Object *) this, inputs, base_instance, show_error);
}

bool Expression::has_execute_failed() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("Expression", "has_execute_failed");
	}
	return ___godot_icall_bool(mb, (const Object *) this);
}

String Expression::get_error_text() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("Expression", "get_error_text");
	}
	return ___godot_icall_String(mb, (const Object *) this);
}

}