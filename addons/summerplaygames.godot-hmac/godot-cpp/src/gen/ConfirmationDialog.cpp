#include "ConfirmationDialog.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"


#include "Button.hpp"


namespace godot {


ConfirmationDialog *ConfirmationDialog::_new()
{
	return (ConfirmationDialog *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"ConfirmationDialog")());
}
Button *ConfirmationDialog::get_cancel() {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("ConfirmationDialog", "get_cancel");
	}
	return (Button *) ___godot_icall_Object(mb, (const Object *) this);
}

}