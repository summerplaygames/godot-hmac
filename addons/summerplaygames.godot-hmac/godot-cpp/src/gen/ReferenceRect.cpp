#include "ReferenceRect.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


ReferenceRect *ReferenceRect::_new()
{
	return (ReferenceRect *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"ReferenceRect")());
}
Color ReferenceRect::get_border_color() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("ReferenceRect", "get_border_color");
	}
	return ___godot_icall_Color(mb, (const Object *) this);
}

void ReferenceRect::set_border_color(const Color color) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("ReferenceRect", "set_border_color");
	}
	___godot_icall_void_Color(mb, (const Object *) this, color);
}

}