#include "KinematicBody2D.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"


#include "KinematicCollision2D.hpp"
#include "Object.hpp"


namespace godot {


KinematicBody2D *KinematicBody2D::_new()
{
	return (KinematicBody2D *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"KinematicBody2D")());
}
Ref<KinematicCollision2D> KinematicBody2D::move_and_collide(const Vector2 rel_vec, const bool infinite_inertia, const bool exclude_raycast_shapes, const bool test_only) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("KinematicBody2D", "move_and_collide");
	}
	return Ref<KinematicCollision2D>::__internal_constructor(___godot_icall_Object_Vector2_bool_bool_bool(mb, (const Object *) this, rel_vec, infinite_inertia, exclude_raycast_shapes, test_only));
}

Vector2 KinematicBody2D::move_and_slide(const Vector2 linear_velocity, const Vector2 floor_normal, const bool stop_on_slope, const int64_t max_slides, const double floor_max_angle, const bool infinite_inertia) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("KinematicBody2D", "move_and_slide");
	}
	return ___godot_icall_Vector2_Vector2_Vector2_bool_int_float_bool(mb, (const Object *) this, linear_velocity, floor_normal, stop_on_slope, max_slides, floor_max_angle, infinite_inertia);
}

Vector2 KinematicBody2D::move_and_slide_with_snap(const Vector2 linear_velocity, const Vector2 snap, const Vector2 floor_normal, const bool stop_on_slope, const int64_t max_slides, const double floor_max_angle, const bool infinite_inertia) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("KinematicBody2D", "move_and_slide_with_snap");
	}
	return ___godot_icall_Vector2_Vector2_Vector2_Vector2_bool_int_float_bool(mb, (const Object *) this, linear_velocity, snap, floor_normal, stop_on_slope, max_slides, floor_max_angle, infinite_inertia);
}

bool KinematicBody2D::test_move(const Transform2D from, const Vector2 rel_vec, const bool infinite_inertia) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("KinematicBody2D", "test_move");
	}
	return ___godot_icall_bool_Transform2D_Vector2_bool(mb, (const Object *) this, from, rel_vec, infinite_inertia);
}

bool KinematicBody2D::is_on_floor() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("KinematicBody2D", "is_on_floor");
	}
	return ___godot_icall_bool(mb, (const Object *) this);
}

bool KinematicBody2D::is_on_ceiling() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("KinematicBody2D", "is_on_ceiling");
	}
	return ___godot_icall_bool(mb, (const Object *) this);
}

bool KinematicBody2D::is_on_wall() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("KinematicBody2D", "is_on_wall");
	}
	return ___godot_icall_bool(mb, (const Object *) this);
}

Vector2 KinematicBody2D::get_floor_velocity() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("KinematicBody2D", "get_floor_velocity");
	}
	return ___godot_icall_Vector2(mb, (const Object *) this);
}

void KinematicBody2D::set_safe_margin(const double pixels) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("KinematicBody2D", "set_safe_margin");
	}
	___godot_icall_void_float(mb, (const Object *) this, pixels);
}

double KinematicBody2D::get_safe_margin() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("KinematicBody2D", "get_safe_margin");
	}
	return ___godot_icall_float(mb, (const Object *) this);
}

int64_t KinematicBody2D::get_slide_count() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("KinematicBody2D", "get_slide_count");
	}
	return ___godot_icall_int(mb, (const Object *) this);
}

Ref<KinematicCollision2D> KinematicBody2D::get_slide_collision(const int64_t slide_idx) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("KinematicBody2D", "get_slide_collision");
	}
	return Ref<KinematicCollision2D>::__internal_constructor(___godot_icall_Object_int(mb, (const Object *) this, slide_idx));
}

void KinematicBody2D::set_sync_to_physics(const bool enable) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("KinematicBody2D", "set_sync_to_physics");
	}
	___godot_icall_void_bool(mb, (const Object *) this, enable);
}

bool KinematicBody2D::is_sync_to_physics_enabled() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("KinematicBody2D", "is_sync_to_physics_enabled");
	}
	return ___godot_icall_bool(mb, (const Object *) this);
}

void KinematicBody2D::_direct_state_changed(const Object *arg0) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("KinematicBody2D", "_direct_state_changed");
	}
	___godot_icall_void_Object(mb, (const Object *) this, arg0);
}

}