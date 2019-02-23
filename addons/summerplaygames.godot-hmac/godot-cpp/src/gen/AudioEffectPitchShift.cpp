#include "AudioEffectPitchShift.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


AudioEffectPitchShift *AudioEffectPitchShift::_new()
{
	return (AudioEffectPitchShift *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"AudioEffectPitchShift")());
}
void AudioEffectPitchShift::set_pitch_scale(const double rate) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AudioEffectPitchShift", "set_pitch_scale");
	}
	___godot_icall_void_float(mb, (const Object *) this, rate);
}

double AudioEffectPitchShift::get_pitch_scale() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AudioEffectPitchShift", "get_pitch_scale");
	}
	return ___godot_icall_float(mb, (const Object *) this);
}

}