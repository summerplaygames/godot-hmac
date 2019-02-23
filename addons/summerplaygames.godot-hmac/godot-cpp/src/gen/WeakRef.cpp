#include "WeakRef.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


WeakRef *WeakRef::_new()
{
	return (WeakRef *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"WeakRef")());
}
Variant WeakRef::get_ref() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("WeakRef", "get_ref");
	}
	return ___godot_icall_Variant(mb, (const Object *) this);
}

}