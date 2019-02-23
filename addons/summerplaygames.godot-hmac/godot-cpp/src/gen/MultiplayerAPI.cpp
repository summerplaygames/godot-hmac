#include "MultiplayerAPI.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"


#include "Object.hpp"
#include "NetworkedMultiplayerPeer.hpp"


namespace godot {


MultiplayerAPI *MultiplayerAPI::_new()
{
	return (MultiplayerAPI *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"MultiplayerAPI")());
}
void MultiplayerAPI::set_root_node(const Object *node) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("MultiplayerAPI", "set_root_node");
	}
	___godot_icall_void_Object(mb, (const Object *) this, node);
}

Error MultiplayerAPI::send_bytes(const PoolByteArray bytes, const int64_t id, const int64_t mode) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("MultiplayerAPI", "send_bytes");
	}
	return (Error) ___godot_icall_int_PoolByteArray_int_int(mb, (const Object *) this, bytes, id, mode);
}

bool MultiplayerAPI::has_network_peer() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("MultiplayerAPI", "has_network_peer");
	}
	return ___godot_icall_bool(mb, (const Object *) this);
}

Ref<NetworkedMultiplayerPeer> MultiplayerAPI::get_network_peer() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("MultiplayerAPI", "get_network_peer");
	}
	return Ref<NetworkedMultiplayerPeer>::__internal_constructor(___godot_icall_Object(mb, (const Object *) this));
}

int64_t MultiplayerAPI::get_network_unique_id() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("MultiplayerAPI", "get_network_unique_id");
	}
	return ___godot_icall_int(mb, (const Object *) this);
}

bool MultiplayerAPI::is_network_server() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("MultiplayerAPI", "is_network_server");
	}
	return ___godot_icall_bool(mb, (const Object *) this);
}

int64_t MultiplayerAPI::get_rpc_sender_id() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("MultiplayerAPI", "get_rpc_sender_id");
	}
	return ___godot_icall_int(mb, (const Object *) this);
}

void MultiplayerAPI::_add_peer(const int64_t id) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("MultiplayerAPI", "_add_peer");
	}
	___godot_icall_void_int(mb, (const Object *) this, id);
}

void MultiplayerAPI::_del_peer(const int64_t id) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("MultiplayerAPI", "_del_peer");
	}
	___godot_icall_void_int(mb, (const Object *) this, id);
}

void MultiplayerAPI::set_network_peer(const Ref<NetworkedMultiplayerPeer> peer) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("MultiplayerAPI", "set_network_peer");
	}
	___godot_icall_void_Object(mb, (const Object *) this, peer.ptr());
}

void MultiplayerAPI::poll() {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("MultiplayerAPI", "poll");
	}
	___godot_icall_void(mb, (const Object *) this);
}

void MultiplayerAPI::clear() {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("MultiplayerAPI", "clear");
	}
	___godot_icall_void(mb, (const Object *) this);
}

void MultiplayerAPI::_connected_to_server() {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("MultiplayerAPI", "_connected_to_server");
	}
	___godot_icall_void(mb, (const Object *) this);
}

void MultiplayerAPI::_connection_failed() {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("MultiplayerAPI", "_connection_failed");
	}
	___godot_icall_void(mb, (const Object *) this);
}

void MultiplayerAPI::_server_disconnected() {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("MultiplayerAPI", "_server_disconnected");
	}
	___godot_icall_void(mb, (const Object *) this);
}

PoolIntArray MultiplayerAPI::get_network_connected_peers() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("MultiplayerAPI", "get_network_connected_peers");
	}
	return ___godot_icall_PoolIntArray(mb, (const Object *) this);
}

void MultiplayerAPI::set_refuse_new_network_connections(const bool refuse) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("MultiplayerAPI", "set_refuse_new_network_connections");
	}
	___godot_icall_void_bool(mb, (const Object *) this, refuse);
}

bool MultiplayerAPI::is_refusing_new_network_connections() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("MultiplayerAPI", "is_refusing_new_network_connections");
	}
	return ___godot_icall_bool(mb, (const Object *) this);
}

}