#include "KinematicBody.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"


#include "KinematicCollision.hpp"


namespace godot {


KinematicBody *KinematicBody::_new()
{
	return (KinematicBody *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"KinematicBody")());
}
Ref<KinematicCollision> KinematicBody::move_and_collide(const Vector3 rel_vec, const bool infinite_inertia, const bool test_only) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("KinematicBody", "move_and_collide");
	}
	return Ref<KinematicCollision>::__internal_constructor(___godot_icall_Object_Vector3_bool_bool(mb, (const Object *) this, rel_vec, infinite_inertia, test_only));
}

Vector3 KinematicBody::move_and_slide(const Vector3 linear_velocity, const Vector3 floor_normal, const bool stop_on_slope, const int64_t max_slides, const double floor_max_angle, const bool infinite_inertia) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("KinematicBody", "move_and_slide");
	}
	return ___godot_icall_Vector3_Vector3_Vector3_bool_int_float_bool(mb, (const Object *) this, linear_velocity, floor_normal, stop_on_slope, max_slides, floor_max_angle, infinite_inertia);
}

Vector3 KinematicBody::move_and_slide_with_snap(const Vector3 linear_velocity, const Vector3 snap, const Vector3 floor_normal, const bool stop_on_slope, const int64_t max_slides, const double floor_max_angle, const bool infinite_inertia) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("KinematicBody", "move_and_slide_with_snap");
	}
	return ___godot_icall_Vector3_Vector3_Vector3_Vector3_bool_int_float_bool(mb, (const Object *) this, linear_velocity, snap, floor_normal, stop_on_slope, max_slides, floor_max_angle, infinite_inertia);
}

bool KinematicBody::test_move(const Transform from, const Vector3 rel_vec, const bool infinite_inertia) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("KinematicBody", "test_move");
	}
	return ___godot_icall_bool_Transform_Vector3_bool(mb, (const Object *) this, from, rel_vec, infinite_inertia);
}

bool KinematicBody::is_on_floor() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("KinematicBody", "is_on_floor");
	}
	return ___godot_icall_bool(mb, (const Object *) this);
}

bool KinematicBody::is_on_ceiling() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("KinematicBody", "is_on_ceiling");
	}
	return ___godot_icall_bool(mb, (const Object *) this);
}

bool KinematicBody::is_on_wall() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("KinematicBody", "is_on_wall");
	}
	return ___godot_icall_bool(mb, (const Object *) this);
}

Vector3 KinematicBody::get_floor_velocity() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("KinematicBody", "get_floor_velocity");
	}
	return ___godot_icall_Vector3(mb, (const Object *) this);
}

void KinematicBody::set_axis_lock(const int64_t axis, const bool lock) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("KinematicBody", "set_axis_lock");
	}
	___godot_icall_void_int_bool(mb, (const Object *) this, axis, lock);
}

bool KinematicBody::get_axis_lock(const int64_t axis) const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("KinematicBody", "get_axis_lock");
	}
	return ___godot_icall_bool_int(mb, (const Object *) this, axis);
}

void KinematicBody::set_safe_margin(const double pixels) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("KinematicBody", "set_safe_margin");
	}
	___godot_icall_void_float(mb, (const Object *) this, pixels);
}

double KinematicBody::get_safe_margin() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("KinematicBody", "get_safe_margin");
	}
	return ___godot_icall_float(mb, (const Object *) this);
}

int64_t KinematicBody::get_slide_count() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("KinematicBody", "get_slide_count");
	}
	return ___godot_icall_int(mb, (const Object *) this);
}

Ref<KinematicCollision> KinematicBody::get_slide_collision(const int64_t slide_idx) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("KinematicBody", "get_slide_collision");
	}
	return Ref<KinematicCollision>::__internal_constructor(___godot_icall_Object_int(mb, (const Object *) this, slide_idx));
}

}