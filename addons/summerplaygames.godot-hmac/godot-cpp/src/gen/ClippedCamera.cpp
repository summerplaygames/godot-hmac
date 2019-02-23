#include "ClippedCamera.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"


#include "Object.hpp"


namespace godot {


ClippedCamera *ClippedCamera::_new()
{
	return (ClippedCamera *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"ClippedCamera")());
}
void ClippedCamera::set_margin(const double margin) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("ClippedCamera", "set_margin");
	}
	___godot_icall_void_float(mb, (const Object *) this, margin);
}

double ClippedCamera::get_margin() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("ClippedCamera", "get_margin");
	}
	return ___godot_icall_float(mb, (const Object *) this);
}

void ClippedCamera::set_process_mode(const int64_t process_mode) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("ClippedCamera", "set_process_mode");
	}
	___godot_icall_void_int(mb, (const Object *) this, process_mode);
}

ClippedCamera::ProcessMode ClippedCamera::get_process_mode() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("ClippedCamera", "get_process_mode");
	}
	return (ClippedCamera::ProcessMode) ___godot_icall_int(mb, (const Object *) this);
}

void ClippedCamera::set_collision_mask(const int64_t mask) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("ClippedCamera", "set_collision_mask");
	}
	___godot_icall_void_int(mb, (const Object *) this, mask);
}

int64_t ClippedCamera::get_collision_mask() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("ClippedCamera", "get_collision_mask");
	}
	return ___godot_icall_int(mb, (const Object *) this);
}

void ClippedCamera::set_collision_mask_bit(const int64_t bit, const bool value) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("ClippedCamera", "set_collision_mask_bit");
	}
	___godot_icall_void_int_bool(mb, (const Object *) this, bit, value);
}

bool ClippedCamera::get_collision_mask_bit(const int64_t bit) const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("ClippedCamera", "get_collision_mask_bit");
	}
	return ___godot_icall_bool_int(mb, (const Object *) this, bit);
}

void ClippedCamera::add_exception_rid(const RID rid) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("ClippedCamera", "add_exception_rid");
	}
	___godot_icall_void_RID(mb, (const Object *) this, rid);
}

void ClippedCamera::add_exception(const Object *node) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("ClippedCamera", "add_exception");
	}
	___godot_icall_void_Object(mb, (const Object *) this, node);
}

void ClippedCamera::remove_exception_rid(const RID rid) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("ClippedCamera", "remove_exception_rid");
	}
	___godot_icall_void_RID(mb, (const Object *) this, rid);
}

void ClippedCamera::remove_exception(const Object *node) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("ClippedCamera", "remove_exception");
	}
	___godot_icall_void_Object(mb, (const Object *) this, node);
}

void ClippedCamera::set_clip_to_areas(const bool enable) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("ClippedCamera", "set_clip_to_areas");
	}
	___godot_icall_void_bool(mb, (const Object *) this, enable);
}

bool ClippedCamera::is_clip_to_areas_enabled() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("ClippedCamera", "is_clip_to_areas_enabled");
	}
	return ___godot_icall_bool(mb, (const Object *) this);
}

void ClippedCamera::set_clip_to_bodies(const bool enable) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("ClippedCamera", "set_clip_to_bodies");
	}
	___godot_icall_void_bool(mb, (const Object *) this, enable);
}

bool ClippedCamera::is_clip_to_bodies_enabled() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("ClippedCamera", "is_clip_to_bodies_enabled");
	}
	return ___godot_icall_bool(mb, (const Object *) this);
}

void ClippedCamera::clear_exceptions() {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("ClippedCamera", "clear_exceptions");
	}
	___godot_icall_void(mb, (const Object *) this);
}

}