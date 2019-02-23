#include "GDNative.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"


#include "GDNativeLibrary.hpp"


namespace godot {


GDNative *GDNative::_new()
{
	return (GDNative *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"GDNative")());
}
void GDNative::set_library(const Ref<GDNativeLibrary> library) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("GDNative", "set_library");
	}
	___godot_icall_void_Object(mb, (const Object *) this, library.ptr());
}

Ref<GDNativeLibrary> GDNative::get_library() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("GDNative", "get_library");
	}
	return Ref<GDNativeLibrary>::__internal_constructor(___godot_icall_Object(mb, (const Object *) this));
}

bool GDNative::initialize() {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("GDNative", "initialize");
	}
	return ___godot_icall_bool(mb, (const Object *) this);
}

bool GDNative::terminate() {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("GDNative", "terminate");
	}
	return ___godot_icall_bool(mb, (const Object *) this);
}

Variant GDNative::call_native(const String calling_type, const String procedure_name, const Array arguments) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("GDNative", "call_native");
	}
	return ___godot_icall_Variant_String_String_Array(mb, (const Object *) this, calling_type, procedure_name, arguments);
}

}