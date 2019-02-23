#include "PinJoint.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


PinJoint *PinJoint::_new()
{
	return (PinJoint *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"PinJoint")());
}
void PinJoint::set_param(const int64_t param, const double value) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("PinJoint", "set_param");
	}
	___godot_icall_void_int_float(mb, (const Object *) this, param, value);
}

double PinJoint::get_param(const int64_t param) const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("PinJoint", "get_param");
	}
	return ___godot_icall_float_int(mb, (const Object *) this, param);
}

}