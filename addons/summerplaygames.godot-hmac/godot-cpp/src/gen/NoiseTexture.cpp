#include "NoiseTexture.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"


#include "OpenSimplexNoise.hpp"
#include "Image.hpp"


namespace godot {


NoiseTexture *NoiseTexture::_new()
{
	return (NoiseTexture *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"NoiseTexture")());
}
void NoiseTexture::set_width(const int64_t width) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("NoiseTexture", "set_width");
	}
	___godot_icall_void_int(mb, (const Object *) this, width);
}

void NoiseTexture::set_height(const int64_t height) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("NoiseTexture", "set_height");
	}
	___godot_icall_void_int(mb, (const Object *) this, height);
}

void NoiseTexture::set_noise(const Ref<OpenSimplexNoise> noise) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("NoiseTexture", "set_noise");
	}
	___godot_icall_void_Object(mb, (const Object *) this, noise.ptr());
}

Ref<OpenSimplexNoise> NoiseTexture::get_noise() {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("NoiseTexture", "get_noise");
	}
	return Ref<OpenSimplexNoise>::__internal_constructor(___godot_icall_Object(mb, (const Object *) this));
}

void NoiseTexture::set_seamless(const bool seamless) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("NoiseTexture", "set_seamless");
	}
	___godot_icall_void_bool(mb, (const Object *) this, seamless);
}

bool NoiseTexture::get_seamless() {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("NoiseTexture", "get_seamless");
	}
	return ___godot_icall_bool(mb, (const Object *) this);
}

void NoiseTexture::set_as_normalmap(const bool as_normalmap) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("NoiseTexture", "set_as_normalmap");
	}
	___godot_icall_void_bool(mb, (const Object *) this, as_normalmap);
}

bool NoiseTexture::is_normalmap() {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("NoiseTexture", "is_normalmap");
	}
	return ___godot_icall_bool(mb, (const Object *) this);
}

void NoiseTexture::_update_texture() {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("NoiseTexture", "_update_texture");
	}
	___godot_icall_void(mb, (const Object *) this);
}

Ref<Image> NoiseTexture::_generate_texture() {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("NoiseTexture", "_generate_texture");
	}
	return Ref<Image>::__internal_constructor(___godot_icall_Object(mb, (const Object *) this));
}

void NoiseTexture::_thread_done(const Ref<Image> image) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("NoiseTexture", "_thread_done");
	}
	___godot_icall_void_Object(mb, (const Object *) this, image.ptr());
}

}