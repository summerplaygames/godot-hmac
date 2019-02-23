#include "VisualScriptBuiltinFunc.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


VisualScriptBuiltinFunc *VisualScriptBuiltinFunc::_new()
{
	return (VisualScriptBuiltinFunc *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"VisualScriptBuiltinFunc")());
}
void VisualScriptBuiltinFunc::set_func(const int64_t which) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("VisualScriptBuiltinFunc", "set_func");
	}
	___godot_icall_void_int(mb, (const Object *) this, which);
}

VisualScriptBuiltinFunc::BuiltinFunc VisualScriptBuiltinFunc::get_func() {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("VisualScriptBuiltinFunc", "get_func");
	}
	return (VisualScriptBuiltinFunc::BuiltinFunc) ___godot_icall_int(mb, (const Object *) this);
}

}