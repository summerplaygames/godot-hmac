#include "ShaderMaterial.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"


#include "Shader.hpp"


namespace godot {


ShaderMaterial *ShaderMaterial::_new()
{
	return (ShaderMaterial *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"ShaderMaterial")());
}
void ShaderMaterial::set_shader(const Ref<Shader> shader) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("ShaderMaterial", "set_shader");
	}
	___godot_icall_void_Object(mb, (const Object *) this, shader.ptr());
}

Ref<Shader> ShaderMaterial::get_shader() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("ShaderMaterial", "get_shader");
	}
	return Ref<Shader>::__internal_constructor(___godot_icall_Object(mb, (const Object *) this));
}

void ShaderMaterial::set_shader_param(const String param, const Variant value) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("ShaderMaterial", "set_shader_param");
	}
	___godot_icall_void_String_Variant(mb, (const Object *) this, param, value);
}

Variant ShaderMaterial::get_shader_param(const String param) const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("ShaderMaterial", "get_shader_param");
	}
	return ___godot_icall_Variant_String(mb, (const Object *) this, param);
}

void ShaderMaterial::_shader_changed() {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("ShaderMaterial", "_shader_changed");
	}
	___godot_icall_void(mb, (const Object *) this);
}

bool ShaderMaterial::property_can_revert(const String name) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("ShaderMaterial", "property_can_revert");
	}
	return ___godot_icall_bool_String(mb, (const Object *) this, name);
}

Variant ShaderMaterial::property_get_revert(const String name) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("ShaderMaterial", "property_get_revert");
	}
	return ___godot_icall_Variant_String(mb, (const Object *) this, name);
}

}