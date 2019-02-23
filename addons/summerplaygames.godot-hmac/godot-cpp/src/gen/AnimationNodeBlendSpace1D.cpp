#include "AnimationNodeBlendSpace1D.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"


#include "AnimationRootNode.hpp"


namespace godot {


AnimationNodeBlendSpace1D *AnimationNodeBlendSpace1D::_new()
{
	return (AnimationNodeBlendSpace1D *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"AnimationNodeBlendSpace1D")());
}
void AnimationNodeBlendSpace1D::add_blend_point(const Ref<AnimationRootNode> node, const double pos, const int64_t at_index) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeBlendSpace1D", "add_blend_point");
	}
	___godot_icall_void_Object_float_int(mb, (const Object *) this, node.ptr(), pos, at_index);
}

void AnimationNodeBlendSpace1D::set_blend_point_position(const int64_t point, const double pos) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeBlendSpace1D", "set_blend_point_position");
	}
	___godot_icall_void_int_float(mb, (const Object *) this, point, pos);
}

double AnimationNodeBlendSpace1D::get_blend_point_position(const int64_t point) const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeBlendSpace1D", "get_blend_point_position");
	}
	return ___godot_icall_float_int(mb, (const Object *) this, point);
}

void AnimationNodeBlendSpace1D::set_blend_point_node(const int64_t point, const Ref<AnimationRootNode> node) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeBlendSpace1D", "set_blend_point_node");
	}
	___godot_icall_void_int_Object(mb, (const Object *) this, point, node.ptr());
}

Ref<AnimationRootNode> AnimationNodeBlendSpace1D::get_blend_point_node(const int64_t point) const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeBlendSpace1D", "get_blend_point_node");
	}
	return Ref<AnimationRootNode>::__internal_constructor(___godot_icall_Object_int(mb, (const Object *) this, point));
}

void AnimationNodeBlendSpace1D::remove_blend_point(const int64_t point) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeBlendSpace1D", "remove_blend_point");
	}
	___godot_icall_void_int(mb, (const Object *) this, point);
}

int64_t AnimationNodeBlendSpace1D::get_blend_point_count() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeBlendSpace1D", "get_blend_point_count");
	}
	return ___godot_icall_int(mb, (const Object *) this);
}

void AnimationNodeBlendSpace1D::set_min_space(const double min_space) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeBlendSpace1D", "set_min_space");
	}
	___godot_icall_void_float(mb, (const Object *) this, min_space);
}

double AnimationNodeBlendSpace1D::get_min_space() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeBlendSpace1D", "get_min_space");
	}
	return ___godot_icall_float(mb, (const Object *) this);
}

void AnimationNodeBlendSpace1D::set_max_space(const double max_space) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeBlendSpace1D", "set_max_space");
	}
	___godot_icall_void_float(mb, (const Object *) this, max_space);
}

double AnimationNodeBlendSpace1D::get_max_space() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeBlendSpace1D", "get_max_space");
	}
	return ___godot_icall_float(mb, (const Object *) this);
}

void AnimationNodeBlendSpace1D::set_snap(const double snap) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeBlendSpace1D", "set_snap");
	}
	___godot_icall_void_float(mb, (const Object *) this, snap);
}

double AnimationNodeBlendSpace1D::get_snap() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeBlendSpace1D", "get_snap");
	}
	return ___godot_icall_float(mb, (const Object *) this);
}

void AnimationNodeBlendSpace1D::set_value_label(const String text) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeBlendSpace1D", "set_value_label");
	}
	___godot_icall_void_String(mb, (const Object *) this, text);
}

String AnimationNodeBlendSpace1D::get_value_label() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeBlendSpace1D", "get_value_label");
	}
	return ___godot_icall_String(mb, (const Object *) this);
}

void AnimationNodeBlendSpace1D::_add_blend_point(const int64_t index, const Ref<AnimationRootNode> node) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeBlendSpace1D", "_add_blend_point");
	}
	___godot_icall_void_int_Object(mb, (const Object *) this, index, node.ptr());
}

void AnimationNodeBlendSpace1D::_tree_changed() {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeBlendSpace1D", "_tree_changed");
	}
	___godot_icall_void(mb, (const Object *) this);
}

}