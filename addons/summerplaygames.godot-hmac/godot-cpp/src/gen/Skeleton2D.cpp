#include "Skeleton2D.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"


#include "Bone2D.hpp"


namespace godot {


Skeleton2D *Skeleton2D::_new()
{
	return (Skeleton2D *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"Skeleton2D")());
}
void Skeleton2D::_update_bone_setup() {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("Skeleton2D", "_update_bone_setup");
	}
	___godot_icall_void(mb, (const Object *) this);
}

void Skeleton2D::_update_transform() {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("Skeleton2D", "_update_transform");
	}
	___godot_icall_void(mb, (const Object *) this);
}

int64_t Skeleton2D::get_bone_count() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("Skeleton2D", "get_bone_count");
	}
	return ___godot_icall_int(mb, (const Object *) this);
}

Bone2D *Skeleton2D::get_bone(const int64_t idx) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("Skeleton2D", "get_bone");
	}
	return (Bone2D *) ___godot_icall_Object_int(mb, (const Object *) this, idx);
}

RID Skeleton2D::get_skeleton() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("Skeleton2D", "get_skeleton");
	}
	return ___godot_icall_RID(mb, (const Object *) this);
}

}