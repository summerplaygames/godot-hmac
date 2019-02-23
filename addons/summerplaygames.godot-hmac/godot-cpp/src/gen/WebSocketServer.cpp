#include "WebSocketServer.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


WebSocketServer *WebSocketServer::_new()
{
	return (WebSocketServer *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"WebSocketServer")());
}
bool WebSocketServer::is_listening() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("WebSocketServer", "is_listening");
	}
	return ___godot_icall_bool(mb, (const Object *) this);
}

Error WebSocketServer::listen(const int64_t port, const PoolStringArray protocols, const bool gd_mp_api) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("WebSocketServer", "listen");
	}
	return (Error) ___godot_icall_int_int_PoolStringArray_bool(mb, (const Object *) this, port, protocols, gd_mp_api);
}

void WebSocketServer::stop() {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("WebSocketServer", "stop");
	}
	___godot_icall_void(mb, (const Object *) this);
}

bool WebSocketServer::has_peer(const int64_t id) const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("WebSocketServer", "has_peer");
	}
	return ___godot_icall_bool_int(mb, (const Object *) this, id);
}

String WebSocketServer::get_peer_address(const int64_t id) const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("WebSocketServer", "get_peer_address");
	}
	return ___godot_icall_String_int(mb, (const Object *) this, id);
}

int64_t WebSocketServer::get_peer_port(const int64_t id) const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("WebSocketServer", "get_peer_port");
	}
	return ___godot_icall_int_int(mb, (const Object *) this, id);
}

void WebSocketServer::disconnect_peer(const int64_t id, const int64_t code, const String reason) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("WebSocketServer", "disconnect_peer");
	}
	___godot_icall_void_int_int_String(mb, (const Object *) this, id, code, reason);
}

}