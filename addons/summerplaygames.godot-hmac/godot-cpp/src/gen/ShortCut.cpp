#include "ShortCut.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"


#include "InputEvent.hpp"


namespace godot {


ShortCut *ShortCut::_new()
{
	return (ShortCut *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"ShortCut")());
}
void ShortCut::set_shortcut(const Ref<InputEvent> event) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("ShortCut", "set_shortcut");
	}
	___godot_icall_void_Object(mb, (const Object *) this, event.ptr());
}

Ref<InputEvent> ShortCut::get_shortcut() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("ShortCut", "get_shortcut");
	}
	return Ref<InputEvent>::__internal_constructor(___godot_icall_Object(mb, (const Object *) this));
}

bool ShortCut::is_valid() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("ShortCut", "is_valid");
	}
	return ___godot_icall_bool(mb, (const Object *) this);
}

bool ShortCut::is_shortcut(const Ref<InputEvent> event) const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("ShortCut", "is_shortcut");
	}
	return ___godot_icall_bool_Object(mb, (const Object *) this, event.ptr());
}

String ShortCut::get_as_text() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("ShortCut", "get_as_text");
	}
	return ___godot_icall_String(mb, (const Object *) this);
}

}