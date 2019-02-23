#include "EditorInspector.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"


#include "Object.hpp"
#include "Resource.hpp"


namespace godot {


EditorInspector *EditorInspector::_new()
{
	return (EditorInspector *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"EditorInspector")());
}
void EditorInspector::_property_changed(const String arg0, const Variant arg1, const bool arg2) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("EditorInspector", "_property_changed");
	}
	___godot_icall_void_String_Variant_bool(mb, (const Object *) this, arg0, arg1, arg2);
}

void EditorInspector::_multiple_properties_changed(const PoolStringArray arg0, const Array arg1) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("EditorInspector", "_multiple_properties_changed");
	}
	___godot_icall_void_PoolStringArray_Array(mb, (const Object *) this, arg0, arg1);
}

void EditorInspector::_property_changed_update_all(const String arg0, const Variant arg1) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("EditorInspector", "_property_changed_update_all");
	}
	___godot_icall_void_String_Variant(mb, (const Object *) this, arg0, arg1);
}

void EditorInspector::_edit_request_change(const Object *arg0, const String arg1) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("EditorInspector", "_edit_request_change");
	}
	___godot_icall_void_Object_String(mb, (const Object *) this, arg0, arg1);
}

void EditorInspector::_node_removed(const Object *arg0) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("EditorInspector", "_node_removed");
	}
	___godot_icall_void_Object(mb, (const Object *) this, arg0);
}

void EditorInspector::_filter_changed(const String arg0) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("EditorInspector", "_filter_changed");
	}
	___godot_icall_void_String(mb, (const Object *) this, arg0);
}

void EditorInspector::_property_keyed(const String arg0, const bool arg1) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("EditorInspector", "_property_keyed");
	}
	___godot_icall_void_String_bool(mb, (const Object *) this, arg0, arg1);
}

void EditorInspector::_property_keyed_with_value(const String arg0, const Variant arg1, const bool arg2) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("EditorInspector", "_property_keyed_with_value");
	}
	___godot_icall_void_String_Variant_bool(mb, (const Object *) this, arg0, arg1, arg2);
}

void EditorInspector::_property_checked(const String arg0, const bool arg1) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("EditorInspector", "_property_checked");
	}
	___godot_icall_void_String_bool(mb, (const Object *) this, arg0, arg1);
}

void EditorInspector::_property_selected(const String arg0, const int64_t arg1) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("EditorInspector", "_property_selected");
	}
	___godot_icall_void_String_int(mb, (const Object *) this, arg0, arg1);
}

void EditorInspector::_resource_selected(const String arg0, const Ref<Resource> arg1) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("EditorInspector", "_resource_selected");
	}
	___godot_icall_void_String_Object(mb, (const Object *) this, arg0, arg1.ptr());
}

void EditorInspector::_object_id_selected(const String arg0, const int64_t arg1) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("EditorInspector", "_object_id_selected");
	}
	___godot_icall_void_String_int(mb, (const Object *) this, arg0, arg1);
}

void EditorInspector::_vscroll_changed(const double arg0) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("EditorInspector", "_vscroll_changed");
	}
	___godot_icall_void_float(mb, (const Object *) this, arg0);
}

void EditorInspector::refresh() {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("EditorInspector", "refresh");
	}
	___godot_icall_void(mb, (const Object *) this);
}

}