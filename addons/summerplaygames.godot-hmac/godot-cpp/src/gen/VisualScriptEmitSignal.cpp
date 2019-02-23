#include "VisualScriptEmitSignal.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


VisualScriptEmitSignal *VisualScriptEmitSignal::_new()
{
	return (VisualScriptEmitSignal *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"VisualScriptEmitSignal")());
}
void VisualScriptEmitSignal::set_signal(const String name) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("VisualScriptEmitSignal", "set_signal");
	}
	___godot_icall_void_String(mb, (const Object *) this, name);
}

String VisualScriptEmitSignal::get_signal() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("VisualScriptEmitSignal", "get_signal");
	}
	return ___godot_icall_String(mb, (const Object *) this);
}

}