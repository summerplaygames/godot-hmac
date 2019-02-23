#include "AudioEffectAmplify.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


AudioEffectAmplify *AudioEffectAmplify::_new()
{
	return (AudioEffectAmplify *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"AudioEffectAmplify")());
}
void AudioEffectAmplify::set_volume_db(const double volume) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AudioEffectAmplify", "set_volume_db");
	}
	___godot_icall_void_float(mb, (const Object *) this, volume);
}

double AudioEffectAmplify::get_volume_db() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AudioEffectAmplify", "get_volume_db");
	}
	return ___godot_icall_float(mb, (const Object *) this);
}

}