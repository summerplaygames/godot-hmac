#include "AnimationNodeBlendSpace2D.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"


#include "AnimationRootNode.hpp"


namespace godot {


AnimationNodeBlendSpace2D *AnimationNodeBlendSpace2D::_new()
{
	return (AnimationNodeBlendSpace2D *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"AnimationNodeBlendSpace2D")());
}
void AnimationNodeBlendSpace2D::add_blend_point(const Ref<AnimationRootNode> node, const Vector2 pos, const int64_t at_index) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeBlendSpace2D", "add_blend_point");
	}
	___godot_icall_void_Object_Vector2_int(mb, (const Object *) this, node.ptr(), pos, at_index);
}

void AnimationNodeBlendSpace2D::set_blend_point_position(const int64_t point, const Vector2 pos) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeBlendSpace2D", "set_blend_point_position");
	}
	___godot_icall_void_int_Vector2(mb, (const Object *) this, point, pos);
}

Vector2 AnimationNodeBlendSpace2D::get_blend_point_position(const int64_t point) const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeBlendSpace2D", "get_blend_point_position");
	}
	return ___godot_icall_Vector2_int(mb, (const Object *) this, point);
}

void AnimationNodeBlendSpace2D::set_blend_point_node(const int64_t point, const Ref<AnimationRootNode> node) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeBlendSpace2D", "set_blend_point_node");
	}
	___godot_icall_void_int_Object(mb, (const Object *) this, point, node.ptr());
}

Ref<AnimationRootNode> AnimationNodeBlendSpace2D::get_blend_point_node(const int64_t point) const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeBlendSpace2D", "get_blend_point_node");
	}
	return Ref<AnimationRootNode>::__internal_constructor(___godot_icall_Object_int(mb, (const Object *) this, point));
}

void AnimationNodeBlendSpace2D::remove_blend_point(const int64_t point) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeBlendSpace2D", "remove_blend_point");
	}
	___godot_icall_void_int(mb, (const Object *) this, point);
}

int64_t AnimationNodeBlendSpace2D::get_blend_point_count() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeBlendSpace2D", "get_blend_point_count");
	}
	return ___godot_icall_int(mb, (const Object *) this);
}

void AnimationNodeBlendSpace2D::add_triangle(const int64_t x, const int64_t y, const int64_t z, const int64_t at_index) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeBlendSpace2D", "add_triangle");
	}
	___godot_icall_void_int_int_int_int(mb, (const Object *) this, x, y, z, at_index);
}

int64_t AnimationNodeBlendSpace2D::get_triangle_point(const int64_t triangle, const int64_t point) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeBlendSpace2D", "get_triangle_point");
	}
	return ___godot_icall_int_int_int(mb, (const Object *) this, triangle, point);
}

void AnimationNodeBlendSpace2D::remove_triangle(const int64_t triangle) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeBlendSpace2D", "remove_triangle");
	}
	___godot_icall_void_int(mb, (const Object *) this, triangle);
}

int64_t AnimationNodeBlendSpace2D::get_triangle_count() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeBlendSpace2D", "get_triangle_count");
	}
	return ___godot_icall_int(mb, (const Object *) this);
}

void AnimationNodeBlendSpace2D::set_min_space(const Vector2 min_space) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeBlendSpace2D", "set_min_space");
	}
	___godot_icall_void_Vector2(mb, (const Object *) this, min_space);
}

Vector2 AnimationNodeBlendSpace2D::get_min_space() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeBlendSpace2D", "get_min_space");
	}
	return ___godot_icall_Vector2(mb, (const Object *) this);
}

void AnimationNodeBlendSpace2D::set_max_space(const Vector2 max_space) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeBlendSpace2D", "set_max_space");
	}
	___godot_icall_void_Vector2(mb, (const Object *) this, max_space);
}

Vector2 AnimationNodeBlendSpace2D::get_max_space() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeBlendSpace2D", "get_max_space");
	}
	return ___godot_icall_Vector2(mb, (const Object *) this);
}

void AnimationNodeBlendSpace2D::set_snap(const Vector2 snap) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeBlendSpace2D", "set_snap");
	}
	___godot_icall_void_Vector2(mb, (const Object *) this, snap);
}

Vector2 AnimationNodeBlendSpace2D::get_snap() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeBlendSpace2D", "get_snap");
	}
	return ___godot_icall_Vector2(mb, (const Object *) this);
}

void AnimationNodeBlendSpace2D::set_x_label(const String text) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeBlendSpace2D", "set_x_label");
	}
	___godot_icall_void_String(mb, (const Object *) this, text);
}

String AnimationNodeBlendSpace2D::get_x_label() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeBlendSpace2D", "get_x_label");
	}
	return ___godot_icall_String(mb, (const Object *) this);
}

void AnimationNodeBlendSpace2D::set_y_label(const String text) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeBlendSpace2D", "set_y_label");
	}
	___godot_icall_void_String(mb, (const Object *) this, text);
}

String AnimationNodeBlendSpace2D::get_y_label() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeBlendSpace2D", "get_y_label");
	}
	return ___godot_icall_String(mb, (const Object *) this);
}

void AnimationNodeBlendSpace2D::_add_blend_point(const int64_t index, const Ref<AnimationRootNode> node) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeBlendSpace2D", "_add_blend_point");
	}
	___godot_icall_void_int_Object(mb, (const Object *) this, index, node.ptr());
}

void AnimationNodeBlendSpace2D::_set_triangles(const PoolIntArray triangles) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeBlendSpace2D", "_set_triangles");
	}
	___godot_icall_void_PoolIntArray(mb, (const Object *) this, triangles);
}

PoolIntArray AnimationNodeBlendSpace2D::_get_triangles() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeBlendSpace2D", "_get_triangles");
	}
	return ___godot_icall_PoolIntArray(mb, (const Object *) this);
}

void AnimationNodeBlendSpace2D::set_auto_triangles(const bool enable) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeBlendSpace2D", "set_auto_triangles");
	}
	___godot_icall_void_bool(mb, (const Object *) this, enable);
}

bool AnimationNodeBlendSpace2D::get_auto_triangles() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeBlendSpace2D", "get_auto_triangles");
	}
	return ___godot_icall_bool(mb, (const Object *) this);
}

void AnimationNodeBlendSpace2D::_tree_changed() {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeBlendSpace2D", "_tree_changed");
	}
	___godot_icall_void(mb, (const Object *) this);
}

}