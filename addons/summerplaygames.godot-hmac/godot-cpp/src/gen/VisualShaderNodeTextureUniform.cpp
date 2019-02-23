#include "VisualShaderNodeTextureUniform.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


VisualShaderNodeTextureUniform *VisualShaderNodeTextureUniform::_new()
{
	return (VisualShaderNodeTextureUniform *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"VisualShaderNodeTextureUniform")());
}
void VisualShaderNodeTextureUniform::set_texture_type(const int64_t type) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("VisualShaderNodeTextureUniform", "set_texture_type");
	}
	___godot_icall_void_int(mb, (const Object *) this, type);
}

VisualShaderNodeTextureUniform::TextureType VisualShaderNodeTextureUniform::get_texture_type() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("VisualShaderNodeTextureUniform", "get_texture_type");
	}
	return (VisualShaderNodeTextureUniform::TextureType) ___godot_icall_int(mb, (const Object *) this);
}

void VisualShaderNodeTextureUniform::set_color_default(const int64_t type) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("VisualShaderNodeTextureUniform", "set_color_default");
	}
	___godot_icall_void_int(mb, (const Object *) this, type);
}

VisualShaderNodeTextureUniform::ColorDefault VisualShaderNodeTextureUniform::get_color_default() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("VisualShaderNodeTextureUniform", "get_color_default");
	}
	return (VisualShaderNodeTextureUniform::ColorDefault) ___godot_icall_int(mb, (const Object *) this);
}

}