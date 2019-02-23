#include "NetworkedMultiplayerENet.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


NetworkedMultiplayerENet *NetworkedMultiplayerENet::_new()
{
	return (NetworkedMultiplayerENet *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"NetworkedMultiplayerENet")());
}
Error NetworkedMultiplayerENet::create_server(const int64_t port, const int64_t max_clients, const int64_t in_bandwidth, const int64_t out_bandwidth) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("NetworkedMultiplayerENet", "create_server");
	}
	return (Error) ___godot_icall_int_int_int_int_int(mb, (const Object *) this, port, max_clients, in_bandwidth, out_bandwidth);
}

Error NetworkedMultiplayerENet::create_client(const String address, const int64_t port, const int64_t in_bandwidth, const int64_t out_bandwidth, const int64_t client_port) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("NetworkedMultiplayerENet", "create_client");
	}
	return (Error) ___godot_icall_int_String_int_int_int_int(mb, (const Object *) this, address, port, in_bandwidth, out_bandwidth, client_port);
}

void NetworkedMultiplayerENet::close_connection(const int64_t wait_usec) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("NetworkedMultiplayerENet", "close_connection");
	}
	___godot_icall_void_int(mb, (const Object *) this, wait_usec);
}

void NetworkedMultiplayerENet::disconnect_peer(const int64_t id, const bool now) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("NetworkedMultiplayerENet", "disconnect_peer");
	}
	___godot_icall_void_int_bool(mb, (const Object *) this, id, now);
}

void NetworkedMultiplayerENet::set_compression_mode(const int64_t mode) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("NetworkedMultiplayerENet", "set_compression_mode");
	}
	___godot_icall_void_int(mb, (const Object *) this, mode);
}

NetworkedMultiplayerENet::CompressionMode NetworkedMultiplayerENet::get_compression_mode() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("NetworkedMultiplayerENet", "get_compression_mode");
	}
	return (NetworkedMultiplayerENet::CompressionMode) ___godot_icall_int(mb, (const Object *) this);
}

void NetworkedMultiplayerENet::set_bind_ip(const String ip) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("NetworkedMultiplayerENet", "set_bind_ip");
	}
	___godot_icall_void_String(mb, (const Object *) this, ip);
}

String NetworkedMultiplayerENet::get_peer_address(const int64_t id) const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("NetworkedMultiplayerENet", "get_peer_address");
	}
	return ___godot_icall_String_int(mb, (const Object *) this, id);
}

int64_t NetworkedMultiplayerENet::get_peer_port(const int64_t id) const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("NetworkedMultiplayerENet", "get_peer_port");
	}
	return ___godot_icall_int_int(mb, (const Object *) this, id);
}

int64_t NetworkedMultiplayerENet::get_packet_channel() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("NetworkedMultiplayerENet", "get_packet_channel");
	}
	return ___godot_icall_int(mb, (const Object *) this);
}

int64_t NetworkedMultiplayerENet::get_last_packet_channel() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("NetworkedMultiplayerENet", "get_last_packet_channel");
	}
	return ___godot_icall_int(mb, (const Object *) this);
}

void NetworkedMultiplayerENet::set_transfer_channel(const int64_t channel) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("NetworkedMultiplayerENet", "set_transfer_channel");
	}
	___godot_icall_void_int(mb, (const Object *) this, channel);
}

int64_t NetworkedMultiplayerENet::get_transfer_channel() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("NetworkedMultiplayerENet", "get_transfer_channel");
	}
	return ___godot_icall_int(mb, (const Object *) this);
}

void NetworkedMultiplayerENet::set_channel_count(const int64_t channels) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("NetworkedMultiplayerENet", "set_channel_count");
	}
	___godot_icall_void_int(mb, (const Object *) this, channels);
}

int64_t NetworkedMultiplayerENet::get_channel_count() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("NetworkedMultiplayerENet", "get_channel_count");
	}
	return ___godot_icall_int(mb, (const Object *) this);
}

void NetworkedMultiplayerENet::set_always_ordered(const bool ordered) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("NetworkedMultiplayerENet", "set_always_ordered");
	}
	___godot_icall_void_bool(mb, (const Object *) this, ordered);
}

bool NetworkedMultiplayerENet::is_always_ordered() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("NetworkedMultiplayerENet", "is_always_ordered");
	}
	return ___godot_icall_bool(mb, (const Object *) this);
}

}