#include "UPNP.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"


#include "UPNPDevice.hpp"


namespace godot {


UPNP *UPNP::_new()
{
	return (UPNP *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"UPNP")());
}
int64_t UPNP::get_device_count() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("UPNP", "get_device_count");
	}
	return ___godot_icall_int(mb, (const Object *) this);
}

Ref<UPNPDevice> UPNP::get_device(const int64_t index) const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("UPNP", "get_device");
	}
	return Ref<UPNPDevice>::__internal_constructor(___godot_icall_Object_int(mb, (const Object *) this, index));
}

void UPNP::add_device(const Ref<UPNPDevice> device) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("UPNP", "add_device");
	}
	___godot_icall_void_Object(mb, (const Object *) this, device.ptr());
}

void UPNP::set_device(const int64_t index, const Ref<UPNPDevice> device) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("UPNP", "set_device");
	}
	___godot_icall_void_int_Object(mb, (const Object *) this, index, device.ptr());
}

void UPNP::remove_device(const int64_t index) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("UPNP", "remove_device");
	}
	___godot_icall_void_int(mb, (const Object *) this, index);
}

void UPNP::clear_devices() {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("UPNP", "clear_devices");
	}
	___godot_icall_void(mb, (const Object *) this);
}

Ref<UPNPDevice> UPNP::get_gateway() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("UPNP", "get_gateway");
	}
	return Ref<UPNPDevice>::__internal_constructor(___godot_icall_Object(mb, (const Object *) this));
}

int64_t UPNP::discover(const int64_t timeout, const int64_t ttl, const String device_filter) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("UPNP", "discover");
	}
	return ___godot_icall_int_int_int_String(mb, (const Object *) this, timeout, ttl, device_filter);
}

String UPNP::query_external_address() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("UPNP", "query_external_address");
	}
	return ___godot_icall_String(mb, (const Object *) this);
}

int64_t UPNP::add_port_mapping(const int64_t port, const int64_t port_internal, const String desc, const String proto, const int64_t duration) const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("UPNP", "add_port_mapping");
	}
	return ___godot_icall_int_int_int_String_String_int(mb, (const Object *) this, port, port_internal, desc, proto, duration);
}

int64_t UPNP::delete_port_mapping(const int64_t port, const String proto) const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("UPNP", "delete_port_mapping");
	}
	return ___godot_icall_int_int_String(mb, (const Object *) this, port, proto);
}

void UPNP::set_discover_multicast_if(const String m_if) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("UPNP", "set_discover_multicast_if");
	}
	___godot_icall_void_String(mb, (const Object *) this, m_if);
}

String UPNP::get_discover_multicast_if() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("UPNP", "get_discover_multicast_if");
	}
	return ___godot_icall_String(mb, (const Object *) this);
}

void UPNP::set_discover_local_port(const int64_t port) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("UPNP", "set_discover_local_port");
	}
	___godot_icall_void_int(mb, (const Object *) this, port);
}

int64_t UPNP::get_discover_local_port() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("UPNP", "get_discover_local_port");
	}
	return ___godot_icall_int(mb, (const Object *) this);
}

void UPNP::set_discover_ipv6(const bool ipv6) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("UPNP", "set_discover_ipv6");
	}
	___godot_icall_void_bool(mb, (const Object *) this, ipv6);
}

bool UPNP::is_discover_ipv6() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("UPNP", "is_discover_ipv6");
	}
	return ___godot_icall_bool(mb, (const Object *) this);
}

}