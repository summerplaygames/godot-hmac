#include "PHashTranslation.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"


#include "Translation.hpp"


namespace godot {


PHashTranslation *PHashTranslation::_new()
{
	return (PHashTranslation *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"PHashTranslation")());
}
void PHashTranslation::generate(const Ref<Translation> from) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("PHashTranslation", "generate");
	}
	___godot_icall_void_Object(mb, (const Object *) this, from.ptr());
}

}