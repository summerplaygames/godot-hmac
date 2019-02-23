#include "AnimationNode.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"


#include "AnimationNode.hpp"


namespace godot {


AnimationNode *AnimationNode::_new()
{
	return (AnimationNode *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"AnimationNode")());
}
void AnimationNode::process(const double time, const bool seek) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNode", "process");
	}
	___godot_icall_void_float_bool(mb, (const Object *) this, time, seek);
}

String AnimationNode::get_caption() {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNode", "get_caption");
	}
	return ___godot_icall_String(mb, (const Object *) this);
}

String AnimationNode::has_filter() {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNode", "has_filter");
	}
	return ___godot_icall_String(mb, (const Object *) this);
}

int64_t AnimationNode::get_input_count() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNode", "get_input_count");
	}
	return ___godot_icall_int(mb, (const Object *) this);
}

String AnimationNode::get_input_name(const int64_t input) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNode", "get_input_name");
	}
	return ___godot_icall_String_int(mb, (const Object *) this, input);
}

void AnimationNode::add_input(const String name) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNode", "add_input");
	}
	___godot_icall_void_String(mb, (const Object *) this, name);
}

void AnimationNode::remove_input(const int64_t index) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNode", "remove_input");
	}
	___godot_icall_void_int(mb, (const Object *) this, index);
}

void AnimationNode::set_filter_path(const NodePath path, const bool enable) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNode", "set_filter_path");
	}
	___godot_icall_void_NodePath_bool(mb, (const Object *) this, path, enable);
}

bool AnimationNode::is_path_filtered(const NodePath path) const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNode", "is_path_filtered");
	}
	return ___godot_icall_bool_NodePath(mb, (const Object *) this, path);
}

void AnimationNode::set_filter_enabled(const bool enable) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNode", "set_filter_enabled");
	}
	___godot_icall_void_bool(mb, (const Object *) this, enable);
}

bool AnimationNode::is_filter_enabled() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNode", "is_filter_enabled");
	}
	return ___godot_icall_bool(mb, (const Object *) this);
}

void AnimationNode::_set_filters(const Array filters) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNode", "_set_filters");
	}
	___godot_icall_void_Array(mb, (const Object *) this, filters);
}

Array AnimationNode::_get_filters() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNode", "_get_filters");
	}
	return ___godot_icall_Array(mb, (const Object *) this);
}

void AnimationNode::blend_animation(const String animation, const double time, const double delta, const bool seeked, const double blend) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNode", "blend_animation");
	}
	___godot_icall_void_String_float_float_bool_float(mb, (const Object *) this, animation, time, delta, seeked, blend);
}

double AnimationNode::blend_node(const String name, const Ref<AnimationNode> node, const double time, const bool seek, const double blend, const int64_t filter, const bool optimize) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNode", "blend_node");
	}
	return ___godot_icall_float_String_Object_float_bool_float_int_bool(mb, (const Object *) this, name, node.ptr(), time, seek, blend, filter, optimize);
}

double AnimationNode::blend_input(const int64_t input_index, const double time, const bool seek, const double blend, const int64_t filter, const bool optimize) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNode", "blend_input");
	}
	return ___godot_icall_float_int_float_bool_float_int_bool(mb, (const Object *) this, input_index, time, seek, blend, filter, optimize);
}

void AnimationNode::set_parameter(const String name, const Variant value) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNode", "set_parameter");
	}
	___godot_icall_void_String_Variant(mb, (const Object *) this, name, value);
}

Variant AnimationNode::get_parameter(const String name) const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNode", "get_parameter");
	}
	return ___godot_icall_Variant_String(mb, (const Object *) this, name);
}

}