#include "StreamPeerSSL.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"


#include "StreamPeer.hpp"


namespace godot {


StreamPeerSSL *StreamPeerSSL::_new()
{
	return (StreamPeerSSL *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"StreamPeerSSL")());
}
void StreamPeerSSL::poll() {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("StreamPeerSSL", "poll");
	}
	___godot_icall_void(mb, (const Object *) this);
}

Error StreamPeerSSL::accept_stream(const Ref<StreamPeer> base) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("StreamPeerSSL", "accept_stream");
	}
	return (Error) ___godot_icall_int_Object(mb, (const Object *) this, base.ptr());
}

Error StreamPeerSSL::connect_to_stream(const Ref<StreamPeer> stream, const bool validate_certs, const String for_hostname) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("StreamPeerSSL", "connect_to_stream");
	}
	return (Error) ___godot_icall_int_Object_bool_String(mb, (const Object *) this, stream.ptr(), validate_certs, for_hostname);
}

StreamPeerSSL::Status StreamPeerSSL::get_status() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("StreamPeerSSL", "get_status");
	}
	return (StreamPeerSSL::Status) ___godot_icall_int(mb, (const Object *) this);
}

void StreamPeerSSL::disconnect_from_stream() {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("StreamPeerSSL", "disconnect_from_stream");
	}
	___godot_icall_void(mb, (const Object *) this);
}

void StreamPeerSSL::set_blocking_handshake_enabled(const bool enabled) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("StreamPeerSSL", "set_blocking_handshake_enabled");
	}
	___godot_icall_void_bool(mb, (const Object *) this, enabled);
}

bool StreamPeerSSL::is_blocking_handshake_enabled() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("StreamPeerSSL", "is_blocking_handshake_enabled");
	}
	return ___godot_icall_bool(mb, (const Object *) this);
}

}