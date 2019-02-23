#include "VisualShaderNodeTexture.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"


#include "Texture.hpp"


namespace godot {


VisualShaderNodeTexture *VisualShaderNodeTexture::_new()
{
	return (VisualShaderNodeTexture *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"VisualShaderNodeTexture")());
}
void VisualShaderNodeTexture::set_source(const int64_t value) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("VisualShaderNodeTexture", "set_source");
	}
	___godot_icall_void_int(mb, (const Object *) this, value);
}

VisualShaderNodeTexture::Source VisualShaderNodeTexture::get_source() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("VisualShaderNodeTexture", "get_source");
	}
	return (VisualShaderNodeTexture::Source) ___godot_icall_int(mb, (const Object *) this);
}

void VisualShaderNodeTexture::set_texture(const Ref<Texture> value) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("VisualShaderNodeTexture", "set_texture");
	}
	___godot_icall_void_Object(mb, (const Object *) this, value.ptr());
}

Ref<Texture> VisualShaderNodeTexture::get_texture() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("VisualShaderNodeTexture", "get_texture");
	}
	return Ref<Texture>::__internal_constructor(___godot_icall_Object(mb, (const Object *) this));
}

void VisualShaderNodeTexture::set_texture_type(const int64_t value) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("VisualShaderNodeTexture", "set_texture_type");
	}
	___godot_icall_void_int(mb, (const Object *) this, value);
}

VisualShaderNodeTexture::TextureType VisualShaderNodeTexture::get_texture_type() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("VisualShaderNodeTexture", "get_texture_type");
	}
	return (VisualShaderNodeTexture::TextureType) ___godot_icall_int(mb, (const Object *) this);
}

}