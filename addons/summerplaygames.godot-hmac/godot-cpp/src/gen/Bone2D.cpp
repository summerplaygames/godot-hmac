#include "Bone2D.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


Bone2D *Bone2D::_new()
{
	return (Bone2D *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"Bone2D")());
}
void Bone2D::set_rest(const Transform2D rest) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("Bone2D", "set_rest");
	}
	___godot_icall_void_Transform2D(mb, (const Object *) this, rest);
}

Transform2D Bone2D::get_rest() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("Bone2D", "get_rest");
	}
	return ___godot_icall_Transform2D(mb, (const Object *) this);
}

void Bone2D::apply_rest() {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("Bone2D", "apply_rest");
	}
	___godot_icall_void(mb, (const Object *) this);
}

Transform2D Bone2D::get_skeleton_rest() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("Bone2D", "get_skeleton_rest");
	}
	return ___godot_icall_Transform2D(mb, (const Object *) this);
}

int64_t Bone2D::get_index_in_skeleton() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("Bone2D", "get_index_in_skeleton");
	}
	return ___godot_icall_int(mb, (const Object *) this);
}

void Bone2D::set_default_length(const double default_length) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("Bone2D", "set_default_length");
	}
	___godot_icall_void_float(mb, (const Object *) this, default_length);
}

double Bone2D::get_default_length() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("Bone2D", "get_default_length");
	}
	return ___godot_icall_float(mb, (const Object *) this);
}

}