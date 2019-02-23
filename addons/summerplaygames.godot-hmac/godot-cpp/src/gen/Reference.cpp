#include "Reference.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


Reference *Reference::_new()
{
	return (Reference *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"Reference")());
}
bool Reference::init_ref() {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("Reference", "init_ref");
	}
	return ___godot_icall_bool(mb, (const Object *) this);
}

bool Reference::reference() {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("Reference", "reference");
	}
	return ___godot_icall_bool(mb, (const Object *) this);
}

bool Reference::unreference() {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("Reference", "unreference");
	}
	return ___godot_icall_bool(mb, (const Object *) this);
}

}