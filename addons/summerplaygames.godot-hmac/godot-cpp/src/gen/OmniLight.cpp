#include "OmniLight.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


OmniLight *OmniLight::_new()
{
	return (OmniLight *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"OmniLight")());
}
void OmniLight::set_shadow_mode(const int64_t mode) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("OmniLight", "set_shadow_mode");
	}
	___godot_icall_void_int(mb, (const Object *) this, mode);
}

OmniLight::ShadowMode OmniLight::get_shadow_mode() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("OmniLight", "get_shadow_mode");
	}
	return (OmniLight::ShadowMode) ___godot_icall_int(mb, (const Object *) this);
}

void OmniLight::set_shadow_detail(const int64_t detail) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("OmniLight", "set_shadow_detail");
	}
	___godot_icall_void_int(mb, (const Object *) this, detail);
}

OmniLight::ShadowDetail OmniLight::get_shadow_detail() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("OmniLight", "get_shadow_detail");
	}
	return (OmniLight::ShadowDetail) ___godot_icall_int(mb, (const Object *) this);
}

}