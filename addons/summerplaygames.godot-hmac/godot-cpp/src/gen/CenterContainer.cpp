#include "CenterContainer.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


CenterContainer *CenterContainer::_new()
{
	return (CenterContainer *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"CenterContainer")());
}
void CenterContainer::set_use_top_left(const bool enable) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CenterContainer", "set_use_top_left");
	}
	___godot_icall_void_bool(mb, (const Object *) this, enable);
}

bool CenterContainer::is_using_top_left() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CenterContainer", "is_using_top_left");
	}
	return ___godot_icall_bool(mb, (const Object *) this);
}

}