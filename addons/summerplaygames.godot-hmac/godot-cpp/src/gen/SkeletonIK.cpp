#include "SkeletonIK.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"


#include "Skeleton.hpp"


namespace godot {


SkeletonIK *SkeletonIK::_new()
{
	return (SkeletonIK *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"SkeletonIK")());
}
void SkeletonIK::set_root_bone(const String root_bone) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("SkeletonIK", "set_root_bone");
	}
	___godot_icall_void_String(mb, (const Object *) this, root_bone);
}

String SkeletonIK::get_root_bone() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("SkeletonIK", "get_root_bone");
	}
	return ___godot_icall_String(mb, (const Object *) this);
}

void SkeletonIK::set_tip_bone(const String tip_bone) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("SkeletonIK", "set_tip_bone");
	}
	___godot_icall_void_String(mb, (const Object *) this, tip_bone);
}

String SkeletonIK::get_tip_bone() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("SkeletonIK", "get_tip_bone");
	}
	return ___godot_icall_String(mb, (const Object *) this);
}

void SkeletonIK::set_interpolation(const double interpolation) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("SkeletonIK", "set_interpolation");
	}
	___godot_icall_void_float(mb, (const Object *) this, interpolation);
}

double SkeletonIK::get_interpolation() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("SkeletonIK", "get_interpolation");
	}
	return ___godot_icall_float(mb, (const Object *) this);
}

void SkeletonIK::set_target_transform(const Transform target) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("SkeletonIK", "set_target_transform");
	}
	___godot_icall_void_Transform(mb, (const Object *) this, target);
}

Transform SkeletonIK::get_target_transform() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("SkeletonIK", "get_target_transform");
	}
	return ___godot_icall_Transform(mb, (const Object *) this);
}

void SkeletonIK::set_target_node(const NodePath node) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("SkeletonIK", "set_target_node");
	}
	___godot_icall_void_NodePath(mb, (const Object *) this, node);
}

NodePath SkeletonIK::get_target_node() {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("SkeletonIK", "get_target_node");
	}
	return ___godot_icall_NodePath(mb, (const Object *) this);
}

void SkeletonIK::set_use_magnet(const bool use) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("SkeletonIK", "set_use_magnet");
	}
	___godot_icall_void_bool(mb, (const Object *) this, use);
}

bool SkeletonIK::is_using_magnet() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("SkeletonIK", "is_using_magnet");
	}
	return ___godot_icall_bool(mb, (const Object *) this);
}

void SkeletonIK::set_magnet_position(const Vector3 local_position) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("SkeletonIK", "set_magnet_position");
	}
	___godot_icall_void_Vector3(mb, (const Object *) this, local_position);
}

Vector3 SkeletonIK::get_magnet_position() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("SkeletonIK", "get_magnet_position");
	}
	return ___godot_icall_Vector3(mb, (const Object *) this);
}

Skeleton *SkeletonIK::get_parent_skeleton() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("SkeletonIK", "get_parent_skeleton");
	}
	return (Skeleton *) ___godot_icall_Object(mb, (const Object *) this);
}

bool SkeletonIK::is_running() {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("SkeletonIK", "is_running");
	}
	return ___godot_icall_bool(mb, (const Object *) this);
}

void SkeletonIK::set_min_distance(const double min_distance) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("SkeletonIK", "set_min_distance");
	}
	___godot_icall_void_float(mb, (const Object *) this, min_distance);
}

double SkeletonIK::get_min_distance() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("SkeletonIK", "get_min_distance");
	}
	return ___godot_icall_float(mb, (const Object *) this);
}

void SkeletonIK::set_max_iterations(const int64_t iterations) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("SkeletonIK", "set_max_iterations");
	}
	___godot_icall_void_int(mb, (const Object *) this, iterations);
}

int64_t SkeletonIK::get_max_iterations() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("SkeletonIK", "get_max_iterations");
	}
	return ___godot_icall_int(mb, (const Object *) this);
}

void SkeletonIK::start(const bool one_time) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("SkeletonIK", "start");
	}
	___godot_icall_void_bool(mb, (const Object *) this, one_time);
}

void SkeletonIK::stop() {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("SkeletonIK", "stop");
	}
	___godot_icall_void(mb, (const Object *) this);
}

}