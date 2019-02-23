#ifndef GODOT_CPP_MULTIPLAYERAPI_HPP
#define GODOT_CPP_MULTIPLAYERAPI_HPP


#include <gdnative_api_struct.gen.h>
#include <stdint.h>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include "Reference.hpp"
namespace godot {

class Object;
class NetworkedMultiplayerPeer;

class MultiplayerAPI : public Reference {
public:

	static inline const char *___get_class_name() { return (const char *) "MultiplayerAPI"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum RPCMode {
		RPC_MODE_DISABLED = 0,
		RPC_MODE_REMOTE = 1,
		RPC_MODE_MASTER = 2,
		RPC_MODE_PUPPET = 3,
		RPC_MODE_SLAVE = 3,
		RPC_MODE_REMOTESYNC = 4,
		RPC_MODE_SYNC = 4,
		RPC_MODE_MASTERSYNC = 5,
		RPC_MODE_PUPPETSYNC = 6,
	};

	// constants


	static MultiplayerAPI *_new();

	// methods
	void set_root_node(const Object *node);
	Error send_bytes(const PoolByteArray bytes, const int64_t id = 0, const int64_t mode = 2);
	bool has_network_peer() const;
	Ref<NetworkedMultiplayerPeer> get_network_peer() const;
	int64_t get_network_unique_id() const;
	bool is_network_server() const;
	int64_t get_rpc_sender_id() const;
	void _add_peer(const int64_t id);
	void _del_peer(const int64_t id);
	void set_network_peer(const Ref<NetworkedMultiplayerPeer> peer);
	void poll();
	void clear();
	void _connected_to_server();
	void _connection_failed();
	void _server_disconnected();
	PoolIntArray get_network_connected_peers() const;
	void set_refuse_new_network_connections(const bool refuse);
	bool is_refusing_new_network_connections() const;

};

}

#endif