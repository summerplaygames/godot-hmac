#include "GridContainer.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


GridContainer *GridContainer::_new()
{
	return (GridContainer *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"GridContainer")());
}
void GridContainer::set_columns(const int64_t columns) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("GridContainer", "set_columns");
	}
	___godot_icall_void_int(mb, (const Object *) this, columns);
}

int64_t GridContainer::get_columns() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("GridContainer", "get_columns");
	}
	return ___godot_icall_int(mb, (const Object *) this);
}

}