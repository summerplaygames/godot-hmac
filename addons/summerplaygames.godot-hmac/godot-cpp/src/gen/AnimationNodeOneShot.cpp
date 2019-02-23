#include "AnimationNodeOneShot.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


AnimationNodeOneShot *AnimationNodeOneShot::_new()
{
	return (AnimationNodeOneShot *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"AnimationNodeOneShot")());
}
void AnimationNodeOneShot::set_fadein_time(const double time) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeOneShot", "set_fadein_time");
	}
	___godot_icall_void_float(mb, (const Object *) this, time);
}

double AnimationNodeOneShot::get_fadein_time() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeOneShot", "get_fadein_time");
	}
	return ___godot_icall_float(mb, (const Object *) this);
}

void AnimationNodeOneShot::set_fadeout_time(const double time) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeOneShot", "set_fadeout_time");
	}
	___godot_icall_void_float(mb, (const Object *) this, time);
}

double AnimationNodeOneShot::get_fadeout_time() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeOneShot", "get_fadeout_time");
	}
	return ___godot_icall_float(mb, (const Object *) this);
}

void AnimationNodeOneShot::set_autorestart(const bool enable) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeOneShot", "set_autorestart");
	}
	___godot_icall_void_bool(mb, (const Object *) this, enable);
}

bool AnimationNodeOneShot::has_autorestart() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeOneShot", "has_autorestart");
	}
	return ___godot_icall_bool(mb, (const Object *) this);
}

void AnimationNodeOneShot::set_autorestart_delay(const double enable) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeOneShot", "set_autorestart_delay");
	}
	___godot_icall_void_float(mb, (const Object *) this, enable);
}

double AnimationNodeOneShot::get_autorestart_delay() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeOneShot", "get_autorestart_delay");
	}
	return ___godot_icall_float(mb, (const Object *) this);
}

void AnimationNodeOneShot::set_autorestart_random_delay(const double enable) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeOneShot", "set_autorestart_random_delay");
	}
	___godot_icall_void_float(mb, (const Object *) this, enable);
}

double AnimationNodeOneShot::get_autorestart_random_delay() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeOneShot", "get_autorestart_random_delay");
	}
	return ___godot_icall_float(mb, (const Object *) this);
}

void AnimationNodeOneShot::set_mix_mode(const int64_t mode) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeOneShot", "set_mix_mode");
	}
	___godot_icall_void_int(mb, (const Object *) this, mode);
}

AnimationNodeOneShot::MixMode AnimationNodeOneShot::get_mix_mode() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeOneShot", "get_mix_mode");
	}
	return (AnimationNodeOneShot::MixMode) ___godot_icall_int(mb, (const Object *) this);
}

void AnimationNodeOneShot::set_use_sync(const bool enable) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeOneShot", "set_use_sync");
	}
	___godot_icall_void_bool(mb, (const Object *) this, enable);
}

bool AnimationNodeOneShot::is_using_sync() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeOneShot", "is_using_sync");
	}
	return ___godot_icall_bool(mb, (const Object *) this);
}

}