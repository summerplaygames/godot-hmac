#include "AnimatedTexture.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"


#include "Texture.hpp"


namespace godot {


AnimatedTexture *AnimatedTexture::_new()
{
	return (AnimatedTexture *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"AnimatedTexture")());
}
void AnimatedTexture::set_frames(const int64_t frames) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimatedTexture", "set_frames");
	}
	___godot_icall_void_int(mb, (const Object *) this, frames);
}

int64_t AnimatedTexture::get_frames() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimatedTexture", "get_frames");
	}
	return ___godot_icall_int(mb, (const Object *) this);
}

void AnimatedTexture::set_fps(const double fps) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimatedTexture", "set_fps");
	}
	___godot_icall_void_float(mb, (const Object *) this, fps);
}

double AnimatedTexture::get_fps() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimatedTexture", "get_fps");
	}
	return ___godot_icall_float(mb, (const Object *) this);
}

void AnimatedTexture::set_frame_texture(const int64_t frame, const Ref<Texture> texture) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimatedTexture", "set_frame_texture");
	}
	___godot_icall_void_int_Object(mb, (const Object *) this, frame, texture.ptr());
}

Ref<Texture> AnimatedTexture::get_frame_texture(const int64_t frame) const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimatedTexture", "get_frame_texture");
	}
	return Ref<Texture>::__internal_constructor(___godot_icall_Object_int(mb, (const Object *) this, frame));
}

void AnimatedTexture::set_frame_delay(const int64_t frame, const double delay) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimatedTexture", "set_frame_delay");
	}
	___godot_icall_void_int_float(mb, (const Object *) this, frame, delay);
}

double AnimatedTexture::get_frame_delay(const int64_t frame) const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimatedTexture", "get_frame_delay");
	}
	return ___godot_icall_float_int(mb, (const Object *) this, frame);
}

void AnimatedTexture::_update_proxy() {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimatedTexture", "_update_proxy");
	}
	___godot_icall_void(mb, (const Object *) this);
}

}