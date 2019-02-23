#include "CanvasItemMaterial.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


CanvasItemMaterial *CanvasItemMaterial::_new()
{
	return (CanvasItemMaterial *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"CanvasItemMaterial")());
}
void CanvasItemMaterial::set_blend_mode(const int64_t blend_mode) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CanvasItemMaterial", "set_blend_mode");
	}
	___godot_icall_void_int(mb, (const Object *) this, blend_mode);
}

CanvasItemMaterial::BlendMode CanvasItemMaterial::get_blend_mode() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CanvasItemMaterial", "get_blend_mode");
	}
	return (CanvasItemMaterial::BlendMode) ___godot_icall_int(mb, (const Object *) this);
}

void CanvasItemMaterial::set_light_mode(const int64_t light_mode) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CanvasItemMaterial", "set_light_mode");
	}
	___godot_icall_void_int(mb, (const Object *) this, light_mode);
}

CanvasItemMaterial::LightMode CanvasItemMaterial::get_light_mode() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CanvasItemMaterial", "get_light_mode");
	}
	return (CanvasItemMaterial::LightMode) ___godot_icall_int(mb, (const Object *) this);
}

void CanvasItemMaterial::set_particles_animation(const bool particles_anim) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CanvasItemMaterial", "set_particles_animation");
	}
	___godot_icall_void_bool(mb, (const Object *) this, particles_anim);
}

bool CanvasItemMaterial::get_particles_animation() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CanvasItemMaterial", "get_particles_animation");
	}
	return ___godot_icall_bool(mb, (const Object *) this);
}

void CanvasItemMaterial::set_particles_anim_h_frames(const int64_t frames) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CanvasItemMaterial", "set_particles_anim_h_frames");
	}
	___godot_icall_void_int(mb, (const Object *) this, frames);
}

int64_t CanvasItemMaterial::get_particles_anim_h_frames() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CanvasItemMaterial", "get_particles_anim_h_frames");
	}
	return ___godot_icall_int(mb, (const Object *) this);
}

void CanvasItemMaterial::set_particles_anim_v_frames(const int64_t frames) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CanvasItemMaterial", "set_particles_anim_v_frames");
	}
	___godot_icall_void_int(mb, (const Object *) this, frames);
}

int64_t CanvasItemMaterial::get_particles_anim_v_frames() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CanvasItemMaterial", "get_particles_anim_v_frames");
	}
	return ___godot_icall_int(mb, (const Object *) this);
}

void CanvasItemMaterial::set_particles_anim_loop(const bool loop) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CanvasItemMaterial", "set_particles_anim_loop");
	}
	___godot_icall_void_bool(mb, (const Object *) this, loop);
}

bool CanvasItemMaterial::get_particles_anim_loop() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CanvasItemMaterial", "get_particles_anim_loop");
	}
	return ___godot_icall_bool(mb, (const Object *) this);
}

}