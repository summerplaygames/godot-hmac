#include "UPNPDevice.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


UPNPDevice *UPNPDevice::_new()
{
	return (UPNPDevice *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"UPNPDevice")());
}
bool UPNPDevice::is_valid_gateway() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("UPNPDevice", "is_valid_gateway");
	}
	return ___godot_icall_bool(mb, (const Object *) this);
}

String UPNPDevice::query_external_address() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("UPNPDevice", "query_external_address");
	}
	return ___godot_icall_String(mb, (const Object *) this);
}

int64_t UPNPDevice::add_port_mapping(const int64_t port, const int64_t port_internal, const String desc, const String proto, const int64_t duration) const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("UPNPDevice", "add_port_mapping");
	}
	return ___godot_icall_int_int_int_String_String_int(mb, (const Object *) this, port, port_internal, desc, proto, duration);
}

int64_t UPNPDevice::delete_port_mapping(const int64_t port, const String proto) const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("UPNPDevice", "delete_port_mapping");
	}
	return ___godot_icall_int_int_String(mb, (const Object *) this, port, proto);
}

void UPNPDevice::set_description_url(const String url) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("UPNPDevice", "set_description_url");
	}
	___godot_icall_void_String(mb, (const Object *) this, url);
}

String UPNPDevice::get_description_url() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("UPNPDevice", "get_description_url");
	}
	return ___godot_icall_String(mb, (const Object *) this);
}

void UPNPDevice::set_service_type(const String type) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("UPNPDevice", "set_service_type");
	}
	___godot_icall_void_String(mb, (const Object *) this, type);
}

String UPNPDevice::get_service_type() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("UPNPDevice", "get_service_type");
	}
	return ___godot_icall_String(mb, (const Object *) this);
}

void UPNPDevice::set_igd_control_url(const String url) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("UPNPDevice", "set_igd_control_url");
	}
	___godot_icall_void_String(mb, (const Object *) this, url);
}

String UPNPDevice::get_igd_control_url() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("UPNPDevice", "get_igd_control_url");
	}
	return ___godot_icall_String(mb, (const Object *) this);
}

void UPNPDevice::set_igd_service_type(const String type) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("UPNPDevice", "set_igd_service_type");
	}
	___godot_icall_void_String(mb, (const Object *) this, type);
}

String UPNPDevice::get_igd_service_type() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("UPNPDevice", "get_igd_service_type");
	}
	return ___godot_icall_String(mb, (const Object *) this);
}

void UPNPDevice::set_igd_our_addr(const String addr) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("UPNPDevice", "set_igd_our_addr");
	}
	___godot_icall_void_String(mb, (const Object *) this, addr);
}

String UPNPDevice::get_igd_our_addr() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("UPNPDevice", "get_igd_our_addr");
	}
	return ___godot_icall_String(mb, (const Object *) this);
}

void UPNPDevice::set_igd_status(const int64_t status) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("UPNPDevice", "set_igd_status");
	}
	___godot_icall_void_int(mb, (const Object *) this, status);
}

UPNPDevice::IGDStatus UPNPDevice::get_igd_status() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("UPNPDevice", "get_igd_status");
	}
	return (UPNPDevice::IGDStatus) ___godot_icall_int(mb, (const Object *) this);
}

}