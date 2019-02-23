#include "InstancePlaceholder.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"


#include "Node.hpp"
#include "PackedScene.hpp"


namespace godot {


Dictionary InstancePlaceholder::get_stored_values(const bool with_order) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("InstancePlaceholder", "get_stored_values");
	}
	return ___godot_icall_Dictionary_bool(mb, (const Object *) this, with_order);
}

Node *InstancePlaceholder::create_instance(const bool replace, const Ref<PackedScene> custom_scene) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("InstancePlaceholder", "create_instance");
	}
	return (Node *) ___godot_icall_Object_bool_Object(mb, (const Object *) this, replace, custom_scene.ptr());
}

void InstancePlaceholder::replace_by_instance(const Ref<PackedScene> custom_scene) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("InstancePlaceholder", "replace_by_instance");
	}
	___godot_icall_void_Object(mb, (const Object *) this, custom_scene.ptr());
}

String InstancePlaceholder::get_instance_path() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("InstancePlaceholder", "get_instance_path");
	}
	return ___godot_icall_String(mb, (const Object *) this);
}

}