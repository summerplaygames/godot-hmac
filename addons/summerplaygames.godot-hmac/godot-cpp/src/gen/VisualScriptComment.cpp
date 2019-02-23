#include "VisualScriptComment.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


VisualScriptComment *VisualScriptComment::_new()
{
	return (VisualScriptComment *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"VisualScriptComment")());
}
void VisualScriptComment::set_title(const String title) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("VisualScriptComment", "set_title");
	}
	___godot_icall_void_String(mb, (const Object *) this, title);
}

String VisualScriptComment::get_title() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("VisualScriptComment", "get_title");
	}
	return ___godot_icall_String(mb, (const Object *) this);
}

void VisualScriptComment::set_description(const String description) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("VisualScriptComment", "set_description");
	}
	___godot_icall_void_String(mb, (const Object *) this, description);
}

String VisualScriptComment::get_description() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("VisualScriptComment", "get_description");
	}
	return ___godot_icall_String(mb, (const Object *) this);
}

void VisualScriptComment::set_size(const Vector2 size) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("VisualScriptComment", "set_size");
	}
	___godot_icall_void_Vector2(mb, (const Object *) this, size);
}

Vector2 VisualScriptComment::get_size() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("VisualScriptComment", "get_size");
	}
	return ___godot_icall_Vector2(mb, (const Object *) this);
}

}