#include "CSGShape.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


void CSGShape::_update_shape() {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CSGShape", "_update_shape");
	}
	___godot_icall_void(mb, (const Object *) this);
}

bool CSGShape::is_root_shape() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CSGShape", "is_root_shape");
	}
	return ___godot_icall_bool(mb, (const Object *) this);
}

void CSGShape::set_operation(const int64_t operation) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CSGShape", "set_operation");
	}
	___godot_icall_void_int(mb, (const Object *) this, operation);
}

CSGShape::Operation CSGShape::get_operation() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CSGShape", "get_operation");
	}
	return (CSGShape::Operation) ___godot_icall_int(mb, (const Object *) this);
}

void CSGShape::set_use_collision(const bool operation) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CSGShape", "set_use_collision");
	}
	___godot_icall_void_bool(mb, (const Object *) this, operation);
}

bool CSGShape::is_using_collision() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CSGShape", "is_using_collision");
	}
	return ___godot_icall_bool(mb, (const Object *) this);
}

void CSGShape::set_snap(const double snap) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CSGShape", "set_snap");
	}
	___godot_icall_void_float(mb, (const Object *) this, snap);
}

double CSGShape::get_snap() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CSGShape", "get_snap");
	}
	return ___godot_icall_float(mb, (const Object *) this);
}

void CSGShape::set_calculate_tangents(const bool enabled) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CSGShape", "set_calculate_tangents");
	}
	___godot_icall_void_bool(mb, (const Object *) this, enabled);
}

bool CSGShape::is_calculating_tangents() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CSGShape", "is_calculating_tangents");
	}
	return ___godot_icall_bool(mb, (const Object *) this);
}

}