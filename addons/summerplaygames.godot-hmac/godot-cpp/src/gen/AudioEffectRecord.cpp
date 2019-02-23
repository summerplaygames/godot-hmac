#include "AudioEffectRecord.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"


#include "AudioStreamSample.hpp"


namespace godot {


AudioEffectRecord *AudioEffectRecord::_new()
{
	return (AudioEffectRecord *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"AudioEffectRecord")());
}
void AudioEffectRecord::set_recording_active(const bool record) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AudioEffectRecord", "set_recording_active");
	}
	___godot_icall_void_bool(mb, (const Object *) this, record);
}

bool AudioEffectRecord::is_recording_active() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AudioEffectRecord", "is_recording_active");
	}
	return ___godot_icall_bool(mb, (const Object *) this);
}

void AudioEffectRecord::set_format(const int64_t format) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AudioEffectRecord", "set_format");
	}
	___godot_icall_void_int(mb, (const Object *) this, format);
}

AudioStreamSample::Format AudioEffectRecord::get_format() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AudioEffectRecord", "get_format");
	}
	return (AudioStreamSample::Format) ___godot_icall_int(mb, (const Object *) this);
}

Ref<AudioStreamSample> AudioEffectRecord::get_recording() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AudioEffectRecord", "get_recording");
	}
	return Ref<AudioStreamSample>::__internal_constructor(___godot_icall_Object(mb, (const Object *) this));
}

}